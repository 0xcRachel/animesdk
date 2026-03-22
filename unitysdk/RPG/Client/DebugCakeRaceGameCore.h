#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_DEBUGCAKERACEGAMECORE__CTOR_OFFSET UNITYSDK_OFFSET(0x8FF9CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int DebugCakeRaceGameCore_TypeDefinitionIndex = 54215;

	class DebugCakeRaceGameCore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBUGCAKERACEGAMECORE__CTOR_OFFSET))(this);
		}
	};
}
