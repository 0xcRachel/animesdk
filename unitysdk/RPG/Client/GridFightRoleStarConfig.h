#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_663;
namespace RPG::Client { class GridFightFrontSpecialSPConfig; }
namespace RPG::Client { class GridFightRoleSkillConfig; }
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightRoleServantStarConfigRow; }
namespace RPG::GameCore { class GridFightRoleStarConfigRow; }

#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALAVATARSKILLID_OFFSET UNITYSDK_OFFSET(0x18129320)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALSERVANTSKILLID_OFFSET UNITYSDK_OFFSET(0x181293D0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKPOWERBASE_OFFSET UNITYSDK_OFFSET(0x181149C0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x18128700)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x181290C0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x1812B390)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPMODIFIER_OFFSET UNITYSDK_OFFSET(0x1812B3A0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_DEFAULTSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x1812B2D0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_ENERGYBAR_OFFSET UNITYSDK_OFFSET(0x18114A60)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTPOWERBASE_OFFSET UNITYSDK_OFFSET(0x181149A0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x181283C0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x18128FF0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0x1812B340)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_GENERALPROPERTYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x1812B370)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HASFRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0x1812B360)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HEALBASE_OFFSET UNITYSDK_OFFSET(0x18114A20)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HPADDEDRATIO2_OFFSET UNITYSDK_OFFSET(0x18114AE0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALENERGYBAR_OFFSET UNITYSDK_OFFSET(0x18114C30)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALSPECIALSP_OFFSET UNITYSDK_OFFSET(0x18114020)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKCHANCE_OFFSET UNITYSDK_OFFSET(0x181149E0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKDAMAGE_OFFSET UNITYSDK_OFFSET(0x18114A00)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SERVANTSHOWSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x18128530)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SHIELDBASE_OFFSET UNITYSDK_OFFSET(0x18114A40)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x18114A80)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_SET_FRONTSPECIALSPCONFIG_OFFSET UNITYSDK_OFFSET(0x1812B350)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1811F1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleStarConfig_TypeDefinitionIndex = 59949;

	class GridFightRoleStarConfig : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_663* _BackSPModifier_k__BackingField; // 0x10
		::RPG::Client::GridFightFrontSpecialSPConfig* _FrontSpecialSPConfig_k__BackingField; // 0x18
		::RPG::Client::GridFightRoleSkillConfig* _BackSkillConfig; // 0x20
		::RPG::GameCore::GridFightRoleServantStarConfigRow* _ServantStarRow; // 0x28
		::RPG::GameCore::GridFightRoleStarConfigRow* _Row; // 0x30
		::Class_0_16E4307DCC419505_663* _BackSpeedModifier_k__BackingField; // 0x38
		::RPG::Client::GridFightRoleSkillConfig* _FrontSkillConfig; // 0x40

		::System::Void _ctor(::RPG::GameCore::GridFightRoleStarConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleStarConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 GetOriginalAvatarSkillID(::System::UInt32 skillID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALAVATARSKILLID_OFFSET))(this, skillID);
		}

		::System::UInt32 GetOriginalServantSkillID(::System::UInt32 skillID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GETORIGINALSERVANTSKILLID_OFFSET))(this, skillID);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_DefaultSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_DEFAULTSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_FrontSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillConfig* get_BackSkillConfig()
		{
			return ((::RPG::Client::GridFightRoleSkillConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSKILLCONFIG_OFFSET))(this);
		}

		::RPG::Client::GridFightFrontSpecialSPConfig* get_FrontSpecialSPConfig()
		{
			return ((::RPG::Client::GridFightFrontSpecialSPConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSPECIALSPCONFIG_OFFSET))(this);
		}

		::System::Void set_FrontSpecialSPConfig(::RPG::Client::GridFightFrontSpecialSPConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightFrontSpecialSPConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_SET_FRONTSPECIALSPCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_HasFrontSpecialSPConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HASFRONTSPECIALSPCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_FrontPowerBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTPOWERBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BackPowerBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKPOWERBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LuckChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LuckDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_LUCKDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_HealBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HEALBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_ShieldBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SHIELDBASE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitialEnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALENERGYBAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_EnergyBar()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_ENERGYBAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_HPAddedRatio2()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_HPADDEDRATIO2_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SpecialMaxSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SPECIALMAXSP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitialSpecialSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_INITIALSPECIALSP_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FrontShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_FRONTSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_BackShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ServantShowSkillIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_SERVANTSHOWSKILLIDLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_GeneralPropertyModifiers()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_GENERALPROPERTYMODIFIERS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_663* get_BackSpeedModifier()
		{
			return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPEEDMODIFIER_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_663* get_BackSPModifier()
		{
			return ((::Class_0_16E4307DCC419505_663*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG_GET_BACKSPMODIFIER_OFFSET))(this);
		}
	};
}
