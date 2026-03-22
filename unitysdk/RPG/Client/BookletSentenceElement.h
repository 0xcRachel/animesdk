#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletElement_1.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"

class Class_1_7C6C61F2475C74D5;
namespace RPG::GameCore::Booklet { class SentenceElementConfig; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0x8DFE150)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x8DFE1F0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8DFDD40)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0x8DFE1A0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8DFDD60)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_638B7168F3D35983_OFFSET UNITYSDK_OFFSET(0x8DFDDB0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8DFE0D0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8DFDEC0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x8DFE040)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8DFE240)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET UNITYSDK_OFFSET(0x8DFE2C0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8DFE310)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x8DFE320)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletSentenceElement_TypeDefinitionIndex = 57681;

	class BookletSentenceElement : public ::RPG::Client::BookletElement_1<::RPG::GameCore::Booklet::SentenceElementConfig*>
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::UI::Text* Content; // 0x60
		::Class_1_7C6C61F2475C74D5* Field_7_5; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT__CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void Method_7_638B7168F3D35983()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_638B7168F3D35983_OFFSET))(this);
		}

		::System::Void Method_7_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_METHOD_7_9681042564541CD6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY_INITVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT___IFIXBASEPROXY__BEFOREDESTROY_OFFSET))(this);
		}
	};
}
