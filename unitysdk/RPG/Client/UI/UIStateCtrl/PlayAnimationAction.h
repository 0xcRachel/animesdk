#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/AsyncAction.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0xA133810)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_2D96614001512C7D_OFFSET UNITYSDK_OFFSET(0xA133700)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xA133970)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0xA1339D0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA1336C0)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xA133430)
#define RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA1339C0)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int PlayAnimationAction_TypeDefinitionIndex = 58971;

	class PlayAnimationAction : public ::RPG::Client::UI::UIStateCtrl::AsyncAction
	{
	public:
		::UnityEngine::Animation* TargetAnimation; // 0x28
		::UnityEngine::AnimationClip* AnimationClip; // 0x30
		::System::Boolean UseAnimLength; // 0x38
		::System::Single _AnimLength; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4EA6B1791DACA9CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_4EA6B1791DACA9CC_OFFSET))(this);
		}

		::System::Void Method_3_2D96614001512C7D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_2D96614001512C7D_OFFSET))(this, a1);
		}

		::System::Void Method_3_0BF1620F1E4289BD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_0BF1620F1E4289BD_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_PLAYANIMATIONACTION_METHOD_3_391A84BCD9F51317_2_OFFSET))(this);
		}
	};
}
