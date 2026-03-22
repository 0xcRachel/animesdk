#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_5_57C1CFA4C16BC2DD_OFFSET UNITYSDK_OFFSET(0x16B16440)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_5_E29A3446799774E7_OFFSET UNITYSDK_OFFSET(0x16B16570)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B164F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddGlobalSavedValueConfig_TypeDefinitionIndex = 17334;

	class GridFightActionAddGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_57C1CFA4C16BC2DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_5_57C1CFA4C16BC2DD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E29A3446799774E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionAddGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDGLOBALSAVEDVALUECONFIG_METHOD_5_E29A3446799774E7_OFFSET))(a1, a2);
		}
	};
}
