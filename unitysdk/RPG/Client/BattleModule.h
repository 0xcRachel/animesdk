#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_4.h"
#include "unitysdk/Enum_3_DB663931210BBC27_8.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/BattleResultProcess_RestartOption.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_4230F9CA2B3ADD2E;
class Class_1_550BA41EEAAD6293;
class Class_1_973F1F5DEEACFA6C;
class Class_1_E591DF54310AABF5;
class Class_1_F3ECA6195BFBE70F_2;
namespace RPG::Client { class BattleResultInfo; }
namespace RPG::Client { class PunkLordData; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_BATTLEMODULE_CLEARBATTLETARGETINFO_OFFSET UNITYSDK_OFFSET(0x8DC21F0)
#define RPG_CLIENT_BATTLEMODULE_CLEARRESULTINFO_OFFSET UNITYSDK_OFFSET(0x8DC0E80)
#define RPG_CLIENT_BATTLEMODULE_GETAETHERDIVIDEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC24B0)
#define RPG_CLIENT_BATTLEMODULE_GETBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC2470)
#define RPG_CLIENT_BATTLEMODULE_GETCURRENTBATTLEID_OFFSET UNITYSDK_OFFSET(0x8DB1060)
#define RPG_CLIENT_BATTLEMODULE_GET_BATTLETARGETRECORD_OFFSET UNITYSDK_OFFSET(0x8DC2820)
#define RPG_CLIENT_BATTLEMODULE_GET_CANRESTARTBYTRIGGERBATTLE_OFFSET UNITYSDK_OFFSET(0x8DA99B0)
#define RPG_CLIENT_BATTLEMODULE_GET_CHALLENGETARGETTITLE_OFFSET UNITYSDK_OFFSET(0x8DC2830)
#define RPG_CLIENT_BATTLEMODULE_GET_DIABLEBATTLEGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x8DC2870)
#define RPG_CLIENT_BATTLEMODULE_GET_ISINBATTLE_OFFSET UNITYSDK_OFFSET(0x8DC27F0)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLEEND_OFFSET UNITYSDK_OFFSET(0x8DC2780)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLESTART_OFFSET UNITYSDK_OFFSET(0x8DC2760)
#define RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLETIME_OFFSET UNITYSDK_OFFSET(0x8DC27A0)
#define RPG_CLIENT_BATTLEMODULE_GET_LOCALBATTLEENDSTATUS_OFFSET UNITYSDK_OFFSET(0x8DC2740)
#define RPG_CLIENT_BATTLEMODULE_GET_PASSTARGETTITLE_OFFSET UNITYSDK_OFFSET(0x8DC2840)
#define RPG_CLIENT_BATTLEMODULE_GET_RESTARTOPTION_OFFSET UNITYSDK_OFFSET(0x8DC2970)
#define RPG_CLIENT_BATTLEMODULE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x8DC2730)
#define RPG_CLIENT_BATTLEMODULE_GET_SHOULDTOASTCANCELBATTLE_OFFSET UNITYSDK_OFFSET(0x8DC2800)
#define RPG_CLIENT_BATTLEMODULE_GET_TRIGGERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC2850)
#define RPG_CLIENT_BATTLEMODULE_GET_TRIGGETBATTLEEVENTID_OFFSET UNITYSDK_OFFSET(0x8DC29C0)
#define RPG_CLIENT_BATTLEMODULE_HASBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC24F0)
#define RPG_CLIENT_BATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8DC1130)
#define RPG_CLIENT_BATTLEMODULE_REQUESTCHECKCURBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC0DA0)
#define RPG_CLIENT_BATTLEMODULE_RESTARTCURRENTBATTLE_OFFSET UNITYSDK_OFFSET(0x8DAA200)
#define RPG_CLIENT_BATTLEMODULE_SETAETHERDIVIDEBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DAB6E0)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLEENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8DC2120)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DAB680)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETRECORD_OFFSET UNITYSDK_OFFSET(0x8DC25A0)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_1_OFFSET UNITYSDK_OFFSET(0x8DC2680)
#define RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_OFFSET UNITYSDK_OFFSET(0x8DC2610)
#define RPG_CLIENT_BATTLEMODULE_SETLOCALBATTLERESULTSTATUS_OFFSET UNITYSDK_OFFSET(0x8DC0FD0)
#define RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLEEND_OFFSET UNITYSDK_OFFSET(0x8DC2790)
#define RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLESTART_OFFSET UNITYSDK_OFFSET(0x8DC2770)
#define RPG_CLIENT_BATTLEMODULE_SET_LOCALBATTLEENDSTATUS_OFFSET UNITYSDK_OFFSET(0x8DC2750)
#define RPG_CLIENT_BATTLEMODULE_SET_SHOULDTOASTCANCELBATTLE_OFFSET UNITYSDK_OFFSET(0x8DC2810)
#define RPG_CLIENT_BATTLEMODULE_SET_TRIGGERBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x8DC2860)
#define RPG_CLIENT_BATTLEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC1300)
#define RPG_CLIENT_BATTLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC1250)
#define RPG_CLIENT_BATTLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DC2A10)
#define RPG_CLIENT_BATTLEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x8DC1E80)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLEGAMEMODESTATECHANGED_OFFSET UNITYSDK_OFFSET(0x8DC1EF0)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLEPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x8DC1DA0)
#define RPG_CLIENT_BATTLEMODULE__ONBATTLERESULTAFTERPHASE_OFFSET UNITYSDK_OFFSET(0x8DC1B50)
#define RPG_CLIENT_BATTLEMODULE__ONFINISHREWARDTOAST_OFFSET UNITYSDK_OFFSET(0x8DC1D50)
#define RPG_CLIENT_BATTLEMODULE__ONGETCURBATTLEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x8DC22D0)
#define RPG_CLIENT_BATTLEMODULE__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x8DC1BD0)
#define RPG_CLIENT_BATTLEMODULE__ONPVEBATTLERESULTSCRSP_OFFSET UNITYSDK_OFFSET(0x8DC1650)
#define RPG_CLIENT_BATTLEMODULE__ONQUITBATTLESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8DC15F0)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8DC2A90)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC2B80)
#define RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8DC2B20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleModule_TypeDefinitionIndex = 49908;

	class BattleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::Boolean* StaticGet_ADVMapUseHLOD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BattleModule_TypeDefinitionIndex)->GetStaticField(0xEBC0);
		}
		::Class_1_4230F9CA2B3ADD2E* _TriggerBattleInfo_k__BackingField; // 0x10
		::RPG::Client::BattleResultInfo* _BattleResultInfo; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BattleTargetRecord; // 0x20
		::RPG::GameCore::PVEGameStatistics* LastBattleStatistic; // 0x28
		::Class_1_550BA41EEAAD6293* _BattleStartInfo; // 0x30
		::Class_1_E591DF54310AABF5* BattleInfo; // 0x38
		::Class_1_F3ECA6195BFBE70F_2* CurrentPunkLordReplay; // 0x40
		::Class_1_973F1F5DEEACFA6C* AetherDivideBattleInfo; // 0x48
		::RPG::Client::PunkLordData* CurrentPunkLordData; // 0x50
		::System::Action* _GameStartPreAction; // 0x58
		::System::UInt32 _LastBattleStart_k__BackingField; // 0x60
		::System::UInt32 _LastBattleEnd_k__BackingField; // 0x64
		::RPG::Client::TextID _PassTargetTitle; // 0x68
		::RPG::Client::TextID _ChallengeTargetTitle; // 0x78
		::Enum_3_DB663931210BBC27_8 _LocalBattleEndStatus_k__BackingField; // 0x88
		::System::Boolean _InBattle; // 0x8C
		::System::Boolean _ShouldToastCancelBattle_k__BackingField; // 0x8D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void RequestCheckCurBattleInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_REQUESTCHECKCURBATTLEINFO_OFFSET))(this);
		}

		::System::Void ClearResultInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_CLEARRESULTINFO_OFFSET))(this);
		}

		::System::Void SetLocalBattleResultStatus(::System::Boolean isWin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETLOCALBATTLERESULTSTATUS_OFFSET))(this, isWin);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnQuitBattleScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONQUITBATTLESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPvebattleResultScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONPVEBATTLERESULTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnBattleResultAfterPhase(::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLERESULTAFTERPHASE_OFFSET))(this, rspObject);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _OnFinishRewardToast(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONFINISHREWARDTOAST_OFFSET))(this, arg);
		}

		::System::Void _OnBattlePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLEPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _OnBattleGameModeStateChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONBATTLEGAMEMODESTATECHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnGetCurBattleInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE__ONGETCURBATTLEINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SetBattleInfo(::Class_1_E591DF54310AABF5* battleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLEINFO_OFFSET))(this, battleInfo);
		}

		::Class_1_E591DF54310AABF5* GetBattleInfo()
		{
			return ((::Class_1_E591DF54310AABF5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETBATTLEINFO_OFFSET))(this);
		}

		::System::Void SetAetherDivideBattleInfo(::Class_1_973F1F5DEEACFA6C* aetherDivideBattleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETAETHERDIVIDEBATTLEINFO_OFFSET))(this, aetherDivideBattleInfo);
		}

		::Class_1_973F1F5DEEACFA6C* GetAetherDivideBattleInfo()
		{
			return ((::Class_1_973F1F5DEEACFA6C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETAETHERDIVIDEBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 GetCurrentBattleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GETCURRENTBATTLEID_OFFSET))(this);
		}

		::System::Boolean HasBattleInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_HASBATTLEINFO_OFFSET))(this);
		}

		::System::Void SetBattleTargetRecord(::System::UInt32 key, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETRECORD_OFFSET))(this, key, value);
		}

		::System::Void SetBattleTargetTitle(::RPG::Client::TextID passTargetTitle, ::RPG::Client::TextID challengeTargetTitle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_OFFSET))(this, passTargetTitle, challengeTargetTitle);
		}

		::System::Void SetBattleTargetTitle_1(::System::String* passTargetTitle, ::System::String* challengeTargetTitle)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLETARGETTITLE_1_OFFSET))(this, passTargetTitle, challengeTargetTitle);
		}

		::System::Void ClearBattleTargetInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_CLEARBATTLETARGETINFO_OFFSET))(this);
		}

		::System::Boolean RestartCurrentBattle(::Enum_3_71AA90D596A09AC8_4 rebattleType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_RESTARTCURRENTBATTLE_OFFSET))(this, rebattleType);
		}

		::System::Void SetBattleEndTimeStamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SETBATTLEENDTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::BattleResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::BattleResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_RESULTINFO_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_8 get_LocalBattleEndStatus()
		{
			return ((::Enum_3_DB663931210BBC27_8(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LOCALBATTLEENDSTATUS_OFFSET))(this);
		}

		::System::Void set_LocalBattleEndStatus(::Enum_3_DB663931210BBC27_8 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_8))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LOCALBATTLEENDSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_LastBattleStart()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLESTART_OFFSET))(this);
		}

		::System::Void set_LastBattleStart(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLESTART_OFFSET))(this, value);
		}

		::System::UInt32 get_LastBattleEnd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLEEND_OFFSET))(this);
		}

		::System::Void set_LastBattleEnd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_LASTBATTLEEND_OFFSET))(this, value);
		}

		::System::UInt32 get_LastBattleTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_LASTBATTLETIME_OFFSET))(this);
		}

		::System::Boolean get_IsInBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_ISINBATTLE_OFFSET))(this);
		}

		::System::Boolean get_ShouldToastCancelBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_SHOULDTOASTCANCELBATTLE_OFFSET))(this);
		}

		::System::Void set_ShouldToastCancelBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_SHOULDTOASTCANCELBATTLE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_BattleTargetRecord()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_BATTLETARGETRECORD_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeTargetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_CHALLENGETARGETTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PassTargetTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_PASSTARGETTITLE_OFFSET))(this);
		}

		::Class_1_4230F9CA2B3ADD2E* get_TriggerBattleInfo()
		{
			return ((::Class_1_4230F9CA2B3ADD2E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_TRIGGERBATTLEINFO_OFFSET))(this);
		}

		::System::Void set_TriggerBattleInfo(::Class_1_4230F9CA2B3ADD2E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4230F9CA2B3ADD2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_SET_TRIGGERBATTLEINFO_OFFSET))(this, value);
		}

		::System::Boolean get_CanRestartByTriggerBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_CANRESTARTBYTRIGGERBATTLE_OFFSET))(this);
		}

		::System::Boolean get_DiableBattleGlobalConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_DIABLEBATTLEGLOBALCONFIG_OFFSET))(this);
		}

		::RPG::Client::BattleResultProcess_RestartOption get_RestartOption()
		{
			return ((::RPG::Client::BattleResultProcess_RestartOption(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_RESTARTOPTION_OFFSET))(this);
		}

		::System::UInt32 get_TriggetBattleEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE_GET_TRIGGETBATTLEEVENTID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
