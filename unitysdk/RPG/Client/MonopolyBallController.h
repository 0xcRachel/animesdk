#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x175F1210)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x175F11D0)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x175F1150)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x175F1250)
#define RPG_CLIENT_MONOPOLYBALLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175F1710)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBallController_TypeDefinitionIndex = 67099;

	class MonopolyBallController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBALLCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
