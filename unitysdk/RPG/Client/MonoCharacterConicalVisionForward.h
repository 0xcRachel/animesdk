#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x9C23BE0)
#define RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x9C23A60)
#define RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9C23B20)
#define RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9C23F30)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCharacterConicalVisionForward_TypeDefinitionIndex = 55954;

	class MonoCharacterConicalVisionForward : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean useRootForward; // 0x18
		::UnityEngine::Transform* root; // 0x20
		::UnityEngine::Vector3 rotationOffset; // 0x28
		::UnityEngine::Vector3 positionOffset; // 0x34
		::UnityEngine::Vector3 Field_5_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_GET_FORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_GET_POSITION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCHARACTERCONICALVISIONFORWARD_AWAKE_OFFSET))(this);
		}
	};
}
