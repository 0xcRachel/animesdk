#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_5_3CE45774548C6550_OFFSET UNITYSDK_OFFSET(0x16B18580)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_5_86AE05F06CB0A6C2_OFFSET UNITYSDK_OFFSET(0x16B18EB0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSetGlobalSavedValueConfig_TypeDefinitionIndex = 17335;

	class GridFightActionSetGlobalSavedValueConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_86AE05F06CB0A6C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_5_86AE05F06CB0A6C2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3CE45774548C6550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionSetGlobalSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSETGLOBALSAVEDVALUECONFIG_METHOD_5_3CE45774548C6550_OFFSET))(a1, a2);
		}
	};
}
