#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_5_14705253EF32F3A3_OFFSET UNITYSDK_OFFSET(0x16B3B160)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_5_A9435CABE9A41C96_OFFSET UNITYSDK_OFFSET(0x16B3AF30)
#define RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3B070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamIsEquipPreBattleConfig_TypeDefinitionIndex = 17481;

	class GridFightParamIsEquipPreBattleConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A9435CABE9A41C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_5_A9435CABE9A41C96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_14705253EF32F3A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamIsEquipPreBattleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMISEQUIPPREBATTLECONFIG_METHOD_5_14705253EF32F3A3_OFFSET))(a1, a2);
		}
	};
}
