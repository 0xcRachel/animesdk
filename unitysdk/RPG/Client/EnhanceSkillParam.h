#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x915DBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int EnhanceSkillParam_TypeDefinitionIndex = 57317;

	class EnhanceSkillParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsShow; // 0x18
		::System::Boolean RefreshImmediate; // 0x19
		::RPG::Client::UISkillIndex SkillIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ENHANCESKILLPARAM__CTOR_OFFSET))(this);
		}
	};
}
