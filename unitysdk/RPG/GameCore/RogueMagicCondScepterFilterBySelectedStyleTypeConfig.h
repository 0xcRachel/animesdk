#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_6_5D959B2D82072085_OFFSET UNITYSDK_OFFSET(0x16E85B70)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_6_6FBD0F7B76F32B16_OFFSET UNITYSDK_OFFSET(0x16E63E80)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterBySelectedStyleTypeConfig_TypeDefinitionIndex = 17531;

	class RogueMagicCondScepterFilterBySelectedStyleTypeConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5D959B2D82072085(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_6_5D959B2D82072085_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6FBD0F7B76F32B16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERBYSELECTEDSTYLETYPECONFIG_METHOD_6_6FBD0F7B76F32B16_OFFSET))(a1, a2);
		}
	};
}
