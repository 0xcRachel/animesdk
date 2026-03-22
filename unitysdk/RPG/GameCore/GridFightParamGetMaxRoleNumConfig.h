#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_5_0AA17DB67A7C8210_OFFSET UNITYSDK_OFFSET(0x16B38B20)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_5_D0C2FCB7F53FD99D_OFFSET UNITYSDK_OFFSET(0x16B388F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B38A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetMaxRoleNumConfig_TypeDefinitionIndex = 17476;

	class GridFightParamGetMaxRoleNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D0C2FCB7F53FD99D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_5_D0C2FCB7F53FD99D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0AA17DB67A7C8210(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetMaxRoleNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETMAXROLENUMCONFIG_METHOD_5_0AA17DB67A7C8210_OFFSET))(a1, a2);
		}
	};
}
