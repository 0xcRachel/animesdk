#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceRejectionType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingSource; }
namespace InControl { class PlayerAction; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGADDED_OFFSET UNITYSDK_OFFSET(0x15460450)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGENDED_OFFSET UNITYSDK_OFFSET(0x154604A0)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGFOUND_OFFSET UNITYSDK_OFFSET(0x15460430)
#define INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGREJECTED_OFFSET UNITYSDK_OFFSET(0x15460470)
#define INCONTROL_BINDINGLISTENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x154604C0)

namespace InControl
{
	inline static constexpr unsigned int BindingListenOptions_TypeDefinitionIndex = 30501;

	class BindingListenOptions : public ::System::Object
	{
	public:
		::System::Func_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::System::Boolean>* OnBindingFound; // 0x10
		::System::Action_3<::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType>* OnBindingRejected; // 0x18
		::System::Action_2<::InControl::PlayerAction*, ::InControl::BindingSource*>* OnBindingAdded; // 0x20
		::System::Action_1<::InControl::PlayerAction*>* OnBindingEnded; // 0x28
		::InControl::BindingSource* ReplaceBinding; // 0x30
		::System::UInt32 MaxAllowedBindingsPerType; // 0x38
		::System::UInt32 MaxAllowedBindings; // 0x3C
		::System::Boolean IncludeControllers; // 0x40
		::System::Boolean IncludeMouseScrollWheel; // 0x41
		::System::Boolean UnsetDuplicateBindingsOnSet; // 0x42
		::System::Boolean IncludeModifiersAsFirstClassKeys; // 0x43
		::System::Boolean RejectRedundantBindings; // 0x44
		::System::Boolean IncludeKeys; // 0x45
		::System::Boolean IncludeMouseButtons; // 0x46
		::System::Boolean IncludeNonStandardControls; // 0x47
		::System::Boolean IncludeUnknownControllers; // 0x48
		::System::Boolean AllowDuplicateBindingsPerSet; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Boolean CallOnBindingFound(::InControl::PlayerAction* playerAction, ::InControl::BindingSource* bindingSource)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGFOUND_OFFSET))(this, playerAction, bindingSource);
		}

		::System::Void CallOnBindingAdded(::InControl::PlayerAction* playerAction, ::InControl::BindingSource* bindingSource)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGADDED_OFFSET))(this, playerAction, bindingSource);
		}

		::System::Void CallOnBindingRejected(::InControl::PlayerAction* playerAction, ::InControl::BindingSource* bindingSource, ::InControl::BindingSourceRejectionType bindingSourceRejectionType)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::BindingSource*, ::InControl::BindingSourceRejectionType))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGREJECTED_OFFSET))(this, playerAction, bindingSource, bindingSourceRejectionType);
		}

		::System::Void CallOnBindingEnded(::InControl::PlayerAction* playerAction)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGLISTENOPTIONS_CALLONBINDINGENDED_OFFSET))(this, playerAction);
		}
	};
}
