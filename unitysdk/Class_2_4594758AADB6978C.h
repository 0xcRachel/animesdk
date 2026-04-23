#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_5;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_4594758AADB6978C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF7E5B60)
#define CLASS_2_4594758AADB6978C_METHOD_2_8393D37AD270B49E_OFFSET UNITYSDK_OFFSET(0xF7E5730)
#define CLASS_2_4594758AADB6978C_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xF7E5A50)
#define CLASS_2_4594758AADB6978C_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xF7E55E0)
#define CLASS_2_4594758AADB6978C_METHOD_2_ED5FC1D8B47FC436_OFFSET UNITYSDK_OFFSET(0xF7E59E0)
#define CLASS_2_4594758AADB6978C_METHOD_2_FEECB9D118FB766E_OFFSET UNITYSDK_OFFSET(0xF7E57B0)
#define CLASS_2_4594758AADB6978C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7E5AD0)
#define CLASS_2_4594758AADB6978C__ONBIND_OFFSET UNITYSDK_OFFSET(0xF7E54C0)
#define CLASS_2_4594758AADB6978C___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xF7E5B00)

inline static constexpr unsigned int Class_2_4594758AADB6978C_TypeDefinitionIndex = 65993;

class Class_2_4594758AADB6978C : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::UIValueChangeAnimation* Field_2_3; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68
	::RPG::Client::LocalizedText* Field_2_0; // 0x70
	::UnityEngine::UI::Slider* Field_2_5; // 0x78
	::RPG::Client::UIValueChangeAnimation* Field_2_4; // 0x80
	::UnityEngine::UI::Image* Field_2_2; // 0x88
	::System::Boolean Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8393D37AD270B49E(::Class_1_6CE70F4211D79CD5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_5*))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_8393D37AD270B49E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEECB9D118FB766E(::Class_1_6CE70F4211D79CD5_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_5*))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_FEECB9D118FB766E_OFFSET))(this, a1);
	}

	::System::Void Method_2_ED5FC1D8B47FC436(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_ED5FC1D8B47FC436_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4594758AADB6978C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
