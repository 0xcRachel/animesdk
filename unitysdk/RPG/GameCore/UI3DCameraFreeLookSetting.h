#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCAMERAFREELOOKSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17B34130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCameraFreeLookSetting_TypeDefinitionIndex = 53748;

	class UI3DCameraFreeLookSetting : public ::System::Object
	{
	public:
		::UnityEngine::Transform* Target; // 0x10
		::UnityEngine::Vector3 RailHead; // 0x18
		::System::Single Pitch; // 0x24
		::System::Single MaxRotationX; // 0x28
		::UnityEngine::Vector3 RailTail; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCAMERAFREELOOKSETTING__CTOR_OFFSET))(this);
		}
	};
}
