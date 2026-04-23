#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_1_9CBC71DC5240DC00;
class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class MonoEffectPluginCharaEffectBase; }
namespace RPG::Client { class MonoEffectPluginFade; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_A709DB359B6FA510_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B67F0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_04577AC5AE05B41B_OFFSET UNITYSDK_OFFSET(0xC5B8F20)
#define CLASS_2_A709DB359B6FA510_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xC5B69A0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xC5B7150)
#define CLASS_2_A709DB359B6FA510_METHOD_2_1ADC5E4C222F6999_OFFSET UNITYSDK_OFFSET(0xC5B7680)
#define CLASS_2_A709DB359B6FA510_METHOD_2_243A42B6D2656CA9_OFFSET UNITYSDK_OFFSET(0xC5B6EF0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_2D8D297A9EEF51AC_OFFSET UNITYSDK_OFFSET(0xC5B9300)
#define CLASS_2_A709DB359B6FA510_METHOD_2_369F47CCB61A607A_OFFSET UNITYSDK_OFFSET(0xC5B7210)
#define CLASS_2_A709DB359B6FA510_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC5B8BC0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0xC5B8E80)
#define CLASS_2_A709DB359B6FA510_METHOD_2_47D59A6D9D2806F9_OFFSET UNITYSDK_OFFSET(0xC5B7350)
#define CLASS_2_A709DB359B6FA510_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xC5B9BC0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_5B6CC23D54F693F4_OFFSET UNITYSDK_OFFSET(0xC5B9130)
#define CLASS_2_A709DB359B6FA510_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0xC5B7E60)
#define CLASS_2_A709DB359B6FA510_METHOD_2_6EACD9B2982DCF89_OFFSET UNITYSDK_OFFSET(0xC5B78B0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_73981E138A7FFA15_OFFSET UNITYSDK_OFFSET(0xC5B7A00)
#define CLASS_2_A709DB359B6FA510_METHOD_2_77D630694D127945_OFFSET UNITYSDK_OFFSET(0xC5B9720)
#define CLASS_2_A709DB359B6FA510_METHOD_2_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xC5B8CF0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xC5B9E30)
#define CLASS_2_A709DB359B6FA510_METHOD_2_A5FD6FF4A4D69ED8_OFFSET UNITYSDK_OFFSET(0xC5B66E0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xC5B9BD0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_A95A26410788624B_OFFSET UNITYSDK_OFFSET(0xC5B67A0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xC5B77F0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0xC5B96B0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_BCEC6A5E82A37C9A_OFFSET UNITYSDK_OFFSET(0xC5B6860)
#define CLASS_2_A709DB359B6FA510_METHOD_2_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xC5B87F0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC5B6960)
#define CLASS_2_A709DB359B6FA510_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0xC5B6B00)
#define CLASS_2_A709DB359B6FA510_METHOD_2_DE25B04543C947C4_OFFSET UNITYSDK_OFFSET(0xC5B86A0)
#define CLASS_2_A709DB359B6FA510_METHOD_2_F7E674C1303ACB5B_OFFSET UNITYSDK_OFFSET(0xC5B9020)
#define CLASS_2_A709DB359B6FA510__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5B9CC0)
#define CLASS_2_A709DB359B6FA510__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B9CB0)
#define CLASS_2_A709DB359B6FA510__FADEINIMMEDIATELY_B__5_0_OFFSET UNITYSDK_OFFSET(0xC5B9CF0)
#define CLASS_2_A709DB359B6FA510___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5B9EA0)

inline static constexpr unsigned int Class_2_A709DB359B6FA510_TypeDefinitionIndex = 64408;

class Class_2_A709DB359B6FA510 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Int32* StaticGet_Field_2_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A709DB359B6FA510_TypeDefinitionIndex)->GetStaticField(0x11C60);
	}
	static ::System::Int32* StaticGet_Field_2_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A709DB359B6FA510_TypeDefinitionIndex)->GetStaticField(0x11C64);
	}
	::RPG::Client::MonoEffectPluginCharaEffectBase* Field_2_4; // 0x18
	::System::Action* Field_2_8; // 0x20
	::Il2CppArray<::UnityEngine::Renderer*>* Field_2_2; // 0x28
	::Class_1_9CBC71DC5240DC00* Field_2_3; // 0x30
	::UnityEngine::Animator* Field_2_5; // 0x38
	::Class_1_D27BF54F25500E5F* Field_2_7; // 0x40
	::System::Boolean Field_2_0; // 0x48
	::System::Boolean Field_2_1; // 0x49
	::System::Boolean Field_2_9; // 0x4A
	::System::Single Field_2_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510__CCTOR_OFFSET))();
	}

	::System::Void Method_2_A5FD6FF4A4D69ED8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_A5FD6FF4A4D69ED8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_BCEC6A5E82A37C9A()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_BCEC6A5E82A37C9A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_243A42B6D2656CA9(::System::Action* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_243A42B6D2656CA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_47D59A6D9D2806F9(::System::Action* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_47D59A6D9D2806F9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_C8D6B29192F288ED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_C8D6B29192F288ED_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_04577AC5AE05B41B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_04577AC5AE05B41B_OFFSET))(this, a1);
	}

	::System::Void Method_2_5B6CC23D54F693F4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_5B6CC23D54F693F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7E674C1303ACB5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_F7E674C1303ACB5B_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D8D297A9EEF51AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_2D8D297A9EEF51AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_2_369F47CCB61A607A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_369F47CCB61A607A_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_1ADC5E4C222F6999()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_1ADC5E4C222F6999_OFFSET))(this);
	}

	::System::Void Method_2_73981E138A7FFA15(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_73981E138A7FFA15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6EACD9B2982DCF89(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_6EACD9B2982DCF89_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE25B04543C947C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_DE25B04543C947C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_77D630694D127945(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_77D630694D127945_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_2_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_A871253BFD471C99_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginFade* Method_2_A95A26410788624B()
	{
		return ((::RPG::Client::MonoEffectPluginFade*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_A95A26410788624B_OFFSET))(this);
	}

	::System::Void _FadeInImmediately_b__5_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510__FADEINIMMEDIATELY_B__5_0_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A709DB359B6FA510___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
