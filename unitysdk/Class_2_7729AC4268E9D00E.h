#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class SetBtnBattleHintInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7729AC4268E9D00E_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x91EA240)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x91EA7F0)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x91EA790)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_6C7C1851390522A0_OFFSET UNITYSDK_OFFSET(0x91EA450)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x91EA2F0)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_9B92C44D5842AA8A_OFFSET UNITYSDK_OFFSET(0x91EA360)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_AD14E86637DD3086_OFFSET UNITYSDK_OFFSET(0x91EA170)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x91EA4F0)
#define CLASS_2_7729AC4268E9D00E_METHOD_2_F0880AD023811E29_OFFSET UNITYSDK_OFFSET(0x91EA850)
#define CLASS_2_7729AC4268E9D00E__CTOR_OFFSET UNITYSDK_OFFSET(0x91EA690)
#define CLASS_2_7729AC4268E9D00E__ONBIND_OFFSET UNITYSDK_OFFSET(0x91EA080)
#define CLASS_2_7729AC4268E9D00E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x91EA730)

inline static constexpr unsigned int Class_2_7729AC4268E9D00E_TypeDefinitionIndex = 57228;

class Class_2_7729AC4268E9D00E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Transform* Field_2_0; // 0x60
	::UnityEngine::UI::Button* Field_2_2; // 0x68
	::UnityEngine::UI::Text* Field_2_1; // 0x70
	::System::UInt32 Field_2_5; // 0x78
	::RPG::Client::TextID Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_AD14E86637DD3086(::RPG::GameCore::SetBtnBattleHintInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetBtnBattleHintInfo*))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_AD14E86637DD3086_OFFSET))(this, a1);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_9B92C44D5842AA8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_9B92C44D5842AA8A_OFFSET))(this);
	}

	::System::Void Method_2_6C7C1851390522A0(::InControl::InputDeviceClass a1)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_6C7C1851390522A0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_F0880AD023811E29(::InControl::InputDeviceClass P0)
	{
		return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + CLASS_2_7729AC4268E9D00E_METHOD_2_F0880AD023811E29_OFFSET))(this, P0);
	}
};
