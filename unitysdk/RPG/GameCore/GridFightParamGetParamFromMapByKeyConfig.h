#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_5_5ADF7F955C4A94B2_OFFSET UNITYSDK_OFFSET(0x16B38FB0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_5_C06D02255C959897_OFFSET UNITYSDK_OFFSET(0x16B391E0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B390F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetParamFromMapByKeyConfig_TypeDefinitionIndex = 17494;

	class GridFightParamGetParamFromMapByKeyConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5ADF7F955C4A94B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_5_5ADF7F955C4A94B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C06D02255C959897(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetParamFromMapByKeyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPARAMFROMMAPBYKEYCONFIG_METHOD_5_C06D02255C959897_OFFSET))(a1, a2);
		}
	};
}
