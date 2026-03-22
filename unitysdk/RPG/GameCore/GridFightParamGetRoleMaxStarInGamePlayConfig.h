#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_5_A58588A49B9E4AB9_OFFSET UNITYSDK_OFFSET(0x16B39F60)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_5_D46C0528BA3D9C44_OFFSET UNITYSDK_OFFSET(0x16B39D30)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B39E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleMaxStarInGamePlayConfig_TypeDefinitionIndex = 17509;

	class GridFightParamGetRoleMaxStarInGamePlayConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D46C0528BA3D9C44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_5_D46C0528BA3D9C44_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A58588A49B9E4AB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_METHOD_5_A58588A49B9E4AB9_OFFSET))(a1, a2);
		}
	};
}
