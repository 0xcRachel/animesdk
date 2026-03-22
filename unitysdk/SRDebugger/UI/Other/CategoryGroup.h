#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x17C576C0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x17C57760)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x17C576E0)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x17C57800)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_SELECTIONMODEENABLED_OFFSET UNITYSDK_OFFSET(0x17C57770)
#define SRDEBUGGER_UI_OTHER_CATEGORYGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17C57830)

namespace SRDebugger::UI::Other
{
	inline static constexpr unsigned int CategoryGroup_TypeDefinitionIndex = 28770;

	class CategoryGroup : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::UnityEngine::RectTransform* Container; // 0x48
		::UnityEngine::UI::Text* Header; // 0x50
		::UnityEngine::GameObject* Background; // 0x58
		::UnityEngine::UI::Toggle* SelectionToggle; // 0x60
		::Il2CppArray<::UnityEngine::GameObject*>* EnabledDuringSelectionMode; // 0x68
		::System::Boolean _selectionModeEnabled; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSELECTED_OFFSET))(this, value);
		}

		::System::Boolean get_SelectionModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_GET_SELECTIONMODEENABLED_OFFSET))(this);
		}

		::System::Void set_SelectionModeEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_SELECTIONMODEENABLED_OFFSET))(this, value);
		}

		::System::Void set_IsShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CATEGORYGROUP_SET_ISSHOW_OFFSET))(this, value);
		}
	};
}
