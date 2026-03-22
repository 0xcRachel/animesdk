#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesSkillBuffState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesLandType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace RPG::Client { class PlanetFesSkill; }
namespace RPG::Client { class PlanetFesSkillBuffData; }
namespace RPG::Client { class PlanetFesSkillPhase; }
namespace RPG::GameCore { class PlanetFesFunctionRow; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CANUPGRADE_OFFSET UNITYSDK_OFFSET(0x9B01780)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B00ED0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_DOUPGRADE_OFFSET UNITYSDK_OFFSET(0x9B018B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETBUFFLANDTYPE_OFFSET UNITYSDK_OFFSET(0x9B021F0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_1_OFFSET UNITYSDK_OFFSET(0x9B01AD0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_OFFSET UNITYSDK_OFFSET(0x9B01A70)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B01660)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B012C0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETLOCKREASON_OFFSET UNITYSDK_OFFSET(0x9B00F70)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETSTATE_OFFSET UNITYSDK_OFFSET(0x9B01490)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_BUFFDATA_OFFSET UNITYSDK_OFFSET(0x9B015E0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B02320)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_NEXTDESC_OFFSET UNITYSDK_OFFSET(0x9B02380)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMID_OFFSET UNITYSDK_OFFSET(0x9B02420)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMNUM_OFFSET UNITYSDK_OFFSET(0x9B019B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__COLLECTSKILLID_OFFSET UNITYSDK_OFFSET(0x9B024B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__LEVELUPSKILLID_OFFSET UNITYSDK_OFFSET(0x9B025C0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x9B01BE0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__NET_OFFSET UNITYSDK_OFFSET(0x9B02480)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9B01A10)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B016B0)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_TRYUPGRADE_OFFSET UNITYSDK_OFFSET(0x9B01720)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B00F60)
#define RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__PHASEFUNCTION_OFFSET UNITYSDK_OFFSET(0x9B01C40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSkillBuffDisplayData_TypeDefinitionIndex = 53090;

	class PlanetFesSkillBuffDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSkill* _SkillData; // 0x10
		::RPG::Client::PlanetFesSkillPhase* _PhaseData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSkillBuffDisplayData* Create(::RPG::Client::PlanetFesSkillPhase* phaseData, ::RPG::Client::PlanetFesSkill* skillData)
		{
			return ((::RPG::Client::PlanetFesSkillBuffDisplayData*(*)(::RPG::Client::PlanetFesSkillPhase*, ::RPG::Client::PlanetFesSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CREATE_OFFSET))(phaseData, skillData);
		}

		::RPG::Client::TextID GetLockReason()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETLOCKREASON_OFFSET))(this);
		}

		::System::Boolean GetIsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::PlanetFesSkillBuffState GetState()
		{
			return ((::RPG::Client::PlanetFesSkillBuffState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETSTATE_OFFSET))(this);
		}

		::System::Boolean GetIsPhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETISPHASEUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsNewUnlock(::System::UInt32 skillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISNEWUNLOCK_OFFSET))(this, skillID);
		}

		::System::Void TryUpgrade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_TRYUPGRADE_OFFSET))(this);
		}

		::System::Boolean CanUpgrade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_CANUPGRADE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_ISACTIVE_OFFSET))(this);
		}

		::System::Void DoUpgrade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_DOUPGRADE_OFFSET))(this);
		}

		::System::String* GetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_OFFSET))(this);
		}

		::System::String* GetDesc_1(::System::UInt32 buffID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETDESC_1_OFFSET))(this, buffID);
		}

		::RPG::GameCore::PlanetFesLandType GetBuffLandType()
		{
			return ((::RPG::GameCore::PlanetFesLandType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GETBUFFLANDTYPE_OFFSET))(this);
		}

		::System::String* _PhaseFunction(::RPG::GameCore::PlanetFesFunctionRow* row)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PlanetFesFunctionRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA__PHASEFUNCTION_OFFSET))(this, row);
		}

		::RPG::Client::PlanetFesSkillBuffData* get_BuffData()
		{
			return ((::RPG::Client::PlanetFesSkillBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_BUFFDATA_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NextDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_NEXTDESC_OFFSET))(this);
		}

		::System::UInt32 get_SkillItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMID_OFFSET))(this);
		}

		::System::UInt32 get_SkillItemNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET_SKILLITEMNUM_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__MODULE_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* get__Net()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__NET_OFFSET))(this);
		}

		::System::UInt32 get__CollectSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__COLLECTSKILLID_OFFSET))(this);
		}

		::System::UInt32 get__LevelUpSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSKILLBUFFDISPLAYDATA_GET__LEVELUPSKILLID_OFFSET))(this);
		}
	};
}
