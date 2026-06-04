#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_C4C2ACF3D9655BEA_26;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_BAACDA6D506721D1_4_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164B2900)
#define CLASS_2_BAACDA6D506721D1_4_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164B29F0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x164B2C10)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x164B2BB0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x164B2B50)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x164B2670)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x164B21A0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x164B2080)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x164B1FF0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x164B23E0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_C02357FE432192E0_1_OFFSET UNITYSDK_OFFSET(0x164B2740)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_C02357FE432192E0_OFFSET UNITYSDK_OFFSET(0x164B26D0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x164B2510)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x164B27B0)
#define CLASS_2_BAACDA6D506721D1_4_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x164B2810)
#define CLASS_2_BAACDA6D506721D1_4__CTOR_OFFSET UNITYSDK_OFFSET(0x164B2AC0)
#define CLASS_2_BAACDA6D506721D1_4__ONBIND_OFFSET UNITYSDK_OFFSET(0x164B1DD0)
#define CLASS_2_BAACDA6D506721D1_4__ONTICK_OFFSET UNITYSDK_OFFSET(0x164B24B0)
#define CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164B2CD0)
#define CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164B2D30)
#define CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x164B2AF0)
#define CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x164B2C70)

inline static constexpr unsigned int Class_2_BAACDA6D506721D1_4_TypeDefinitionIndex = 67456;

class Class_2_BAACDA6D506721D1_4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Transform* Field_2_4; // 0x60
	::UnityEngine::UI::Slider* Field_2_5; // 0x68
	::UnityEngine::UI::Slider* Field_2_6; // 0x70
	::UnityEngine::Animation* Field_2_7; // 0x78
	::UnityEngine::Transform* Field_2_8; // 0x80
	::UnityEngine::UI::Slider* Field_2_9; // 0x88
	::UnityEngine::Animation* Field_2_10; // 0x90
	::UnityEngine::Transform* Field_2_11; // 0x98
	::UnityEngine::Animation* Field_2_12; // 0xA0
	::System::Boolean Field_2_13; // 0xA8
	::System::Boolean Field_2_14; // 0xA9
	::RPG::GameCore::BattleScreenEffectType Field_2_15; // 0xAC
	::System::Single Field_2_16; // 0xB0
	::System::Single Field_2_17; // 0xB4
	::System::Single Field_2_18; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_7A73F165001BC325()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_7A73F165001BC325_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_62D75ADFFEE4BD8B(::Class_1_C4C2ACF3D9655BEA_26* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C4C2ACF3D9655BEA_26*))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_C02357FE432192E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C02357FE432192E0_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_C02357FE432192E0_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_BF653AC3FD8A315F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_BF653AC3FD8A315F_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BAACDA6D506721D1_4___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
