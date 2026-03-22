#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_5_2109D108B8A9A960_OFFSET UNITYSDK_OFFSET(0x16B391F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_5_FB7FE6E9E95A493D_OFFSET UNITYSDK_OFFSET(0x16B39420)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B39330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromTxtConfig_TypeDefinitionIndex = 17471;

	class GridFightParamGetParamFromTxtConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_2109D108B8A9A960(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_5_2109D108B8A9A960_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_FB7FE6E9E95A493D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromTxtConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMTXTCONFIG_METHOD_5_FB7FE6E9E95A493D_OFFSET))(a1, a2);
		}
	};
}
