#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_5_136344EED34FAE56_OFFSET UNITYSDK_OFFSET(0x16B364F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_5_50FB874696CB2D63_OFFSET UNITYSDK_OFFSET(0x16B36720)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B36630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetCurCoinConfig_TypeDefinitionIndex = 17478;

	class GridFightParamGetCurCoinConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_136344EED34FAE56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_5_136344EED34FAE56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_50FB874696CB2D63(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetCurCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetCurCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETCURCOINCONFIG_METHOD_5_50FB874696CB2D63_OFFSET))(a1, a2);
		}
	};
}
