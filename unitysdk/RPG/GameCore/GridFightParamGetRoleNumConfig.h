#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_5_2F3D3067B4D9D9E8_OFFSET UNITYSDK_OFFSET(0x16B3A1A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_5_9A0A4738822D3995_OFFSET UNITYSDK_OFFSET(0x16B39F70)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3A0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleNumConfig_TypeDefinitionIndex = 17483;

	class GridFightParamGetRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9A0A4738822D3995(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_5_9A0A4738822D3995_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2F3D3067B4D9D9E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLENUMCONFIG_METHOD_5_2F3D3067B4D9D9E8_OFFSET))(a1, a2);
		}
	};
}
