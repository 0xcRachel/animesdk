#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UI/UIStateCtrl/BaseAction.h"

namespace System { class String; }

#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xA1332B0)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA133220)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_CFDB2DF757369D2B_OFFSET UNITYSDK_OFFSET(0xA133340)
#define RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA133210)

namespace RPG::Client::UI::UIStateCtrl
{
	inline static constexpr unsigned int InstantAction_TypeDefinitionIndex = 58979;

	class InstantAction : public ::RPG::Client::UI::UIStateCtrl::BaseAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_2_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::String* Method_2_CFDB2DF757369D2B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_UISTATECTRL_INSTANTACTION_METHOD_2_CFDB2DF757369D2B_OFFSET))(this);
		}
	};
}
