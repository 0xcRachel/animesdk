#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UISCALABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1596FDE0)
#define RPG_CLIENT_UISCALABLE_GET_MAXSCALE_OFFSET UNITYSDK_OFFSET(0x15970820)
#define RPG_CLIENT_UISCALABLE_GET_MINSCALE_OFFSET UNITYSDK_OFFSET(0x15970840)
#define RPG_CLIENT_UISCALABLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15970220)
#define RPG_CLIENT_UISCALABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1596FED0)
#define RPG_CLIENT_UISCALABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x15970550)
#define RPG_CLIENT_UISCALABLE_SETPOINTERDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x159705D0)
#define RPG_CLIENT_UISCALABLE_SETPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x15970630)
#define RPG_CLIENT_UISCALABLE_SET_MAXSCALE_OFFSET UNITYSDK_OFFSET(0x15970830)
#define RPG_CLIENT_UISCALABLE_SET_MINSCALE_OFFSET UNITYSDK_OFFSET(0x15970850)
#define RPG_CLIENT_UISCALABLE_SIMULATESCALE_OFFSET UNITYSDK_OFFSET(0x15970690)
#define RPG_CLIENT_UISCALABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x15970860)
#define RPG_CLIENT_UISCALABLE__INITBEGINDATA_OFFSET UNITYSDK_OFFSET(0x159700F0)
#define RPG_CLIENT_UISCALABLE__TRYSETSCALE_OFFSET UNITYSDK_OFFSET(0x15970710)

namespace RPG::Client
{
	inline static constexpr unsigned int UIScalable_TypeDefinitionIndex = 63716;

	class UIScalable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Root; // 0x18
		::System::Boolean _UseSize; // 0x20
		::System::Single _MaxScale; // 0x24
		::System::Single _MinScale; // 0x28
		::System::Single _BeginDistance; // 0x2C
		::UnityEngine::Vector3 _BeginScale; // 0x30
		::UnityEngine::Vector2 _OriginSize; // 0x3C
		::UnityEngine::Vector2 _BeginSize; // 0x44
		::System::Action_1<::System::Object*>* _PointerDownCallback; // 0x50
		::System::Object* _PointerDownCallbackParam; // 0x58
		::System::Action_1<::System::Object*>* _PointerUpCallback; // 0x60
		::System::Object* _PointerUpCallbackParam; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void SetPointerDownCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SETPOINTERDOWNCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetPointerUpCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SETPOINTERUPCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SimulateScale(::System::Single deltaScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SIMULATESCALE_OFFSET))(this, deltaScale);
		}

		::System::Void _InitBeginData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__INITBEGINDATA_OFFSET))(this);
		}

		::System::Void _TrySetScale(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__TRYSETSCALE_OFFSET))(this, ratio);
		}

		::System::Single get_MaxScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_GET_MAXSCALE_OFFSET))(this);
		}

		::System::Void set_MaxScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SET_MAXSCALE_OFFSET))(this, value);
		}

		::System::Single get_MinScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_GET_MINSCALE_OFFSET))(this);
		}

		::System::Void set_MinScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SET_MINSCALE_OFFSET))(this, value);
		}
	};
}
