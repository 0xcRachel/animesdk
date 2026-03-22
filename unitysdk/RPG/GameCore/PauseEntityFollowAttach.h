#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_METHOD_3_0890E4E8E18A5A02_OFFSET UNITYSDK_OFFSET(0x16D1A9C0)
#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_METHOD_3_D9FBE236FAFB3F23_OFFSET UNITYSDK_OFFSET(0x16D1A940)
#define RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x16D1A990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PauseEntityFollowAttach_TypeDefinitionIndex = 20363;

	class PauseEntityFollowAttach : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsPause; // 0x20
		::System::Boolean ResetPosAndRot; // 0x21
		::System::Boolean PauseFollowVisible; // 0x22

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D9FBE236FAFB3F23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseEntityFollowAttach*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseEntityFollowAttach*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_METHOD_3_D9FBE236FAFB3F23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0890E4E8E18A5A02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PauseEntityFollowAttach* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PauseEntityFollowAttach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEENTITYFOLLOWATTACH_METHOD_3_0890E4E8E18A5A02_OFFSET))(a1, a2);
		}
	};
}
