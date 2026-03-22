#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/MouseButton.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Event; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserInput_ButtonHistory; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FEEDSCROLLING_OFFSET UNITYSDK_OFFSET(0x1845C720)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FIRECOMMANDS_OFFSET UNITYSDK_OFFSET(0x1845D9D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x18453980)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEINPUT_OFFSET UNITYSDK_OFFSET(0x18453100)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_1_OFFSET UNITYSDK_OFFSET(0x1845D5D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_OFFSET UNITYSDK_OFFSET(0x1845C140)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x1845BB80)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1845E3D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x18441600)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserInput_TypeDefinitionIndex = 29536;

	class BrowserInput : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::KeyCode>** StaticGet_keysToReleaseOnFocusLoss()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(BrowserInput_TypeDefinitionIndex)->GetStaticField(0x40B80);
		}
		// static const ::System::Single maxScrollEventRate; // 0x0
		::ZenFulcrum::EmbeddedBrowser::Browser* browser; // 0x10
		::ZenFulcrum::EmbeddedBrowser::BrowserInput_ButtonHistory* leftClickHistory; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Event*>* extraEventsToInject; // 0x20
		::ZenFulcrum::EmbeddedBrowser::MouseButton prevButtons; // 0x28
		::System::Single lastScrollEvent; // 0x2C
		::UnityEngine::Vector2 prevPos; // 0x30
		::System::Boolean mouseWasFocused; // 0x38
		::System::Boolean kbWasFocused; // 0x39
		::UnityEngine::Vector2 accumulatedScroll; // 0x3C

		::System::Void _ctor(::ZenFulcrum::EmbeddedBrowser::Browser* browser)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::Browser*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CTOR_OFFSET))(this, browser);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT__CCTOR_OFFSET))();
		}

		::System::Void HandleInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEINPUT_OFFSET))(this);
		}

		::System::Void HandleMouseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEMOUSEINPUT_OFFSET))(this);
		}

		::System::Void FeedScrolling(::UnityEngine::Vector2 mouseScroll, ::System::Single scrollSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FEEDSCROLLING_OFFSET))(this, mouseScroll, scrollSpeed);
		}

		::System::Void HandleKeyInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_OFFSET))(this);
		}

		::System::Void HandleKeyInput_1(::System::Collections::Generic::List_1<::UnityEngine::Event*>* keyEvents)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Event*>*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEKEYINPUT_1_OFFSET))(this, keyEvents);
		}

		::System::Void HandleFocusLoss()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_HANDLEFOCUSLOSS_OFFSET))(this);
		}

		::System::Void FireCommands(::UnityEngine::Event* ev)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Event*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERINPUT_FIRECOMMANDS_OFFSET))(this, ev);
		}
	};
}
