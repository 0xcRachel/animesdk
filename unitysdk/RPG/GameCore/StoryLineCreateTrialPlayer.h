#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER_METHOD_3_1D866A846F51461B_OFFSET UNITYSDK_OFFSET(0x17794630)
#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER_METHOD_3_6532661B981E2D4B_OFFSET UNITYSDK_OFFSET(0x177945A0)
#define RPG_GAMECORE_STORYLINECREATETRIALPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x17794600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StoryLineCreateTrialPlayer_TypeDefinitionIndex = 19837;

	class StoryLineCreateTrialPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6532661B981E2D4B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineCreateTrialPlayer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineCreateTrialPlayer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER_METHOD_3_6532661B981E2D4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1D866A846F51461B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StoryLineCreateTrialPlayer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StoryLineCreateTrialPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STORYLINECREATETRIALPLAYER_METHOD_3_1D866A846F51461B_OFFSET))(a1, a2);
		}
	};
}
