/////////////////////////////////////////////////////////////////////////
///@file FasexMarketApi.h
///@brief 定义了行情客户端API接口
/////////////////////////////////////////////////////////////////////////

#ifndef FASEX_MARKETAPI_H
#define FASEX_MARKETAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FasexApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_FASEX_MARKET_API_EXPORT
#define FASEX_MARKET_API_EXPORT __declspec(dllexport)
#else
#define FASEX_MARKET_API_EXPORT __declspec(dllimport)
#endif
#else
#define FASEX_MARKET_API_EXPORT 
#endif

class CFasexMarketSpi
{
public:
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	virtual void OnFrontConnected(){};
	
	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	virtual void OnFrontDisconnected(int nReason){};
		
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///报文回调开始通知。当API收到一个报文后，首先调用本方法，然后是各数据域的回调，最后是报文回调结束通知。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	virtual void OnPackageStart(int nTopicID, int nSequenceNo){};
	
	///报文回调结束通知。当API收到一个报文后，首先调用报文回调开始通知，然后是各数据域的回调，最后调用本方法。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	virtual void OnPackageEnd(int nTopicID, int nSequenceNo){};


	///错误应答
	virtual void OnRspError(CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///用户登录应答
	virtual void OnRspUserLogin(CFasexRspUserLoginField *pRspUserLogin, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///用户退出应答
	virtual void OnRspUserLogout(CFasexRspUserLogoutField *pRspUserLogout, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///订阅主题应答
	virtual void OnRspSubscribeTopic(CFasexDisseminationField *pDissemination, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///合约查询应答
	virtual void OnRspQryInstrument(CFasexRspInstrumentField *pRspInstrument, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///合约交易状态查询应答
	virtual void OnRspQryInstrumentStatus(CFasexInstrumentStatusField *pInstrumentStatus, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///主题查询应答
	virtual void OnRspQryTopic(CFasexDisseminationField *pDissemination, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///合约交易状态通知
	virtual void OnRtnInstrumentStatus(CFasexInstrumentStatusField *pInstrumentStatus) {};

	///深度行情通知
	virtual void OnRtnDepthMarketData(CFasexDepthMarketDataField *pDepthMarketData) {};

	///行情服务器时间应答
	virtual void OnRspMarketTime(CFasexMarketDateTimeField *pMarketDateTime, CFasexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

class FASEX_MARKET_API_EXPORT  CFasexMarketApi
{
public:
	///创建MduserApi
	///@param pszFlowPath 存贮订阅信息文件的目录，默认为当前目录
	///@return 创建出的UserApi
	static CFasexMarketApi *CreateMarketApi(const char *pszFlowPath = "");
	
	///获取系统版本号
	///@param nMajorVersion 主版本号
	///@param nMinorVersion 子版本号
	///@return 系统标识字符串
	static const char *GetVersion();
	
	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
	virtual void Release() = 0;
	
	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	virtual void Init() = 0;
	
	///等待接口线程结束运行
	///@return 线程退出代码
	virtual int Join() = 0;
	
	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	virtual const char *GetTradingDay() = 0;
	
	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	///注册名字服务器网络地址
	///@param pszNsAddress：名字服务器网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
	///@remark RegisterFront优先于RegisterNameServer
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	
	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	virtual void RegisterSpi(CFasexMarketSpi *pSpi) = 0;
	
	///加载证书
	///@param pszCertFileName 用户证书文件名
	///@param pszKeyFileName 用户私钥文件名
	///@param pszCaFileName 可信任CA证书文件名
	///@param pszKeyFilePassword 用户私钥文件密码
	///@return 0 操作成功
	///@return -1 可信任CA证书载入失败
	///@return -2 用户证书载入失败
	///@return -3 用户私钥载入失败	
	///@return -4 用户证书校验失败
	virtual int RegisterCertificateFile(const char *pszCertFileName, const char *pszKeyFileName, 
		const char *pszCaFileName, const char *pszKeyFilePassword) = 0;

	///订阅市场行情。
	///@param nTopicID 市场行情主题  
	///@param nResumeType 市场行情重传方式  
	///        FASEX_TERT_RESTART:从本交易日开始重传
	///        FASEX_TERT_RESUME:从上次收到的续传
	///        FASEX_TERT_QUICK:先传送当前行情快照,再传送登录后市场行情的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	virtual void SubscribeMarketDataTopic(int nTopicID, FASEX_TE_RESUME_TYPE nResumeType) = 0;

	///设置心跳超时时间。
	///@param timeout 心跳超时时间(秒)  
	virtual void SetHeartbeatTimeout(unsigned int timeout) = 0;


	///用户登录请求
	virtual int ReqUserLogin(CFasexReqUserLoginField *pReqUserLogin, int nRequestID) = 0;

	///用户退出请求
	virtual int ReqUserLogout(CFasexReqUserLogoutField *pReqUserLogout, int nRequestID) = 0;

	///订阅主题请求
	virtual int ReqSubscribeTopic(CFasexDisseminationField *pDissemination, int nRequestID) = 0;

	///合约查询请求
	virtual int ReqQryInstrument(CFasexQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///合约交易状态查询请求
	virtual int ReqQryInstrumentStatus(CFasexQryInstrumentStatusField *pQryInstrumentStatus, int nRequestID) = 0;

	///主题查询请求
	virtual int ReqQryTopic(CFasexDisseminationField *pDissemination, int nRequestID) = 0;

	///行情服务器时间请求
	virtual int ReqMarketTime(CFasexMarketDateTimeField *pMarketDateTime, int nRequestID) = 0;
protected:
	~CFasexMarketApi(){};
};

#endif
