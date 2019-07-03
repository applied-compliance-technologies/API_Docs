/////////////////////////////////////////////////////////////////////////
///@file FafexApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
/////////////////////////////////////////////////////////////////////////

#if !defined(Fafex_STRUCT_H)
#define Fafex_STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FafexApiDataType.h"

///��Ϣ�ַ�
struct CFafexDisseminationField
{
	///����ϵ�к�
	TFafexSequenceSeriesType	SequenceSeries;
	///���к�
	TFafexSequenceNoType	SequenceNo;
};
///��Ӧ��Ϣ
struct CFafexRspInfoField
{
	///�������
	TFafexErrorIDType	ErrorID;
	///������Ϣ
	TFafexErrorMsgType	ErrorMsg;
};
///ͨѶ�׶�
struct CFafexCommPhaseField
{
	///������
	TFafexDateType	TradingDay;
	///ͨѶʱ�κ�
	TFafexCommPhaseNoType	CommPhaseNo;
};
///������������
struct CFafexExchangeTradingDayField
{
	///������
	TFafexDateType	TradingDay;
	///����������
	TFafexExchangeIDType	ExchangeID;
};
///����Ự
struct CFafexSettlementSessionField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
};
///��ǰʱ��
struct CFafexCurrentTimeField
{
	///��ǰ����
	TFafexDateType	CurrDate;
	///��ǰʱ��
	TFafexTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TFafexMillisecType	CurrMillisec;
};
///�û���¼����
struct CFafexReqUserLoginField
{
	///������
	TFafexDateType	TradingDay;
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///����
	TFafexPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TFafexProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFafexProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFafexProtocolInfoType	ProtocolInfo;
	///�������Ĵ���
	TFafexDataCenterIDType	DataCenterID;
};
///�û���¼Ӧ��
struct CFafexRspUserLoginField
{
	///������
	TFafexDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TFafexTimeType	LoginTime;
	///��󱾵ر�����
	TFafexOrderLocalIDType	MaxOrderLocalID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///����ϵͳ����
	TFafexTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TFafexDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TFafexSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TFafexSequenceNoType	UserFlowSize;
};
///�û��ǳ�����
struct CFafexReqUserLogoutField
{
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
};
///�û��ǳ�Ӧ��
struct CFafexRspUserLogoutField
{
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
};
///���뱨��
struct CFafexInputOrderField
{
	///�������
	TFafexOrderSysIDType	OrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�����۸�����
	TFafexOrderPriceTypeType	OrderPriceType;
	///��������
	TFafexDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFafexCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFafexCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFafexPriceType	LimitPrice;
	///����
	TFafexVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFafexTimeConditionType	TimeCondition;
	///GTD����
	TFafexDateType	GTDDate;
	///�ɽ�������
	TFafexVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFafexVolumeType	MinVolume;
	///��������
	TFafexContingentConditionType	ContingentCondition;
	///ֹ���
	TFafexPriceType	StopPrice;
	///ǿƽԭ��
	TFafexForceCloseReasonType	ForceCloseReason;
	///���ر������
	TFafexOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFafexBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
};
///��������
struct CFafexOrderActionField
{
	///�������
	TFafexOrderSysIDType	OrderSysID;
	///���ر������
	TFafexOrderLocalIDType	OrderLocalID;
	///����������־
	TFafexActionFlagType	ActionFlag;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�۸�
	TFafexPriceType	LimitPrice;
	///�����仯
	TFafexVolumeType	VolumeChange;
	///�������ر��
	TFafexOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
};
///OTC����
struct CFafexOTCOrderField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///OTC�������
	TFafexOTCOrderSysIDType	OTCOrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��������
	TFafexDirectionType	Direction;
	///��ƽ��־
	TFafexOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�۸�
	TFafexPriceType	Price;
	///����
	TFafexVolumeType	Volume;
	///���ַ���Ա����
	TFafexParticipantIDType	OtherParticipantID;
	///���ַ��ͻ�����
	TFafexClientIDType	OtherClientID;
	///���ַ������û�����
	TFafexUserIDType	OtherUserID;
	///���ַ���ƽ��־
	TFafexOffsetFlagType	OtherOffsetFlag;
	///���ַ��ױ���־
	TFafexHedgeFlagType	OtherHedgeFlag;
	///����OTC�������
	TFafexOrderLocalIDType	OTCOrderLocalID;
	///OTC����״̬
	TFafexOTCOrderStatusType	OTCOrderStatus;
	///����ʱ��
	TFafexTimeType	InsertTime;
	///����ʱ��
	TFafexTimeType	CancelTime;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///���ַ������Ա���
	TFafexParticipantIDType	OtherClearingPartID;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///���뱨��
struct CFafexInputQuoteField
{
	///���۱��
	TFafexQuoteSysIDType	QuoteSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///����
	TFafexVolumeType	Volume;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///���ر��۱��
	TFafexOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TFafexCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TFafexCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TFafexPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TFafexCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TFafexCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TFafexPriceType	AskPrice;
};
///���۲���
struct CFafexQuoteActionField
{
	///���۱��
	TFafexQuoteSysIDType	QuoteSysID;
	///���ر��۱��
	TFafexOrderLocalIDType	QuoteLocalID;
	///����������־
	TFafexActionFlagType	ActionFlag;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�������ر��
	TFafexOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
};
///����ִ������
struct CFafexInputExecOrderField
{
	///��Լ���
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///����ִ��������
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///����
	TFafexVolumeType	Volume;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
};
///ִ���������
struct CFafexExecOrderActionField
{
	///ִ��������
	TFafexExecOrderSysIDType	ExecOrderSysID;
	///����ִ��������
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///����������־
	TFafexActionFlagType	ActionFlag;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�������ر��
	TFafexOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
};
///�û���¼�˳�
struct CFafexUserLogoutField
{
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
};
///�û������޸�
struct CFafexUserPasswordUpdateField
{
	///�����û�����
	TFafexUserIDType	UserID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///������
	TFafexPasswordType	OldPassword;
	///������
	TFafexPasswordType	NewPassword;
};
///����Ǳ���ϱ���
struct CFafexInputCombOrderField
{
	///��ϱ������
	TFafexOrderSysIDType	CombOrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�۸�
	TFafexPriceType	LimitPrice;
	///����
	TFafexVolumeType	VolumeTotalOriginal;
	///���ر������
	TFafexOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///��Լ����1
	TFafexInstrumentIDType	InstrumentID1;
	///��������1
	TFafexDirectionType	Direction1;
	///���ȳ���1
	TFafexLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TFafexOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TFafexHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TFafexInstrumentIDType	InstrumentID2;
	///��������2
	TFafexDirectionType	Direction2;
	///���ȳ���2
	TFafexLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TFafexOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TFafexHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TFafexInstrumentIDType	InstrumentID3;
	///��������3
	TFafexDirectionType	Direction3;
	///���ȳ���3
	TFafexLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TFafexOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TFafexHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TFafexInstrumentIDType	InstrumentID4;
	///��������4
	TFafexDirectionType	Direction4;
	///���ȳ���4
	TFafexLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TFafexOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TFafexHedgeFlagType	HedgeFlag4;
};
///ǿ���û��˳�
struct CFafexForceUserExitField
{
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�����û�����
	TFafexUserIDType	UserID;
};
///�����ڴ��
struct CFafexDumpMemTableField
{
	///�ڴ������
	TFafexTableNameType	TableName;
};
///�ʽ��˻������
struct CFafexAccountDepositField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TFafexOrderLocalIDType	DepositLocalID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
	///�ʽ��˺�
	TFafexAccountIDType	AccountID;
	///�������
	TFafexMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TFafexSequenceNoType	DepositNo;
	///����
	TFafexCurrencyType	Currency;
	///�ʽ��������
	TFafexAccountActionTypeType	ActionType;
	///��ע
	TFafexComeFromType	Comments;
};
///�����
struct CFafexAccountDepositDetailField
{
	///������
	TFafexDateType	TradingDay;
	///������
	TFafexSettlementIDType	SettlementID;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TFafexOrderLocalIDType	DepositLocalID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
	///�ʽ��˺�
	TFafexAccountIDType	AccountID;
	///�������
	TFafexMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TFafexSequenceNoType	DepositNo;
	///����
	TFafexCurrencyType	Currency;
	///�ʽ��������
	TFafexAccountActionTypeType	ActionType;
	///��ע
	TFafexComeFromType	Comments;
	///������
	TFafexTransStatusType	Status;
	///��������
	TFafexDateType	CalendarDate;
	///����ʱ��
	TFafexTimeType	InsertTime;
};
///ʵʱ�ϳ�
struct CFafexTBCommandDetailField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///DB����غ�
	TFafexOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TFafexSequenceNoType	CommandNo;
	///DB��������
	TFafexCommandTypeType	CommandType;
	///�ֶ���
	TFafexFieldNameType	FieldName;
	///�ֶ�����
	TFafexFieldContentType	FieldContent;
	///��ע
	TFafexComeFromType	Comments;
	///������
	TFafexTransStatusType	Status;
	///��������
	TFafexDateType	CalendarDate;
	///����ʱ��
	TFafexTimeType	InsertTime;
};
///������
struct CFafexPartClientFeeField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ���
	TFafexClientIDType	ClientID;
	///��Լ�ı��
	TFafexInstrumentIDType	InstrumentID;
	///�ɽ���ɫ
	TFafexMatchRoleType	MatchRole;
	///���������Ѱ�����
	TFafexRatioType	OpenFeeRate;
	///���������Ѱ�����
	TFafexRatioType	OpenFeeAmt;
	///ƽ�������Ѱ�����
	TFafexRatioType	OffsetFeeRate;
	///ƽ�������Ѱ�����
	TFafexRatioType	OffsetFeeAmt;
	///ƽ��������Ѱ�����
	TFafexRatioType	OTFeeRate;
	///ƽ��������Ѱ�����
	TFafexRatioType	OTFeeAmt;
};
///�ͻ��ֲ���ϸ
struct CFafexClientPositionDetailField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�ɽ�����
	TFafexDateType	TradeDate;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��������
	TFafexDirectionType	Direction;
	///�ɽ����
	TFafexTradeIDType	TradeID;
	///�ɽ�����
	TFafexTradeTypeType	TradeType;
	///���տ�ƽ����
	TFafexVolumeType	Position;
	///�ɽ��۸�
	TFafexPriceType	Price;
	///�ֲֳɱ����������ѵ�
	TFafexMoneyType	PositionCost;
	///�ֲֳɱ�
	TFafexMoneyType	PositionMoney;
	///�Ƿ���ղ�
	TFafexBoolType	IsToday;
	///ռ�õı�֤��
	TFafexMoneyType	UseMargin;
	///������
	TFafexMoneyType	Fee;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
};
///��Ա
struct CFafexParticipantField
{
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///��Ա����
	TFafexParticipantNameType	ParticipantName;
	///��Ա���
	TFafexParticipantAbbrType	ParticipantAbbr;
	///��Ա����
	TFafexMemberTypeType	MemberType;
	///�Ƿ��Ծ
	TFafexBoolType	IsActive;
};
///�û�
struct CFafexUserField
{
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�����û�����
	TFafexUserTypeType	UserType;
	///����
	TFafexPasswordType	Password;
	///����ԱȨ��
	TFafexUserActiveType	IsActive;
};
///�ͻ�
struct CFafexClientField
{
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�ͻ�����
	TFafexPartyNameType	ClientName;
	///֤������
	TFafexIdCardTypeType	IdentifiedCardType;
	///֤������
	TFafexIdentifiedCardNoType	IdentifiedCardNo;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
	///�ͻ�����
	TFafexClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFafexBoolType	IsActive;
	///�ͻ���������
	TFafexHedgeFlagType	HedgeFlag;
};
///�û��Ự
struct CFafexUserSessionField
{
	///ǰ�ñ��
	TFafexFrontIDType	FrontID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�����û�����
	TFafexUserTypeType	UserType;
	///�Ự���
	TFafexSessionIDType	SessionID;
	///��¼ʱ��
	TFafexTimeType	LoginTime;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///IP��ַ
	TFafexIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TFafexProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFafexProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFafexProtocolInfoType	ProtocolInfo;
};
///��Ʒ��
struct CFafexProductGroupField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFafexProductGroupIDType	ProductGroupID;
	///��Ʒ������
	TFafexProductGroupNameType	ProductGroupName;
	///��Ʒ����
	TFafexCommodityIDType	CommodityID;
};
///��Ʒ
struct CFafexProductField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFafexProductIDType	ProductID;
	///��Ʒ�����
	TFafexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFafexProductNameType	ProductName;
	///��Ʒ����
	TFafexProductClassType	ProductClass;
};
///��Լ
struct CFafexInstrumentField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFafexProductIDType	ProductID;
	///��Ʒ�����
	TFafexProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TFafexInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TFafexProductClassType	ProductClass;
	///�ֲ�����
	TFafexPositionTypeType	PositionType;
	///ִ�м�
	TFafexPriceType	StrikePrice;
	///��Ȩ����
	TFafexOptionsTypeType	OptionsType;
	///��Լ��������
	TFafexVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TFafexUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Լ����
	TFafexInstrumentNameType	InstrumentName;
	///�������
	TFafexYearType	DeliveryYear;
	///������
	TFafexMonthType	DeliveryMonth;
	///��ǰ�·�
	TFafexAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TFafexBoolType	IsTrading;
	///�Ƽ۱���
	TFafexCurrencyType	PriceCurrency;
	///�������
	TFafexCurrencyType	ClearCurrency;
	///�Ƿ����Լ
	TFafexBoolType	IsInverse;
	///��Լ��������
	TFafexCurrencyType	BaseCurrency;
	///��֤��۸�����
	TFafexMarginPriceTypeType	MarginPriceType;
};
///��Ͻ��׺�Լ�ĵ���
struct CFafexCombinationLegField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ϻ�Լ����
	TFafexInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TFafexLegIDType	LegID;
	///���Ⱥ�Լ����
	TFafexInstrumentIDType	LegInstrumentID;
	///��������
	TFafexDirectionType	Direction;
	///���ȳ���
	TFafexLegMultipleType	LegMultiple;
	///�Ƶ�����
	TFafexImplyLevelType	ImplyLevel;
};
///��Ա��Լ�ֲ�
struct CFafexPartPositionField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFafexPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFafexVolumeType	YdPosition;
	///���ճֲ�
	TFafexVolumeType	Position;
	///��ͷ����
	TFafexVolumeType	LongFrozen;
	///��ͷ����
	TFafexVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFafexVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFafexVolumeType	YdShortFrozen;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
};
///�ͻ���Լ�ֲ�
struct CFafexClientPositionField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFafexPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFafexVolumeType	YdPosition;
	///���ճֲ�
	TFafexVolumeType	Position;
	///��ͷ����
	TFafexVolumeType	LongFrozen;
	///��ͷ����
	TFafexVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFafexVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFafexVolumeType	YdShortFrozen;
	///������ɽ���
	TFafexVolumeType	BuyTradeVolume;
	///�������ɽ���
	TFafexVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TFafexMoneyType	PositionCost;
	///���ճֲֳɱ�
	TFafexMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TFafexMoneyType	UseMargin;
	///����ı�֤��
	TFafexMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TFafexMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TFafexMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TFafexMoneyType	FrozenPremium;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�ϴν���֮��ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFafexMoneyType	PositionProfit;
	///�ۼƿ��ֳɱ�
	TFafexMoneyType	TotalPositionCost;
	///�ۼ�ƽ��ӯ��
	TFafexMoneyType	TotalCloseProfit;
	///�ۼƳֲ�ӯ��
	TFafexMoneyType	TotalPositionProfit;
	///�ܸ˱���
	TFafexRatioType	Leverage;
	///�ӹܼ۸�
	TFafexRatioType	LiquidationPrice;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///����
	TFafexCurrencyType	ClearCurrency;
};
///��ֵ�����
struct CFafexHedgeVolumeField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��ͷ��ֵ������������
	TFafexVolumeType	LongVolumeOriginal;
	///��ͷ��ֵ������������
	TFafexVolumeType	ShortVolumeOriginal;
	///��ͷ��ֵ���
	TFafexVolumeType	LongVolume;
	///��ͷ��ֵ���
	TFafexVolumeType	ShortVolume;
};
///�г�����
struct CFafexMarketDataField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///���¼�
	TFafexPriceType	LastPrice;
	///�����
	TFafexPriceType	PreSettlementPrice;
	///������
	TFafexPriceType	PreClosePrice;
	///��ֲ���
	TFafexLargeVolumeType	PreOpenInterest;
	///����
	TFafexPriceType	OpenPrice;
	///��߼�
	TFafexPriceType	HighestPrice;
	///��ͼ�
	TFafexPriceType	LowestPrice;
	///����
	TFafexVolumeType	Volume;
	///�ɽ����
	TFafexMoneyType	Turnover;
	///�ֲ���
	TFafexLargeVolumeType	OpenInterest;
	///������
	TFafexPriceType	ClosePrice;
	///�����
	TFafexPriceType	SettlementPrice;
	///��ͣ���
	TFafexPriceType	UpperLimitPrice;
	///��ͣ���
	TFafexPriceType	LowerLimitPrice;
	///����ʵ��
	TFafexRatioType	PreDelta;
	///����ʵ��
	TFafexRatioType	CurrDelta;
	///����޸�ʱ��
	TFafexTimeType	UpdateTime;
	///����޸ĺ���
	TFafexMillisecType	UpdateMillisec;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�ʽ����
	TFafexRatioType	FundingRate;
	///����۸�
	TFafexPriceType	FairPrice;
};
///����г�����
struct CFafexDepthMarketDataField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///���¼�
	TFafexPriceType	LastPrice;
	///�����
	TFafexPriceType	PreSettlementPrice;
	///������
	TFafexPriceType	PreClosePrice;
	///��ֲ���
	TFafexLargeVolumeType	PreOpenInterest;
	///����
	TFafexPriceType	OpenPrice;
	///��߼�
	TFafexPriceType	HighestPrice;
	///��ͼ�
	TFafexPriceType	LowestPrice;
	///����
	TFafexVolumeType	Volume;
	///�ɽ����
	TFafexMoneyType	Turnover;
	///�ֲ���
	TFafexLargeVolumeType	OpenInterest;
	///������
	TFafexPriceType	ClosePrice;
	///�����
	TFafexPriceType	SettlementPrice;
	///��ͣ���
	TFafexPriceType	UpperLimitPrice;
	///��ͣ���
	TFafexPriceType	LowerLimitPrice;
	///����ʵ��
	TFafexRatioType	PreDelta;
	///����ʵ��
	TFafexRatioType	CurrDelta;
	///����޸�ʱ��
	TFafexTimeType	UpdateTime;
	///����޸ĺ���
	TFafexMillisecType	UpdateMillisec;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�����һ
	TFafexPriceType	BidPrice1;
	///������һ
	TFafexVolumeType	BidVolume1;
	///������һ
	TFafexPriceType	AskPrice1;
	///������һ
	TFafexVolumeType	AskVolume1;
	///����۶�
	TFafexPriceType	BidPrice2;
	///��������
	TFafexVolumeType	BidVolume2;
	///�����۶�
	TFafexPriceType	AskPrice2;
	///��������
	TFafexVolumeType	AskVolume2;
	///�������
	TFafexPriceType	BidPrice3;
	///��������
	TFafexVolumeType	BidVolume3;
	///��������
	TFafexPriceType	AskPrice3;
	///��������
	TFafexVolumeType	AskVolume3;
	///�������
	TFafexPriceType	BidPrice4;
	///��������
	TFafexVolumeType	BidVolume4;
	///��������
	TFafexPriceType	AskPrice4;
	///��������
	TFafexVolumeType	AskVolume4;
	///�������
	TFafexPriceType	BidPrice5;
	///��������
	TFafexVolumeType	BidVolume5;
	///��������
	TFafexPriceType	AskPrice5;
	///��������
	TFafexVolumeType	AskVolume5;
	///�������
	TFafexPriceType	BidPrice6;
	///��������
	TFafexVolumeType	BidVolume6;
	///��������
	TFafexPriceType	AskPrice6;
	///��������
	TFafexVolumeType	AskVolume6;
	///�������
	TFafexPriceType	BidPrice7;
	///��������
	TFafexVolumeType	BidVolume7;
	///��������
	TFafexPriceType	AskPrice7;
	///��������
	TFafexVolumeType	AskVolume7;
	///����۰�
	TFafexPriceType	BidPrice8;
	///��������
	TFafexVolumeType	BidVolume8;
	///�����۰�
	TFafexPriceType	AskPrice8;
	///��������
	TFafexVolumeType	AskVolume8;
	///����۾�
	TFafexPriceType	BidPrice9;
	///��������
	TFafexVolumeType	BidVolume9;
	///�����۾�
	TFafexPriceType	AskPrice9;
	///��������
	TFafexVolumeType	AskVolume9;
	///�����ʮ
	TFafexPriceType	BidPrice10;
	///������ʮ
	TFafexVolumeType	BidVolume10;
	///������ʮ
	TFafexPriceType	AskPrice10;
	///������ʮ
	TFafexVolumeType	AskVolume10;
	///��Ȼ����
	TFafexDateType	CalendarDate;
	///�ʽ����
	TFafexPriceType	FundingRate;
	///����۸�
	TFafexPriceType	FairPrice;
};
///�ּ۱�
struct CFafexMBLMarketDataField
{
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��������
	TFafexDirectionType	Direction;
	///�۸�
	TFafexPriceType	Price;
	///����
	TFafexVolumeType	Volume;
};
///��������
struct CFafexAliasDefineField
{
	///��ʼλ��
	TFafexStartPosType	StartPos;
	///����
	TFafexAliasType	Alias;
	///ԭ��
	TFafexOriginalTextType	OriginalText;
};
///�����������
struct CFafexMarketDataBaseField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�����
	TFafexPriceType	PreSettlementPrice;
	///������
	TFafexPriceType	PreClosePrice;
	///��ֲ���
	TFafexLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TFafexRatioType	PreDelta;
};
///���龲̬����
struct CFafexMarketDataStaticField
{
	///����
	TFafexPriceType	OpenPrice;
	///��߼�
	TFafexPriceType	HighestPrice;
	///��ͼ�
	TFafexPriceType	LowestPrice;
	///������
	TFafexPriceType	ClosePrice;
	///��ͣ���
	TFafexPriceType	UpperLimitPrice;
	///��ͣ���
	TFafexPriceType	LowerLimitPrice;
	///�����
	TFafexPriceType	SettlementPrice;
	///����ʵ��
	TFafexRatioType	CurrDelta;
};
///�������³ɽ�����
struct CFafexMarketDataLastMatchField
{
	///���¼�
	TFafexPriceType	LastPrice;
	///����
	TFafexVolumeType	Volume;
	///�ɽ����
	TFafexMoneyType	Turnover;
	///�ֲ���
	TFafexLargeVolumeType	OpenInterest;
};
///�������ż�����
struct CFafexMarketDataBestPriceField
{
	///�����һ
	TFafexPriceType	BidPrice1;
	///������һ
	TFafexVolumeType	BidVolume1;
	///������һ
	TFafexPriceType	AskPrice1;
	///������һ
	TFafexVolumeType	AskVolume1;
};
///�����������������
struct CFafexMarketDataBid23Field
{
	///����۶�
	TFafexPriceType	BidPrice2;
	///��������
	TFafexVolumeType	BidVolume2;
	///�������
	TFafexPriceType	BidPrice3;
	///��������
	TFafexVolumeType	BidVolume3;
};
///������������������
struct CFafexMarketDataAsk23Field
{
	///�����۶�
	TFafexPriceType	AskPrice2;
	///��������
	TFafexVolumeType	AskVolume2;
	///��������
	TFafexPriceType	AskPrice3;
	///��������
	TFafexVolumeType	AskVolume3;
};
///���������ġ�������
struct CFafexMarketDataBid45Field
{
	///�������
	TFafexPriceType	BidPrice4;
	///��������
	TFafexVolumeType	BidVolume4;
	///�������
	TFafexPriceType	BidPrice5;
	///��������
	TFafexVolumeType	BidVolume5;
};
///���������ġ�������
struct CFafexMarketDataAsk45Field
{
	///��������
	TFafexPriceType	AskPrice4;
	///��������
	TFafexVolumeType	AskVolume4;
	///��������
	TFafexPriceType	AskPrice5;
	///��������
	TFafexVolumeType	AskVolume5;
};
///�������ʱ������
struct CFafexMarketDataUpdateTimeField
{
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TFafexTimeType	UpdateTime;
	///����޸ĺ���
	TFafexMillisecType	UpdateMillisec;
	///Calendar Date
	TFafexDateType	CalendarDate;
};
///������������������
struct CFafexMarketDataBid67Field
{
	///�������
	TFafexPriceType	BidPrice6;
	///��������
	TFafexVolumeType	BidVolume6;
	///�������
	TFafexPriceType	BidPrice7;
	///��������
	TFafexVolumeType	BidVolume7;
};
///������������������
struct CFafexMarketDataAsk67Field
{
	///��������
	TFafexPriceType	AskPrice6;
	///��������
	TFafexVolumeType	AskVolume6;
	///��������
	TFafexPriceType	AskPrice7;
	///��������
	TFafexVolumeType	AskVolume7;
};
///��������ˡ�������
struct CFafexMarketDataBid89Field
{
	///����۰�
	TFafexPriceType	BidPrice8;
	///��������
	TFafexVolumeType	BidVolume8;
	///����۾�
	TFafexPriceType	BidPrice9;
	///��������
	TFafexVolumeType	BidVolume9;
};
///���������ˡ�������
struct CFafexMarketDataAsk89Field
{
	///�����۰�
	TFafexPriceType	AskPrice8;
	///��������
	TFafexVolumeType	AskVolume8;
	///�����۾�
	TFafexPriceType	AskPrice9;
	///��������
	TFafexVolumeType	AskVolume9;
};
///��������ʮ����
struct CFafexMarketDataBid10Field
{
	///�����ʮ
	TFafexPriceType	BidPrice10;
	///������ʮ
	TFafexVolumeType	BidVolume10;
};
///��������ʮ����
struct CFafexMarketDataAsk10Field
{
	///������ʮ
	TFafexPriceType	AskPrice10;
	///������ʮ
	TFafexVolumeType	AskVolume10;
};
///����
struct CFafexQuoteField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///���۱��
	TFafexQuoteSysIDType	QuoteSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///����
	TFafexVolumeType	Volume;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///���ر��۱��
	TFafexOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TFafexCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TFafexCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TFafexPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TFafexCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TFafexCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TFafexPriceType	AskPrice;
	///����ʱ��
	TFafexTimeType	InsertTime;
	///����ʱ��
	TFafexTimeType	CancelTime;
	///�ɽ�ʱ��
	TFafexTimeType	TradeTime;
	///�򷽱������
	TFafexOrderSysIDType	BidOrderSysID;
	///�����������
	TFafexOrderSysIDType	AskOrderSysID;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///�ɽ�
struct CFafexTradeField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�ɽ����
	TFafexTradeIDType	TradeID;
	///��������
	TFafexDirectionType	Direction;
	///�������
	TFafexOrderSysIDType	OrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��ƽ��־
	TFafexOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�۸�
	TFafexPriceType	Price;
	///����
	TFafexVolumeType	Volume;
	///�ɽ�ʱ��
	TFafexTimeType	TradeTime;
	///�ɽ�����
	TFafexTradeTypeType	TradeType;
	///�ɽ�����Դ
	TFafexPriceSourceType	PriceSource;
	///�����û�����
	TFafexUserIDType	UserID;
	///���ر������
	TFafexOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///��Ȼ����
	TFafexDateType	CalendarDate;
	///�ɽ���ɫ
	TFafexMatchRoleType	MatchRole;
	///������
	TFafexMoneyType	Fee;
	///ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///�ɽ����
	TFafexMoneyType	Turnover;
	///�����۸�����
	TFafexOrderPriceTypeType	OrderPriceType;
};
///����
struct CFafexOrderField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�������
	TFafexOrderSysIDType	OrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�����۸�����
	TFafexOrderPriceTypeType	OrderPriceType;
	///��������
	TFafexDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFafexCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFafexCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFafexPriceType	LimitPrice;
	///����
	TFafexVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFafexTimeConditionType	TimeCondition;
	///GTD����
	TFafexDateType	GTDDate;
	///�ɽ�������
	TFafexVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFafexVolumeType	MinVolume;
	///��������
	TFafexContingentConditionType	ContingentCondition;
	///ֹ���
	TFafexPriceType	StopPrice;
	///ǿƽԭ��
	TFafexForceCloseReasonType	ForceCloseReason;
	///���ر������
	TFafexOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFafexBoolType	IsAutoSuspend;
	///������Դ
	TFafexOrderSourceType	OrderSource;
	///����״̬
	TFafexOrderStatusType	OrderStatus;
	///��������
	TFafexOrderTypeType	OrderType;
	///��ɽ�����
	TFafexVolumeType	VolumeTraded;
	///ʣ������
	TFafexVolumeType	VolumeTotal;
	///��������
	TFafexDateType	InsertDate;
	///����ʱ��
	TFafexTimeType	InsertTime;
	///����ʱ��
	TFafexTimeType	ActiveTime;
	///����ʱ��
	TFafexTimeType	SuspendTime;
	///����޸�ʱ��
	TFafexTimeType	UpdateTime;
	///����ʱ��
	TFafexTimeType	CancelTime;
	///����޸Ľ����û�����
	TFafexUserIDType	ActiveUserID;
	///����Ȩ
	TFafexPriorityType	Priority;
	///��ʱ���Ŷӵ����
	TFafexTimeSortIDType	TimeSortID;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///��Ȼ����
	TFafexDateType	CalendarDate;
	///������
	TFafexMoneyType	Fee;
	///ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///�ɽ����
	TFafexMoneyType	Turnover;
};
///ִ������
struct CFafexExecOrderField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///��Լ���
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///����ִ��������
	TFafexOrderLocalIDType	ExecOrderLocalID;
	///����
	TFafexVolumeType	Volume;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///ִ��������
	TFafexExecOrderSysIDType	ExecOrderSysID;
	///��������
	TFafexDateType	InsertDate;
	///����ʱ��
	TFafexTimeType	InsertTime;
	///����ʱ��
	TFafexTimeType	CancelTime;
	///ִ�н��
	TFafexExecResultType	ExecResult;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///�Ǳ���ϱ���
struct CFafexCombOrderField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///��ϱ������
	TFafexOrderSysIDType	CombOrderSysID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�۸�
	TFafexPriceType	LimitPrice;
	///����
	TFafexVolumeType	VolumeTotalOriginal;
	///���ر������
	TFafexOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TFafexBusinessUnitType	BusinessUnit;
	///��Լ����1
	TFafexInstrumentIDType	InstrumentID1;
	///��������1
	TFafexDirectionType	Direction1;
	///���ȳ���1
	TFafexLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TFafexOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TFafexHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TFafexInstrumentIDType	InstrumentID2;
	///��������2
	TFafexDirectionType	Direction2;
	///���ȳ���2
	TFafexLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TFafexOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TFafexHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TFafexInstrumentIDType	InstrumentID3;
	///��������3
	TFafexDirectionType	Direction3;
	///���ȳ���3
	TFafexLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TFafexOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TFafexHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TFafexInstrumentIDType	InstrumentID4;
	///��������4
	TFafexDirectionType	Direction4;
	///���ȳ���4
	TFafexLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TFafexOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TFafexHedgeFlagType	HedgeFlag4;
	///������Դ
	TFafexOrderSourceType	OrderSource;
	///��ɽ�����
	TFafexVolumeType	VolumeTraded;
	///ʣ������
	TFafexVolumeType	VolumeTotal;
	///��������
	TFafexDateType	InsertDate;
	///����ʱ��
	TFafexTimeType	InsertTime;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///�ʽ�
struct CFafexTradingAccountField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFafexMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFafexMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFafexMoneyType	Premium;
	///�����
	TFafexMoneyType	Deposit;
	///������
	TFafexMoneyType	Withdraw;
	///�ڻ�����׼����
	TFafexMoneyType	Balance;
	///�����ʽ�
	TFafexMoneyType	Available;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///����ı�֤��
	TFafexMoneyType	FrozenMargin;
	///�����Ȩ����
	TFafexMoneyType	FrozenPremium;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///����
	TFafexCurrencyType	Currency;
	///��ȡ�ʽ�
	TFafexMoneyType	Useable;
	///�����ʽ�
	TFafexMoneyType	FrozenMoney;
	///������֧��
	TFafexMoneyType	Fee;
	///�ֲ�ӯ��
	TFafexMoneyType	PositionProfit;
};
///������
struct CFafexAdminOrderField
{
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///����������
	TFafexAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TFafexParticipantIDType	ParticipantID;
	///���
	TFafexMoneyType	Amount;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///����������
struct CFafexInputAdminOrderField
{
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///����������
	TFafexAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TFafexParticipantIDType	ParticipantID;
	///���
	TFafexMoneyType	Amount;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///����
struct CFafexBulletinField
{
	///������
	TFafexDateType	TradingDay;
	///������
	TFafexBulletinIDType	BulletinID;
	///���к�
	TFafexSequenceNoType	SequenceNo;
	///��������
	TFafexNewsTypeType	NewsType;
	///�����̶�
	TFafexNewsUrgencyType	NewsUrgency;
	///����ʱ��
	TFafexTimeType	SendTime;
	///��ϢժҪ
	TFafexAbstractType	Abstract;
	///��Ϣ��Դ
	TFafexComeFromType	ComeFrom;
	///��Ϣ����
	TFafexContentType	Content;
	///WEB��ַ
	TFafexURLLinkType	URLLink;
	///�г�����
	TFafexMarketIDType	MarketID;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///����������ͬ��״̬
struct CFafexExchangeDataSyncStatusField
{
	///������
	TFafexDateType	TradingDay;
	///����������
	TFafexExchangeIDType	ExchangeID;
	///����������ͬ��״̬
	TFafexExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///����������ͬ��״̬
struct CFafexSGDataSyncStatusField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexDateType	TradingDay;
	///������
	TFafexSettlementIDType	SettlementID;
	///����������ͬ��״̬
	TFafexSGDataSyncStatusType	SGDataSyncStatus;
};
///��Լ״̬
struct CFafexInstrumentStatusField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TFafexInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TFafexTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TFafexTimeType	EnterTime;
	///���뱾״̬ԭ��
	TFafexInstStatusEnterReasonType	EnterReason;
	///��Ȼ����
	TFafexDateType	CalendarDate;
};
///ʵʱ�ϳ�
struct CFafexTBCommandField
{
	///DB����غ�
	TFafexOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TFafexSequenceNoType	CommandNo;
	///DB��������
	TFafexCommandTypeType	CommandType;
	///�ֶ���
	TFafexFieldNameType	FieldName;
	///�ֶ�����
	TFafexFieldContentType	FieldContent;
	///��ע
	TFafexComeFromType	Comments;
};
///������ѯ
struct CFafexQryOrderField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///�������
	TFafexOrderSysIDType	OrderSysID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��ʼʱ��
	TFafexTimeType	TimeStart;
	///����ʱ��
	TFafexTimeType	TimeEnd;
};
///���۲�ѯ
struct CFafexQryQuoteField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///���۱��
	TFafexQuoteSysIDType	QuoteSysID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�����û�����
	TFafexUserIDType	UserID;
};
///�ɽ���ѯ
struct CFafexQryTradeField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
	///�ɽ����
	TFafexTradeIDType	TradeID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
	///��ʼʱ��
	TFafexTimeType	TimeStart;
	///����ʱ��
	TFafexTimeType	TimeEnd;
};
///�����ѯ
struct CFafexQryMarketDataField
{
	///��Ʒ����
	TFafexProductIDType	ProductID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
};
///�ͻ���ѯ
struct CFafexQryClientField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFafexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFafexClientIDType	ClientIDEnd;
};
///��Ա�ֲֲ�ѯ
struct CFafexQryPartPositionField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
};
///�ͻ��ֲֲ�ѯ
struct CFafexQryClientPositionField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFafexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFafexClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
	///�ͻ�����
	TFafexClientTypeType	ClientType;
};
///�ͻ��ֲֲ�ѯ
struct CFafexQryClientPositionV1Field
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFafexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFafexClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
};
///�����ʽ��ѯ
struct CFafexQryPartAccountField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///����
	TFafexCurrencyType	Currency;
};
///��Լ��ѯ
struct CFafexQryInstrumentField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFafexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFafexProductIDType	ProductID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
};
///��Լ״̬��ѯ
struct CFafexQryInstrumentStatusField
{
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
};
///������״̬��ѯ
struct CFafexQrySGDataSyncStatusField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
};
///�û����߲�ѯ
struct CFafexQryUserSessionField
{
	///��ʼ�����û�����
	TFafexUserIDType	UserIDStart;
	///���������û�����
	TFafexUserIDType	UserIDEnd;
};
///�û���ѯ
struct CFafexQryUserField
{
	///��ʼ�����û�����
	TFafexUserIDType	UserIDStart;
	///���������û�����
	TFafexUserIDType	UserIDEnd;
};
///�����ѯ
struct CFafexQryBulletinField
{
	///������
	TFafexDateType	TradingDay;
	///�г�����
	TFafexMarketIDType	MarketID;
	///������
	TFafexBulletinIDType	BulletinID;
	///��������
	TFafexNewsTypeType	NewsType;
	///�����̶�
	TFafexNewsUrgencyType	NewsUrgency;
};
///��Ա��ѯ
struct CFafexQryParticipantField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
};
///��ֵ��Ȳ�ѯ
struct CFafexQryHedgeVolumeField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFafexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFafexClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
};
///��Լ��λ��ѯ
struct CFafexQryMBLMarketDataField
{
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
	///��������
	TFafexDirectionType	Direction;
};
///�����޶��ѯ
struct CFafexQryCreditLimitField
{
	///���׻�Ա���
	TFafexParticipantIDType	ParticipantID;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
};
///�Ǳ���ϱ�����ѯ
struct CFafexQryCombOrderField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ϱ������
	TFafexOrderSysIDType	CombOrderSysID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�����û�����
	TFafexUserIDType	UserID;
};
///��Ա�ʽ�Ӧ��
struct CFafexRspPartAccountField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFafexMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFafexMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFafexMoneyType	Premium;
	///�����
	TFafexMoneyType	Deposit;
	///������
	TFafexMoneyType	Withdraw;
	///�ڻ�����׼����
	TFafexMoneyType	Balance;
	///�����ʽ�
	TFafexMoneyType	Available;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///����ı�֤��
	TFafexMoneyType	FrozenMargin;
	///�����Ȩ����
	TFafexMoneyType	FrozenPremium;
	///����׼����
	TFafexMoneyType	BaseReserve;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///��ȡ�ʽ�
	TFafexMoneyType	Useable;
	///�����ʽ�
	TFafexMoneyType	FrozenMoney;
	///����
	TFafexCurrencyType	Currency;
	///������֧��
	TFafexMoneyType	Fee;
	///�ֲ�ӯ��
	TFafexMoneyType	PositionProfit;
};
///��Ա�ֲ�Ӧ��
struct CFafexRspPartPositionField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFafexPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFafexVolumeType	YdPosition;
	///���ճֲ�
	TFafexVolumeType	Position;
	///��ͷ����
	TFafexVolumeType	LongFrozen;
	///��ͷ����
	TFafexVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFafexVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFafexVolumeType	YdShortFrozen;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
};
///�ͻ��ֲ�Ӧ��
struct CFafexRspClientPositionField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFafexPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFafexVolumeType	YdPosition;
	///���ճֲ�
	TFafexVolumeType	Position;
	///��ͷ����
	TFafexVolumeType	LongFrozen;
	///��ͷ����
	TFafexVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFafexVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFafexVolumeType	YdShortFrozen;
	///������ɽ���
	TFafexVolumeType	BuyTradeVolume;
	///�������ɽ���
	TFafexVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TFafexMoneyType	PositionCost;
	///���ճֲֳɱ�
	TFafexMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TFafexMoneyType	UseMargin;
	///����ı�֤��
	TFafexMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TFafexMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TFafexMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TFafexMoneyType	FrozenPremium;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�ϴν���֮��ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///�ֲ�ӯ��
	TFafexMoneyType	PositionProfit;
	///�ۼƿ��ֳɱ�
	TFafexMoneyType	TotalPositionCost;
	///�ۼ�ƽ��ӯ��
	TFafexMoneyType	TotalCloseProfit;
	///�ۼƳֲ�ӯ��
	TFafexMoneyType	TotalPositionProfit;
	///�ܸ˱���
	TFafexRatioType	Leverage;
	///�ӹܼ۸�
	TFafexRatioType	LiquidationPrice;
	///�ʽ��ʺ�
	TFafexAccountIDType	AccountID;
	///����
	TFafexCurrencyType	ClearCurrency;
};
///��Լ��ѯӦ��
struct CFafexRspInstrumentField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFafexProductIDType	ProductID;
	///��Ʒ�����
	TFafexProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TFafexInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TFafexProductClassType	ProductClass;
	///�ֲ�����
	TFafexPositionTypeType	PositionType;
	///ִ�м�
	TFafexPriceType	StrikePrice;
	///��Ȩ����
	TFafexOptionsTypeType	OptionsType;
	///��Լ��������
	TFafexVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TFafexUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Լ����
	TFafexInstrumentNameType	InstrumentName;
	///�������
	TFafexYearType	DeliveryYear;
	///������
	TFafexMonthType	DeliveryMonth;
	///��ǰ�·�
	TFafexAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TFafexBoolType	IsTrading;
	///������
	TFafexDateType	CreateDate;
	///������
	TFafexDateType	OpenDate;
	///������
	TFafexDateType	ExpireDate;
	///��ʼ������
	TFafexDateType	StartDelivDate;
	///��󽻸���
	TFafexDateType	EndDelivDate;
	///���ƻ�׼��
	TFafexPriceType	BasisPrice;
	///�м۵�����µ���
	TFafexVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TFafexVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TFafexVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TFafexVolumeType	MinLimitOrderVolume;
	///��С�䶯��λ
	TFafexPriceType	PriceTick;
	///��������Ȼ�˿���
	TFafexMonthCountType	AllowDelivPersonOpen;
	///����
	TFafexCurrencyType	Currency;
};
///��Ϣ��ѯ
struct CFafexQryInformationField
{
	///��ʼ��Ϣ����
	TFafexInformationIDType	InformationIDStart;
	///������Ϣ����
	TFafexInformationIDType	InformationIDEnd;
};
///��Ϣ��ѯ
struct CFafexInformationField
{
	///��Ϣ���
	TFafexInformationIDType	InformationID;
	///���к�
	TFafexSequenceNoType	SequenceNo;
	///��Ϣ����
	TFafexContentType	Content;
	///���ĳ���
	TFafexContentLengthType	ContentLength;
	///�Ƿ����
	TFafexBoolType	IsAccomplished;
};
///�����޶�
struct CFafexCreditLimitField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFafexMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFafexMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFafexMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFafexMoneyType	Premium;
	///�����
	TFafexMoneyType	Deposit;
	///������
	TFafexMoneyType	Withdraw;
	///�ڻ�����׼����
	TFafexMoneyType	Balance;
	///�����ʽ�
	TFafexMoneyType	Available;
	///���׻�Ա���
	TFafexParticipantIDType	ParticipantID;
	///�����Ա���
	TFafexParticipantIDType	ClearingPartID;
	///����ı�֤��
	TFafexMoneyType	FrozenMargin;
	///�����Ȩ����
	TFafexMoneyType	FrozenPremium;
	///������֧��
	TFafexMoneyType	Fee;
};
///�ͻ���ѯӦ��
struct CFafexRspClientField
{
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///�ͻ�����
	TFafexPartyNameType	ClientName;
	///֤������
	TFafexIdCardTypeType	IdentifiedCardType;
	///ԭ֤������
	TFafexIdentifiedCardNoV1Type	UseLess;
	///���׽�ɫ
	TFafexTradingRoleType	TradingRole;
	///�ͻ�����
	TFafexClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFafexBoolType	IsActive;
	///��Ա��
	TFafexParticipantIDType	ParticipantID;
	///֤������
	TFafexIdentifiedCardNoType	IdentifiedCardNo;
};
///����������
struct CFafexFlowMessageCancelField
{
	///����ϵ�к�
	TFafexSequenceSeriesType	SequenceSeries;
	///������
	TFafexDateType	TradingDay;
	///�������Ĵ���
	TFafexDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TFafexSequenceNoType	StartSequenceNo;
	///���˽������к�
	TFafexSequenceNoType	EndSequenceNo;
};
///����
struct CFafexMultiHeartbeatField
{
	///Current Time
	TFafexTimeType	CurrTime;
	///MultiCastIP
	TFafexMultiIPAddressType	MultiCastIP;
};
///������ѯ
struct CFafexQryAccountDepositDetailField
{
	///�������ˮ���
	TFafexSequenceNoType	DepositNo;
	///��ʼ��Ա����
	TFafexAccountIDType	AccountIDStart;
	///������Ա����
	TFafexAccountIDType	AccountIDEnd;
};
///ʵʱ�ϳ���ѯ
struct CFafexQryTBCommandDetailField
{
	///ȫ��DB�������
	TFafexSequenceNoType	CommandNo;
	///DB��������
	TFafexCommandTypeType	CommandType;
};
///��ѯ������
struct CFafexQryPartClientFeeField
{
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///��Ʒ��Լ����
	TFafexInstrumentIDType	InstrumentID;
};
///��ѯ�ͻ��ֲ���ϸ
struct CFafexQryClientPositionDetailField
{
	///��ʼ��Ա����
	TFafexParticipantIDType	PartIDStart;
	///������Ա����
	TFafexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFafexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFafexClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFafexInstrumentIDType	InstIDStart;
	///������Լ����
	TFafexInstrumentIDType	InstIDEnd;
};
///���볡��ɽ���
struct CFafexInputOTCTradeField
{
	///�ɽ����
	TFafexTradeIDType	TradeID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�ɽ��Ա��ر��
	TFafexOrderLocalIDType	TradeLocalID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�۸�
	TFafexPriceType	Price;
	///����
	TFafexVolumeType	Volume;
	///�򷽻�Ա����
	TFafexParticipantIDType	BuyParticipantID;
	///�򷽿ͻ�����
	TFafexClientIDType	BuyClientID;
	///�򷽽����û�����
	TFafexUserIDType	BuyUserID;
	///�򷽱��ر������
	TFafexOrderLocalIDType	BuyOrderLocalID;
	///����Ͽ�ƽ��־
	TFafexCombOffsetFlagType	BuyCombOffsetFlag;
	///�����Ͷ���ױ���־
	TFafexCombHedgeFlagType	BuyCombHedgeFlag;
	///��������Ա����
	TFafexParticipantIDType	SellParticipantID;
	///�����ͻ�����
	TFafexClientIDType	SellClientID;
	///���������û�����
	TFafexUserIDType	SellUserID;
	///������Ͽ�ƽ��־
	TFafexCombOffsetFlagType	SellCombOffsetFlag;
	///��������ױ���־
	TFafexCombHedgeFlagType	SellCombHedgeFlag;
	///�������ر������
	TFafexOrderLocalIDType	SellOrderLocalID;
	///OTC����
	TFafexOTCTypeType	OTCType;
	///״̬
	TFafexOTCStatusType	Status;
	///�������
	TFafexErrorIDType	OTCErrorID;
	///������Ϣ
	TFafexErrorMsgType	OTCErrorMsg;
	///��ע
	TFafexComeFromType	Comments;
};
///����ɽ���
struct CFafexOTCTradeField
{
	///������
	TFafexDateType	TradingDay;
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///������
	TFafexSettlementIDType	SettlementID;
	///�ɽ����
	TFafexTradeIDType	TradeID;
	///�����û�����
	TFafexUserIDType	UserID;
	///�ɽ��Ա��ر��
	TFafexOrderLocalIDType	TradeLocalID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�۸�
	TFafexPriceType	Price;
	///����
	TFafexVolumeType	Volume;
	///�򷽻�Ա����
	TFafexParticipantIDType	BuyParticipantID;
	///�򷽿ͻ�����
	TFafexClientIDType	BuyClientID;
	///�򷽽����û�����
	TFafexUserIDType	BuyUserID;
	///�򷽱��ر������
	TFafexOrderLocalIDType	BuyOrderLocalID;
	///����Ͽ�ƽ��־
	TFafexCombOffsetFlagType	BuyCombOffsetFlag;
	///�����Ͷ���ױ���־
	TFafexCombHedgeFlagType	BuyCombHedgeFlag;
	///��������Ա����
	TFafexParticipantIDType	SellParticipantID;
	///�����ͻ�����
	TFafexClientIDType	SellClientID;
	///���������û�����
	TFafexUserIDType	SellUserID;
	///������Ͽ�ƽ��־
	TFafexCombOffsetFlagType	SellCombOffsetFlag;
	///��������ױ���־
	TFafexCombHedgeFlagType	SellCombHedgeFlag;
	///�������ر������
	TFafexOrderLocalIDType	SellOrderLocalID;
	///OTC����
	TFafexOTCTypeType	OTCType;
	///״̬
	TFafexOTCStatusType	Status;
	///�������
	TFafexErrorIDType	OTCErrorID;
	///������Ϣ
	TFafexErrorMsgType	OTCErrorMsg;
	///��ע
	TFafexComeFromType	Comments;
};
///��������
struct CFafexUpdateMarketDataField
{
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///�ʽ����
	TFafexRatioType	FundingRate;
	///����۸�
	TFafexPriceType	FairPrice;
	///�����
	TFafexPriceType	SettlementPrice;
};
///��λ��֤�����
struct CFafexPositionMarginActionField
{
	///���������
	TFafexSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TFafexInstrumentIDType	InstrumentID;
	///��Ա����
	TFafexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFafexClientIDType	ClientID;
	///Ͷ���ױ���־
	TFafexHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFafexPosiDirectionType	PosiDirection;
	///ֵ
	TFafexRatioType	Value;
	///��������
	TFafexPositionActionTypeType	ActionType;
	///��ע
	TFafexComeFromType	Comments;
};

#endif
