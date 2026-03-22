#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_5_4A803C9DFD2434F1_OFFSET UNITYSDK_OFFSET(0x16B37DA0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_5_59E176D89B1D993C_OFFSET UNITYSDK_OFFSET(0x16B37B70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B37CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetItemNumConfig_TypeDefinitionIndex = 17488;

	class GridFightParamGetItemNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_59E176D89B1D993C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetItemNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_5_59E176D89B1D993C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4A803C9DFD2434F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetItemNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetItemNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETITEMNUMCONFIG_METHOD_5_4A803C9DFD2434F1_OFFSET))(a1, a2);
		}
	};
}
