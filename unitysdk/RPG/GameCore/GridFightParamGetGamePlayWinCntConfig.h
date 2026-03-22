#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_5_1AC505DA602F86FA_OFFSET UNITYSDK_OFFSET(0x16B374B0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_5_3E1A3766671C139F_OFFSET UNITYSDK_OFFSET(0x16B376E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B375F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetGamePlayWinCntConfig_TypeDefinitionIndex = 17505;

	class GridFightParamGetGamePlayWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1AC505DA602F86FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_5_1AC505DA602F86FA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3E1A3766671C139F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetGamePlayWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETGAMEPLAYWINCNTCONFIG_METHOD_5_3E1A3766671C139F_OFFSET))(a1, a2);
		}
	};
}
