#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9283780)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_RESETTIMER_OFFSET UNITYSDK_OFFSET(0x9283730)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_START_OFFSET UNITYSDK_OFFSET(0x92835E0)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x9283880)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9283800)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x9283AA0)
#define RPG_CLIENT_FIVEDIMMINIGAMETIMER__START_B__5_0_OFFSET UNITYSDK_OFFSET(0x9283AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimMiniGameTimer_TypeDefinitionIndex = 51007;

	class FiveDimMiniGameTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsRunning; // 0x18
		::System::Boolean ShowOriginalTime; // 0x19
		::System::Single Seconds; // 0x1C
		::System::Single DisplayMultiplier; // 0x20
		::UnityEngine::UI::Text* _Text; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ResetTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER_RESETTIMER_OFFSET))(this);
		}

		::System::Void _Start_b__5_0(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMINIGAMETIMER__START_B__5_0_OFFSET))(this, arg);
		}
	};
}
