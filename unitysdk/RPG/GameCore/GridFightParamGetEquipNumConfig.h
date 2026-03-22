#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_5_8EF5E92EB453E27A_OFFSET UNITYSDK_OFFSET(0x16B374A0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_5_D8495A0A826A2C0F_OFFSET UNITYSDK_OFFSET(0x16B37270)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B373B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetEquipNumConfig_TypeDefinitionIndex = 17487;

	class GridFightParamGetEquipNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D8495A0A826A2C0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_5_D8495A0A826A2C0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8EF5E92EB453E27A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetEquipNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetEquipNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETEQUIPNUMCONFIG_METHOD_5_8EF5E92EB453E27A_OFFSET))(a1, a2);
		}
	};
}
