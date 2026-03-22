#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_5_272FE8DACE94441A_OFFSET UNITYSDK_OFFSET(0x16B1CAB0)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_5_5E9B9CD0CEADDFB1_OFFSET UNITYSDK_OFFSET(0x16B1C940)
#define RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1CA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondFalseConfig_TypeDefinitionIndex = 17342;

	class GridFightCondFalseConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5E9B9CD0CEADDFB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_5_5E9B9CD0CEADDFB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_272FE8DACE94441A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDFALSECONFIG_METHOD_5_272FE8DACE94441A_OFFSET))(a1, a2);
		}
	};
}
