#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_C4C2ACF3D9655BEA_25;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_4E25A25FE10CD8FC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD1A1840)
#define CLASS_2_4E25A25FE10CD8FC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD1A1900)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xD1A10E0)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD1A1000)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD1A1B00)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD1A1AA0)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0xD1A15B0)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xD1A0F70)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0xD1A1310)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_C02357FE432192E0_1_OFFSET UNITYSDK_OFFSET(0xD1A1680)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0xD1A1610)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xD1A1A30)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD1A1450)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0xD1A16F0)
#define CLASS_2_4E25A25FE10CD8FC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD1A1750)
#define CLASS_2_4E25A25FE10CD8FC__CTOR_OFFSET UNITYSDK_OFFSET(0xD1A19A0)
#define CLASS_2_4E25A25FE10CD8FC__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1A0BE0)
#define CLASS_2_4E25A25FE10CD8FC__ONTICK_OFFSET UNITYSDK_OFFSET(0xD1A13F0)
#define CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD1A1BD0)
#define CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD1A1C30)
#define CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1A19D0)
#define CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xD1A1B60)

inline static constexpr unsigned int Class_2_4E25A25FE10CD8FC_TypeDefinitionIndex = 59125;

class Class_2_4E25A25FE10CD8FC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_16; // 0x0
	// static const ::System::Single Field_2_17; // 0x0
	// static const ::System::String* Field_2_18; // 0x0
	::UnityEngine::UI::Slider* Field_2_2; // 0x60
	::UnityEngine::UI::Slider* Field_2_1; // 0x68
	::UnityEngine::Animation* Field_2_3; // 0x70
	::UnityEngine::Animation* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_6; // 0x80
	::UnityEngine::UI::Slider* Field_2_9; // 0x88
	::UnityEngine::Transform* Field_2_7; // 0x90
	::UnityEngine::Animation* Field_2_10; // 0x98
	::UnityEngine::Transform* Field_2_5; // 0xA0
	::System::Single Field_2_14; // 0xA8
	::System::Single Field_2_13; // 0xAC
	::System::Single Field_2_12; // 0xB0
	::RPG::GameCore::BattleScreenEffectType Field_2_8; // 0xB4
	::System::Boolean Field_2_15; // 0xB8
	::System::Boolean Field_2_11; // 0xB9

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_62D75ADFFEE4BD8B(::Class_1_C4C2ACF3D9655BEA_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_25*))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_C02357FE432192E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_C02357FE432192E0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E25A25FE10CD8FC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
