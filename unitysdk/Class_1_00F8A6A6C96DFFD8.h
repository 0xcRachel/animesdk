#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define CLASS_1_00F8A6A6C96DFFD8_METHOD_1_74A78C75940E2BB5_OFFSET UNITYSDK_OFFSET(0x10FB2CB0)
#define CLASS_1_00F8A6A6C96DFFD8_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x10FB3130)
#define CLASS_1_00F8A6A6C96DFFD8_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10FB2F40)
#define CLASS_1_00F8A6A6C96DFFD8_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x10FB2DC0)
#define CLASS_1_00F8A6A6C96DFFD8_METHOD_1_CAD10CB1440D5893_OFFSET UNITYSDK_OFFSET(0x10FB2A90)
#define CLASS_1_00F8A6A6C96DFFD8_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x10FB30D0)
#define CLASS_1_00F8A6A6C96DFFD8__CTOR_OFFSET UNITYSDK_OFFSET(0x10FB2C40)

inline static constexpr unsigned int Class_1_00F8A6A6C96DFFD8_TypeDefinitionIndex = 54144;

class Class_1_00F8A6A6C96DFFD8 : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::UnityEngine::UI::Button_ButtonClickedEvent* Field_1_1; // 0x18
	::System::Type* Field_1_3; // 0x20
	::System::Type* Field_1_4; // 0x28
	::UnityEngine::UI::Button* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8__CTOR_OFFSET))(this);
	}

	static ::Class_1_00F8A6A6C96DFFD8* Method_1_CAD10CB1440D5893(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::Class_1_00F8A6A6C96DFFD8*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_METHOD_1_CAD10CB1440D5893_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_74A78C75940E2BB5(::UnityEngine::UI::Button* a1, ::System::Action* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_METHOD_1_74A78C75940E2BB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00F8A6A6C96DFFD8_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}
};
