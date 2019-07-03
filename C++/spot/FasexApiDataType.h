
/////////////////////////////////////////////////////////////////////////
///@file FasexApiDataType.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ����������
/////////////////////////////////////////////////////////////////////////

#ifndef FASEX_DATATYPE_H
#define FASEX_DATATYPE_H

enum FASEX_TE_RESUME_TYPE
{
	FASEX_TERT_RESTART = 0,
	FASEX_TERT_RESUME,
	FASEX_TERT_QUICK
};

#if defined(WINDOWS) || defined(WIN32)
typedef __int64		UF_INT8;
#else
typedef long long	UF_INT8;
#endif


const int FASEX_TSS_DIALOG = 1;		//�Ի���
const int FASEX_TSS_PRIVATE = 2;		//��Ա˽����
const int FASEX_TSS_PUBLIC = 3;		//������
const int FASEX_TSS_QUERY = 4;		//��ѯ
const int FASEX_TSS_USER = 5;		//����Ա˽����

/////////////////////////////////////////////////////////////////////////
///TErrorIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexErrorIDType;

/////////////////////////////////////////////////////////////////////////
///TPriorityType��һ������Ȩ����
/////////////////////////////////////////////////////////////////////////
typedef int TFasexPriorityType;

/////////////////////////////////////////////////////////////////////////
///TSettlementIDType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexSettlementIDType;

/////////////////////////////////////////////////////////////////////////
///TTradingSegmentSNType��һ�����׽׶α������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexTradingSegmentSNType;

/////////////////////////////////////////////////////////////////////////
///TTimeSortIDType��һ����ʱ���Ŷӵ��������
/////////////////////////////////////////////////////////////////////////
typedef double TFasexTimeSortIDType;

/////////////////////////////////////////////////////////////////////////
///TFrontIDType��һ��ǰ�ñ������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexFrontIDType;

/////////////////////////////////////////////////////////////////////////
///TSessionIDType��һ���Ự�������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexSessionIDType;

/////////////////////////////////////////////////////////////////////////
///TInformationIDType��һ����Ϣ�������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexInformationIDType;

/////////////////////////////////////////////////////////////////////////
///TMillisecType��һ��ʱ�䣨���룩����
/////////////////////////////////////////////////////////////////////////
typedef int TFasexMillisecType;

/////////////////////////////////////////////////////////////////////////
///TVolumeMultipleType��һ����Լ������������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexVolumeMultipleType;

/////////////////////////////////////////////////////////////////////////
///TDataCenterIDType��һ���������Ĵ�������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexDataCenterIDType;

/////////////////////////////////////////////////////////////////////////
///TContentLengthType��һ�����ĳ�������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexContentLengthType;

/////////////////////////////////////////////////////////////////////////
///TIndexType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexIndexType;

/////////////////////////////////////////////////////////////////////////
///TBoolType��һ������������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexBoolType;

/////////////////////////////////////////////////////////////////////////
///TUserActiveType��һ������Ա��Ծ�������
/////////////////////////////////////////////////////////////////////////
typedef int TFasexUserActiveType;

/////////////////////////////////////////////////////////////////////////
///TSequenceNoType��һ�����к�����
/////////////////////////////////////////////////////////////////////////
typedef UF_INT8 TFasexSequenceNoType;

/////////////////////////////////////////////////////////////////////////
///TSequenceSeriesType��һ������ϵ�к�����
/////////////////////////////////////////////////////////////////////////
typedef short TFasexSequenceSeriesType;

/////////////////////////////////////////////////////////////////////////
///TCommPhaseNoType��һ��ͨѶʱ�κ�����
/////////////////////////////////////////////////////////////////////////
typedef short TFasexCommPhaseNoType;

/////////////////////////////////////////////////////////////////////////
///TRatioType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexRatioType[37];

/////////////////////////////////////////////////////////////////////////
///TPriceType��һ���۸�����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexPriceType[37];

/////////////////////////////////////////////////////////////////////////
///TMoneyType��һ���ʽ�����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexMoneyType[37];

/////////////////////////////////////////////////////////////////////////
///TVolumeType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexVolumeType[37];

/////////////////////////////////////////////////////////////////////////
///TIdentifiedCardNoV1Type��һ��ԭ֤����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexIdentifiedCardNoV1Type[21];

/////////////////////////////////////////////////////////////////////////
///TParticipantIDType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexParticipantIDType[11];

/////////////////////////////////////////////////////////////////////////
///TParticipantNameType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexParticipantNameType[51];

/////////////////////////////////////////////////////////////////////////
///TParticipantAbbrType��һ����Ա�������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexParticipantAbbrType[9];

/////////////////////////////////////////////////////////////////////////
///TUserIDType��һ�������û���������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexUserIDType[16];

/////////////////////////////////////////////////////////////////////////
///TPasswordType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexPasswordType[41];

/////////////////////////////////////////////////////////////////////////
///TClientIDType��һ���ͻ���������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexClientIDType[11];

/////////////////////////////////////////////////////////////////////////
///TInstrumentIDType��һ����Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexInstrumentIDType[31];

/////////////////////////////////////////////////////////////////////////
///TProductIDType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProductIDType[9];

/////////////////////////////////////////////////////////////////////////
///TProductNameType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProductNameType[21];

/////////////////////////////////////////////////////////////////////////
///TExchangeIDType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexExchangeIDType[9];

/////////////////////////////////////////////////////////////////////////
///TDateType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexDateType[9];

/////////////////////////////////////////////////////////////////////////
///TTradingDayType��һ��������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexTradingDayType[9];

/////////////////////////////////////////////////////////////////////////
///TTimeType��һ��ʱ������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexTimeType[9];

/////////////////////////////////////////////////////////////////////////
///TInstrumentNameType��һ����Լ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexInstrumentNameType[21];

/////////////////////////////////////////////////////////////////////////
///TProductGroupIDType��һ����Ʒ���������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProductGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TCurrencyType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexCurrencyType[31];

/////////////////////////////////////////////////////////////////////////
///TProductGroupNameType��һ����Ʒ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProductGroupNameType[21];

/////////////////////////////////////////////////////////////////////////
///TSettlementGroupIDType��һ���������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexSettlementGroupIDType[9];

/////////////////////////////////////////////////////////////////////////
///TOrderSysIDType��һ�������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexOrderSysIDType[21];

/////////////////////////////////////////////////////////////////////////
///TOTCOrderSysIDType��һ��OTC�����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexOTCOrderSysIDType[13];

/////////////////////////////////////////////////////////////////////////
///TTradeIDType��һ���ɽ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexTradeIDType[21];

/////////////////////////////////////////////////////////////////////////
///TOrderLocalIDType��һ�����ر����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexOrderLocalIDType[21];

/////////////////////////////////////////////////////////////////////////
///TComeFromType��һ����Ϣ��Դ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexComeFromType[21];

/////////////////////////////////////////////////////////////////////////
///TAccountIDType��һ���ʽ��ʺ�����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexAccountIDType[13];

/////////////////////////////////////////////////////////////////////////
///TCommodityIDType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexCommodityIDType[9];

/////////////////////////////////////////////////////////////////////////
///TCommandTypeType��һ��DB������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexCommandTypeType[65];

/////////////////////////////////////////////////////////////////////////
///TIPAddressType��һ��IP��ַ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexIPAddressType[16];

/////////////////////////////////////////////////////////////////////////
///TProductInfoType��һ����Ʒ��Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProductInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TProtocolInfoType��һ��Э����Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexProtocolInfoType[41];

/////////////////////////////////////////////////////////////////////////
///TBusinessUnitType��һ��ҵ��Ԫ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexBusinessUnitType[21];

/////////////////////////////////////////////////////////////////////////
///TTradingSystemNameType��һ������ϵͳ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexTradingSystemNameType[61];

/////////////////////////////////////////////////////////////////////////
///TTableNameType��һ����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexTableNameType[33];

/////////////////////////////////////////////////////////////////////////
///TIdCardTypeType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexIdCardTypeType[16];

/////////////////////////////////////////////////////////////////////////
///TIdentifiedCardNoType��һ��֤����������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexIdentifiedCardNoType[51];

/////////////////////////////////////////////////////////////////////////
///TPartyNameType��һ����������������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexPartyNameType[81];

/////////////////////////////////////////////////////////////////////////
///TErrorMsgType��һ��������Ϣ����
/////////////////////////////////////////////////////////////////////////
typedef char TFasexErrorMsgType[81];

/////////////////////////////////////////////////////////////////////////
///TContentType��һ����Ϣ��������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexContentType[501];

/////////////////////////////////////////////////////////////////////////
///TFieldNameType��һ���ֶ�������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexFieldNameType[1025];

/////////////////////////////////////////////////////////////////////////
///TFieldContentType��һ���ֶ���������
/////////////////////////////////////////////////////////////////////////
typedef char TFasexFieldContentType[1025];

/////////////////////////////////////////////////////////////////////////
///TTradingRoleType��һ�����׽�ɫ����
/////////////////////////////////////////////////////////////////////////
///����
#define FASEX_ER_Broker '1'
///��Ӫ
#define FASEX_ER_Host '2'
///������
#define FASEX_ER_MarketMaker '3'

typedef char TFasexTradingRoleType;

/////////////////////////////////////////////////////////////////////////
///TUserTypeType��һ�������û���������
/////////////////////////////////////////////////////////////////////////
///����Ա
#define FASEX_UT_Trader '1'
///���׿���Ա
#define FASEX_UT_TradeManager '2'
///�������û�
#define FASEX_UT_MDUser '3'
///����Ȩ����Ա
#define FASEX_UT_SingleTrader '4'
///�������Ա
#define FASEX_UT_SuperManager '5'

typedef char TFasexUserTypeType;

/////////////////////////////////////////////////////////////////////////
///TProductClassType��һ����Ʒ��������
/////////////////////////////////////////////////////////////////////////
///�����ʲ�
#define FASEX_PC_DAEX '1'

typedef char TFasexProductClassType;

/////////////////////////////////////////////////////////////////////////
///TInstrumentStatusType��һ����Լ����״̬����
/////////////////////////////////////////////////////////////////////////
///����ǰ
#define FASEX_IS_BeforeTrading '0'
///�ǽ���
#define FASEX_IS_NoTrading '1'
///��������
#define FASEX_IS_Continous '2'
///���Ͼ��۱���
#define FASEX_IS_AuctionOrdering '3'
///���Ͼ��ۼ۸�ƽ��
#define FASEX_IS_AuctionBalance '4'
///���Ͼ��۴��
#define FASEX_IS_AuctionMatch '5'
///����
#define FASEX_IS_Closed '6'

typedef char TFasexInstrumentStatusType;

/////////////////////////////////////////////////////////////////////////
///TDirectionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///��
#define FASEX_D_Buy '0'
///��
#define FASEX_D_Sell '1'

typedef char TFasexDirectionType;

/////////////////////////////////////////////////////////////////////////
///TExchangeDataSyncStatusType��һ������������ͬ��״̬����
/////////////////////////////////////////////////////////////////////////
///δͬ��
#define FASEX_EDS_Asynchronous '1'
///ͬ����
#define FASEX_EDS_Synchronizing '2'
///��ͬ��
#define FASEX_EDS_Synchronized '3'

typedef char TFasexExchangeDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TSGDataSyncStatusType��һ������������ͬ��״̬����
/////////////////////////////////////////////////////////////////////////
///δͬ��
#define FASEX_SGDS_Asynchronous '1'
///ͬ����
#define FASEX_SGDS_Synchronizing '2'
///��ͬ��
#define FASEX_SGDS_Synchronized '3'

typedef char TFasexSGDataSyncStatusType;

/////////////////////////////////////////////////////////////////////////
///TClientTypeType��һ���ͻ���������
/////////////////////////////////////////////////////////////////////////
///��Ȼ��
#define FASEX_CT_Person '0'
///����
#define FASEX_CT_Company '1'
///Ͷ�ʻ���
#define FASEX_CT_Fund '2'

typedef char TFasexClientTypeType;

/////////////////////////////////////////////////////////////////////////
///TInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
/////////////////////////////////////////////////////////////////////////
///�Զ��л�
#define FASEX_IER_Automatic '1'
///�ֶ��л�
#define FASEX_IER_Manual '2'

typedef char TFasexInstStatusEnterReasonType;

/////////////////////////////////////////////////////////////////////////
///TAccountActionTypeType��һ���ʺŲ�����������
/////////////////////////////////////////////////////////////////////////
///���
#define FASEX_AT_Deposit '1'
///����
#define FASEX_AT_Withdraw '2'
///�����ʽ�
#define FASEX_AT_FrozenMoney '3'
///�ͷŶ����ʽ�
#define FASEX_AT_FreeFrozenMoney '4'
///�ͷŶ����ʽ�,ͬʱ����
#define FASEX_AT_FrozenToWithdraw '5'

typedef char TFasexAccountActionTypeType;

/////////////////////////////////////////////////////////////////////////
///TOrderPriceTypeType��һ�������۸���������
/////////////////////////////////////////////////////////////////////////
///�����
#define FASEX_OPT_AnyPrice '1'
///�޼�
#define FASEX_OPT_LimitPrice '2'
///���ż�
#define FASEX_OPT_BestPrice '3'
///5����
#define FASEX_OPT_FiveLevelPrice '4'

typedef char TFasexOrderPriceTypeType;

/////////////////////////////////////////////////////////////////////////
///TOrderStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
///ȫ���ɽ�
#define FASEX_OST_AllTraded '0'
///���ֳɽ����ڶ�����
#define FASEX_OST_PartTradedQueueing '1'
///���ֳɽ����ڶ�����
#define FASEX_OST_PartTradedNotQueueing '2'
///δ�ɽ����ڶ�����
#define FASEX_OST_NoTradeQueueing '3'
///δ�ɽ����ڶ�����
#define FASEX_OST_NoTradeNotQueueing '4'
///����
#define FASEX_OST_Canceled '5'
///���ɲ���
#define FASEX_OST_PartTradedCanceled '6'

typedef char TFasexOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TOrderTypeType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
#define FASEX_ORDT_Normal '0'
///���ڽ��׳ɽ�
#define FASEX_ORDT_OTC '1'

typedef char TFasexOrderTypeType;

/////////////////////////////////////////////////////////////////////////
///TOTCOrderStatusType��һ��OTC����״̬����
/////////////////////////////////////////////////////////////////////////
///һ������
#define FASEX_OOS_Inputed '0'
///�Ѿ�ȷ��
#define FASEX_OOS_Confirmed '1'
///�Ѿ�����
#define FASEX_OOS_Canceled '2'
///�Ѿ��ܾ�
#define FASEX_OOS_Refused '3'

typedef char TFasexOTCOrderStatusType;

/////////////////////////////////////////////////////////////////////////
///TTimeConditionType��һ����Ч����������
/////////////////////////////////////////////////////////////////////////
///������ɣ�������
#define FASEX_TC_IOC '1'
///������Ч
#define FASEX_TC_GFS '2'
///������Ч
#define FASEX_TC_GFD '3'
///ָ������ǰ��Ч
#define FASEX_TC_GTD '4'
///����ǰ��Ч
#define FASEX_TC_GTC '5'
///���Ͼ�����Ч
#define FASEX_TC_GFA '6'

typedef char TFasexTimeConditionType;

/////////////////////////////////////////////////////////////////////////
///TVolumeConditionType��һ���ɽ�����������
/////////////////////////////////////////////////////////////////////////
///�κ�����
#define FASEX_VC_AV '1'
///��С����
#define FASEX_VC_MV '2'
///ȫ������
#define FASEX_VC_CV '3'

typedef char TFasexVolumeConditionType;

/////////////////////////////////////////////////////////////////////////
///TContingentConditionType��һ��������������
/////////////////////////////////////////////////////////////////////////
///����
#define FASEX_CC_Immediately '1'
///ֹ��
#define FASEX_CC_Touch '2'

typedef char TFasexContingentConditionType;

/////////////////////////////////////////////////////////////////////////
///TActionFlagType��һ��������־����
/////////////////////////////////////////////////////////////////////////
///ɾ��
#define FASEX_AF_Delete '0'
///����
#define FASEX_AF_Suspend '1'
///����
#define FASEX_AF_Active '2'
///�޸�
#define FASEX_AF_Modify '3'

typedef char TFasexActionFlagType;

/////////////////////////////////////////////////////////////////////////
///TTradingModelType��һ������ģʽ����
/////////////////////////////////////////////////////////////////////////
///�۸�����ʱ������
#define FASEX_TM_PriceTime '0'
///�۸����Ȱ���������
#define FASEX_TM_Prorata '1'

typedef char TFasexTradingModelType;

/////////////////////////////////////////////////////////////////////////
///TOrderSourceType��һ��������Դ����
/////////////////////////////////////////////////////////////////////////
///���Բ�����
#define FASEX_OSRC_Participant '0'
///���Թ���Ա
#define FASEX_OSRC_Administrator '1'

typedef char TFasexOrderSourceType;

/////////////////////////////////////////////////////////////////////////
///TTradeTypeType��һ���ɽ���������
/////////////////////////////////////////////////////////////////////////
///��ͨ�ɽ�
#define FASEX_TRDT_Common '0'
///OTC�ɽ�
#define FASEX_TRDT_OTC '1'

typedef char TFasexTradeTypeType;

/////////////////////////////////////////////////////////////////////////
///TMatchRoleType��һ���ɽ���ɫ����
/////////////////////////////////////////////////////////////////////////
///������
#define FASEX_MCHR_None '0'
///�����ɽ���
#define FASEX_MCHR_Taker '1'
///�����ɽ���
#define FASEX_MCHR_Maker '2'

typedef char TFasexMatchRoleType;

/////////////////////////////////////////////////////////////////////////
///TPriceSourceType��һ���ɽ�����Դ����
/////////////////////////////////////////////////////////////////////////
///ǰ�ɽ���
#define FASEX_PSRC_LastPrice '0'
///��ί�м�
#define FASEX_PSRC_Buy '1'
///��ί�м�
#define FASEX_PSRC_Sell '2'
///����ɽ���
#define FASEX_PSRC_OTC '3'

typedef char TFasexPriceSourceType;

/////////////////////////////////////////////////////////////////////////
///TMemberTypeType��һ����Ա��������
/////////////////////////////////////////////////////////////////////////
///���׻�Ա
#define FASEX_MT_Trading '0'
///�����Ա
#define FASEX_MT_Settlement '1'
///�ۺϻ�Ա
#define FASEX_MT_Compositive '2'

typedef char TFasexMemberTypeType;

/////////////////////////////////////////////////////////////////////////
///TTransStatusType��һ������״̬����
/////////////////////////////////////////////////////////////////////////
///�ȴ�����
#define FASEX_PTS_Init '0'
///����ʧ��
#define FASEX_PTS_Failure '1'
///�����ɹ�
#define FASEX_PTS_Success '2'

typedef char TFasexTransStatusType;

/////////////////////////////////////////////////////////////////////////
///TUserActionTypeType��һ���û��޸���������
/////////////////////////////////////////////////////////////////////////
///��ֹ����
#define FASEX_UAT_NonTrade '1'
///�ָ�����
#define FASEX_UAT_Trade '2'
///��������
#define FASEX_UAT_PwdUpd '3'
///�����޸�
#define FASEX_UAT_PwdMod '4'

typedef char TFasexUserActionTypeType;

#endif