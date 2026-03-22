#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_5_43B7ECFBDBAD3AFB_OFFSET UNITYSDK_OFFSET(0x16B39D20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_5_9E5D0F8D245E230E_OFFSET UNITYSDK_OFFSET(0x16B39AF0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B39C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleCoinNumConfig_TypeDefinitionIndex = 17484;

	class GridFightParamGetRoleCoinNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9E5D0F8D245E230E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_5_9E5D0F8D245E230E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_43B7ECFBDBAD3AFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleCoinNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLECOINNUMCONFIG_METHOD_5_43B7ECFBDBAD3AFB_OFFSET))(a1, a2);
		}
	};
}
