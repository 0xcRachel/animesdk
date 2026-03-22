#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_7E492669337DB045_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10EFE240)
#define CLASS_2_7E492669337DB045_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x10EFE620)
#define CLASS_2_7E492669337DB045_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10EFE5C0)
#define CLASS_2_7E492669337DB045_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x10EFE3A0)
#define CLASS_2_7E492669337DB045_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x10EFE490)
#define CLASS_2_7E492669337DB045__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFE530)
#define CLASS_2_7E492669337DB045__ONBIND_OFFSET UNITYSDK_OFFSET(0x10EFE1E0)
#define CLASS_2_7E492669337DB045___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10EFE560)

inline static constexpr unsigned int Class_2_7E492669337DB045_TypeDefinitionIndex = 56924;

class Class_2_7E492669337DB045 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x60
	::UnityEngine::UI::Button* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E492669337DB045_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
