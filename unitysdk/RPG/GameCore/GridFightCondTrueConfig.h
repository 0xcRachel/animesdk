#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_5_58771A80B1601C4D_OFFSET UNITYSDK_OFFSET(0x16B1D230)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_5_A9DFF48F59A7686E_OFFSET UNITYSDK_OFFSET(0x16B1D0C0)
#define RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondTrueConfig_TypeDefinitionIndex = 17341;

	class GridFightCondTrueConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A9DFF48F59A7686E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_5_A9DFF48F59A7686E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_58771A80B1601C4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDTRUECONFIG_METHOD_5_58771A80B1601C4D_OFFSET))(a1, a2);
		}
	};
}
