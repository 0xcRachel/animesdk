#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG_METHOD_3_D34C2B1F864B1994_OFFSET UNITYSDK_OFFSET(0x16B319C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG_METHOD_3_F2637465A9A0E15D_OFFSET UNITYSDK_OFFSET(0x16B34A40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B31970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeRoleConfig_TypeDefinitionIndex = 17452;

	class GridFightModifierUpgradeRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F2637465A9A0E15D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG_METHOD_3_F2637465A9A0E15D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D34C2B1F864B1994(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEROLECONFIG_METHOD_3_D34C2B1F864B1994_OFFSET))(a1, a2);
		}
	};
}
