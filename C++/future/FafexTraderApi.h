/////////////////////////////////////////////////////////////////////////
///@file FafexTraderApi.h
///@brief �����˽��׿ͻ���API�ӿ�
/////////////////////////////////////////////////////////////////////////

#ifndef FAFEX_TRADERAPI_H
#define FAFEX_TRADERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FafexApiStruct.h"

#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_FAFEX_TRADER_API_EXPORT
#define FAFEX_TRADER_API_EXPORT __declspec(dllexport)
#else
#define FAFEX_TRADER_API_EXPORT __declspec(dllimport)
#endif
#else
#define FAFEX_TRADER_API_EXPORT 
#endif

class CFafexTraderSpi
{
public:
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected(){};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	virtual void OnFrontDisconnected(int nReason){};
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	
	///���Ļص���ʼ֪ͨ����API�յ�һ�����ĺ����ȵ��ñ�������Ȼ���Ǹ�������Ļص�������Ǳ��Ļص�����֪ͨ��
	///@param nTopicID ������루��˽�������û��������������������ȣ�
	///@param nSequenceNo �������
	virtual void OnPackageStart(int nTopicID, int nSequenceNo){};
	
	///���Ļص�����֪ͨ����API�յ�һ�����ĺ����ȵ��ñ��Ļص���ʼ֪ͨ��Ȼ���Ǹ�������Ļص��������ñ�������
	///@param nTopicID ������루��˽�������û��������������������ȣ�
	///@param nSequenceNo �������
	virtual void OnPackageEnd(int nTopicID, int nSequenceNo){};
	

	///����Ӧ��
	virtual void OnRspError(CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�û���¼Ӧ��
	virtual void OnRspUserLogin(CFafexRspUserLoginField *pRspUserLogin, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�û��˳�Ӧ��
	virtual void OnRspUserLogout(CFafexRspUserLogoutField *pRspUserLogout, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����¼��Ӧ��
	virtual void OnRspOrderInsert(CFafexInputOrderField *pInputOrder, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������Ӧ��
	virtual void OnRspOrderAction(CFafexOrderActionField *pOrderAction, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��������Ӧ��
	virtual void OnRspSubscribeTopic(CFafexDisseminationField *pDissemination, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Ա�ʽ��ѯӦ��
	virtual void OnRspQryPartAccount(CFafexRspPartAccountField *pRspPartAccount, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///������ѯӦ��
	virtual void OnRspQryOrder(CFafexOrderField *pOrder, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ɽ�����ѯӦ��
	virtual void OnRspQryTrade(CFafexTradeField *pTrade, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Ա�ͻ���ѯӦ��
	virtual void OnRspQryClient(CFafexRspClientField *pRspClient, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ͻ��ֲֲ�ѯӦ��
	virtual void OnRspQryClientPosition(CFafexRspClientPositionField *pRspClientPosition, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Լ��ѯӦ��
	virtual void OnRspQryInstrument(CFafexRspInstrumentField *pRspInstrument, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Լ����״̬��ѯӦ��
	virtual void OnRspQryInstrumentStatus(CFafexInstrumentStatusField *pInstrumentStatus, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ͨ�����ѯӦ��
	virtual void OnRspQryMarketData(CFafexMarketDataField *pMarketData, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����������ѯ����Ӧ��
	virtual void OnRspQryBulletin(CFafexBulletinField *pBulletin, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�����ѯӦ��
	virtual void OnRspQryTopic(CFafexDisseminationField *pDissemination, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�ɽ��ر�
	virtual void OnRtnTrade(CFafexTradeField *pTrade) {};

	///�����ر�
	virtual void OnRtnOrder(CFafexOrderField *pOrder) {};

	///��Լ����״̬֪ͨ
	virtual void OnRtnInstrumentStatus(CFafexInstrumentStatusField *pInstrumentStatus) {};

	///���Ӻ�Լ֪ͨ
	virtual void OnRtnInsInstrument(CFafexInstrumentField *pInstrument) {};

	///ɾ����Լ֪ͨ
	virtual void OnRtnDelInstrument(CFafexInstrumentField *pInstrument) {};

	///�ͻ��ֲ�֪ͨ
	virtual void OnRtnClientPosition(CFafexClientPositionField *pClientPosition) {};

	///����������֪ͨ
	virtual void OnRtnFlowMessageCancel(CFafexFlowMessageCancelField *pFlowMessageCancel) {};

	///����֪ͨ
	virtual void OnRtnBulletin(CFafexBulletinField *pBulletin) {};

	///����¼�����ر�
	virtual void OnErrRtnOrderInsert(CFafexInputOrderField *pInputOrder, CFafexRspInfoField *pRspInfo) {};

	///������������ر�
	virtual void OnErrRtnOrderAction(CFafexOrderActionField *pOrderAction, CFafexRspInfoField *pRspInfo) {};

	///�ͻ������Ѳ�ѯӦ��
	virtual void OnRspQryPartClientFee(CFafexPartClientFeeField *pPartClientFee, CFafexRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

class FAFEX_TRADER_API_EXPORT CFafexTraderApi
{
public:
	///����TraderApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@return ��������TraderApi
	static CFafexTraderApi *CreateTraderApi(const char *pszFlowPath = "");
	
	///��ȡϵͳ�汾��
	///@param nMajorVersion ���汾��
	///@param nMinorVersion �Ӱ汾��
	///@return ϵͳ��ʶ�ַ���
	static const char *GetVersion();
	
	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void Release() = 0;
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual void Init() = 0;
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int Join() = 0;
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	virtual const char *GetTradingDay() = 0;
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	///ע�����ַ����������ַ
	///@param pszNsAddress�����ַ����������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
	///@remark RegisterFront������RegisterNameServer
	virtual void RegisterNameServer(char *pszNsAddress) = 0;
	
	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CFafexTraderSpi *pSpi) = 0;
	
	///����֤��
	///@param pszCertFileName �û�֤���ļ���
	///@param pszKeyFileName �û�˽Կ�ļ���
	///@param pszCaFileName ������CA֤���ļ���
	///@param pszKeyFilePassword �û�˽Կ�ļ�����
	///@return 0 �����ɹ�
	///@return -1 ������CA֤������ʧ��
	///@return -2 �û�֤������ʧ��
	///@return -3 �û�˽Կ����ʧ��	
	///@return -4 �û�֤��У��ʧ��
	virtual int RegisterCertificateFile(const char *pszCertFileName, const char *pszKeyFileName, 
		const char *pszCaFileName, const char *pszKeyFilePassword) = 0;

	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        FAFEX_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        FAFEX_TERT_RESUME:���ϴ��յ�������
	///        FAFEX_TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	virtual void SubscribePrivateTopic(FAFEX_TE_RESUME_TYPE nResumeType) = 0;
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        FAFEX_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        FAFEX_TERT_RESUME:���ϴ��յ�������
	///        FAFEX_TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	virtual void SubscribePublicTopic(FAFEX_TE_RESUME_TYPE nResumeType) = 0;

	///���Ľ���Ա����
	///@param nResumeType ����Ա���ش���ʽ  
	///        FAFEX_TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        FAFEX_TERT_RESUME:���ϴ��յ�������
	///        FAFEX_TERT_QUICK:ֻ���͵�¼����Ա��������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�����Ա�������ݡ�
	virtual void SubscribeUserTopic(FAFEX_TE_RESUME_TYPE nResumeType) = 0;
	
	///����������ʱʱ�䡣
	///@param timeout ������ʱʱ��(��)  
	virtual void SetHeartbeatTimeout(unsigned int timeout) = 0;
	
	///��������־�ļ�
	///@param pszReqLogFileName ������־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	virtual int OpenRequestLog(const char *pszReqLogFileName) = 0;

	///��Ӧ����־�ļ�
	///@param pszRspLogFileName Ӧ����־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	virtual int OpenResponseLog(const char *pszRspLogFileName) = 0;


	///�û���¼����
	virtual int ReqUserLogin(CFafexReqUserLoginField *pReqUserLogin, int nRequestID) = 0;

	///�û��˳�����
	virtual int ReqUserLogout(CFafexReqUserLogoutField *pReqUserLogout, int nRequestID) = 0;

	///����¼������
	virtual int ReqOrderInsert(CFafexInputOrderField *pInputOrder, int nRequestID) = 0;

	///������������
	virtual int ReqOrderAction(CFafexOrderActionField *pOrderAction, int nRequestID) = 0;

	///������������
	virtual int ReqSubscribeTopic(CFafexDisseminationField *pDissemination, int nRequestID) = 0;

	///��Ա�ʽ��ѯ����
	virtual int ReqQryPartAccount(CFafexQryPartAccountField *pQryPartAccount, int nRequestID) = 0;

	///������ѯ����
	virtual int ReqQryOrder(CFafexQryOrderField *pQryOrder, int nRequestID) = 0;

	///�ɽ�����ѯ����
	virtual int ReqQryTrade(CFafexQryTradeField *pQryTrade, int nRequestID) = 0;

	///��Ա�ͻ���ѯ����
	virtual int ReqQryClient(CFafexQryClientField *pQryClient, int nRequestID) = 0;

	///�ͻ��ֲֲ�ѯ����
	virtual int ReqQryClientPosition(CFafexQryClientPositionField *pQryClientPosition, int nRequestID) = 0;

	///��Լ��ѯ����
	virtual int ReqQryInstrument(CFafexQryInstrumentField *pQryInstrument, int nRequestID) = 0;

	///��Լ����״̬��ѯ����
	virtual int ReqQryInstrumentStatus(CFafexQryInstrumentStatusField *pQryInstrumentStatus, int nRequestID) = 0;

	///��ͨ�����ѯ����
	virtual int ReqQryMarketData(CFafexQryMarketDataField *pQryMarketData, int nRequestID) = 0;

	///�����������ѯ����
	virtual int ReqQryBulletin(CFafexQryBulletinField *pQryBulletin, int nRequestID) = 0;

	///�����ѯ����
	virtual int ReqQryTopic(CFafexDisseminationField *pDissemination, int nRequestID) = 0;

	///�ͻ������Ѳ�ѯ
	virtual int ReqQryPartClientFee(CFafexQryPartClientFeeField *pQryPartClientFee, int nRequestID) = 0;
protected:
	~CFafexTraderApi(){};
};

#endif
