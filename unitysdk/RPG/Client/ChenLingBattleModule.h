#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_21C7581DFE99F091_17;
class Class_1_555CF3ADB8FE92C8;
class Class_1_CAB3B26FAAB1AB26;
class Class_1_D811CE24096BDBCA_2;
class Class_1_F3EB7D0860A6C71F_1;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ChenLingBattleDeckInfo; }
namespace RPG::Client { class ChenLingBattleSoldierInfo; }
namespace RPG::Client { class ChenLingBattleStageInfo; }
namespace RPG::Client { class ChenLingPrivilegeInfo; }
namespace RPG::Client::Level { class ChenLingBattleConquerLevelInfo; }
namespace RPG::GameCore { class ChenLingBattleScoreSoldierConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B27320)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x17CC2950)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET UNITYSDK_OFFSET(0x17CC2840)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET UNITYSDK_OFFSET(0x17CC2730)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0x17B26A50)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET UNITYSDK_OFFSET(0x17B26A10)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0x17B26A70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0x17B26A30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x17B269F0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0x17CC3840)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x17CC3860)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x17B26A90)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x17B278A0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET UNITYSDK_OFFSET(0x17B26A60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET UNITYSDK_OFFSET(0x17B26A20)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET UNITYSDK_OFFSET(0x17B26A80)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET UNITYSDK_OFFSET(0x17B26A40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x17B26A00)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET UNITYSDK_OFFSET(0x17CC3850)
#define RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x17CC3870)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x17CC2A10)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B27920)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B27900)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET UNITYSDK_OFFSET(0x17CC33E0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET UNITYSDK_OFFSET(0x17CC2680)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET UNITYSDK_OFFSET(0x17CC3790)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x17CC2E60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x17CC2DB0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x17CC2C70)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x17CC3100)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET UNITYSDK_OFFSET(0x17CC3710)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET UNITYSDK_OFFSET(0x17CC3040)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET UNITYSDK_OFFSET(0x17CC3670)
#define RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET UNITYSDK_OFFSET(0x17CC2B60)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B27A30)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x17B279A0)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x17B27A40)
#define RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x17B27940)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleModule_TypeDefinitionIndex = 56645;

	class ChenLingBattleModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet_ACTIVITY_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xB820);
		}
		static ::System::UInt32* StaticGet_ACTIVITY_OFFERING_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xB824);
		}
		static ::System::UInt32* StaticGet_ACTIVITY_REWARD_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleModule_TypeDefinitionIndex)->GetStaticField(0xB828);
		}
		// static const ::System::String* BattleGameConfigPath; // 0x0
		::Class_1_555CF3ADB8FE92C8* _EnchantInfo_k__BackingField; // 0x10
		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* _ConquerLevelInfo_k__BackingField; // 0x18
		::Class_1_F3EB7D0860A6C71F_1* _SkillInfo_k__BackingField; // 0x20
		::RPG::GameCore::ChenLingBattleScoreSoldierConfig* BattleScoreSoldierConfig; // 0x28
		::RPG::Client::ChenLingPrivilegeInfo* _PrivilegeInfo_k__BackingField; // 0x30
		::RPG::Client::ChenLingBattleDeckInfo* _DeckInfo_k__BackingField; // 0x38
		::RPG::Client::ChenLingBattleStageInfo* _StageInfo_k__BackingField; // 0x40
		::RPG::Client::ChenLingBattleSoldierInfo* _SoldierInfo_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__CCTOR_OFFSET))();
		}

		::System::Void _InitConstants()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__INITCONSTANTS_OFFSET))(this);
		}

		::System::UInt32 GetTimeLimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETTIMELIMITREWARDID_OFFSET))(this);
		}

		::System::UInt32 GetResidentRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRESIDENTREWARDID_OFFSET))(this);
		}

		::RPG::Client::ActivityData* GetRelatedActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GETRELATEDACTIVITYDATA_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _SendGetDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__SENDGETDATAREQ_OFFSET))(this);
		}

		::System::Void _OnChenLingStartStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSTARTSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingQuitStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGQUITSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingSyncChangeScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGSYNCCHANGESCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _HandleSingleChange(::Class_1_CAB3B26FAAB1AB26* change)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CAB3B26FAAB1AB26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__HANDLESINGLECHANGE_OFFSET))(this, change);
		}

		::System::Void _OnStageProgressChange(::Class_1_21C7581DFE99F091_17* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEPROGRESSCHANGE_OFFSET))(this, info);
		}

		::System::Void _OnStageWavePhaseChange(::Class_1_D811CE24096BDBCA_2* ChenLingWavePhaseChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D811CE24096BDBCA_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONSTAGEWAVEPHASECHANGE_OFFSET))(this, ChenLingWavePhaseChange);
		}

		::System::Void _OnFinalStageMaxWaveChange(::System::UInt32 maxWave)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONFINALSTAGEMAXWAVECHANGE_OFFSET))(this, maxWave);
		}

		::System::Void _OnChenLingActivatedPrivilegeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE__ONCHENLINGACTIVATEDPRIVILEGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::ChenLingBattleSoldierInfo* get_SoldierInfo()
		{
			return ((::RPG::Client::ChenLingBattleSoldierInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SOLDIERINFO_OFFSET))(this);
		}

		::System::Void set_SoldierInfo(::RPG::Client::ChenLingBattleSoldierInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleSoldierInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SOLDIERINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattleStageInfo* get_StageInfo()
		{
			return ((::RPG::Client::ChenLingBattleStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_STAGEINFO_OFFSET))(this);
		}

		::System::Void set_StageInfo(::RPG::Client::ChenLingBattleStageInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleStageInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_STAGEINFO_OFFSET))(this, value);
		}

		::Class_1_F3EB7D0860A6C71F_1* get_SkillInfo()
		{
			return ((::Class_1_F3EB7D0860A6C71F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_SKILLINFO_OFFSET))(this);
		}

		::System::Void set_SkillInfo(::Class_1_F3EB7D0860A6C71F_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3EB7D0860A6C71F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_SKILLINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingBattleDeckInfo* get_DeckInfo()
		{
			return ((::RPG::Client::ChenLingBattleDeckInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_DECKINFO_OFFSET))(this);
		}

		::System::Void set_DeckInfo(::RPG::Client::ChenLingBattleDeckInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_DECKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChenLingPrivilegeInfo* get_PrivilegeInfo()
		{
			return ((::RPG::Client::ChenLingPrivilegeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_PRIVILEGEINFO_OFFSET))(this);
		}

		::System::Void set_PrivilegeInfo(::RPG::Client::ChenLingPrivilegeInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingPrivilegeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_PRIVILEGEINFO_OFFSET))(this, value);
		}

		::RPG::Client::Level::ChenLingBattleConquerLevelInfo* get_ConquerLevelInfo()
		{
			return ((::RPG::Client::Level::ChenLingBattleConquerLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_CONQUERLEVELINFO_OFFSET))(this);
		}

		::System::Void set_ConquerLevelInfo(::RPG::Client::Level::ChenLingBattleConquerLevelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Level::ChenLingBattleConquerLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_CONQUERLEVELINFO_OFFSET))(this, value);
		}

		::Class_1_555CF3ADB8FE92C8* get_EnchantInfo()
		{
			return ((::Class_1_555CF3ADB8FE92C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_GET_ENCHANTINFO_OFFSET))(this);
		}

		::System::Void set_EnchantInfo(::Class_1_555CF3ADB8FE92C8* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_555CF3ADB8FE92C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_SET_ENCHANTINFO_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
