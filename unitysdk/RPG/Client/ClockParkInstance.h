#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04_1;
class Class_1_3AE7F314F70B83F2_2;
class Class_1_434341DAC51FD4BD_76;
class Class_1_4DF3292AA5AADAD0_2;
class Class_1_5FEFAED860528596_19;
class Class_1_79BE030ADC5EF318;
class Class_1_8679A895216DFB85;
class Class_1_A0360CE19DA90CEC_3;
class Class_1_C03D623E9F32FBCB_17;
class Class_1_C03D623E9F32FBCB_19;
class Class_1_C03D623E9F32FBCB_20;
class Class_1_E7C4009BCC22497A_9;
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

#define RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x8FA5A90)
#define RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA3020)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x8FA6370)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x8FA62B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET UNITYSDK_OFFSET(0x8FA5830)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x8FA6430)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x8FA59F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x8FA5970)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x8FA5990)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x8FA59D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x8FA6700)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x8FA6740)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x8FA59B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x8FA5A70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x8FA6720)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x8FA5A30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x8FA5A10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x8FA5A50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x8FA5950)
#define RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x8FA2A40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x8FA63D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x8FA6310)
#define RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET UNITYSDK_OFFSET(0x8FA2F40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET UNITYSDK_OFFSET(0x8FA3400)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x8FA5A00)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x8FA5980)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x8FA59A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x8FA59E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x8FA6710)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x8FA6750)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x8FA59C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x8FA5A80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x8FA6730)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x8FA5A40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x8FA5A20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x8FA5A60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x8FA5960)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0x8FA3C80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET UNITYSDK_OFFSET(0x8FA3560)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x8FA3510)
#define RPG_CLIENT_CLOCKPARKINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA2920)
#define RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x8FA3120)
#define RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET UNITYSDK_OFFSET(0x8FA3DE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET UNITYSDK_OFFSET(0x8FA2C70)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x8FA5130)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x8FA3800)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET UNITYSDK_OFFSET(0x8FA3860)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET UNITYSDK_OFFSET(0x8FA40A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x8FA36E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET UNITYSDK_OFFSET(0x8FA38C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x8FA4030)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET UNITYSDK_OFFSET(0x8FA5450)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x8FA5680)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x8FA53E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET UNITYSDK_OFFSET(0x8FA5310)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x8FA54C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_TypeDefinitionIndex = 48731;

	class ClockParkInstance : public ::System::Object
	{
	public:
		::RPG::Client::ClockParkAttributeInfo* _AttributeInfo_k__BackingField; // 0x10
		::RPG::Client::ClockParkGameResultInfo* _ResultInfo_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise* _RefreshOnGoingPromise; // 0x20
		::System::String* _ScriptTransNo_k__BackingField; // 0x28
		::RPG::Client::ClockParkWaitSelectStartChapterState* _SelectStartChapterState; // 0x30
		::RPG::Client::ClockParkLittleGameState* _LittleGameState; // 0x38
		::RPG::Client::BaseClockParkGameState* _CurGameState_k__BackingField; // 0x40
		::RPG::Common::StateMachine_1<::RPG::Client::ClockParkInstance*>* _StateMachine; // 0x48
		::RPG::Client::ClockParkInstance_ClockParkRandomEventState* _RandomEventState; // 0x50
		::RPG::Client::ClockParkSlotMachineState* _SlotMachineState; // 0x58
		::RPG::Client::ClockParkCardInfo* _CardInfo_k__BackingField; // 0x60
		::RPG::Client::ClockParkInstance_ClockParkStoryState* _StoryState; // 0x68
		::RPG::Client::ClockParkBuffInfo* _BuffInfo_k__BackingField; // 0x70
		::RPG::Client::ClockParkDiceInfo* _DiceInfo_k__BackingField; // 0x78
		::RPG::Client::ClockParkInstance_ClockParkCheckState* _CheckState; // 0x80
		::RPG::Client::ClockParkScriptInfo* _ScriptInfo_k__BackingField; // 0x88
		::RPG::Client::ClockParkInstance_ClockParkBranchSelectState* _BranchSelectState; // 0x90
		::RPG::Client::ClockParkActionInfo* _ActionInfo_k__BackingField; // 0x98
		::Enum_3_DB663931210BBC27_24 _Status_k__BackingField; // 0xA0
		::System::Boolean _IsWaitSelectStartChapterId_k__BackingField; // 0xA4
		::System::Boolean IsManualQuit; // 0xA5
		::RPG::Client::ClockParkGameStateEnum _CurGameStateEnum_k__BackingField; // 0xA8
		::RPG::Client::ClockParkGameStateEnum _PrevGameStateEnum_k__BackingField; // 0xAC

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

		::System::Void SyncStatus(::Enum_3_DB663931210BBC27_24 status)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET))(this, status);
		}

		::System::Void SyncOnGoing(::Class_1_3AE7F314F70B83F2_2* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AE7F314F70B83F2_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET))(this, rsp);
		}

		::System::Void SyncLotteryID(::System::UInt32 lotteryID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET))(this, lotteryID);
		}

		::System::Void _SyncScriptInfo(::System::UInt32 scriptID, ::System::UInt32 chapterID, ::System::Collections::Generic::IList_1<::System::UInt32>* chapterPathList, ::System::UInt32 roundID, ::System::UInt32 roundIndexInChapter, ::System::UInt32 checkPointID, ::System::UInt32 EndlessScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET))(this, scriptID, chapterID, chapterPathList, roundID, roundIndexInChapter, checkPointID, EndlessScore);
		}

		::System::Void _SyncWaitFinishStoryInfo(::Class_1_434341DAC51FD4BD_76* waitFinishStoryInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_434341DAC51FD4BD_76*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET))(this, waitFinishStoryInfo);
		}

		::System::Void _SyncWaitPlaceDiceInfo(::Class_1_C03D623E9F32FBCB_17* waitPlaceDiceInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET))(this, waitPlaceDiceInfo);
		}

		::System::Void _SyncWaitMoveGameInfo(::Class_1_C03D623E9F32FBCB_19* waitMovieGameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET))(this, waitMovieGameInfo);
		}

		::System::Void _SyncWaitHanuShootingInfo(::Class_1_C03D623E9F32FBCB_20* waitHanuShootingInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET))(this, waitHanuShootingInfo);
		}

		::System::Void _SyncWaitSlotMachineInfo(::Class_1_4DF3292AA5AADAD0_2* waitSlotMachineInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET))(this, waitSlotMachineInfo);
		}

		::System::Void _SyncWaitInCheckPoint(::Class_1_A0360CE19DA90CEC_3* waitInCheckPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0360CE19DA90CEC_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET))(this, waitInCheckPoint);
		}

		::System::Void _SyncCardDice(::Class_1_5FEFAED860528596_19* dicePlacement)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_19*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET))(this, dicePlacement);
		}

		::System::Void _SyncAttribute(::Class_1_32044B0173B87B04_1* attributes)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32044B0173B87B04_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET))(this, attributes);
		}

		::System::Void _SyncBuffInfo(::Class_1_E7C4009BCC22497A_9* buffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET))(this, buffInfo);
		}

		::System::Void _SyncState(::Class_1_8679A895216DFB85* roundInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8679A895216DFB85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET))(this, roundInfo);
		}

		::System::Void Finish(::Class_1_79BE030ADC5EF318* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79BE030ADC5EF318*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET))(this, finishInfo);
		}

		::Enum_3_DB663931210BBC27_24 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_24(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_24 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET))(this, value);
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

		::Class_1_5FEFAED860528596_19* CreateDicePlacement()
		{
			return ((::Class_1_5FEFAED860528596_19*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET))(this);
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
