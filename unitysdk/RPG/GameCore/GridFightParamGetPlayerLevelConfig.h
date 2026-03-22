#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_5_175211D86CDCB7F8_OFFSET UNITYSDK_OFFSET(0x16B39430)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_5_6F0241FE3591BE35_OFFSET UNITYSDK_OFFSET(0x16B39660)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B39570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPlayerLevelConfig_TypeDefinitionIndex = 17477;

	class GridFightParamGetPlayerLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_175211D86CDCB7F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_5_175211D86CDCB7F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6F0241FE3591BE35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_METHOD_5_6F0241FE3591BE35_OFFSET))(a1, a2);
		}
	};
}
