#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_5_771CD7B007BE3E47_OFFSET UNITYSDK_OFFSET(0x16B18460)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_5_AF0AAC326209443D_OFFSET UNITYSDK_OFFSET(0x16B18D50)
#define RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B183E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRemoveRoleConfig_TypeDefinitionIndex = 17330;

	class GridFightActionRemoveRoleConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AF0AAC326209443D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_5_AF0AAC326209443D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_771CD7B007BE3E47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRemoveRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRemoveRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREMOVEROLECONFIG_METHOD_5_771CD7B007BE3E47_OFFSET))(a1, a2);
		}
	};
}
