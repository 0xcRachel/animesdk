#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_CD52F6B0B7158E5C_OFFSET UNITYSDK_OFFSET(0x17125940)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_E439F03F28F250AB_OFFSET UNITYSDK_OFFSET(0x171258C0)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK__CTOR_OFFSET UNITYSDK_OFFSET(0x17125910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueAvatarPick_TypeDefinitionIndex = 19919;

	class TriggerRogueAvatarPick : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupPropID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E439F03F28F250AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueAvatarPick*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueAvatarPick*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_E439F03F28F250AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD52F6B0B7158E5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_CD52F6B0B7158E5C_OFFSET))(a1, a2);
		}
	};
}
