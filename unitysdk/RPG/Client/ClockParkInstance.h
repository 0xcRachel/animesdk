#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_25.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_1;
class Class_1_3AE7F314F70B83F2_1;
class Class_1_434341DAC51FD4BD_87;
class Class_1_4DF3292AA5AADAD0_3;
class Class_1_5FEFAED860528596_22;
class Class_1_8679A895216DFB85;
class Class_1_A0360CE19DA90CEC_4;
class Class_1_C03D623E9F32FBCB_19;
class Class_1_C03D623E9F32FBCB_21;
class Class_1_C03D623E9F32FBCB_22;
class Class_1_DCE302F7FD05DE84_1;
class Class_1_E7C4009BCC22497A_8;
namespace RPG::Client { class BaseClockParkGameState; }
namespace RPG::Client { class ClockParkActionInfo; }
namespace RPG::Client { class ClockParkAttributeInfo; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkDiceInfo; }
namespace RPG::Client { class ClockParkGameResultInfo; }
namespace RPG::Client { class ClockParkInstance_ClockParkBranchSelectState; }
namespace RPG::Client { class ClockParkInstance_ClockParkCheckState; }
namespace RPG::Client { class ClockParkInstance_ClockParkRandomEventState; }
namespace RPG::Client { class ClockParkInstance_ClockParkStoryState; }
namespace RPG::Client { class ClockParkLittleGameState; }
namespace RPG::Client { class ClockParkScriptInfo; }
namespace RPG::Client { class ClockParkSlotMachineState; }
namespace RPG::Client { class ClockParkWaitSelectStartChapterState; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x9400CF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93FE270)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x94015E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x9401520)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET UNITYSDK_OFFSET(0x9400A90)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x94016A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x9400C50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x9400BD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9400BF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x9400C30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x9401970)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x94019B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x9400C10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x9400CD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x9401990)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x9400C90)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x9400C70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x9400CB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9400BB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x93FDC80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x9401640)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x9401580)
#define RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET UNITYSDK_OFFSET(0x93FE190)
#define RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET UNITYSDK_OFFSET(0x93FE650)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x9400C60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x9400BE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9400C00)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x9400C40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x9401980)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x94019C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x9400C20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x9400CE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x94019A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x9400CA0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x9400C80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x9400CC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9400BC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0x93FEED0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET UNITYSDK_OFFSET(0x93FE7B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x93FE760)
#define RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x93FDB60)
#define RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x93FE370)
#define RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET UNITYSDK_OFFSET(0x93FF030)
#define RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET UNITYSDK_OFFSET(0x93FDEB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x9400390)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x93FEA50)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET UNITYSDK_OFFSET(0x93FEAB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET UNITYSDK_OFFSET(0x93FF2F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x93FE930)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET UNITYSDK_OFFSET(0x93FEB10)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x93FF280)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET UNITYSDK_OFFSET(0x94006B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x94008E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9400640)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET UNITYSDK_OFFSET(0x9400570)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x9400720)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_TypeDefinitionIndex = 49865;

	class ClockParkInstance : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkInstance_ClockParkCheckState* _CheckState; // 0x10
		::RPG::Client::ClockParkAttributeInfo* _AttributeInfo_k__BackingField; // 0x18
		::RPG::Common::StateMachine_1<::RPG::Client::ClockParkInstance*>* _StateMachine; // 0x20
		::RPG::Client::BaseClockParkGameState* _CurGameState_k__BackingField; // 0x28
		::RPG::Client::ClockParkActionInfo* _ActionInfo_k__BackingField; // 0x30
		::RPG::Client::ClockParkLittleGameState* _LittleGameState; // 0x38
		::RPG::Client::ClockParkWaitSelectStartChapterState* _SelectStartChapterState; // 0x40
		::RPG::Client::Promises::Promise* _RefreshOnGoingPromise; // 0x48
		::RPG::Client::ClockParkBuffInfo* _BuffInfo_k__BackingField; // 0x50
		::RPG::Client::ClockParkCardInfo* _CardInfo_k__BackingField; // 0x58
		::RPG::Client::ClockParkInstance_ClockParkBranchSelectState* _BranchSelectState; // 0x60
		::RPG::Client::ClockParkInstance_ClockParkStoryState* _StoryState; // 0x68
		::RPG::Client::ClockParkScriptInfo* _ScriptInfo_k__BackingField; // 0x70
		::System::String* _ScriptTransNo_k__BackingField; // 0x78
		::RPG::Client::ClockParkDiceInfo* _DiceInfo_k__BackingField; // 0x80
		::RPG::Client::ClockParkInstance_ClockParkRandomEventState* _RandomEventState; // 0x88
		::RPG::Client::ClockParkSlotMachineState* _SlotMachineState; // 0x90
		::RPG::Client::ClockParkGameResultInfo* _ResultInfo_k__BackingField; // 0x98
		::RPG::Client::ClockParkGameStateEnum _CurGameStateEnum_k__BackingField; // 0xA0
		::System::Boolean _IsWaitSelectStartChapterId_k__BackingField; // 0xA4
		::System::Boolean IsManualQuit; // 0xA5
		::RPG::Client::ClockParkGameStateEnum _PrevGameStateEnum_k__BackingField; // 0xA8
		::Enum_3_DB663931210BBC27_25 _Status_k__BackingField; // 0xAC

		::System::Void _ctor(::System::UInt32 scriptID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET))(this, scriptID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void QuitCurGame(::System::Boolean isSettleAndClear)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET))(this, isSettleAndClear);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshOnGoingInfo()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET))(this);
		}

		::System::Void SyncStatus(::Enum_3_DB663931210BBC27_25 status)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_25))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET))(this, status);
		}

		::System::Void SyncOnGoing(::Class_1_3AE7F314F70B83F2_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET))(this, rsp);
		}

		::System::Void SyncLotteryID(::System::UInt32 lotteryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET))(this, lotteryID);
		}

		::System::Void _SyncScriptInfo(::System::UInt32 scriptID, ::System::UInt32 chapterID, ::System::Collections::Generic::IList_1<::System::UInt32>* chapterPathList, ::System::UInt32 roundID, ::System::UInt32 roundIndexInChapter, ::System::UInt32 checkPointID, ::System::UInt32 EndlessScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET))(this, scriptID, chapterID, chapterPathList, roundID, roundIndexInChapter, checkPointID, EndlessScore);
		}

		::System::Void _SyncWaitFinishStoryInfo(::Class_1_434341DAC51FD4BD_87* waitFinishStoryInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_87*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET))(this, waitFinishStoryInfo);
		}

		::System::Void _SyncWaitPlaceDiceInfo(::Class_1_C03D623E9F32FBCB_19* waitPlaceDiceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET))(this, waitPlaceDiceInfo);
		}

		::System::Void _SyncWaitMoveGameInfo(::Class_1_C03D623E9F32FBCB_21* waitMovieGameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET))(this, waitMovieGameInfo);
		}

		::System::Void _SyncWaitHanuShootingInfo(::Class_1_C03D623E9F32FBCB_22* waitHanuShootingInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET))(this, waitHanuShootingInfo);
		}

		::System::Void _SyncWaitSlotMachineInfo(::Class_1_4DF3292AA5AADAD0_3* waitSlotMachineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET))(this, waitSlotMachineInfo);
		}

		::System::Void _SyncWaitInCheckPoint(::Class_1_A0360CE19DA90CEC_4* waitInCheckPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET))(this, waitInCheckPoint);
		}

		::System::Void _SyncCardDice(::Class_1_5FEFAED860528596_22* dicePlacement)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET))(this, dicePlacement);
		}

		::System::Void _SyncAttribute(::Class_1_32044B0173B87B04_1* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET))(this, attributes);
		}

		::System::Void _SyncBuffInfo(::Class_1_E7C4009BCC22497A_8* buffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET))(this, buffInfo);
		}

		::System::Void _SyncState(::Class_1_8679A895216DFB85* roundInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8679A895216DFB85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET))(this, roundInfo);
		}

		::System::Void Finish(::Class_1_DCE302F7FD05DE84_1* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DCE302F7FD05DE84_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET))(this, finishInfo);
		}

		::Enum_3_DB663931210BBC27_25 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_25(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_25 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_25))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkAttributeInfo* get_AttributeInfo()
		{
			return ((::RPG::Client::ClockParkAttributeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void set_AttributeInfo(::RPG::Client::ClockParkAttributeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::ClockParkBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::ClockParkBuffInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkDiceInfo* get_DiceInfo()
		{
			return ((::RPG::Client::ClockParkDiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET))(this);
		}

		::System::Void set_DiceInfo(::RPG::Client::ClockParkDiceInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkCardInfo* get_CardInfo()
		{
			return ((::RPG::Client::ClockParkCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::ClockParkCardInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkActionInfo* get_ActionInfo()
		{
			return ((::RPG::Client::ClockParkActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET))(this);
		}

		::System::Void set_ActionInfo(::RPG::Client::ClockParkActionInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkScriptInfo* get_ScriptInfo()
		{
			return ((::RPG::Client::ClockParkScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET))(this);
		}

		::System::Void set_ScriptInfo(::RPG::Client::ClockParkScriptInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkGameResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET))(this);
		}

		::System::Void set_ResultInfo(::RPG::Client::ClockParkGameResultInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET))(this, value);
		}

		::System::String* get_ScriptTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ScriptTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitSelectStartChapterId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this);
		}

		::System::Void set_IsWaitSelectStartChapterId(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this, value);
		}

		::Class_1_5FEFAED860528596_22* CreateDicePlacement()
		{
			return ((::Class_1_5FEFAED860528596_22*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::RPG::Client::BaseClockParkGameState* GetState(::RPG::Client::ClockParkGameStateEnum state)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET))(this, state);
		}

		::System::Void _InitGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET))(this);
		}

		::System::Void _DisposeGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET))(this);
		}

		::System::Void _SwitchState(::RPG::Client::ClockParkGameStateEnum targetState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET))(this, targetState);
		}

		::RPG::Client::BaseClockParkGameState* _GetState(::RPG::Client::ClockParkGameStateEnum stateEnum)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET))(this, stateEnum);
		}

		::RPG::Client::ClockParkGameStateEnum get_CurGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_CurGameStateEnum(::RPG::Client::ClockParkGameStateEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET))(this, value);
		}

		::RPG::Client::ClockParkGameStateEnum get_PrevGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_PrevGameStateEnum(::RPG::Client::ClockParkGameStateEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET))(this, value);
		}

		::RPG::Client::BaseClockParkGameState* get_CurGameState()
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::BaseClockParkGameState* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseClockParkGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET))(this, value);
		}
	};
}
