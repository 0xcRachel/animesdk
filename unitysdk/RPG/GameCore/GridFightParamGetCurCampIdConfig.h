#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_5_B48A2BFAA5FC7F13_OFFSET UNITYSDK_OFFSET(0x16B35FD0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_5_DCC47FD1C1D78DB6_OFFSET UNITYSDK_OFFSET(0x16B36200)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCampIdConfig_TypeDefinitionIndex = 17500;

	class GridFightParamGetCurCampIdConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B48A2BFAA5FC7F13(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_5_B48A2BFAA5FC7F13_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DCC47FD1C1D78DB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCampIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCampIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCAMPIDCONFIG_METHOD_5_DCC47FD1C1D78DB6_OFFSET))(a1, a2);
		}
	};
}
