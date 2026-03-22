#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AnimatorButton.h"

namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_INTROBUTTON_GET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET UNITYSDK_OFFSET(0x94D7820)
#define RPG_CLIENT_INTROBUTTON_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x94D77B0)
#define RPG_CLIENT_INTROBUTTON_GET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x94D7740)
#define RPG_CLIENT_INTROBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x94D7840)
#define RPG_CLIENT_INTROBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x94D7960)
#define RPG_CLIENT_INTROBUTTON_OPENINTRODUCEDIALOG_OFFSET UNITYSDK_OFFSET(0x94D7A10)
#define RPG_CLIENT_INTROBUTTON_OPENTUTORIALGUIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x94D7B50)
#define RPG_CLIENT_INTROBUTTON_SET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET UNITYSDK_OFFSET(0x94D7830)
#define RPG_CLIENT_INTROBUTTON_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x94D77C0)
#define RPG_CLIENT_INTROBUTTON_SET_INTRODUCEID_OFFSET UNITYSDK_OFFSET(0x94D7750)
#define RPG_CLIENT_INTROBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x94D7D00)
#define RPG_CLIENT_INTROBUTTON__OPENDIALOG_OFFSET UNITYSDK_OFFSET(0x94D78F0)
#define RPG_CLIENT_INTROBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x94D7DA0)
#define RPG_CLIENT_INTROBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x94D7DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int IntroButton_TypeDefinitionIndex = 57826;

	class IntroButton : public ::RPG::Client::AnimatorButton
	{
	public:
		::System::Int32 introduceID; // 0x1C8
		::System::Int32 guideID; // 0x1CC
		::System::Boolean enableGuideCloseAtTheOutset; // 0x1D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON__CTOR_OFFSET))(this);
		}

		::System::Int32 get_IntroduceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_INTRODUCEID_OFFSET))(this);
		}

		::System::Void set_IntroduceID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_INTRODUCEID_OFFSET))(this, value);
		}

		::System::Int32 get_GuideID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_GUIDEID_OFFSET))(this);
		}

		::System::Void set_GuideID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_GUIDEID_OFFSET))(this, value);
		}

		::System::Boolean get_EnableGuideCloseAtTheOutset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_GET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET))(this);
		}

		::System::Void set_EnableGuideCloseAtTheOutset(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_SET_ENABLEGUIDECLOSEATTHEOUTSET_OFFSET))(this, value);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void OpenIntroduceDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_OPENINTRODUCEDIALOG_OFFSET))(this);
		}

		::System::Void OpenTutorialGuideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON_OPENTUTORIALGUIDEDIALOG_OFFSET))(this);
		}

		::System::Void _OpenDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON__OPENDIALOG_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INTROBUTTON___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, P0);
		}
	};
}
