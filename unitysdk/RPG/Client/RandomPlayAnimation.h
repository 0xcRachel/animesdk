#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_RANDOMPLAYANIMATION_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x9D719E0)
#define RPG_CLIENT_RANDOMPLAYANIMATION_START_OFFSET UNITYSDK_OFFSET(0x9D71860)
#define RPG_CLIENT_RANDOMPLAYANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x9D71A70)

namespace RPG::Client
{
	inline static constexpr unsigned int RandomPlayAnimation_TypeDefinitionIndex = 54649;

	class RandomPlayAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* Field_5_0; // 0x18
		::Il2CppArray<::UnityEngine::AnimationClip*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RANDOMPLAYANIMATION_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}
	};
}
