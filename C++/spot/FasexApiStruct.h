/////////////////////////////////////////////////////////////////////////
///@file FasexApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
/////////////////////////////////////////////////////////////////////////

#if !defined(Fasex_STRUCT_H)
#define Fasex_STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FasexApiDataType.h"

///信息分发
struct CFasexDisseminationField
{
	///序列系列号
	TFasexSequenceSeriesType	SequenceSeries;
	///序列号
	TFasexSequenceNoType	SequenceNo;
};
///响应信息
struct CFasexRspInfoField
{
	///错误代码
	TFasexErrorIDType	ErrorID;
	///错误信息
	TFasexErrorMsgType	ErrorMsg;
};
///通讯阶段
struct CFasexCommPhaseField
{
	///交易日
	TFasexDateType	TradingDay;
	///通讯时段号
	TFasexCommPhaseNoType	CommPhaseNo;
};
///交易所交易日
struct CFasexExchangeTradingDayField
{
	///交易日
	TFasexDateType	TradingDay;
	///交易所代码
	TFasexExchangeIDType	ExchangeID;
};
///结算会话
struct CFasexSettlementSessionField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
};
///当前时间
struct CFasexCurrentTimeField
{
	///当前日期
	TFasexDateType	CurrDate;
	///当前时间
	TFasexTimeType	CurrTime;
	///当前时间（毫秒）
	TFasexMillisecType	CurrMillisec;
};
///用户登录请求
struct CFasexReqUserLoginField
{
	///交易日
	TFasexDateType	TradingDay;
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///密码
	TFasexPasswordType	Password;
	///用户端产品信息
	TFasexProductInfoType	UserProductInfo;
	///接口端产品信息
	TFasexProductInfoType	InterfaceProductInfo;
	///协议信息
	TFasexProtocolInfoType	ProtocolInfo;
	///数据中心代码
	TFasexDataCenterIDType	DataCenterID;
};
///用户登录应答
struct CFasexRspUserLoginField
{
	///交易日
	TFasexDateType	TradingDay;
	///登录成功时间
	TFasexTimeType	LoginTime;
	///最大本地报单号
	TFasexOrderLocalIDType	MaxOrderLocalID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易系统名称
	TFasexTradingSystemNameType	TradingSystemName;
	///数据中心代码
	TFasexDataCenterIDType	DataCenterID;
	///会员私有流当前长度
	TFasexSequenceNoType	PrivateFlowSize;
	///交易员私有流当前长度
	TFasexSequenceNoType	UserFlowSize;
};
///用户登出请求
struct CFasexReqUserLogoutField
{
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
};
///用户登出应答
struct CFasexRspUserLogoutField
{
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
};
///输入报单
struct CFasexInputOrderField
{
	///报单编号
	TFasexOrderSysIDType	OrderSysID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///报单价格条件
	TFasexOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFasexDirectionType	Direction;
	///价格
	TFasexPriceType	LimitPrice;
	///数量
	TFasexVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFasexTimeConditionType	TimeCondition;
	///GTD日期
	TFasexDateType	GTDDate;
	///成交量类型
	TFasexVolumeConditionType	VolumeCondition;
	///最小成交量
	TFasexVolumeType	MinVolume;
	///触发条件
	TFasexContingentConditionType	ContingentCondition;
	///止损价
	TFasexPriceType	StopPrice;
	///本地报单编号
	TFasexOrderLocalIDType	OrderLocalID;
	///自动挂起标志
	TFasexBoolType	IsAutoSuspend;
	///业务单元
	TFasexBusinessUnitType	BusinessUnit;
};
///报单操作
struct CFasexOrderActionField
{
	///报单编号
	TFasexOrderSysIDType	OrderSysID;
	///本地报单编号
	TFasexOrderLocalIDType	OrderLocalID;
	///报单操作标志
	TFasexActionFlagType	ActionFlag;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///价格
	TFasexPriceType	LimitPrice;
	///数量变化
	TFasexVolumeType	VolumeChange;
	///操作本地编号
	TFasexOrderLocalIDType	ActionLocalID;
	///业务单元
	TFasexBusinessUnitType	BusinessUnit;
};
///OTC报单
struct CFasexOTCOrderField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///OTC报单编号
	TFasexOTCOrderSysIDType	OTCOrderSysID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///买卖方向
	TFasexDirectionType	Direction;
	///价格
	TFasexPriceType	Price;
	///数量
	TFasexVolumeType	Volume;
	///对手方会员代码
	TFasexParticipantIDType	OtherParticipantID;
	///对手方客户代码
	TFasexClientIDType	OtherClientID;
	///对手方交易用户代码
	TFasexUserIDType	OtherUserID;
	///本地OTC报单编号
	TFasexOrderLocalIDType	OTCOrderLocalID;
	///OTC报单状态
	TFasexOTCOrderStatusType	OTCOrderStatus;
	///插入时间
	TFasexTimeType	InsertTime;
	///撤销时间
	TFasexTimeType	CancelTime;
};
///用户登录退出
struct CFasexUserLogoutField
{
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
};
///用户口令修改
struct CFasexUserPasswordUpdateField
{
	///交易用户代码
	TFasexUserIDType	UserID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///旧密码
	TFasexPasswordType	OldPassword;
	///新密码
	TFasexPasswordType	NewPassword;
};
///强制用户退出
struct CFasexForceUserExitField
{
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易用户代码
	TFasexUserIDType	UserID;
};
///导出内存表
struct CFasexDumpMemTableField
{
	///内存表名称
	TFasexTableNameType	TableName;
};
///资金账户出入金
struct CFasexAccountDepositField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///出入金本地号
	TFasexOrderLocalIDType	DepositLocalID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易角色
	TFasexTradingRoleType	TradingRole;
	///资金账号
	TFasexAccountIDType	AccountID;
	///出入金金额
	TFasexMoneyType	Deposit;
	///全局出入金流水序号
	TFasexSequenceNoType	DepositNo;
	///币种
	TFasexCurrencyType	Currency;
	///资金操作类型
	TFasexAccountActionTypeType	ActionType;
	///备注
	TFasexComeFromType	Comments;
};
///出入金
struct CFasexAccountDepositDetailField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///出入金本地号
	TFasexOrderLocalIDType	DepositLocalID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易角色
	TFasexTradingRoleType	TradingRole;
	///资金账号
	TFasexAccountIDType	AccountID;
	///出入金金额
	TFasexMoneyType	Deposit;
	///全局出入金流水序号
	TFasexSequenceNoType	DepositNo;
	///币种
	TFasexCurrencyType	Currency;
	///资金操作类型
	TFasexAccountActionTypeType	ActionType;
	///备注
	TFasexComeFromType	Comments;
	///处理结果
	TFasexTransStatusType	Status;
	///交易日
	TFasexDateType	TradingDay;
	///插入时间
	TFasexTimeType	InsertTime;
};
///实时上场
struct CFasexTBCommandDetailField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///DB命令本地号
	TFasexOrderLocalIDType	CommandLocalID;
	///全局DB命令序号
	TFasexSequenceNoType	CommandNo;
	///DB命令类型
	TFasexCommandTypeType	CommandType;
	///字段名
	TFasexFieldNameType	FieldName;
	///字段内容
	TFasexFieldContentType	FieldContent;
	///备注
	TFasexComeFromType	Comments;
	///处理结果
	TFasexTransStatusType	Status;
	///插入时间
	TFasexTimeType	InsertTime;
};
///手续费
struct CFasexPartClientFeeField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户号
	TFasexClientIDType	ClientID;
	///合约的编号
	TFasexInstrumentIDType	InstrumentID;
	///成交角色
	TFasexMatchRoleType	MatchRole;
	///手续费按比例
	TFasexRatioType	FeeRate;
	///手续费按手数
	TFasexRatioType	FeeAmt;
};
///会员
struct CFasexParticipantField
{
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///会员名称
	TFasexParticipantNameType	ParticipantName;
	///会员简称
	TFasexParticipantAbbrType	ParticipantAbbr;
	///会员类型
	TFasexMemberTypeType	MemberType;
	///是否活跃
	TFasexBoolType	IsActive;
};
///用户
struct CFasexUserField
{
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易用户类型
	TFasexUserTypeType	UserType;
	///密码
	TFasexPasswordType	Password;
	///交易员权限
	TFasexUserActiveType	IsActive;
};
///客户
struct CFasexClientField
{
	///客户代码
	TFasexClientIDType	ClientID;
	///客户名称
	TFasexPartyNameType	ClientName;
	///证件类型
	TFasexIdCardTypeType	IdentifiedCardType;
	///证件号码
	TFasexIdentifiedCardNoType	IdentifiedCardNo;
	///交易角色
	TFasexTradingRoleType	TradingRole;
	///客户类型
	TFasexClientTypeType	ClientType;
	///是否活跃
	TFasexBoolType	IsActive;
};
///用户会话
struct CFasexUserSessionField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///前置编号
	TFasexFrontIDType	FrontID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易用户类型
	TFasexUserTypeType	UserType;
	///会话编号
	TFasexSessionIDType	SessionID;
	///登录时间
	TFasexTimeType	LoginTime;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///IP地址
	TFasexIPAddressType	IPAddress;
	///用户端产品信息
	TFasexProductInfoType	UserProductInfo;
	///接口端产品信息
	TFasexProductInfoType	InterfaceProductInfo;
	///协议信息
	TFasexProtocolInfoType	ProtocolInfo;
};
///产品组
struct CFasexProductGroupField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///产品组代码
	TFasexProductGroupIDType	ProductGroupID;
	///产品组名称
	TFasexProductGroupNameType	ProductGroupName;
	///商品代码
	TFasexCommodityIDType	CommodityID;
};
///产品
struct CFasexProductField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///产品代码
	TFasexProductIDType	ProductID;
	///产品组代码
	TFasexProductGroupIDType	ProductGroupID;
	///产品名称
	TFasexProductNameType	ProductName;
	///产品类型
	TFasexProductClassType	ProductClass;
};
///合约
struct CFasexInstrumentField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///交易对名称
	TFasexInstrumentNameType	InstrumentName;
	///当前是否交易
	TFasexBoolType	IsTrading;
	///产品代码
	TFasexProductIDType	ProductID;
	///产品组代码
	TFasexProductGroupIDType	ProductGroupID;
	///产品类型
	TFasexProductClassType	ProductClass;
	///交易对数量乘数
	TFasexVolumeMultipleType	VolumeMultiple;
};
///市场行情
struct CFasexMarketDataField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///最新价
	TFasexPriceType	LastPrice;
	///昨收盘
	TFasexPriceType	PreClosePrice;
	///今开盘
	TFasexPriceType	OpenPrice;
	///最高价
	TFasexPriceType	HighestPrice;
	///最低价
	TFasexPriceType	LowestPrice;
	///数量
	TFasexVolumeType	Volume;
	///成交金额
	TFasexMoneyType	Turnover;
	///今收盘
	TFasexPriceType	ClosePrice;
	///涨停板价
	TFasexPriceType	UpperLimitPrice;
	///跌停板价
	TFasexPriceType	LowerLimitPrice;
	///最后修改时间
	TFasexTimeType	UpdateTime;
	///最后修改毫秒
	TFasexMillisecType	UpdateMillisec;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
};
///深度市场行情
struct CFasexDepthMarketDataField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///最新价
	TFasexPriceType	LastPrice;
	///昨收盘
	TFasexPriceType	PreClosePrice;
	///今开盘
	TFasexPriceType	OpenPrice;
	///最高价
	TFasexPriceType	HighestPrice;
	///最低价
	TFasexPriceType	LowestPrice;
	///数量
	TFasexVolumeType	Volume;
	///成交金额
	TFasexMoneyType	Turnover;
	///今收盘
	TFasexPriceType	ClosePrice;
	///涨停板价
	TFasexPriceType	UpperLimitPrice;
	///跌停板价
	TFasexPriceType	LowerLimitPrice;
	///最后修改时间
	TFasexTimeType	UpdateTime;
	///最后修改毫秒
	TFasexMillisecType	UpdateMillisec;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///申买价一
	TFasexPriceType	BidPrice1;
	///申买量一
	TFasexVolumeType	BidVolume1;
	///申卖价一
	TFasexPriceType	AskPrice1;
	///申卖量一
	TFasexVolumeType	AskVolume1;
	///申买价二
	TFasexPriceType	BidPrice2;
	///申买量二
	TFasexVolumeType	BidVolume2;
	///申卖价二
	TFasexPriceType	AskPrice2;
	///申卖量二
	TFasexVolumeType	AskVolume2;
	///申买价三
	TFasexPriceType	BidPrice3;
	///申买量三
	TFasexVolumeType	BidVolume3;
	///申卖价三
	TFasexPriceType	AskPrice3;
	///申卖量三
	TFasexVolumeType	AskVolume3;
	///申买价四
	TFasexPriceType	BidPrice4;
	///申买量四
	TFasexVolumeType	BidVolume4;
	///申卖价四
	TFasexPriceType	AskPrice4;
	///申卖量四
	TFasexVolumeType	AskVolume4;
	///申买价五
	TFasexPriceType	BidPrice5;
	///申买量五
	TFasexVolumeType	BidVolume5;
	///申卖价五
	TFasexPriceType	AskPrice5;
	///申卖量五
	TFasexVolumeType	AskVolume5;
	///申买价六
	TFasexPriceType	BidPrice6;
	///申买量六
	TFasexVolumeType	BidVolume6;
	///申卖价六
	TFasexPriceType	AskPrice6;
	///申卖量六
	TFasexVolumeType	AskVolume6;
	///申买价七
	TFasexPriceType	BidPrice7;
	///申买量七
	TFasexVolumeType	BidVolume7;
	///申卖价七
	TFasexPriceType	AskPrice7;
	///申卖量七
	TFasexVolumeType	AskVolume7;
	///申买价八
	TFasexPriceType	BidPrice8;
	///申买量八
	TFasexVolumeType	BidVolume8;
	///申卖价八
	TFasexPriceType	AskPrice8;
	///申卖量八
	TFasexVolumeType	AskVolume8;
	///申买价九
	TFasexPriceType	BidPrice9;
	///申买量九
	TFasexVolumeType	BidVolume9;
	///申卖价九
	TFasexPriceType	AskPrice9;
	///申卖量九
	TFasexVolumeType	AskVolume9;
	///申买价十
	TFasexPriceType	BidPrice10;
	///申买量十
	TFasexVolumeType	BidVolume10;
	///申卖价十
	TFasexPriceType	AskPrice10;
	///申卖量十
	TFasexVolumeType	AskVolume10;
	///产品名称
	TFasexInstrumentNameType	InstrumentName;
};
///分价表
struct CFasexMBLMarketDataField
{
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///买卖方向
	TFasexDirectionType	Direction;
	///价格
	TFasexPriceType	Price;
	///数量
	TFasexVolumeType	Volume;
};
///行情基础属性
struct CFasexMarketDataBaseField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///昨收盘
	TFasexPriceType	PreClosePrice;
	///产品名称
	TFasexInstrumentNameType	InstrumentName;
};
///行情静态属性
struct CFasexMarketDataStaticField
{
	///今开盘
	TFasexPriceType	OpenPrice;
	///最高价
	TFasexPriceType	HighestPrice;
	///最低价
	TFasexPriceType	LowestPrice;
	///今收盘
	TFasexPriceType	ClosePrice;
	///涨停板价
	TFasexPriceType	UpperLimitPrice;
	///跌停板价
	TFasexPriceType	LowerLimitPrice;
};
///行情最新成交属性
struct CFasexMarketDataLastMatchField
{
	///最新价
	TFasexPriceType	LastPrice;
	///数量
	TFasexVolumeType	Volume;
	///成交金额
	TFasexMoneyType	Turnover;
};
///行情最优价属性
struct CFasexMarketDataBestPriceField
{
	///申买价一
	TFasexPriceType	BidPrice1;
	///申买量一
	TFasexVolumeType	BidVolume1;
	///申卖价一
	TFasexPriceType	AskPrice1;
	///申卖量一
	TFasexVolumeType	AskVolume1;
};
///行情申买二、三属性
struct CFasexMarketDataBid23Field
{
	///申买价二
	TFasexPriceType	BidPrice2;
	///申买量二
	TFasexVolumeType	BidVolume2;
	///申买价三
	TFasexPriceType	BidPrice3;
	///申买量三
	TFasexVolumeType	BidVolume3;
};
///行情申卖二、三属性
struct CFasexMarketDataAsk23Field
{
	///申卖价二
	TFasexPriceType	AskPrice2;
	///申卖量二
	TFasexVolumeType	AskVolume2;
	///申卖价三
	TFasexPriceType	AskPrice3;
	///申卖量三
	TFasexVolumeType	AskVolume3;
};
///行情申买四、五属性
struct CFasexMarketDataBid45Field
{
	///申买价四
	TFasexPriceType	BidPrice4;
	///申买量四
	TFasexVolumeType	BidVolume4;
	///申买价五
	TFasexPriceType	BidPrice5;
	///申买量五
	TFasexVolumeType	BidVolume5;
};
///行情申卖四、五属性
struct CFasexMarketDataAsk45Field
{
	///申卖价四
	TFasexPriceType	AskPrice4;
	///申卖量四
	TFasexVolumeType	AskVolume4;
	///申卖价五
	TFasexPriceType	AskPrice5;
	///申卖量五
	TFasexVolumeType	AskVolume5;
};
///行情申买六、七属性
struct CFasexMarketDataBid67Field
{
	///申买价六
	TFasexPriceType	BidPrice6;
	///申买量六
	TFasexVolumeType	BidVolume6;
	///申买价七
	TFasexPriceType	BidPrice7;
	///申买量七
	TFasexVolumeType	BidVolume7;
};
///行情申卖六、七属性
struct CFasexMarketDataAsk67Field
{
	///申卖价六
	TFasexPriceType	AskPrice6;
	///申卖量六
	TFasexVolumeType	AskVolume6;
	///申卖价七
	TFasexPriceType	AskPrice7;
	///申卖量七
	TFasexVolumeType	AskVolume7;
};
///行情申买八、九属性
struct CFasexMarketDataBid89Field
{
	///申买价八
	TFasexPriceType	BidPrice8;
	///申买量八
	TFasexVolumeType	BidVolume8;
	///申买价九
	TFasexPriceType	BidPrice9;
	///申买量九
	TFasexVolumeType	BidVolume9;
};
///行情申卖八、九属性
struct CFasexMarketDataAsk89Field
{
	///申卖价八
	TFasexPriceType	AskPrice8;
	///申卖量八
	TFasexVolumeType	AskVolume8;
	///申卖价九
	TFasexPriceType	AskPrice9;
	///申卖量九
	TFasexVolumeType	AskVolume9;
};
///行情申买十属性
struct CFasexMarketDataBid10Field
{
	///申买价十
	TFasexPriceType	BidPrice10;
	///申买量十
	TFasexVolumeType	BidVolume10;
};
///行情申卖十属性
struct CFasexMarketDataAsk10Field
{
	///申卖价十
	TFasexPriceType	AskPrice10;
	///申卖量十
	TFasexVolumeType	AskVolume10;
};
///行情更新时间属性
struct CFasexMarketDataUpdateTimeField
{
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///最后修改时间
	TFasexTimeType	UpdateTime;
	///最后修改毫秒
	TFasexMillisecType	UpdateMillisec;
};
///查询时间
struct CFasexMarketDateTimeField
{
	///日期
	TFasexTradingDayType	MarketServerDate;
	///时间
	TFasexTimeType	MarketServerTime;
};
///成交
struct CFasexTradeField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///成交编号
	TFasexTradeIDType	TradeID;
	///买卖方向
	TFasexDirectionType	Direction;
	///报单编号
	TFasexOrderSysIDType	OrderSysID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易角色
	TFasexTradingRoleType	TradingRole;
	///资金帐号
	TFasexAccountIDType	AccountID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///价格
	TFasexPriceType	Price;
	///数量
	TFasexVolumeType	Volume;
	///成交时间
	TFasexTimeType	TradeTime;
	///成交类型
	TFasexTradeTypeType	TradeType;
	///成交价来源
	TFasexPriceSourceType	PriceSource;
	///交易用户代码
	TFasexUserIDType	UserID;
	///本地报单编号
	TFasexOrderLocalIDType	OrderLocalID;
	///业务单元
	TFasexBusinessUnitType	BusinessUnit;
	///手续费
	TFasexMoneyType	Fee;
	///盈亏
	TFasexMoneyType	CloseProfit;
	///成交角色
	TFasexMatchRoleType	MatchRole;
	///成交金额
	TFasexMoneyType	Turnover;
	///报单价格条件
	TFasexOrderPriceTypeType	OrderPriceType;
};
///报单
struct CFasexOrderField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///报单编号
	TFasexOrderSysIDType	OrderSysID;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///报单价格条件
	TFasexOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFasexDirectionType	Direction;
	///价格
	TFasexPriceType	LimitPrice;
	///数量
	TFasexVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFasexTimeConditionType	TimeCondition;
	///GTD日期
	TFasexDateType	GTDDate;
	///成交量类型
	TFasexVolumeConditionType	VolumeCondition;
	///最小成交量
	TFasexVolumeType	MinVolume;
	///触发条件
	TFasexContingentConditionType	ContingentCondition;
	///止损价
	TFasexPriceType	StopPrice;
	///本地报单编号
	TFasexOrderLocalIDType	OrderLocalID;
	///自动挂起标志
	TFasexBoolType	IsAutoSuspend;
	///业务单元
	TFasexBusinessUnitType	BusinessUnit;
	///报单来源
	TFasexOrderSourceType	OrderSource;
	///报单状态
	TFasexOrderStatusType	OrderStatus;
	///报单类型
	TFasexOrderTypeType	OrderType;
	///今成交数量
	TFasexVolumeType	VolumeTraded;
	///剩余数量
	TFasexVolumeType	VolumeTotal;
	///报单日期
	TFasexDateType	InsertDate;
	///插入时间
	TFasexTimeType	InsertTime;
	///激活时间
	TFasexTimeType	ActiveTime;
	///挂起时间
	TFasexTimeType	SuspendTime;
	///最后修改时间
	TFasexTimeType	UpdateTime;
	///撤销时间
	TFasexTimeType	CancelTime;
	///最后修改交易用户代码
	TFasexUserIDType	ActiveUserID;
	///优先权
	TFasexPriorityType	Priority;
	///按时间排队的序号
	TFasexTimeSortIDType	TimeSortID;
	///手续费
	TFasexMoneyType	Fee;
	///成交金额
	TFasexMoneyType	Turnover;
};
///资金
struct CFasexTradingAccountField
{
	///交易日
	TFasexDateType	TradingDay;
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///上次结算准备金
	TFasexMoneyType	PreBalance;
	///入金金额
	TFasexMoneyType	Deposit;
	///出金金额
	TFasexMoneyType	Withdraw;
	///期货结算准备金
	TFasexMoneyType	Balance;
	///可用资金
	TFasexMoneyType	Available;
	///资金帐号
	TFasexAccountIDType	AccountID;
	///可取资金
	TFasexMoneyType	Useable;
	///币种
	TFasexCurrencyType	Currency;
	///现货资金收支
	TFasexMoneyType	TradeMoney;
	///冻结的现货资金
	TFasexMoneyType	FrozenMoney;
	///当日手续费支出
	TFasexMoneyType	Fee;
	///会员代码
	TFasexParticipantIDType	ParticipantID;
};
///交易所数据同步状态
struct CFasexExchangeDataSyncStatusField
{
	///交易日
	TFasexDateType	TradingDay;
	///交易所代码
	TFasexExchangeIDType	ExchangeID;
	///交易所数据同步状态
	TFasexExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///结算组数据同步状态
struct CFasexSGDataSyncStatusField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///交易日
	TFasexDateType	TradingDay;
	///结算编号
	TFasexSettlementIDType	SettlementID;
	///结算组数据同步状态
	TFasexSGDataSyncStatusType	SGDataSyncStatus;
};
///合约状态
struct CFasexInstrumentStatusField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///交易对交易状态
	TFasexInstrumentStatusType	InstrumentStatus;
	///交易阶段编号
	TFasexTradingSegmentSNType	TradingSegmentSN;
	///进入本状态时间
	TFasexTimeType	EnterTime;
	///进入本状态原因
	TFasexInstStatusEnterReasonType	EnterReason;
};
///实时上场
struct CFasexTBCommandField
{
	///DB命令本地号
	TFasexOrderLocalIDType	CommandLocalID;
	///全局DB命令序号
	TFasexSequenceNoType	CommandNo;
	///DB命令类型
	TFasexCommandTypeType	CommandType;
	///字段名
	TFasexFieldNameType	FieldName;
	///字段内容
	TFasexFieldContentType	FieldContent;
	///备注
	TFasexComeFromType	Comments;
};
///报单查询
struct CFasexQryOrderField
{
	///起始会员代码
	TFasexParticipantIDType	PartIDStart;
	///结束会员代码
	TFasexParticipantIDType	PartIDEnd;
	///报单编号
	TFasexOrderSysIDType	OrderSysID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///开始时间
	TFasexTimeType	TimeStart;
	///结束时间
	TFasexTimeType	TimeEnd;
};
///成交查询
struct CFasexQryTradeField
{
	///起始会员代码
	TFasexParticipantIDType	PartIDStart;
	///结束会员代码
	TFasexParticipantIDType	PartIDEnd;
	///起始交易对代码
	TFasexInstrumentIDType	InstIDStart;
	///结束交易对代码
	TFasexInstrumentIDType	InstIDEnd;
	///成交编号
	TFasexTradeIDType	TradeID;
	///客户代码
	TFasexClientIDType	ClientID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///开始时间
	TFasexTimeType	TimeStart;
	///结束时间
	TFasexTimeType	TimeEnd;
};
///行情查询
struct CFasexQryMarketDataField
{
	///产品代码
	TFasexProductIDType	ProductID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
};
///客户查询
struct CFasexQryClientField
{
	///起始会员代码
	TFasexParticipantIDType	PartIDStart;
	///结束会员代码
	TFasexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFasexClientIDType	ClientIDStart;
	///结束客户代码
	TFasexClientIDType	ClientIDEnd;
};
///交易资金查询
struct CFasexQryTradingAccountField
{
	///起始会员代码
	TFasexParticipantIDType	PartIDStart;
	///结束会员代码
	TFasexParticipantIDType	PartIDEnd;
	///资金帐号
	TFasexAccountIDType	AccountID;
};
///合约查询
struct CFasexQryInstrumentField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///产品组代码
	TFasexProductGroupIDType	ProductGroupID;
	///产品代码
	TFasexProductIDType	ProductID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
};
///合约状态查询
struct CFasexQryInstrumentStatusField
{
	///起始交易对代码
	TFasexInstrumentIDType	InstIDStart;
	///结束交易对代码
	TFasexInstrumentIDType	InstIDEnd;
};
///结算组状态查询
struct CFasexQrySGDataSyncStatusField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
};
///用户在线查询
struct CFasexQryUserSessionField
{
	///起始交易用户代码
	TFasexUserIDType	UserIDStart;
	///结束交易用户代码
	TFasexUserIDType	UserIDEnd;
};
///用户查询
struct CFasexQryUserField
{
	///起始交易用户代码
	TFasexUserIDType	UserIDStart;
	///结束交易用户代码
	TFasexUserIDType	UserIDEnd;
};
///会员查询
struct CFasexQryParticipantField
{
	///起始会员代码
	TFasexParticipantIDType	PartIDStart;
	///结束会员代码
	TFasexParticipantIDType	PartIDEnd;
};
///合约价位查询
struct CFasexQryMBLMarketDataField
{
	///起始交易对代码
	TFasexInstrumentIDType	InstIDStart;
	///结束交易对代码
	TFasexInstrumentIDType	InstIDEnd;
	///开始档位
	TFasexIndexType	FromIndex;
	///结束档位
	TFasexIndexType	EndIndex;
	///买卖方向
	TFasexDirectionType	Direction;
};
///合约查询应答
struct CFasexRspInstrumentField
{
	///结算组代码
	TFasexSettlementGroupIDType	SettlementGroupID;
	///交易对代码
	TFasexInstrumentIDType	InstrumentID;
	///交易对名称
	TFasexInstrumentNameType	InstrumentName;
	///当前是否交易
	TFasexBoolType	IsTrading;
	///产品代码
	TFasexProductIDType	ProductID;
	///产品组代码
	TFasexProductGroupIDType	ProductGroupID;
	///产品类型
	TFasexProductClassType	ProductClass;
	///交易对数量乘数
	TFasexVolumeMultipleType	VolumeMultiple;
	///上市日
	TFasexDateType	OpenDate;
	///挂牌基准价
	TFasexPriceType	BasisPrice;
	///市价单最大下单量
	TFasexVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TFasexVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TFasexVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TFasexVolumeType	MinLimitOrderVolume;
	///最小变动价位
	TFasexPriceType	PriceTick;
	///最小下单变动数量
	TFasexVolumeType	VolumeTick;
	///撮合方式
	TFasexTradingModelType	TradingModel;
	///交易货币
	TFasexCurrencyType	TradingCurrency;
	///交易基币
	TFasexCurrencyType	TradingBaseCurrency;
};
///信息查询
struct CFasexQryInformationField
{
	///起始信息代码
	TFasexInformationIDType	InformationIDStart;
	///结束信息代码
	TFasexInformationIDType	InformationIDEnd;
};
///信息查询
struct CFasexInformationField
{
	///信息编号
	TFasexInformationIDType	InformationID;
	///序列号
	TFasexSequenceNoType	SequenceNo;
	///消息正文
	TFasexContentType	Content;
	///正文长度
	TFasexContentLengthType	ContentLength;
	///是否完成
	TFasexBoolType	IsAccomplished;
};
///客户查询应答
struct CFasexRspClientField
{
	///客户代码
	TFasexClientIDType	ClientID;
	///客户名称
	TFasexPartyNameType	ClientName;
	///证件类型
	TFasexIdCardTypeType	IdentifiedCardType;
	///原证件号码
	TFasexIdentifiedCardNoV1Type	UseLess;
	///交易角色
	TFasexTradingRoleType	TradingRole;
	///客户类型
	TFasexClientTypeType	ClientType;
	///是否活跃
	TFasexBoolType	IsActive;
	///会员号
	TFasexParticipantIDType	ParticipantID;
	///证件号码
	TFasexIdentifiedCardNoType	IdentifiedCardNo;
};
///数据流回退
struct CFasexFlowMessageCancelField
{
	///序列系列号
	TFasexSequenceSeriesType	SequenceSeries;
	///交易日
	TFasexDateType	TradingDay;
	///数据中心代码
	TFasexDataCenterIDType	DataCenterID;
	///回退起始序列号
	TFasexSequenceNoType	StartSequenceNo;
	///回退结束序列号
	TFasexSequenceNoType	EndSequenceNo;
};
///出入金查询
struct CFasexQryAccountDepositDetailField
{
	///出入金流水序号
	TFasexSequenceNoType	DepositNo;
	///起始会员代码
	TFasexAccountIDType	AccountIDStart;
	///结束会员代码
	TFasexAccountIDType	AccountIDEnd;
};
///实时上场查询
struct CFasexQryTBCommandDetailField
{
	///全局DB命令序号
	TFasexSequenceNoType	CommandNo;
	///DB命令类型
	TFasexCommandTypeType	CommandType;
};
///交易用户修改
struct CFasexUserActionField
{
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///交易用户代码
	TFasexUserIDType	UserID;
	///交易用户类型
	TFasexUserTypeType	UserType;
	///密码
	TFasexPasswordType	Password;
	///交易员权限
	TFasexUserActiveType	IsActive;
	///修改模式
	TFasexUserActionTypeType	UserActionType;
	///旧密码
	TFasexPasswordType	OldPassword;
};
///查询手续费
struct CFasexQryPartClientFeeField
{
	///会员代码
	TFasexParticipantIDType	ParticipantID;
	///客户编码
	TFasexClientIDType	ClientID;
	///产品合约代码
	TFasexInstrumentIDType	InstrumentID;
};

#endif
