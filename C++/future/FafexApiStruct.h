/////////////////////////////////////////////////////////////////////////
///@file FafexApiStruct.h
///@brief 定义了客户端接口使用的业务数据结构
/////////////////////////////////////////////////////////////////////////

#if !defined(Fafex_STRUCT_H)
#define Fafex_STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FafexApiDataType.h"

///信息分发
struct CFafexDisseminationField
{
	///序列系列号
	TFafexSequenceSeriesType	SequenceSeries;
	///序列号
	TFafexSequenceNoType	SequenceNo;
};
///响应信息
struct CFafexRspInfoField
{
	///错误代码
	TFafexErrorIDType	ErrorID;
	///错误信息
	TFafexErrorMsgType	ErrorMsg;
};
///通讯阶段
struct CFafexCommPhaseField
{
	///交易日
	TFafexDateType	TradingDay;
	///通讯时段号
	TFafexCommPhaseNoType	CommPhaseNo;
};
///交易所交易日
struct CFafexExchangeTradingDayField
{
	///交易日
	TFafexDateType	TradingDay;
	///交易所代码
	TFafexExchangeIDType	ExchangeID;
};
///结算会话
struct CFafexSettlementSessionField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
};
///当前时间
struct CFafexCurrentTimeField
{
	///当前日期
	TFafexDateType	CurrDate;
	///当前时间
	TFafexTimeType	CurrTime;
	///当前时间（毫秒）
	TFafexMillisecType	CurrMillisec;
};
///用户登录请求
struct CFafexReqUserLoginField
{
	///交易日
	TFafexDateType	TradingDay;
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///密码
	TFafexPasswordType	Password;
	///用户端产品信息
	TFafexProductInfoType	UserProductInfo;
	///接口端产品信息
	TFafexProductInfoType	InterfaceProductInfo;
	///协议信息
	TFafexProtocolInfoType	ProtocolInfo;
	///数据中心代码
	TFafexDataCenterIDType	DataCenterID;
};
///用户登录应答
struct CFafexRspUserLoginField
{
	///交易日
	TFafexDateType	TradingDay;
	///登录成功时间
	TFafexTimeType	LoginTime;
	///最大本地报单号
	TFafexOrderLocalIDType	MaxOrderLocalID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易系统名称
	TFafexTradingSystemNameType	TradingSystemName;
	///数据中心代码
	TFafexDataCenterIDType	DataCenterID;
	///会员私有流当前长度
	TFafexSequenceNoType	PrivateFlowSize;
	///交易员私有流当前长度
	TFafexSequenceNoType	UserFlowSize;
};
///用户登出请求
struct CFafexReqUserLogoutField
{
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
};
///用户登出应答
struct CFafexRspUserLogoutField
{
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
};
///输入报单
struct CFafexInputOrderField
{
	///报单编号
	TFafexOrderSysIDType	OrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///报单价格条件
	TFafexOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFafexDirectionType	Direction;
	///组合开平标志
	TFafexCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFafexCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFafexPriceType	LimitPrice;
	///数量
	TFafexVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFafexTimeConditionType	TimeCondition;
	///GTD日期
	TFafexDateType	GTDDate;
	///成交量类型
	TFafexVolumeConditionType	VolumeCondition;
	///最小成交量
	TFafexVolumeType	MinVolume;
	///触发条件
	TFafexContingentConditionType	ContingentCondition;
	///止损价
	TFafexPriceType	StopPrice;
	///强平原因
	TFafexForceCloseReasonType	ForceCloseReason;
	///本地报单编号
	TFafexOrderLocalIDType	OrderLocalID;
	///自动挂起标志
	TFafexBoolType	IsAutoSuspend;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
};
///报单操作
struct CFafexOrderActionField
{
	///报单编号
	TFafexOrderSysIDType	OrderSysID;
	///本地报单编号
	TFafexOrderLocalIDType	OrderLocalID;
	///报单操作标志
	TFafexActionFlagType	ActionFlag;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///价格
	TFafexPriceType	LimitPrice;
	///数量变化
	TFafexVolumeType	VolumeChange;
	///操作本地编号
	TFafexOrderLocalIDType	ActionLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
};
///OTC报单
struct CFafexOTCOrderField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///OTC报单编号
	TFafexOTCOrderSysIDType	OTCOrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///买卖方向
	TFafexDirectionType	Direction;
	///开平标志
	TFafexOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///价格
	TFafexPriceType	Price;
	///数量
	TFafexVolumeType	Volume;
	///对手方会员代码
	TFafexParticipantIDType	OtherParticipantID;
	///对手方客户代码
	TFafexClientIDType	OtherClientID;
	///对手方交易用户代码
	TFafexUserIDType	OtherUserID;
	///对手方开平标志
	TFafexOffsetFlagType	OtherOffsetFlag;
	///对手方套保标志
	TFafexHedgeFlagType	OtherHedgeFlag;
	///本地OTC报单编号
	TFafexOrderLocalIDType	OTCOrderLocalID;
	///OTC报单状态
	TFafexOTCOrderStatusType	OTCOrderStatus;
	///插入时间
	TFafexTimeType	InsertTime;
	///撤销时间
	TFafexTimeType	CancelTime;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///对手方结算会员编号
	TFafexParticipantIDType	OtherClearingPartID;
	///自然日期
	TFafexDateType	CalendarDate;
};
///输入报价
struct CFafexInputQuoteField
{
	///报价编号
	TFafexQuoteSysIDType	QuoteSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///数量
	TFafexVolumeType	Volume;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///本地报价编号
	TFafexOrderLocalIDType	QuoteLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///买方组合开平标志
	TFafexCombOffsetFlagType	BidCombOffsetFlag;
	///买方组合套保标志
	TFafexCombHedgeFlagType	BidCombHedgeFlag;
	///买方价格
	TFafexPriceType	BidPrice;
	///卖方组合开平标志
	TFafexCombOffsetFlagType	AskCombOffsetFlag;
	///卖方组合套保标志
	TFafexCombHedgeFlagType	AskCombHedgeFlag;
	///卖方价格
	TFafexPriceType	AskPrice;
};
///报价操作
struct CFafexQuoteActionField
{
	///报价编号
	TFafexQuoteSysIDType	QuoteSysID;
	///本地报价编号
	TFafexOrderLocalIDType	QuoteLocalID;
	///报单操作标志
	TFafexActionFlagType	ActionFlag;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///操作本地编号
	TFafexOrderLocalIDType	ActionLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
};
///输入执行宣告
struct CFafexInputExecOrderField
{
	///合约编号
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///本地执行宣告编号
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///数量
	TFafexVolumeType	Volume;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
};
///执行宣告操作
struct CFafexExecOrderActionField
{
	///执行宣告编号
	TFafexExecOrderSysIDType	ExecOrderSysID;
	///本地执行宣告编号
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///报单操作标志
	TFafexActionFlagType	ActionFlag;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///操作本地编号
	TFafexOrderLocalIDType	ActionLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
};
///用户登录退出
struct CFafexUserLogoutField
{
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
};
///用户口令修改
struct CFafexUserPasswordUpdateField
{
	///交易用户代码
	TFafexUserIDType	UserID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///旧密码
	TFafexPasswordType	OldPassword;
	///新密码
	TFafexPasswordType	NewPassword;
};
///输入非标组合报单
struct CFafexInputCombOrderField
{
	///组合报单编号
	TFafexOrderSysIDType	CombOrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///价格
	TFafexPriceType	LimitPrice;
	///数量
	TFafexVolumeType	VolumeTotalOriginal;
	///本地报单编号
	TFafexOrderLocalIDType	CombOrderLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///合约代码1
	TFafexInstrumentIDType	InstrumentID1;
	///买卖方向1
	TFafexDirectionType	Direction1;
	///分腿乘数1
	TFafexLegMultipleType	LegMultiple1;
	///开平标志1
	TFafexOffsetFlagType	OffsetFlag1;
	///投机套保标志1
	TFafexHedgeFlagType	HedgeFlag1;
	///合约代码2
	TFafexInstrumentIDType	InstrumentID2;
	///买卖方向2
	TFafexDirectionType	Direction2;
	///分腿乘数2
	TFafexLegMultipleType	LegMultiple2;
	///开平标志2
	TFafexOffsetFlagType	OffsetFlag2;
	///投机套保标志2
	TFafexHedgeFlagType	HedgeFlag2;
	///合约代码3
	TFafexInstrumentIDType	InstrumentID3;
	///买卖方向3
	TFafexDirectionType	Direction3;
	///分腿乘数3
	TFafexLegMultipleType	LegMultiple3;
	///开平标志3
	TFafexOffsetFlagType	OffsetFlag3;
	///投机套保标志3
	TFafexHedgeFlagType	HedgeFlag3;
	///合约代码4
	TFafexInstrumentIDType	InstrumentID4;
	///买卖方向4
	TFafexDirectionType	Direction4;
	///分腿乘数4
	TFafexLegMultipleType	LegMultiple4;
	///开平标志4
	TFafexOffsetFlagType	OffsetFlag4;
	///投机套保标志4
	TFafexHedgeFlagType	HedgeFlag4;
};
///强制用户退出
struct CFafexForceUserExitField
{
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易用户代码
	TFafexUserIDType	UserID;
};
///导出内存表
struct CFafexDumpMemTableField
{
	///内存表名称
	TFafexTableNameType	TableName;
};
///资金账户出入金
struct CFafexAccountDepositField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///出入金本地号
	TFafexOrderLocalIDType	DepositLocalID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易角色
	TFafexTradingRoleType	TradingRole;
	///资金账号
	TFafexAccountIDType	AccountID;
	///出入金金额
	TFafexMoneyType	Deposit;
	///全局出入金流水序号
	TFafexSequenceNoType	DepositNo;
	///币种
	TFafexCurrencyType	Currency;
	///资金操作类型
	TFafexAccountActionTypeType	ActionType;
	///备注
	TFafexComeFromType	Comments;
};
///出入金
struct CFafexAccountDepositDetailField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///出入金本地号
	TFafexOrderLocalIDType	DepositLocalID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易角色
	TFafexTradingRoleType	TradingRole;
	///资金账号
	TFafexAccountIDType	AccountID;
	///出入金金额
	TFafexMoneyType	Deposit;
	///全局出入金流水序号
	TFafexSequenceNoType	DepositNo;
	///币种
	TFafexCurrencyType	Currency;
	///资金操作类型
	TFafexAccountActionTypeType	ActionType;
	///备注
	TFafexComeFromType	Comments;
	///处理结果
	TFafexTransStatusType	Status;
	///插入日期
	TFafexDateType	CalendarDate;
	///插入时间
	TFafexTimeType	InsertTime;
};
///实时上场
struct CFafexTBCommandDetailField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///DB命令本地号
	TFafexOrderLocalIDType	CommandLocalID;
	///全局DB命令序号
	TFafexSequenceNoType	CommandNo;
	///DB命令类型
	TFafexCommandTypeType	CommandType;
	///字段名
	TFafexFieldNameType	FieldName;
	///字段内容
	TFafexFieldContentType	FieldContent;
	///备注
	TFafexComeFromType	Comments;
	///处理结果
	TFafexTransStatusType	Status;
	///插入日期
	TFafexDateType	CalendarDate;
	///插入时间
	TFafexTimeType	InsertTime;
};
///手续费
struct CFafexPartClientFeeField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户号
	TFafexClientIDType	ClientID;
	///合约的编号
	TFafexInstrumentIDType	InstrumentID;
	///成交角色
	TFafexMatchRoleType	MatchRole;
	///开仓手续费按比例
	TFafexRatioType	OpenFeeRate;
	///开仓手续费按手数
	TFafexRatioType	OpenFeeAmt;
	///平仓手续费按比例
	TFafexRatioType	OffsetFeeRate;
	///平仓手续费按手数
	TFafexRatioType	OffsetFeeAmt;
	///平今仓手续费按比例
	TFafexRatioType	OTFeeRate;
	///平今仓手续费按手数
	TFafexRatioType	OTFeeAmt;
};
///客户持仓明细
struct CFafexClientPositionDetailField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///成交日期
	TFafexDateType	TradeDate;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///买卖方向
	TFafexDirectionType	Direction;
	///成交编号
	TFafexTradeIDType	TradeID;
	///成交类型
	TFafexTradeTypeType	TradeType;
	///当日可平仓量
	TFafexVolumeType	Position;
	///成交价格
	TFafexPriceType	Price;
	///持仓成本包括手续费等
	TFafexMoneyType	PositionCost;
	///持仓成本
	TFafexMoneyType	PositionMoney;
	///是否今日仓
	TFafexBoolType	IsToday;
	///占用的保证金
	TFafexMoneyType	UseMargin;
	///手续费
	TFafexMoneyType	Fee;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
};
///会员
struct CFafexParticipantField
{
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///会员名称
	TFafexParticipantNameType	ParticipantName;
	///会员简称
	TFafexParticipantAbbrType	ParticipantAbbr;
	///会员类型
	TFafexMemberTypeType	MemberType;
	///是否活跃
	TFafexBoolType	IsActive;
};
///用户
struct CFafexUserField
{
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///交易用户类型
	TFafexUserTypeType	UserType;
	///密码
	TFafexPasswordType	Password;
	///交易员权限
	TFafexUserActiveType	IsActive;
};
///客户
struct CFafexClientField
{
	///客户代码
	TFafexClientIDType	ClientID;
	///客户名称
	TFafexPartyNameType	ClientName;
	///证件类型
	TFafexIdCardTypeType	IdentifiedCardType;
	///证件号码
	TFafexIdentifiedCardNoType	IdentifiedCardNo;
	///交易角色
	TFafexTradingRoleType	TradingRole;
	///客户类型
	TFafexClientTypeType	ClientType;
	///是否活跃
	TFafexBoolType	IsActive;
	///客户交易类型
	TFafexHedgeFlagType	HedgeFlag;
};
///用户会话
struct CFafexUserSessionField
{
	///前置编号
	TFafexFrontIDType	FrontID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///交易用户类型
	TFafexUserTypeType	UserType;
	///会话编号
	TFafexSessionIDType	SessionID;
	///登录时间
	TFafexTimeType	LoginTime;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///IP地址
	TFafexIPAddressType	IPAddress;
	///用户端产品信息
	TFafexProductInfoType	UserProductInfo;
	///接口端产品信息
	TFafexProductInfoType	InterfaceProductInfo;
	///协议信息
	TFafexProtocolInfoType	ProtocolInfo;
};
///产品组
struct CFafexProductGroupField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///产品组代码
	TFafexProductGroupIDType	ProductGroupID;
	///产品组名称
	TFafexProductGroupNameType	ProductGroupName;
	///商品代码
	TFafexCommodityIDType	CommodityID;
};
///产品
struct CFafexProductField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///产品代码
	TFafexProductIDType	ProductID;
	///产品组代码
	TFafexProductGroupIDType	ProductGroupID;
	///产品名称
	TFafexProductNameType	ProductName;
	///产品类型
	TFafexProductClassType	ProductClass;
};
///合约
struct CFafexInstrumentField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///产品代码
	TFafexProductIDType	ProductID;
	///产品组代码
	TFafexProductGroupIDType	ProductGroupID;
	///基础商品代码
	TFafexInstrumentIDType	UnderlyingInstrID;
	///产品类型
	TFafexProductClassType	ProductClass;
	///持仓类型
	TFafexPositionTypeType	PositionType;
	///执行价
	TFafexPriceType	StrikePrice;
	///期权类型
	TFafexOptionsTypeType	OptionsType;
	///合约数量乘数
	TFafexVolumeMultipleType	VolumeMultiple;
	///合约基础商品乘数
	TFafexUnderlyingMultipleType	UnderlyingMultiple;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///合约名称
	TFafexInstrumentNameType	InstrumentName;
	///交割年份
	TFafexYearType	DeliveryYear;
	///交割月
	TFafexMonthType	DeliveryMonth;
	///提前月份
	TFafexAdvanceMonthType	AdvanceMonth;
	///当前是否交易
	TFafexBoolType	IsTrading;
	///计价币种
	TFafexCurrencyType	PriceCurrency;
	///清算币种
	TFafexCurrencyType	ClearCurrency;
	///是否反向合约
	TFafexBoolType	IsInverse;
	///合约基础货币
	TFafexCurrencyType	BaseCurrency;
	///保证金价格类型
	TFafexMarginPriceTypeType	MarginPriceType;
};
///组合交易合约的单腿
struct CFafexCombinationLegField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///组合合约代码
	TFafexInstrumentIDType	CombInstrumentID;
	///单腿编号
	TFafexLegIDType	LegID;
	///单腿合约代码
	TFafexInstrumentIDType	LegInstrumentID;
	///买卖方向
	TFafexDirectionType	Direction;
	///单腿乘数
	TFafexLegMultipleType	LegMultiple;
	///推导层数
	TFafexImplyLevelType	ImplyLevel;
};
///会员合约持仓
struct CFafexPartPositionField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///持仓多空方向
	TFafexPosiDirectionType	PosiDirection;
	///上日持仓
	TFafexVolumeType	YdPosition;
	///今日持仓
	TFafexVolumeType	Position;
	///多头冻结
	TFafexVolumeType	LongFrozen;
	///空头冻结
	TFafexVolumeType	ShortFrozen;
	///昨日多头冻结
	TFafexVolumeType	YdLongFrozen;
	///昨日空头冻结
	TFafexVolumeType	YdShortFrozen;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易角色
	TFafexTradingRoleType	TradingRole;
};
///客户合约持仓
struct CFafexClientPositionField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///持仓多空方向
	TFafexPosiDirectionType	PosiDirection;
	///上日持仓
	TFafexVolumeType	YdPosition;
	///今日持仓
	TFafexVolumeType	Position;
	///多头冻结
	TFafexVolumeType	LongFrozen;
	///空头冻结
	TFafexVolumeType	ShortFrozen;
	///昨日多头冻结
	TFafexVolumeType	YdLongFrozen;
	///昨日空头冻结
	TFafexVolumeType	YdShortFrozen;
	///当日买成交量
	TFafexVolumeType	BuyTradeVolume;
	///当日卖成交量
	TFafexVolumeType	SellTradeVolume;
	///持仓成本
	TFafexMoneyType	PositionCost;
	///昨日持仓成本
	TFafexMoneyType	YdPositionCost;
	///占用的保证金
	TFafexMoneyType	UseMargin;
	///冻结的保证金
	TFafexMoneyType	FrozenMargin;
	///多头冻结的保证金
	TFafexMoneyType	LongFrozenMargin;
	///空头冻结的保证金
	TFafexMoneyType	ShortFrozenMargin;
	///冻结的权利金
	TFafexMoneyType	FrozenPremium;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///上次结算之后平仓盈亏
	TFafexMoneyType	CloseProfit;
	///持仓盈亏
	TFafexMoneyType	PositionProfit;
	///累计开仓成本
	TFafexMoneyType	TotalPositionCost;
	///累计平仓盈亏
	TFafexMoneyType	TotalCloseProfit;
	///累计持仓盈亏
	TFafexMoneyType	TotalPositionProfit;
	///杠杆倍数
	TFafexRatioType	Leverage;
	///接管价格
	TFafexRatioType	LiquidationPrice;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///币种
	TFafexCurrencyType	ClearCurrency;
};
///保值额度量
struct CFafexHedgeVolumeField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///多头保值额度最初申请量
	TFafexVolumeType	LongVolumeOriginal;
	///空头保值额度最初申请量
	TFafexVolumeType	ShortVolumeOriginal;
	///多头保值额度
	TFafexVolumeType	LongVolume;
	///空头保值额度
	TFafexVolumeType	ShortVolume;
};
///市场行情
struct CFafexMarketDataField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///最新价
	TFafexPriceType	LastPrice;
	///昨结算
	TFafexPriceType	PreSettlementPrice;
	///昨收盘
	TFafexPriceType	PreClosePrice;
	///昨持仓量
	TFafexLargeVolumeType	PreOpenInterest;
	///今开盘
	TFafexPriceType	OpenPrice;
	///最高价
	TFafexPriceType	HighestPrice;
	///最低价
	TFafexPriceType	LowestPrice;
	///数量
	TFafexVolumeType	Volume;
	///成交金额
	TFafexMoneyType	Turnover;
	///持仓量
	TFafexLargeVolumeType	OpenInterest;
	///今收盘
	TFafexPriceType	ClosePrice;
	///今结算
	TFafexPriceType	SettlementPrice;
	///涨停板价
	TFafexPriceType	UpperLimitPrice;
	///跌停板价
	TFafexPriceType	LowerLimitPrice;
	///昨虚实度
	TFafexRatioType	PreDelta;
	///今虚实度
	TFafexRatioType	CurrDelta;
	///最后修改时间
	TFafexTimeType	UpdateTime;
	///最后修改毫秒
	TFafexMillisecType	UpdateMillisec;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///资金费率
	TFafexRatioType	FundingRate;
	///合理价格
	TFafexPriceType	FairPrice;
};
///深度市场行情
struct CFafexDepthMarketDataField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///最新价
	TFafexPriceType	LastPrice;
	///昨结算
	TFafexPriceType	PreSettlementPrice;
	///昨收盘
	TFafexPriceType	PreClosePrice;
	///昨持仓量
	TFafexLargeVolumeType	PreOpenInterest;
	///今开盘
	TFafexPriceType	OpenPrice;
	///最高价
	TFafexPriceType	HighestPrice;
	///最低价
	TFafexPriceType	LowestPrice;
	///数量
	TFafexVolumeType	Volume;
	///成交金额
	TFafexMoneyType	Turnover;
	///持仓量
	TFafexLargeVolumeType	OpenInterest;
	///今收盘
	TFafexPriceType	ClosePrice;
	///今结算
	TFafexPriceType	SettlementPrice;
	///涨停板价
	TFafexPriceType	UpperLimitPrice;
	///跌停板价
	TFafexPriceType	LowerLimitPrice;
	///昨虚实度
	TFafexRatioType	PreDelta;
	///今虚实度
	TFafexRatioType	CurrDelta;
	///最后修改时间
	TFafexTimeType	UpdateTime;
	///最后修改毫秒
	TFafexMillisecType	UpdateMillisec;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///申买价一
	TFafexPriceType	BidPrice1;
	///申买量一
	TFafexVolumeType	BidVolume1;
	///申卖价一
	TFafexPriceType	AskPrice1;
	///申卖量一
	TFafexVolumeType	AskVolume1;
	///申买价二
	TFafexPriceType	BidPrice2;
	///申买量二
	TFafexVolumeType	BidVolume2;
	///申卖价二
	TFafexPriceType	AskPrice2;
	///申卖量二
	TFafexVolumeType	AskVolume2;
	///申买价三
	TFafexPriceType	BidPrice3;
	///申买量三
	TFafexVolumeType	BidVolume3;
	///申卖价三
	TFafexPriceType	AskPrice3;
	///申卖量三
	TFafexVolumeType	AskVolume3;
	///申买价四
	TFafexPriceType	BidPrice4;
	///申买量四
	TFafexVolumeType	BidVolume4;
	///申卖价四
	TFafexPriceType	AskPrice4;
	///申卖量四
	TFafexVolumeType	AskVolume4;
	///申买价五
	TFafexPriceType	BidPrice5;
	///申买量五
	TFafexVolumeType	BidVolume5;
	///申卖价五
	TFafexPriceType	AskPrice5;
	///申卖量五
	TFafexVolumeType	AskVolume5;
	///申买价六
	TFafexPriceType	BidPrice6;
	///申买量六
	TFafexVolumeType	BidVolume6;
	///申卖价六
	TFafexPriceType	AskPrice6;
	///申卖量六
	TFafexVolumeType	AskVolume6;
	///申买价七
	TFafexPriceType	BidPrice7;
	///申买量七
	TFafexVolumeType	BidVolume7;
	///申卖价七
	TFafexPriceType	AskPrice7;
	///申卖量七
	TFafexVolumeType	AskVolume7;
	///申买价八
	TFafexPriceType	BidPrice8;
	///申买量八
	TFafexVolumeType	BidVolume8;
	///申卖价八
	TFafexPriceType	AskPrice8;
	///申卖量八
	TFafexVolumeType	AskVolume8;
	///申买价九
	TFafexPriceType	BidPrice9;
	///申买量九
	TFafexVolumeType	BidVolume9;
	///申卖价九
	TFafexPriceType	AskPrice9;
	///申卖量九
	TFafexVolumeType	AskVolume9;
	///申买价十
	TFafexPriceType	BidPrice10;
	///申买量十
	TFafexVolumeType	BidVolume10;
	///申卖价十
	TFafexPriceType	AskPrice10;
	///申卖量十
	TFafexVolumeType	AskVolume10;
	///自然日期
	TFafexDateType	CalendarDate;
	///资金费率
	TFafexPriceType	FundingRate;
	///合理价格
	TFafexPriceType	FairPrice;
};
///分价表
struct CFafexMBLMarketDataField
{
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///买卖方向
	TFafexDirectionType	Direction;
	///价格
	TFafexPriceType	Price;
	///数量
	TFafexVolumeType	Volume;
};
///别名定义
struct CFafexAliasDefineField
{
	///起始位置
	TFafexStartPosType	StartPos;
	///别名
	TFafexAliasType	Alias;
	///原文
	TFafexOriginalTextType	OriginalText;
};
///行情基础属性
struct CFafexMarketDataBaseField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///昨结算
	TFafexPriceType	PreSettlementPrice;
	///昨收盘
	TFafexPriceType	PreClosePrice;
	///昨持仓量
	TFafexLargeVolumeType	PreOpenInterest;
	///昨虚实度
	TFafexRatioType	PreDelta;
};
///行情静态属性
struct CFafexMarketDataStaticField
{
	///今开盘
	TFafexPriceType	OpenPrice;
	///最高价
	TFafexPriceType	HighestPrice;
	///最低价
	TFafexPriceType	LowestPrice;
	///今收盘
	TFafexPriceType	ClosePrice;
	///涨停板价
	TFafexPriceType	UpperLimitPrice;
	///跌停板价
	TFafexPriceType	LowerLimitPrice;
	///今结算
	TFafexPriceType	SettlementPrice;
	///今虚实度
	TFafexRatioType	CurrDelta;
};
///行情最新成交属性
struct CFafexMarketDataLastMatchField
{
	///最新价
	TFafexPriceType	LastPrice;
	///数量
	TFafexVolumeType	Volume;
	///成交金额
	TFafexMoneyType	Turnover;
	///持仓量
	TFafexLargeVolumeType	OpenInterest;
};
///行情最优价属性
struct CFafexMarketDataBestPriceField
{
	///申买价一
	TFafexPriceType	BidPrice1;
	///申买量一
	TFafexVolumeType	BidVolume1;
	///申卖价一
	TFafexPriceType	AskPrice1;
	///申卖量一
	TFafexVolumeType	AskVolume1;
};
///行情申买二、三属性
struct CFafexMarketDataBid23Field
{
	///申买价二
	TFafexPriceType	BidPrice2;
	///申买量二
	TFafexVolumeType	BidVolume2;
	///申买价三
	TFafexPriceType	BidPrice3;
	///申买量三
	TFafexVolumeType	BidVolume3;
};
///行情申卖二、三属性
struct CFafexMarketDataAsk23Field
{
	///申卖价二
	TFafexPriceType	AskPrice2;
	///申卖量二
	TFafexVolumeType	AskVolume2;
	///申卖价三
	TFafexPriceType	AskPrice3;
	///申卖量三
	TFafexVolumeType	AskVolume3;
};
///行情申买四、五属性
struct CFafexMarketDataBid45Field
{
	///申买价四
	TFafexPriceType	BidPrice4;
	///申买量四
	TFafexVolumeType	BidVolume4;
	///申买价五
	TFafexPriceType	BidPrice5;
	///申买量五
	TFafexVolumeType	BidVolume5;
};
///行情申卖四、五属性
struct CFafexMarketDataAsk45Field
{
	///申卖价四
	TFafexPriceType	AskPrice4;
	///申卖量四
	TFafexVolumeType	AskVolume4;
	///申卖价五
	TFafexPriceType	AskPrice5;
	///申卖量五
	TFafexVolumeType	AskVolume5;
};
///行情更新时间属性
struct CFafexMarketDataUpdateTimeField
{
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///最后修改时间
	TFafexTimeType	UpdateTime;
	///最后修改毫秒
	TFafexMillisecType	UpdateMillisec;
	///Calendar Date
	TFafexDateType	CalendarDate;
};
///行情申买六、七属性
struct CFafexMarketDataBid67Field
{
	///申买价六
	TFafexPriceType	BidPrice6;
	///申买量六
	TFafexVolumeType	BidVolume6;
	///申买价七
	TFafexPriceType	BidPrice7;
	///申买量七
	TFafexVolumeType	BidVolume7;
};
///行情申卖六、七属性
struct CFafexMarketDataAsk67Field
{
	///申卖价六
	TFafexPriceType	AskPrice6;
	///申卖量六
	TFafexVolumeType	AskVolume6;
	///申卖价七
	TFafexPriceType	AskPrice7;
	///申卖量七
	TFafexVolumeType	AskVolume7;
};
///行情申买八、九属性
struct CFafexMarketDataBid89Field
{
	///申买价八
	TFafexPriceType	BidPrice8;
	///申买量八
	TFafexVolumeType	BidVolume8;
	///申买价九
	TFafexPriceType	BidPrice9;
	///申买量九
	TFafexVolumeType	BidVolume9;
};
///行情申卖八、九属性
struct CFafexMarketDataAsk89Field
{
	///申卖价八
	TFafexPriceType	AskPrice8;
	///申卖量八
	TFafexVolumeType	AskVolume8;
	///申卖价九
	TFafexPriceType	AskPrice9;
	///申卖量九
	TFafexVolumeType	AskVolume9;
};
///行情申买十属性
struct CFafexMarketDataBid10Field
{
	///申买价十
	TFafexPriceType	BidPrice10;
	///申买量十
	TFafexVolumeType	BidVolume10;
};
///行情申卖十属性
struct CFafexMarketDataAsk10Field
{
	///申卖价十
	TFafexPriceType	AskPrice10;
	///申卖量十
	TFafexVolumeType	AskVolume10;
};
///报价
struct CFafexQuoteField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///报价编号
	TFafexQuoteSysIDType	QuoteSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///数量
	TFafexVolumeType	Volume;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///本地报价编号
	TFafexOrderLocalIDType	QuoteLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///买方组合开平标志
	TFafexCombOffsetFlagType	BidCombOffsetFlag;
	///买方组合套保标志
	TFafexCombHedgeFlagType	BidCombHedgeFlag;
	///买方价格
	TFafexPriceType	BidPrice;
	///卖方组合开平标志
	TFafexCombOffsetFlagType	AskCombOffsetFlag;
	///卖方组合套保标志
	TFafexCombHedgeFlagType	AskCombHedgeFlag;
	///卖方价格
	TFafexPriceType	AskPrice;
	///插入时间
	TFafexTimeType	InsertTime;
	///撤销时间
	TFafexTimeType	CancelTime;
	///成交时间
	TFafexTimeType	TradeTime;
	///买方报单编号
	TFafexOrderSysIDType	BidOrderSysID;
	///卖方报单编号
	TFafexOrderSysIDType	AskOrderSysID;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///自然日期
	TFafexDateType	CalendarDate;
};
///成交
struct CFafexTradeField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///成交编号
	TFafexTradeIDType	TradeID;
	///买卖方向
	TFafexDirectionType	Direction;
	///报单编号
	TFafexOrderSysIDType	OrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易角色
	TFafexTradingRoleType	TradingRole;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///开平标志
	TFafexOffsetFlagType	OffsetFlag;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///价格
	TFafexPriceType	Price;
	///数量
	TFafexVolumeType	Volume;
	///成交时间
	TFafexTimeType	TradeTime;
	///成交类型
	TFafexTradeTypeType	TradeType;
	///成交价来源
	TFafexPriceSourceType	PriceSource;
	///交易用户代码
	TFafexUserIDType	UserID;
	///本地报单编号
	TFafexOrderLocalIDType	OrderLocalID;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///自然日期
	TFafexDateType	CalendarDate;
	///成交角色
	TFafexMatchRoleType	MatchRole;
	///手续费
	TFafexMoneyType	Fee;
	///平仓盈亏
	TFafexMoneyType	CloseProfit;
	///成交金额
	TFafexMoneyType	Turnover;
	///报单价格条件
	TFafexOrderPriceTypeType	OrderPriceType;
};
///报单
struct CFafexOrderField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///报单编号
	TFafexOrderSysIDType	OrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///报单价格条件
	TFafexOrderPriceTypeType	OrderPriceType;
	///买卖方向
	TFafexDirectionType	Direction;
	///组合开平标志
	TFafexCombOffsetFlagType	CombOffsetFlag;
	///组合投机套保标志
	TFafexCombHedgeFlagType	CombHedgeFlag;
	///价格
	TFafexPriceType	LimitPrice;
	///数量
	TFafexVolumeType	VolumeTotalOriginal;
	///有效期类型
	TFafexTimeConditionType	TimeCondition;
	///GTD日期
	TFafexDateType	GTDDate;
	///成交量类型
	TFafexVolumeConditionType	VolumeCondition;
	///最小成交量
	TFafexVolumeType	MinVolume;
	///触发条件
	TFafexContingentConditionType	ContingentCondition;
	///止损价
	TFafexPriceType	StopPrice;
	///强平原因
	TFafexForceCloseReasonType	ForceCloseReason;
	///本地报单编号
	TFafexOrderLocalIDType	OrderLocalID;
	///自动挂起标志
	TFafexBoolType	IsAutoSuspend;
	///报单来源
	TFafexOrderSourceType	OrderSource;
	///报单状态
	TFafexOrderStatusType	OrderStatus;
	///报单类型
	TFafexOrderTypeType	OrderType;
	///今成交数量
	TFafexVolumeType	VolumeTraded;
	///剩余数量
	TFafexVolumeType	VolumeTotal;
	///报单日期
	TFafexDateType	InsertDate;
	///插入时间
	TFafexTimeType	InsertTime;
	///激活时间
	TFafexTimeType	ActiveTime;
	///挂起时间
	TFafexTimeType	SuspendTime;
	///最后修改时间
	TFafexTimeType	UpdateTime;
	///撤销时间
	TFafexTimeType	CancelTime;
	///最后修改交易用户代码
	TFafexUserIDType	ActiveUserID;
	///优先权
	TFafexPriorityType	Priority;
	///按时间排队的序号
	TFafexTimeSortIDType	TimeSortID;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///自然日期
	TFafexDateType	CalendarDate;
	///手续费
	TFafexMoneyType	Fee;
	///平仓盈亏
	TFafexMoneyType	CloseProfit;
	///成交金额
	TFafexMoneyType	Turnover;
};
///执行宣告
struct CFafexExecOrderField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///合约编号
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///本地执行宣告编号
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///数量
	TFafexVolumeType	Volume;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///执行宣告编号
	TFafexExecOrderSysIDType	ExecOrderSysID;
	///报单日期
	TFafexDateType	InsertDate;
	///插入时间
	TFafexTimeType	InsertTime;
	///撤销时间
	TFafexTimeType	CancelTime;
	///执行结果
	TFafexExecResultType	ExecResult;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///自然日期
	TFafexDateType	CalendarDate;
};
///非标组合报单
struct CFafexCombOrderField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///组合报单编号
	TFafexOrderSysIDType	CombOrderSysID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///价格
	TFafexPriceType	LimitPrice;
	///数量
	TFafexVolumeType	VolumeTotalOriginal;
	///本地报单编号
	TFafexOrderLocalIDType	CombOrderLocalID;
	///业务单元
	TFafexBusinessUnitType	BusinessUnit;
	///合约代码1
	TFafexInstrumentIDType	InstrumentID1;
	///买卖方向1
	TFafexDirectionType	Direction1;
	///分腿乘数1
	TFafexLegMultipleType	LegMultiple1;
	///开平标志1
	TFafexOffsetFlagType	OffsetFlag1;
	///投机套保标志1
	TFafexHedgeFlagType	HedgeFlag1;
	///合约代码2
	TFafexInstrumentIDType	InstrumentID2;
	///买卖方向2
	TFafexDirectionType	Direction2;
	///分腿乘数2
	TFafexLegMultipleType	LegMultiple2;
	///开平标志2
	TFafexOffsetFlagType	OffsetFlag2;
	///投机套保标志2
	TFafexHedgeFlagType	HedgeFlag2;
	///合约代码3
	TFafexInstrumentIDType	InstrumentID3;
	///买卖方向3
	TFafexDirectionType	Direction3;
	///分腿乘数3
	TFafexLegMultipleType	LegMultiple3;
	///开平标志3
	TFafexOffsetFlagType	OffsetFlag3;
	///投机套保标志3
	TFafexHedgeFlagType	HedgeFlag3;
	///合约代码4
	TFafexInstrumentIDType	InstrumentID4;
	///买卖方向4
	TFafexDirectionType	Direction4;
	///分腿乘数4
	TFafexLegMultipleType	LegMultiple4;
	///开平标志4
	TFafexOffsetFlagType	OffsetFlag4;
	///投机套保标志4
	TFafexHedgeFlagType	HedgeFlag4;
	///报单来源
	TFafexOrderSourceType	OrderSource;
	///今成交数量
	TFafexVolumeType	VolumeTraded;
	///剩余数量
	TFafexVolumeType	VolumeTotal;
	///报单日期
	TFafexDateType	InsertDate;
	///插入时间
	TFafexTimeType	InsertTime;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///自然日期
	TFafexDateType	CalendarDate;
};
///资金
struct CFafexTradingAccountField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///上次结算准备金
	TFafexMoneyType	PreBalance;
	///当前保证金总额
	TFafexMoneyType	CurrMargin;
	///平仓盈亏
	TFafexMoneyType	CloseProfit;
	///期权权利金收支
	TFafexMoneyType	Premium;
	///入金金额
	TFafexMoneyType	Deposit;
	///出金金额
	TFafexMoneyType	Withdraw;
	///期货结算准备金
	TFafexMoneyType	Balance;
	///可用资金
	TFafexMoneyType	Available;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///冻结的保证金
	TFafexMoneyType	FrozenMargin;
	///冻结的权利金
	TFafexMoneyType	FrozenPremium;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///币种
	TFafexCurrencyType	Currency;
	///可取资金
	TFafexMoneyType	Useable;
	///冻结资金
	TFafexMoneyType	FrozenMoney;
	///手续费支出
	TFafexMoneyType	Fee;
	///持仓盈亏
	TFafexMoneyType	PositionProfit;
};
///管理报单
struct CFafexAdminOrderField
{
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///管理报单命令
	TFafexAdminOrderCommandFlagType	AdminOrderCommand;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///交易会员编号
	TFafexParticipantIDType	ParticipantID;
	///金额
	TFafexMoneyType	Amount;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///管理报单输入
struct CFafexInputAdminOrderField
{
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///管理报单命令
	TFafexAdminOrderCommandFlagType	AdminOrderCommand;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///交易会员编号
	TFafexParticipantIDType	ParticipantID;
	///金额
	TFafexMoneyType	Amount;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///公告
struct CFafexBulletinField
{
	///交易日
	TFafexDateType	TradingDay;
	///公告编号
	TFafexBulletinIDType	BulletinID;
	///序列号
	TFafexSequenceNoType	SequenceNo;
	///公告类型
	TFafexNewsTypeType	NewsType;
	///紧急程度
	TFafexNewsUrgencyType	NewsUrgency;
	///发送时间
	TFafexTimeType	SendTime;
	///消息摘要
	TFafexAbstractType	Abstract;
	///消息来源
	TFafexComeFromType	ComeFrom;
	///消息正文
	TFafexContentType	Content;
	///WEB地址
	TFafexURLLinkType	URLLink;
	///市场代码
	TFafexMarketIDType	MarketID;
	///自然日期
	TFafexDateType	CalendarDate;
};
///交易所数据同步状态
struct CFafexExchangeDataSyncStatusField
{
	///交易日
	TFafexDateType	TradingDay;
	///交易所代码
	TFafexExchangeIDType	ExchangeID;
	///交易所数据同步状态
	TFafexExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///结算组数据同步状态
struct CFafexSGDataSyncStatusField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///交易日
	TFafexDateType	TradingDay;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///结算组数据同步状态
	TFafexSGDataSyncStatusType	SGDataSyncStatus;
};
///合约状态
struct CFafexInstrumentStatusField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///合约交易状态
	TFafexInstrumentStatusType	InstrumentStatus;
	///交易阶段编号
	TFafexTradingSegmentSNType	TradingSegmentSN;
	///进入本状态时间
	TFafexTimeType	EnterTime;
	///进入本状态原因
	TFafexInstStatusEnterReasonType	EnterReason;
	///自然日期
	TFafexDateType	CalendarDate;
};
///实时上场
struct CFafexTBCommandField
{
	///DB命令本地号
	TFafexOrderLocalIDType	CommandLocalID;
	///全局DB命令序号
	TFafexSequenceNoType	CommandNo;
	///DB命令类型
	TFafexCommandTypeType	CommandType;
	///字段名
	TFafexFieldNameType	FieldName;
	///字段内容
	TFafexFieldContentType	FieldContent;
	///备注
	TFafexComeFromType	Comments;
};
///报单查询
struct CFafexQryOrderField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///报单编号
	TFafexOrderSysIDType	OrderSysID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///开始时间
	TFafexTimeType	TimeStart;
	///结束时间
	TFafexTimeType	TimeEnd;
};
///报价查询
struct CFafexQryQuoteField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///报价编号
	TFafexQuoteSysIDType	QuoteSysID;
	///客户代码
	TFafexClientIDType	ClientID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///交易用户代码
	TFafexUserIDType	UserID;
};
///成交查询
struct CFafexQryTradeField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
	///成交编号
	TFafexTradeIDType	TradeID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///开始时间
	TFafexTimeType	TimeStart;
	///结束时间
	TFafexTimeType	TimeEnd;
};
///行情查询
struct CFafexQryMarketDataField
{
	///产品代码
	TFafexProductIDType	ProductID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
};
///客户查询
struct CFafexQryClientField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFafexClientIDType	ClientIDStart;
	///结束客户代码
	TFafexClientIDType	ClientIDEnd;
};
///会员持仓查询
struct CFafexQryPartPositionField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
};
///客户持仓查询
struct CFafexQryClientPositionField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFafexClientIDType	ClientIDStart;
	///结束客户代码
	TFafexClientIDType	ClientIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
	///客户类型
	TFafexClientTypeType	ClientType;
};
///客户持仓查询
struct CFafexQryClientPositionV1Field
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFafexClientIDType	ClientIDStart;
	///结束客户代码
	TFafexClientIDType	ClientIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
};
///交易资金查询
struct CFafexQryPartAccountField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///币种
	TFafexCurrencyType	Currency;
};
///合约查询
struct CFafexQryInstrumentField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///产品组代码
	TFafexProductGroupIDType	ProductGroupID;
	///产品代码
	TFafexProductIDType	ProductID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
};
///合约状态查询
struct CFafexQryInstrumentStatusField
{
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
};
///结算组状态查询
struct CFafexQrySGDataSyncStatusField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///用户在线查询
struct CFafexQryUserSessionField
{
	///起始交易用户代码
	TFafexUserIDType	UserIDStart;
	///结束交易用户代码
	TFafexUserIDType	UserIDEnd;
};
///用户查询
struct CFafexQryUserField
{
	///起始交易用户代码
	TFafexUserIDType	UserIDStart;
	///结束交易用户代码
	TFafexUserIDType	UserIDEnd;
};
///公告查询
struct CFafexQryBulletinField
{
	///交易日
	TFafexDateType	TradingDay;
	///市场代码
	TFafexMarketIDType	MarketID;
	///公告编号
	TFafexBulletinIDType	BulletinID;
	///公告类型
	TFafexNewsTypeType	NewsType;
	///紧急程度
	TFafexNewsUrgencyType	NewsUrgency;
};
///会员查询
struct CFafexQryParticipantField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
};
///保值额度查询
struct CFafexQryHedgeVolumeField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFafexClientIDType	ClientIDStart;
	///结束客户代码
	TFafexClientIDType	ClientIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
};
///合约价位查询
struct CFafexQryMBLMarketDataField
{
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
	///买卖方向
	TFafexDirectionType	Direction;
};
///信用限额查询
struct CFafexQryCreditLimitField
{
	///交易会员编号
	TFafexParticipantIDType	ParticipantID;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
};
///非标组合报单查询
struct CFafexQryCombOrderField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///组合报单编号
	TFafexOrderSysIDType	CombOrderSysID;
	///客户代码
	TFafexClientIDType	ClientID;
	///交易用户代码
	TFafexUserIDType	UserID;
};
///会员资金应答
struct CFafexRspPartAccountField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///上次结算准备金
	TFafexMoneyType	PreBalance;
	///当前保证金总额
	TFafexMoneyType	CurrMargin;
	///平仓盈亏
	TFafexMoneyType	CloseProfit;
	///期权权利金收支
	TFafexMoneyType	Premium;
	///入金金额
	TFafexMoneyType	Deposit;
	///出金金额
	TFafexMoneyType	Withdraw;
	///期货结算准备金
	TFafexMoneyType	Balance;
	///可用资金
	TFafexMoneyType	Available;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///冻结的保证金
	TFafexMoneyType	FrozenMargin;
	///冻结的权利金
	TFafexMoneyType	FrozenPremium;
	///基本准备金
	TFafexMoneyType	BaseReserve;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///可取资金
	TFafexMoneyType	Useable;
	///冻结资金
	TFafexMoneyType	FrozenMoney;
	///币种
	TFafexCurrencyType	Currency;
	///手续费支出
	TFafexMoneyType	Fee;
	///持仓盈亏
	TFafexMoneyType	PositionProfit;
};
///会员持仓应答
struct CFafexRspPartPositionField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///持仓多空方向
	TFafexPosiDirectionType	PosiDirection;
	///上日持仓
	TFafexVolumeType	YdPosition;
	///今日持仓
	TFafexVolumeType	Position;
	///多头冻结
	TFafexVolumeType	LongFrozen;
	///空头冻结
	TFafexVolumeType	ShortFrozen;
	///昨日多头冻结
	TFafexVolumeType	YdLongFrozen;
	///昨日空头冻结
	TFafexVolumeType	YdShortFrozen;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///交易角色
	TFafexTradingRoleType	TradingRole;
};
///客户持仓应答
struct CFafexRspClientPositionField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///持仓多空方向
	TFafexPosiDirectionType	PosiDirection;
	///上日持仓
	TFafexVolumeType	YdPosition;
	///今日持仓
	TFafexVolumeType	Position;
	///多头冻结
	TFafexVolumeType	LongFrozen;
	///空头冻结
	TFafexVolumeType	ShortFrozen;
	///昨日多头冻结
	TFafexVolumeType	YdLongFrozen;
	///昨日空头冻结
	TFafexVolumeType	YdShortFrozen;
	///当日买成交量
	TFafexVolumeType	BuyTradeVolume;
	///当日卖成交量
	TFafexVolumeType	SellTradeVolume;
	///持仓成本
	TFafexMoneyType	PositionCost;
	///昨日持仓成本
	TFafexMoneyType	YdPositionCost;
	///占用的保证金
	TFafexMoneyType	UseMargin;
	///冻结的保证金
	TFafexMoneyType	FrozenMargin;
	///多头冻结的保证金
	TFafexMoneyType	LongFrozenMargin;
	///空头冻结的保证金
	TFafexMoneyType	ShortFrozenMargin;
	///冻结的权利金
	TFafexMoneyType	FrozenPremium;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///上次结算之后平仓盈亏
	TFafexMoneyType	CloseProfit;
	///持仓盈亏
	TFafexMoneyType	PositionProfit;
	///累计开仓成本
	TFafexMoneyType	TotalPositionCost;
	///累计平仓盈亏
	TFafexMoneyType	TotalCloseProfit;
	///累计持仓盈亏
	TFafexMoneyType	TotalPositionProfit;
	///杠杆倍数
	TFafexRatioType	Leverage;
	///接管价格
	TFafexRatioType	LiquidationPrice;
	///资金帐号
	TFafexAccountIDType	AccountID;
	///币种
	TFafexCurrencyType	ClearCurrency;
};
///合约查询应答
struct CFafexRspInstrumentField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///产品代码
	TFafexProductIDType	ProductID;
	///产品组代码
	TFafexProductGroupIDType	ProductGroupID;
	///基础商品代码
	TFafexInstrumentIDType	UnderlyingInstrID;
	///产品类型
	TFafexProductClassType	ProductClass;
	///持仓类型
	TFafexPositionTypeType	PositionType;
	///执行价
	TFafexPriceType	StrikePrice;
	///期权类型
	TFafexOptionsTypeType	OptionsType;
	///合约数量乘数
	TFafexVolumeMultipleType	VolumeMultiple;
	///合约基础商品乘数
	TFafexUnderlyingMultipleType	UnderlyingMultiple;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///合约名称
	TFafexInstrumentNameType	InstrumentName;
	///交割年份
	TFafexYearType	DeliveryYear;
	///交割月
	TFafexMonthType	DeliveryMonth;
	///提前月份
	TFafexAdvanceMonthType	AdvanceMonth;
	///当前是否交易
	TFafexBoolType	IsTrading;
	///创建日
	TFafexDateType	CreateDate;
	///上市日
	TFafexDateType	OpenDate;
	///到期日
	TFafexDateType	ExpireDate;
	///开始交割日
	TFafexDateType	StartDelivDate;
	///最后交割日
	TFafexDateType	EndDelivDate;
	///挂牌基准价
	TFafexPriceType	BasisPrice;
	///市价单最大下单量
	TFafexVolumeType	MaxMarketOrderVolume;
	///市价单最小下单量
	TFafexVolumeType	MinMarketOrderVolume;
	///限价单最大下单量
	TFafexVolumeType	MaxLimitOrderVolume;
	///限价单最小下单量
	TFafexVolumeType	MinLimitOrderVolume;
	///最小变动价位
	TFafexPriceType	PriceTick;
	///交割月自然人开仓
	TFafexMonthCountType	AllowDelivPersonOpen;
	///币种
	TFafexCurrencyType	Currency;
};
///信息查询
struct CFafexQryInformationField
{
	///起始信息代码
	TFafexInformationIDType	InformationIDStart;
	///结束信息代码
	TFafexInformationIDType	InformationIDEnd;
};
///信息查询
struct CFafexInformationField
{
	///信息编号
	TFafexInformationIDType	InformationID;
	///序列号
	TFafexSequenceNoType	SequenceNo;
	///消息正文
	TFafexContentType	Content;
	///正文长度
	TFafexContentLengthType	ContentLength;
	///是否完成
	TFafexBoolType	IsAccomplished;
};
///信用限额
struct CFafexCreditLimitField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///上次结算准备金
	TFafexMoneyType	PreBalance;
	///当前保证金总额
	TFafexMoneyType	CurrMargin;
	///平仓盈亏
	TFafexMoneyType	CloseProfit;
	///期权权利金收支
	TFafexMoneyType	Premium;
	///入金金额
	TFafexMoneyType	Deposit;
	///出金金额
	TFafexMoneyType	Withdraw;
	///期货结算准备金
	TFafexMoneyType	Balance;
	///可用资金
	TFafexMoneyType	Available;
	///交易会员编号
	TFafexParticipantIDType	ParticipantID;
	///结算会员编号
	TFafexParticipantIDType	ClearingPartID;
	///冻结的保证金
	TFafexMoneyType	FrozenMargin;
	///冻结的权利金
	TFafexMoneyType	FrozenPremium;
	///手续费支出
	TFafexMoneyType	Fee;
};
///客户查询应答
struct CFafexRspClientField
{
	///客户代码
	TFafexClientIDType	ClientID;
	///客户名称
	TFafexPartyNameType	ClientName;
	///证件类型
	TFafexIdCardTypeType	IdentifiedCardType;
	///原证件号码
	TFafexIdentifiedCardNoV1Type	UseLess;
	///交易角色
	TFafexTradingRoleType	TradingRole;
	///客户类型
	TFafexClientTypeType	ClientType;
	///是否活跃
	TFafexBoolType	IsActive;
	///会员号
	TFafexParticipantIDType	ParticipantID;
	///证件号码
	TFafexIdentifiedCardNoType	IdentifiedCardNo;
};
///数据流回退
struct CFafexFlowMessageCancelField
{
	///序列系列号
	TFafexSequenceSeriesType	SequenceSeries;
	///交易日
	TFafexDateType	TradingDay;
	///数据中心代码
	TFafexDataCenterIDType	DataCenterID;
	///回退起始序列号
	TFafexSequenceNoType	StartSequenceNo;
	///回退结束序列号
	TFafexSequenceNoType	EndSequenceNo;
};
///心跳
struct CFafexMultiHeartbeatField
{
	///Current Time
	TFafexTimeType	CurrTime;
	///MultiCastIP
	TFafexMultiIPAddressType	MultiCastIP;
};
///出入金查询
struct CFafexQryAccountDepositDetailField
{
	///出入金流水序号
	TFafexSequenceNoType	DepositNo;
	///起始会员代码
	TFafexAccountIDType	AccountIDStart;
	///结束会员代码
	TFafexAccountIDType	AccountIDEnd;
};
///实时上场查询
struct CFafexQryTBCommandDetailField
{
	///全局DB命令序号
	TFafexSequenceNoType	CommandNo;
	///DB命令类型
	TFafexCommandTypeType	CommandType;
};
///查询手续费
struct CFafexQryPartClientFeeField
{
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户编码
	TFafexClientIDType	ClientID;
	///产品合约代码
	TFafexInstrumentIDType	InstrumentID;
};
///查询客户持仓明细
struct CFafexQryClientPositionDetailField
{
	///起始会员代码
	TFafexParticipantIDType	PartIDStart;
	///结束会员代码
	TFafexParticipantIDType	PartIDEnd;
	///起始客户代码
	TFafexClientIDType	ClientIDStart;
	///结束客户代码
	TFafexClientIDType	ClientIDEnd;
	///起始合约代码
	TFafexInstrumentIDType	InstIDStart;
	///结束合约代码
	TFafexInstrumentIDType	InstIDEnd;
};
///输入场外成交对
struct CFafexInputOTCTradeField
{
	///成交编号
	TFafexTradeIDType	TradeID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///成交对本地编号
	TFafexOrderLocalIDType	TradeLocalID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///价格
	TFafexPriceType	Price;
	///数量
	TFafexVolumeType	Volume;
	///买方会员代码
	TFafexParticipantIDType	BuyParticipantID;
	///买方客户代码
	TFafexClientIDType	BuyClientID;
	///买方交易用户代码
	TFafexUserIDType	BuyUserID;
	///买方本地报单编号
	TFafexOrderLocalIDType	BuyOrderLocalID;
	///买方组合开平标志
	TFafexCombOffsetFlagType	BuyCombOffsetFlag;
	///买方组合投机套保标志
	TFafexCombHedgeFlagType	BuyCombHedgeFlag;
	///卖方方会员代码
	TFafexParticipantIDType	SellParticipantID;
	///卖方客户代码
	TFafexClientIDType	SellClientID;
	///卖方交易用户代码
	TFafexUserIDType	SellUserID;
	///卖方组合开平标志
	TFafexCombOffsetFlagType	SellCombOffsetFlag;
	///卖方组合套保标志
	TFafexCombHedgeFlagType	SellCombHedgeFlag;
	///卖方本地报单编号
	TFafexOrderLocalIDType	SellOrderLocalID;
	///OTC类型
	TFafexOTCTypeType	OTCType;
	///状态
	TFafexOTCStatusType	Status;
	///错误代码
	TFafexErrorIDType	OTCErrorID;
	///错误信息
	TFafexErrorMsgType	OTCErrorMsg;
	///备注
	TFafexComeFromType	Comments;
};
///场外成交对
struct CFafexOTCTradeField
{
	///交易日
	TFafexDateType	TradingDay;
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///结算编号
	TFafexSettlementIDType	SettlementID;
	///成交编号
	TFafexTradeIDType	TradeID;
	///交易用户代码
	TFafexUserIDType	UserID;
	///成交对本地编号
	TFafexOrderLocalIDType	TradeLocalID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///价格
	TFafexPriceType	Price;
	///数量
	TFafexVolumeType	Volume;
	///买方会员代码
	TFafexParticipantIDType	BuyParticipantID;
	///买方客户代码
	TFafexClientIDType	BuyClientID;
	///买方交易用户代码
	TFafexUserIDType	BuyUserID;
	///买方本地报单编号
	TFafexOrderLocalIDType	BuyOrderLocalID;
	///买方组合开平标志
	TFafexCombOffsetFlagType	BuyCombOffsetFlag;
	///买方组合投机套保标志
	TFafexCombHedgeFlagType	BuyCombHedgeFlag;
	///卖方方会员代码
	TFafexParticipantIDType	SellParticipantID;
	///卖方客户代码
	TFafexClientIDType	SellClientID;
	///卖方交易用户代码
	TFafexUserIDType	SellUserID;
	///卖方组合开平标志
	TFafexCombOffsetFlagType	SellCombOffsetFlag;
	///卖方组合套保标志
	TFafexCombHedgeFlagType	SellCombHedgeFlag;
	///卖方本地报单编号
	TFafexOrderLocalIDType	SellOrderLocalID;
	///OTC类型
	TFafexOTCTypeType	OTCType;
	///状态
	TFafexOTCStatusType	Status;
	///错误代码
	TFafexErrorIDType	OTCErrorID;
	///错误信息
	TFafexErrorMsgType	OTCErrorMsg;
	///备注
	TFafexComeFromType	Comments;
};
///更新行情
struct CFafexUpdateMarketDataField
{
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///资金费率
	TFafexRatioType	FundingRate;
	///合理价格
	TFafexPriceType	FairPrice;
	///今结算
	TFafexPriceType	SettlementPrice;
};
///仓位保证金操作
struct CFafexPositionMarginActionField
{
	///结算组代码
	TFafexSettlementGroupIDType	SettlementGroupID;
	///合约代码
	TFafexInstrumentIDType	InstrumentID;
	///会员代码
	TFafexParticipantIDType	ParticipantID;
	///客户代码
	TFafexClientIDType	ClientID;
	///投机套保标志
	TFafexHedgeFlagType	HedgeFlag;
	///持仓多空方向
	TFafexPosiDirectionType	PosiDirection;
	///值
	TFafexRatioType	Value;
	///操作类型
	TFafexPositionActionTypeType	ActionType;
	///备注
	TFafexComeFromType	Comments;
};

#endif
