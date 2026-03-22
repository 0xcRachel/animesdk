#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class BattleActionEventRow; }
namespace RPG::GameCore { class HeliobusSkillRow; }

#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_BATTLEACTIONDATA_OFFSET UNITYSDK_OFFSET(0x94B8330)
#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x94B8350)
#define RPG_CLIENT_HELIOBUSSKILLDATA_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x94B8310)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SETSKILLUNLOCK_OFFSET UNITYSDK_OFFSET(0x94B0940)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_BATTLEACTIONDATA_OFFSET UNITYSDK_OFFSET(0x94B8340)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x94B8360)
#define RPG_CLIENT_HELIOBUSSKILLDATA_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0x94B8320)
#define RPG_CLIENT_HELIOBUSSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94B0640)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSkillData_TypeDefinitionIndex = 52204;

	class HeliobusSkillData : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleActionEventRow* _BattleActionData_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusSkillRow* _SkillData_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA__CTOR_OFFSET))(this, id);
		}

		::System::Void SetSkillUnlock(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SETSKILLUNLOCK_OFFSET))(this, isUnlocked);
		}

		::RPG::GameCore::HeliobusSkillRow* get_SkillData()
		{
			return ((::RPG::GameCore::HeliobusSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_SKILLDATA_OFFSET))(this);
		}

		::System::Void set_SkillData(::RPG::GameCore::HeliobusSkillRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeliobusSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_SKILLDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::BattleActionEventRow* get_BattleActionData()
		{
			return ((::RPG::GameCore::BattleActionEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_BATTLEACTIONDATA_OFFSET))(this);
		}

		::System::Void set_BattleActionData(::RPG::GameCore::BattleActionEventRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleActionEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_BATTLEACTIONDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSKILLDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
