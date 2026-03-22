#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_5_23E339B2378D5F9D_OFFSET UNITYSDK_OFFSET(0x16E62150)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_5_EF7D753E7D7D617E_OFFSET UNITYSDK_OFFSET(0x16E61FE0)
#define RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E620B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondPickAvatarConfig_TypeDefinitionIndex = 17667;

	class RogueCondPickAvatarConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EF7D753E7D7D617E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPickAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPickAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_5_EF7D753E7D7D617E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_23E339B2378D5F9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondPickAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondPickAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDPICKAVATARCONFIG_METHOD_5_23E339B2378D5F9D_OFFSET))(a1, a2);
		}
	};
}
