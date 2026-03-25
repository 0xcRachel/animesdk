#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class UIController; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOUICONTROLLERGETTER_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D582B0)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_GET_OFFSET UNITYSDK_OFFSET(0x9D58320)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_SETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D582D0)
#define RPG_CLIENT_MONOUICONTROLLERGETTER_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D582C0)
#define RPG_CLIENT_MONOUICONTROLLERGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D58410)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoUIControllerGetter_TypeDefinitionIndex = 58462;

	class MonoUIControllerGetter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIController* _Controller_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER__CTOR_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Controller()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::UIController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_SET_CONTROLLER_OFFSET))(this, value);
		}

		::System::Void SetController(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_SETCONTROLLER_OFFSET))(this, controller);
		}

		static ::RPG::Client::MonoUIControllerGetter* Get(::UnityEngine::Transform* target)
		{
			return ((::RPG::Client::MonoUIControllerGetter*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOUICONTROLLERGETTER_GET_OFFSET))(target);
		}
	};
}
