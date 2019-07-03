/////////////////////////////////////////////////////////////////////////
///@file FasexApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
/////////////////////////////////////////////////////////////////////////

#if !defined(Fasex_STRUCT_H)
#define Fasex_STRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FasexApiDataType.h"

///��Ϣ�ַ�
struct CFasexDisseminationField
{
	///����ϵ�к�
	TFasexSequenceSeriesType	SequenceSeries;
	///���к�
	TFasexSequenceNoType	SequenceNo;
};
///��Ӧ��Ϣ
struct CFasexRspInfoField
{
	///�������
	TFasexErrorIDType	ErrorID;
	///������Ϣ
	TFasexErrorMsgType	ErrorMsg;
};
///ͨѶ�׶�
struct CFasexCommPhaseField
{
	///������
	TFasexDateType	TradingDay;
	///ͨѶʱ�κ�
	TFasexCommPhaseNoType	CommPhaseNo;
};
///������������
struct CFasexExchangeTradingDayField
{
	///������
	TFasexDateType	TradingDay;
	///����������
	TFasexExchangeIDType	ExchangeID;
};
///����Ự
struct CFasexSettlementSessionField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
};
///��ǰʱ��
struct CFasexCurrentTimeField
{
	///��ǰ����
	TFasexDateType	CurrDate;
	///��ǰʱ��
	TFasexTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TFasexMillisecType	CurrMillisec;
};
///�û���¼����
struct CFasexReqUserLoginField
{
	///������
	TFasexDateType	TradingDay;
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///����
	TFasexPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TFasexProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFasexProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFasexProtocolInfoType	ProtocolInfo;
	///�������Ĵ���
	TFasexDataCenterIDType	DataCenterID;
};
///�û���¼Ӧ��
struct CFasexRspUserLoginField
{
	///������
	TFasexDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TFasexTimeType	LoginTime;
	///��󱾵ر�����
	TFasexOrderLocalIDType	MaxOrderLocalID;
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///����ϵͳ����
	TFasexTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TFasexDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TFasexSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TFasexSequenceNoType	UserFlowSize;
};
///�û��ǳ�����
struct CFasexReqUserLogoutField
{
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
};
///�û��ǳ�Ӧ��
struct CFasexRspUserLogoutField
{
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
};
///���뱨��
struct CFasexInputOrderField
{
	///�������
	TFasexOrderSysIDType	OrderSysID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///�����۸�����
	TFasexOrderPriceTypeType	OrderPriceType;
	///��������
	TFasexDirectionType	Direction;
	///�۸�
	TFasexPriceType	LimitPrice;
	///����
	TFasexVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFasexTimeConditionType	TimeCondition;
	///GTD����
	TFasexDateType	GTDDate;
	///�ɽ�������
	TFasexVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFasexVolumeType	MinVolume;
	///��������
	TFasexContingentConditionType	ContingentCondition;
	///ֹ���
	TFasexPriceType	StopPrice;
	///���ر������
	TFasexOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFasexBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFasexBusinessUnitType	BusinessUnit;
};
///��������
struct CFasexOrderActionField
{
	///�������
	TFasexOrderSysIDType	OrderSysID;
	///���ر������
	TFasexOrderLocalIDType	OrderLocalID;
	///����������־
	TFasexActionFlagType	ActionFlag;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///�۸�
	TFasexPriceType	LimitPrice;
	///�����仯
	TFasexVolumeType	VolumeChange;
	///�������ر��
	TFasexOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFasexBusinessUnitType	BusinessUnit;
};
///OTC����
struct CFasexOTCOrderField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///OTC�������
	TFasexOTCOrderSysIDType	OTCOrderSysID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///��������
	TFasexDirectionType	Direction;
	///�۸�
	TFasexPriceType	Price;
	///����
	TFasexVolumeType	Volume;
	///���ַ���Ա����
	TFasexParticipantIDType	OtherParticipantID;
	///���ַ��ͻ�����
	TFasexClientIDType	OtherClientID;
	///���ַ������û�����
	TFasexUserIDType	OtherUserID;
	///����OTC�������
	TFasexOrderLocalIDType	OTCOrderLocalID;
	///OTC����״̬
	TFasexOTCOrderStatusType	OTCOrderStatus;
	///����ʱ��
	TFasexTimeType	InsertTime;
	///����ʱ��
	TFasexTimeType	CancelTime;
};
///�û���¼�˳�
struct CFasexUserLogoutField
{
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
};
///�û������޸�
struct CFasexUserPasswordUpdateField
{
	///�����û�����
	TFasexUserIDType	UserID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///������
	TFasexPasswordType	OldPassword;
	///������
	TFasexPasswordType	NewPassword;
};
///ǿ���û��˳�
struct CFasexForceUserExitField
{
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�����û�����
	TFasexUserIDType	UserID;
};
///�����ڴ��
struct CFasexDumpMemTableField
{
	///�ڴ������
	TFasexTableNameType	TableName;
};
///�ʽ��˻������
struct CFasexAccountDepositField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TFasexOrderLocalIDType	DepositLocalID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFasexTradingRoleType	TradingRole;
	///�ʽ��˺�
	TFasexAccountIDType	AccountID;
	///�������
	TFasexMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TFasexSequenceNoType	DepositNo;
	///����
	TFasexCurrencyType	Currency;
	///�ʽ��������
	TFasexAccountActionTypeType	ActionType;
	///��ע
	TFasexComeFromType	Comments;
};
///�����
struct CFasexAccountDepositDetailField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///����𱾵غ�
	TFasexOrderLocalIDType	DepositLocalID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFasexTradingRoleType	TradingRole;
	///�ʽ��˺�
	TFasexAccountIDType	AccountID;
	///�������
	TFasexMoneyType	Deposit;
	///ȫ�ֳ������ˮ���
	TFasexSequenceNoType	DepositNo;
	///����
	TFasexCurrencyType	Currency;
	///�ʽ��������
	TFasexAccountActionTypeType	ActionType;
	///��ע
	TFasexComeFromType	Comments;
	///������
	TFasexTransStatusType	Status;
	///������
	TFasexDateType	TradingDay;
	///����ʱ��
	TFasexTimeType	InsertTime;
};
///ʵʱ�ϳ�
struct CFasexTBCommandDetailField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///DB����غ�
	TFasexOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TFasexSequenceNoType	CommandNo;
	///DB��������
	TFasexCommandTypeType	CommandType;
	///�ֶ���
	TFasexFieldNameType	FieldName;
	///�ֶ�����
	TFasexFieldContentType	FieldContent;
	///��ע
	TFasexComeFromType	Comments;
	///������
	TFasexTransStatusType	Status;
	///����ʱ��
	TFasexTimeType	InsertTime;
};
///������
struct CFasexPartClientFeeField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ���
	TFasexClientIDType	ClientID;
	///��Լ�ı��
	TFasexInstrumentIDType	InstrumentID;
	///�ɽ���ɫ
	TFasexMatchRoleType	MatchRole;
	///�����Ѱ�����
	TFasexRatioType	FeeRate;
	///�����Ѱ�����
	TFasexRatioType	FeeAmt;
};
///��Ա
struct CFasexParticipantField
{
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///��Ա����
	TFasexParticipantNameType	ParticipantName;
	///��Ա���
	TFasexParticipantAbbrType	ParticipantAbbr;
	///��Ա����
	TFasexMemberTypeType	MemberType;
	///�Ƿ��Ծ
	TFasexBoolType	IsActive;
};
///�û�
struct CFasexUserField
{
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�����û�����
	TFasexUserIDType	UserID;
	///�����û�����
	TFasexUserTypeType	UserType;
	///����
	TFasexPasswordType	Password;
	///����ԱȨ��
	TFasexUserActiveType	IsActive;
};
///�ͻ�
struct CFasexClientField
{
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�ͻ�����
	TFasexPartyNameType	ClientName;
	///֤������
	TFasexIdCardTypeType	IdentifiedCardType;
	///֤������
	TFasexIdentifiedCardNoType	IdentifiedCardNo;
	///���׽�ɫ
	TFasexTradingRoleType	TradingRole;
	///�ͻ�����
	TFasexClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFasexBoolType	IsActive;
};
///�û��Ự
struct CFasexUserSessionField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///ǰ�ñ��
	TFasexFrontIDType	FrontID;
	///�����û�����
	TFasexUserIDType	UserID;
	///�����û�����
	TFasexUserTypeType	UserType;
	///�Ự���
	TFasexSessionIDType	SessionID;
	///��¼ʱ��
	TFasexTimeType	LoginTime;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///IP��ַ
	TFasexIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TFasexProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFasexProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFasexProtocolInfoType	ProtocolInfo;
};
///��Ʒ��
struct CFasexProductGroupField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFasexProductGroupIDType	ProductGroupID;
	///��Ʒ������
	TFasexProductGroupNameType	ProductGroupName;
	///��Ʒ����
	TFasexCommodityIDType	CommodityID;
};
///��Ʒ
struct CFasexProductField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFasexProductIDType	ProductID;
	///��Ʒ�����
	TFasexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFasexProductNameType	ProductName;
	///��Ʒ����
	TFasexProductClassType	ProductClass;
};
///��Լ
struct CFasexInstrumentField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///���׶�����
	TFasexInstrumentNameType	InstrumentName;
	///��ǰ�Ƿ���
	TFasexBoolType	IsTrading;
	///��Ʒ����
	TFasexProductIDType	ProductID;
	///��Ʒ�����
	TFasexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFasexProductClassType	ProductClass;
	///���׶���������
	TFasexVolumeMultipleType	VolumeMultiple;
};
///�г�����
struct CFasexMarketDataField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///���¼�
	TFasexPriceType	LastPrice;
	///������
	TFasexPriceType	PreClosePrice;
	///����
	TFasexPriceType	OpenPrice;
	///��߼�
	TFasexPriceType	HighestPrice;
	///��ͼ�
	TFasexPriceType	LowestPrice;
	///����
	TFasexVolumeType	Volume;
	///�ɽ����
	TFasexMoneyType	Turnover;
	///������
	TFasexPriceType	ClosePrice;
	///��ͣ���
	TFasexPriceType	UpperLimitPrice;
	///��ͣ���
	TFasexPriceType	LowerLimitPrice;
	///����޸�ʱ��
	TFasexTimeType	UpdateTime;
	///����޸ĺ���
	TFasexMillisecType	UpdateMillisec;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
};
///����г�����
struct CFasexDepthMarketDataField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///���¼�
	TFasexPriceType	LastPrice;
	///������
	TFasexPriceType	PreClosePrice;
	///����
	TFasexPriceType	OpenPrice;
	///��߼�
	TFasexPriceType	HighestPrice;
	///��ͼ�
	TFasexPriceType	LowestPrice;
	///����
	TFasexVolumeType	Volume;
	///�ɽ����
	TFasexMoneyType	Turnover;
	///������
	TFasexPriceType	ClosePrice;
	///��ͣ���
	TFasexPriceType	UpperLimitPrice;
	///��ͣ���
	TFasexPriceType	LowerLimitPrice;
	///����޸�ʱ��
	TFasexTimeType	UpdateTime;
	///����޸ĺ���
	TFasexMillisecType	UpdateMillisec;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///�����һ
	TFasexPriceType	BidPrice1;
	///������һ
	TFasexVolumeType	BidVolume1;
	///������һ
	TFasexPriceType	AskPrice1;
	///������һ
	TFasexVolumeType	AskVolume1;
	///����۶�
	TFasexPriceType	BidPrice2;
	///��������
	TFasexVolumeType	BidVolume2;
	///�����۶�
	TFasexPriceType	AskPrice2;
	///��������
	TFasexVolumeType	AskVolume2;
	///�������
	TFasexPriceType	BidPrice3;
	///��������
	TFasexVolumeType	BidVolume3;
	///��������
	TFasexPriceType	AskPrice3;
	///��������
	TFasexVolumeType	AskVolume3;
	///�������
	TFasexPriceType	BidPrice4;
	///��������
	TFasexVolumeType	BidVolume4;
	///��������
	TFasexPriceType	AskPrice4;
	///��������
	TFasexVolumeType	AskVolume4;
	///�������
	TFasexPriceType	BidPrice5;
	///��������
	TFasexVolumeType	BidVolume5;
	///��������
	TFasexPriceType	AskPrice5;
	///��������
	TFasexVolumeType	AskVolume5;
	///�������
	TFasexPriceType	BidPrice6;
	///��������
	TFasexVolumeType	BidVolume6;
	///��������
	TFasexPriceType	AskPrice6;
	///��������
	TFasexVolumeType	AskVolume6;
	///�������
	TFasexPriceType	BidPrice7;
	///��������
	TFasexVolumeType	BidVolume7;
	///��������
	TFasexPriceType	AskPrice7;
	///��������
	TFasexVolumeType	AskVolume7;
	///����۰�
	TFasexPriceType	BidPrice8;
	///��������
	TFasexVolumeType	BidVolume8;
	///�����۰�
	TFasexPriceType	AskPrice8;
	///��������
	TFasexVolumeType	AskVolume8;
	///����۾�
	TFasexPriceType	BidPrice9;
	///��������
	TFasexVolumeType	BidVolume9;
	///�����۾�
	TFasexPriceType	AskPrice9;
	///��������
	TFasexVolumeType	AskVolume9;
	///�����ʮ
	TFasexPriceType	BidPrice10;
	///������ʮ
	TFasexVolumeType	BidVolume10;
	///������ʮ
	TFasexPriceType	AskPrice10;
	///������ʮ
	TFasexVolumeType	AskVolume10;
	///��Ʒ����
	TFasexInstrumentNameType	InstrumentName;
};
///�ּ۱�
struct CFasexMBLMarketDataField
{
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///��������
	TFasexDirectionType	Direction;
	///�۸�
	TFasexPriceType	Price;
	///����
	TFasexVolumeType	Volume;
};
///�����������
struct CFasexMarketDataBaseField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///������
	TFasexPriceType	PreClosePrice;
	///��Ʒ����
	TFasexInstrumentNameType	InstrumentName;
};
///���龲̬����
struct CFasexMarketDataStaticField
{
	///����
	TFasexPriceType	OpenPrice;
	///��߼�
	TFasexPriceType	HighestPrice;
	///��ͼ�
	TFasexPriceType	LowestPrice;
	///������
	TFasexPriceType	ClosePrice;
	///��ͣ���
	TFasexPriceType	UpperLimitPrice;
	///��ͣ���
	TFasexPriceType	LowerLimitPrice;
};
///�������³ɽ�����
struct CFasexMarketDataLastMatchField
{
	///���¼�
	TFasexPriceType	LastPrice;
	///����
	TFasexVolumeType	Volume;
	///�ɽ����
	TFasexMoneyType	Turnover;
};
///�������ż�����
struct CFasexMarketDataBestPriceField
{
	///�����һ
	TFasexPriceType	BidPrice1;
	///������һ
	TFasexVolumeType	BidVolume1;
	///������һ
	TFasexPriceType	AskPrice1;
	///������һ
	TFasexVolumeType	AskVolume1;
};
///�����������������
struct CFasexMarketDataBid23Field
{
	///����۶�
	TFasexPriceType	BidPrice2;
	///��������
	TFasexVolumeType	BidVolume2;
	///�������
	TFasexPriceType	BidPrice3;
	///��������
	TFasexVolumeType	BidVolume3;
};
///������������������
struct CFasexMarketDataAsk23Field
{
	///�����۶�
	TFasexPriceType	AskPrice2;
	///��������
	TFasexVolumeType	AskVolume2;
	///��������
	TFasexPriceType	AskPrice3;
	///��������
	TFasexVolumeType	AskVolume3;
};
///���������ġ�������
struct CFasexMarketDataBid45Field
{
	///�������
	TFasexPriceType	BidPrice4;
	///��������
	TFasexVolumeType	BidVolume4;
	///�������
	TFasexPriceType	BidPrice5;
	///��������
	TFasexVolumeType	BidVolume5;
};
///���������ġ�������
struct CFasexMarketDataAsk45Field
{
	///��������
	TFasexPriceType	AskPrice4;
	///��������
	TFasexVolumeType	AskVolume4;
	///��������
	TFasexPriceType	AskPrice5;
	///��������
	TFasexVolumeType	AskVolume5;
};
///������������������
struct CFasexMarketDataBid67Field
{
	///�������
	TFasexPriceType	BidPrice6;
	///��������
	TFasexVolumeType	BidVolume6;
	///�������
	TFasexPriceType	BidPrice7;
	///��������
	TFasexVolumeType	BidVolume7;
};
///������������������
struct CFasexMarketDataAsk67Field
{
	///��������
	TFasexPriceType	AskPrice6;
	///��������
	TFasexVolumeType	AskVolume6;
	///��������
	TFasexPriceType	AskPrice7;
	///��������
	TFasexVolumeType	AskVolume7;
};
///��������ˡ�������
struct CFasexMarketDataBid89Field
{
	///����۰�
	TFasexPriceType	BidPrice8;
	///��������
	TFasexVolumeType	BidVolume8;
	///����۾�
	TFasexPriceType	BidPrice9;
	///��������
	TFasexVolumeType	BidVolume9;
};
///���������ˡ�������
struct CFasexMarketDataAsk89Field
{
	///�����۰�
	TFasexPriceType	AskPrice8;
	///��������
	TFasexVolumeType	AskVolume8;
	///�����۾�
	TFasexPriceType	AskPrice9;
	///��������
	TFasexVolumeType	AskVolume9;
};
///��������ʮ����
struct CFasexMarketDataBid10Field
{
	///�����ʮ
	TFasexPriceType	BidPrice10;
	///������ʮ
	TFasexVolumeType	BidVolume10;
};
///��������ʮ����
struct CFasexMarketDataAsk10Field
{
	///������ʮ
	TFasexPriceType	AskPrice10;
	///������ʮ
	TFasexVolumeType	AskVolume10;
};
///�������ʱ������
struct CFasexMarketDataUpdateTimeField
{
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TFasexTimeType	UpdateTime;
	///����޸ĺ���
	TFasexMillisecType	UpdateMillisec;
};
///��ѯʱ��
struct CFasexMarketDateTimeField
{
	///����
	TFasexTradingDayType	MarketServerDate;
	///ʱ��
	TFasexTimeType	MarketServerTime;
};
///�ɽ�
struct CFasexTradeField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///�ɽ����
	TFasexTradeIDType	TradeID;
	///��������
	TFasexDirectionType	Direction;
	///�������
	TFasexOrderSysIDType	OrderSysID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///���׽�ɫ
	TFasexTradingRoleType	TradingRole;
	///�ʽ��ʺ�
	TFasexAccountIDType	AccountID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///�۸�
	TFasexPriceType	Price;
	///����
	TFasexVolumeType	Volume;
	///�ɽ�ʱ��
	TFasexTimeType	TradeTime;
	///�ɽ�����
	TFasexTradeTypeType	TradeType;
	///�ɽ�����Դ
	TFasexPriceSourceType	PriceSource;
	///�����û�����
	TFasexUserIDType	UserID;
	///���ر������
	TFasexOrderLocalIDType	OrderLocalID;
	///ҵ��Ԫ
	TFasexBusinessUnitType	BusinessUnit;
	///������
	TFasexMoneyType	Fee;
	///ӯ��
	TFasexMoneyType	CloseProfit;
	///�ɽ���ɫ
	TFasexMatchRoleType	MatchRole;
	///�ɽ����
	TFasexMoneyType	Turnover;
	///�����۸�����
	TFasexOrderPriceTypeType	OrderPriceType;
};
///����
struct CFasexOrderField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///�������
	TFasexOrderSysIDType	OrderSysID;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///�����۸�����
	TFasexOrderPriceTypeType	OrderPriceType;
	///��������
	TFasexDirectionType	Direction;
	///�۸�
	TFasexPriceType	LimitPrice;
	///����
	TFasexVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFasexTimeConditionType	TimeCondition;
	///GTD����
	TFasexDateType	GTDDate;
	///�ɽ�������
	TFasexVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFasexVolumeType	MinVolume;
	///��������
	TFasexContingentConditionType	ContingentCondition;
	///ֹ���
	TFasexPriceType	StopPrice;
	///���ر������
	TFasexOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFasexBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFasexBusinessUnitType	BusinessUnit;
	///������Դ
	TFasexOrderSourceType	OrderSource;
	///����״̬
	TFasexOrderStatusType	OrderStatus;
	///��������
	TFasexOrderTypeType	OrderType;
	///��ɽ�����
	TFasexVolumeType	VolumeTraded;
	///ʣ������
	TFasexVolumeType	VolumeTotal;
	///��������
	TFasexDateType	InsertDate;
	///����ʱ��
	TFasexTimeType	InsertTime;
	///����ʱ��
	TFasexTimeType	ActiveTime;
	///����ʱ��
	TFasexTimeType	SuspendTime;
	///����޸�ʱ��
	TFasexTimeType	UpdateTime;
	///����ʱ��
	TFasexTimeType	CancelTime;
	///����޸Ľ����û�����
	TFasexUserIDType	ActiveUserID;
	///����Ȩ
	TFasexPriorityType	Priority;
	///��ʱ���Ŷӵ����
	TFasexTimeSortIDType	TimeSortID;
	///������
	TFasexMoneyType	Fee;
	///�ɽ����
	TFasexMoneyType	Turnover;
};
///�ʽ�
struct CFasexTradingAccountField
{
	///������
	TFasexDateType	TradingDay;
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFasexMoneyType	PreBalance;
	///�����
	TFasexMoneyType	Deposit;
	///������
	TFasexMoneyType	Withdraw;
	///�ڻ�����׼����
	TFasexMoneyType	Balance;
	///�����ʽ�
	TFasexMoneyType	Available;
	///�ʽ��ʺ�
	TFasexAccountIDType	AccountID;
	///��ȡ�ʽ�
	TFasexMoneyType	Useable;
	///����
	TFasexCurrencyType	Currency;
	///�ֻ��ʽ���֧
	TFasexMoneyType	TradeMoney;
	///������ֻ��ʽ�
	TFasexMoneyType	FrozenMoney;
	///����������֧��
	TFasexMoneyType	Fee;
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
};
///����������ͬ��״̬
struct CFasexExchangeDataSyncStatusField
{
	///������
	TFasexDateType	TradingDay;
	///����������
	TFasexExchangeIDType	ExchangeID;
	///����������ͬ��״̬
	TFasexExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///����������ͬ��״̬
struct CFasexSGDataSyncStatusField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///������
	TFasexDateType	TradingDay;
	///������
	TFasexSettlementIDType	SettlementID;
	///����������ͬ��״̬
	TFasexSGDataSyncStatusType	SGDataSyncStatus;
};
///��Լ״̬
struct CFasexInstrumentStatusField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///���׶Խ���״̬
	TFasexInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TFasexTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TFasexTimeType	EnterTime;
	///���뱾״̬ԭ��
	TFasexInstStatusEnterReasonType	EnterReason;
};
///ʵʱ�ϳ�
struct CFasexTBCommandField
{
	///DB����غ�
	TFasexOrderLocalIDType	CommandLocalID;
	///ȫ��DB�������
	TFasexSequenceNoType	CommandNo;
	///DB��������
	TFasexCommandTypeType	CommandType;
	///�ֶ���
	TFasexFieldNameType	FieldName;
	///�ֶ�����
	TFasexFieldContentType	FieldContent;
	///��ע
	TFasexComeFromType	Comments;
};
///������ѯ
struct CFasexQryOrderField
{
	///��ʼ��Ա����
	TFasexParticipantIDType	PartIDStart;
	///������Ա����
	TFasexParticipantIDType	PartIDEnd;
	///�������
	TFasexOrderSysIDType	OrderSysID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///��ʼʱ��
	TFasexTimeType	TimeStart;
	///����ʱ��
	TFasexTimeType	TimeEnd;
};
///�ɽ���ѯ
struct CFasexQryTradeField
{
	///��ʼ��Ա����
	TFasexParticipantIDType	PartIDStart;
	///������Ա����
	TFasexParticipantIDType	PartIDEnd;
	///��ʼ���׶Դ���
	TFasexInstrumentIDType	InstIDStart;
	///�������׶Դ���
	TFasexInstrumentIDType	InstIDEnd;
	///�ɽ����
	TFasexTradeIDType	TradeID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�����û�����
	TFasexUserIDType	UserID;
	///��ʼʱ��
	TFasexTimeType	TimeStart;
	///����ʱ��
	TFasexTimeType	TimeEnd;
};
///�����ѯ
struct CFasexQryMarketDataField
{
	///��Ʒ����
	TFasexProductIDType	ProductID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
};
///�ͻ���ѯ
struct CFasexQryClientField
{
	///��ʼ��Ա����
	TFasexParticipantIDType	PartIDStart;
	///������Ա����
	TFasexParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFasexClientIDType	ClientIDStart;
	///�����ͻ�����
	TFasexClientIDType	ClientIDEnd;
};
///�����ʽ��ѯ
struct CFasexQryTradingAccountField
{
	///��ʼ��Ա����
	TFasexParticipantIDType	PartIDStart;
	///������Ա����
	TFasexParticipantIDType	PartIDEnd;
	///�ʽ��ʺ�
	TFasexAccountIDType	AccountID;
};
///��Լ��ѯ
struct CFasexQryInstrumentField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFasexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFasexProductIDType	ProductID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
};
///��Լ״̬��ѯ
struct CFasexQryInstrumentStatusField
{
	///��ʼ���׶Դ���
	TFasexInstrumentIDType	InstIDStart;
	///�������׶Դ���
	TFasexInstrumentIDType	InstIDEnd;
};
///������״̬��ѯ
struct CFasexQrySGDataSyncStatusField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
};
///�û����߲�ѯ
struct CFasexQryUserSessionField
{
	///��ʼ�����û�����
	TFasexUserIDType	UserIDStart;
	///���������û�����
	TFasexUserIDType	UserIDEnd;
};
///�û���ѯ
struct CFasexQryUserField
{
	///��ʼ�����û�����
	TFasexUserIDType	UserIDStart;
	///���������û�����
	TFasexUserIDType	UserIDEnd;
};
///��Ա��ѯ
struct CFasexQryParticipantField
{
	///��ʼ��Ա����
	TFasexParticipantIDType	PartIDStart;
	///������Ա����
	TFasexParticipantIDType	PartIDEnd;
};
///��Լ��λ��ѯ
struct CFasexQryMBLMarketDataField
{
	///��ʼ���׶Դ���
	TFasexInstrumentIDType	InstIDStart;
	///�������׶Դ���
	TFasexInstrumentIDType	InstIDEnd;
	///��ʼ��λ
	TFasexIndexType	FromIndex;
	///������λ
	TFasexIndexType	EndIndex;
	///��������
	TFasexDirectionType	Direction;
};
///��Լ��ѯӦ��
struct CFasexRspInstrumentField
{
	///���������
	TFasexSettlementGroupIDType	SettlementGroupID;
	///���׶Դ���
	TFasexInstrumentIDType	InstrumentID;
	///���׶�����
	TFasexInstrumentNameType	InstrumentName;
	///��ǰ�Ƿ���
	TFasexBoolType	IsTrading;
	///��Ʒ����
	TFasexProductIDType	ProductID;
	///��Ʒ�����
	TFasexProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFasexProductClassType	ProductClass;
	///���׶���������
	TFasexVolumeMultipleType	VolumeMultiple;
	///������
	TFasexDateType	OpenDate;
	///���ƻ�׼��
	TFasexPriceType	BasisPrice;
	///�м۵�����µ���
	TFasexVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TFasexVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TFasexVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TFasexVolumeType	MinLimitOrderVolume;
	///��С�䶯��λ
	TFasexPriceType	PriceTick;
	///��С�µ��䶯����
	TFasexVolumeType	VolumeTick;
	///��Ϸ�ʽ
	TFasexTradingModelType	TradingModel;
	///���׻���
	TFasexCurrencyType	TradingCurrency;
	///���׻���
	TFasexCurrencyType	TradingBaseCurrency;
};
///��Ϣ��ѯ
struct CFasexQryInformationField
{
	///��ʼ��Ϣ����
	TFasexInformationIDType	InformationIDStart;
	///������Ϣ����
	TFasexInformationIDType	InformationIDEnd;
};
///��Ϣ��ѯ
struct CFasexInformationField
{
	///��Ϣ���
	TFasexInformationIDType	InformationID;
	///���к�
	TFasexSequenceNoType	SequenceNo;
	///��Ϣ����
	TFasexContentType	Content;
	///���ĳ���
	TFasexContentLengthType	ContentLength;
	///�Ƿ����
	TFasexBoolType	IsAccomplished;
};
///�ͻ���ѯӦ��
struct CFasexRspClientField
{
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///�ͻ�����
	TFasexPartyNameType	ClientName;
	///֤������
	TFasexIdCardTypeType	IdentifiedCardType;
	///ԭ֤������
	TFasexIdentifiedCardNoV1Type	UseLess;
	///���׽�ɫ
	TFasexTradingRoleType	TradingRole;
	///�ͻ�����
	TFasexClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFasexBoolType	IsActive;
	///��Ա��
	TFasexParticipantIDType	ParticipantID;
	///֤������
	TFasexIdentifiedCardNoType	IdentifiedCardNo;
};
///����������
struct CFasexFlowMessageCancelField
{
	///����ϵ�к�
	TFasexSequenceSeriesType	SequenceSeries;
	///������
	TFasexDateType	TradingDay;
	///�������Ĵ���
	TFasexDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TFasexSequenceNoType	StartSequenceNo;
	///���˽������к�
	TFasexSequenceNoType	EndSequenceNo;
};
///������ѯ
struct CFasexQryAccountDepositDetailField
{
	///�������ˮ���
	TFasexSequenceNoType	DepositNo;
	///��ʼ��Ա����
	TFasexAccountIDType	AccountIDStart;
	///������Ա����
	TFasexAccountIDType	AccountIDEnd;
};
///ʵʱ�ϳ���ѯ
struct CFasexQryTBCommandDetailField
{
	///ȫ��DB�������
	TFasexSequenceNoType	CommandNo;
	///DB��������
	TFasexCommandTypeType	CommandType;
};
///�����û��޸�
struct CFasexUserActionField
{
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�����û�����
	TFasexUserIDType	UserID;
	///�����û�����
	TFasexUserTypeType	UserType;
	///����
	TFasexPasswordType	Password;
	///����ԱȨ��
	TFasexUserActiveType	IsActive;
	///�޸�ģʽ
	TFasexUserActionTypeType	UserActionType;
	///������
	TFasexPasswordType	OldPassword;
};
///��ѯ������
struct CFasexQryPartClientFeeField
{
	///��Ա����
	TFasexParticipantIDType	ParticipantID;
	///�ͻ�����
	TFasexClientIDType	ClientID;
	///��Ʒ��Լ����
	TFasexInstrumentIDType	InstrumentID;
};

#endif
