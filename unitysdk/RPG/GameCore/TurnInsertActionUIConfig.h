#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG_METHOD_2_48186C6302345339_OFFSET UNITYSDK_OFFSET(0x1712E160)
#define RPG_GAMECORE_TURNINSERTACTIONUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1712E270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnInsertActionUIConfig_TypeDefinitionIndex = 20294;

	class TurnInsertActionUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ShowInActionBar; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_48186C6302345339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TurnInsertActionUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TurnInsertActionUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNINSERTACTIONUICONFIG_METHOD_2_48186C6302345339_OFFSET))(a1, a2);
		}
	};
}
