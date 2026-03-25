#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_6CE70F4211D79CD5_4;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_1123E46637EBD6E5_METHOD_2_480EACF8B499351F_OFFSET UNITYSDK_OFFSET(0x1178FB70)
#define CLASS_2_1123E46637EBD6E5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1178FCF0)
#define CLASS_2_1123E46637EBD6E5_METHOD_2_8393D37AD270B49E_OFFSET UNITYSDK_OFFSET(0x1178F8C0)
#define CLASS_2_1123E46637EBD6E5_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x1178FBE0)
#define CLASS_2_1123E46637EBD6E5_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x1178F760)
#define CLASS_2_1123E46637EBD6E5_METHOD_2_FEECB9D118FB766E_OFFSET UNITYSDK_OFFSET(0x1178F940)
#define CLASS_2_1123E46637EBD6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1178FC60)
#define CLASS_2_1123E46637EBD6E5__ONBIND_OFFSET UNITYSDK_OFFSET(0x1178F400)
#define CLASS_2_1123E46637EBD6E5___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1178FC90)

inline static constexpr unsigned int Class_2_1123E46637EBD6E5_TypeDefinitionIndex = 58669;

class Class_2_1123E46637EBD6E5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::UnityEngine::UI::Slider* Field_2_5; // 0x68
	::RPG::Client::LocalizedText* Field_2_0; // 0x70
	::RPG::Client::LocalizedText* Field_2_1; // 0x78
	::RPG::Client::UIValueChangeAnimation* Field_2_4; // 0x80
	::RPG::Client::UIValueChangeAnimation* Field_2_3; // 0x88
	::System::Boolean Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_8393D37AD270B49E(::Class_1_6CE70F4211D79CD5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_4*))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_8393D37AD270B49E_OFFSET))(this, a1);
	}

	::System::Void Method_2_FEECB9D118FB766E(::Class_1_6CE70F4211D79CD5_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6CE70F4211D79CD5_4*))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_FEECB9D118FB766E_OFFSET))(this, a1);
	}

	::System::Void Method_2_480EACF8B499351F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_480EACF8B499351F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1123E46637EBD6E5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
