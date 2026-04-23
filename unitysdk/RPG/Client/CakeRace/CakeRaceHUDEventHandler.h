#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC140)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x15FEC380)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC200)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC2C0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC490)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET UNITYSDK_OFFSET(0x15FEC5C0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x15FE47F0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET UNITYSDK_OFFSET(0x15FEC500)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC570)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET UNITYSDK_OFFSET(0x15FEC620)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC1A0)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x15FEC400)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC260)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x15FEC320)
#define RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEC480)

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceHUDEventHandler_TypeDefinitionIndex = 70200;

	class CakeRaceHUDEventHandler : public ::System::Object
	{
	public:
		::System::Action* OnEndDrag; // 0x10
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnClick; // 0x18
		::System::Action_1<::System::Single>* OnBeginDrag; // 0x20
		::System::Action_1<::System::Single>* OnDrag; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void add_OnBeginDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnBeginDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONBEGINDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnDrag(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnEndDrag(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONENDDRAG_OFFSET))(this, value);
		}

		::System::Void remove_OnEndDrag(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONENDDRAG_OFFSET))(this, value);
		}

		::System::Void add_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ADD_ONCLICK_OFFSET))(this, value);
		}

		::System::Void remove_OnClick(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_REMOVE_ONCLICK_OFFSET))(this, value);
		}

		static ::RPG::Client::CakeRace::CakeRaceHUDEventHandler* Create()
		{
			return ((::RPG::Client::CakeRace::CakeRaceHUDEventHandler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CREATE_OFFSET))();
		}

		::System::Void BeginDrag(::System::Single pointerX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_BEGINDRAG_OFFSET))(this, pointerX);
		}

		::System::Void Drag(::System::Single pointerX)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_DRAG_OFFSET))(this, pointerX);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_ENDDRAG_OFFSET))(this);
		}

		::System::Void Click(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_CLICK_OFFSET))(this, eventData);
		}

		static ::System::Single GetLeftStickInputX()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACE_CAKERACEHUDEVENTHANDLER_GETLEFTSTICKINPUTX_OFFSET))();
		}
	};
}
