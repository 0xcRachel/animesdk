#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_5_26B2902F893244FA_OFFSET UNITYSDK_OFFSET(0x16B36DE0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_5_7006010B57488E8F_OFFSET UNITYSDK_OFFSET(0x16B36BB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurKeepWinCntConfig_TypeDefinitionIndex = 17495;

	class GridFightParamGetCurKeepWinCntConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7006010B57488E8F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_5_7006010B57488E8F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_26B2902F893244FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurKeepWinCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURKEEPWINCNTCONFIG_METHOD_5_26B2902F893244FA_OFFSET))(a1, a2);
		}
	};
}
