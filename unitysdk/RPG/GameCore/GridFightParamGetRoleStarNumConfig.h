#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_5_1FB128AD08374AB9_OFFSET UNITYSDK_OFFSET(0x16B3A630)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_5_E427ACE5FBBC06D4_OFFSET UNITYSDK_OFFSET(0x16B3A860)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B3A770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleStarNumConfig_TypeDefinitionIndex = 17489;

	class GridFightParamGetRoleStarNumConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1FB128AD08374AB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_5_1FB128AD08374AB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E427ACE5FBBC06D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetRoleStarNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLESTARNUMCONFIG_METHOD_5_E427ACE5FBBC06D4_OFFSET))(a1, a2);
		}
	};
}
