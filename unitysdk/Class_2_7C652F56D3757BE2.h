#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7C652F56D3757BE2_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEE5D10)
#define CLASS_2_7C652F56D3757BE2_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEE5FB0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0xBEE5760)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_050DB83B6873DE97_OFFSET UNITYSDK_OFFSET(0xBEE4D20)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_1BAC25F61C22AED9_OFFSET UNITYSDK_OFFSET(0xBEE5510)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_2097174150E430B8_OFFSET UNITYSDK_OFFSET(0xBEE54A0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_275E480D0795789A_OFFSET UNITYSDK_OFFSET(0xBEE4780)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xBEE4FC0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBEE55E0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xBEE6370)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xBEE6310)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_57D5ED2C4C06D908_OFFSET UNITYSDK_OFFSET(0xBED0A00)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_9CC926D36F34DBFF_OFFSET UNITYSDK_OFFSET(0xBEE4770)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xBEE4DE0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xBEE5C50)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0xBEE5120)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xBEE4F50)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_BDDBE2FD9A9FFA54_OFFSET UNITYSDK_OFFSET(0xBED0BB0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xBEE62A0)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xBEE4790)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_D9B43E7E6693F63E_OFFSET UNITYSDK_OFFSET(0xBEE5230)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBEE5B60)
#define CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBEE5A70)
#define CLASS_2_7C652F56D3757BE2_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBEE5190)
#define CLASS_2_7C652F56D3757BE2_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBEE51E0)
#define CLASS_2_7C652F56D3757BE2__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE6200)
#define CLASS_2_7C652F56D3757BE2__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEE4260)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEE63D0)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEE6430)
#define CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEE6240)

inline static constexpr unsigned int Class_2_7C652F56D3757BE2_TypeDefinitionIndex = 58913;

class Class_2_7C652F56D3757BE2 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Single Field_2_10; // 0x0
	// static const ::System::String* Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	// static const ::System::String* Field_2_19; // 0x0
	// static const ::System::String* Field_2_20; // 0x0
	::UnityEngine::Transform* Field_2_4; // 0x60
	::RPG::Client::SPProgress* Field_2_8; // 0x68
	::RPG::GameCore::GameEntity* Field_2_12; // 0x70
	::RPG::Client::SPProgress* Field_2_1; // 0x78
	::UnityEngine::Animation* Field_2_3; // 0x80
	::UnityEngine::UI::Image* Field_2_9; // 0x88
	::RPG::GameCore::LevelUIComponent* Field_2_11; // 0x90
	::UnityEngine::UI::Image* Field_2_7; // 0x98
	::UnityEngine::Transform* Field_2_6; // 0xA0
	::UnityEngine::UI::Image* Field_2_0; // 0xA8
	::UnityEngine::UI::Image* Field_2_2; // 0xB0
	::UnityEngine::Transform* Field_2_5; // 0xB8
	::RPG::GameCore::FixPoint Field_2_16; // 0xC0
	::System::Single Field_2_15; // 0xC8
	::System::Boolean Field_2_13; // 0xCC
	::System::Boolean Field_2_14; // 0xCD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_9CC926D36F34DBFF()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_9CC926D36F34DBFF_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_275E480D0795789A()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_275E480D0795789A_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_BDDBE2FD9A9FFA54(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_BDDBE2FD9A9FFA54_OFFSET))(this, a1);
	}

	::System::Void Method_2_57D5ED2C4C06D908()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_57D5ED2C4C06D908_OFFSET))(this);
	}

	::System::Void Method_2_050DB83B6873DE97(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_050DB83B6873DE97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_D9B43E7E6693F63E(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_D9B43E7E6693F63E_OFFSET))(this, a1);
	}

	::System::Void Method_2_2097174150E430B8(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_2097174150E430B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_1BAC25F61C22AED9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_1BAC25F61C22AED9_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C652F56D3757BE2___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
