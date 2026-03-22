#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_5_3FD426AC4A42E03F_OFFSET UNITYSDK_OFFSET(0x16B398A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_5_AEFE8AA61B60A09A_OFFSET UNITYSDK_OFFSET(0x16B39670)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B397B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPosRoleCostConfig_TypeDefinitionIndex = 17475;

	class GridFightParamGetPosRoleCostConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AEFE8AA61B60A09A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_5_AEFE8AA61B60A09A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3FD426AC4A42E03F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPosRoleCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPOSROLECOSTCONFIG_METHOD_5_3FD426AC4A42E03F_OFFSET))(a1, a2);
		}
	};
}
