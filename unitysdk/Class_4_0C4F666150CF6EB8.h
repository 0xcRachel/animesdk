#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4D01A2E7B479D8DE.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47;
namespace RPG::Client { class EasyFog; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }

#define CLASS_4_0C4F666150CF6EB8_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13F56D40)
#define CLASS_4_0C4F666150CF6EB8_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x13F56DC0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0x13F556B0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_17B58EC18ED9693D_OFFSET UNITYSDK_OFFSET(0x13F56E10)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x13F55E00)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_1_OFFSET UNITYSDK_OFFSET(0x13F57290)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x13F554A0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13F578B0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13F577F0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x13F55170)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x13F555F0)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x13F55120)
#define CLASS_4_0C4F666150CF6EB8_METHOD_4_E1DE0017D8919A6A_OFFSET UNITYSDK_OFFSET(0x13F555B0)
#define CLASS_4_0C4F666150CF6EB8_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F56A90)
#define CLASS_4_0C4F666150CF6EB8_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F56B00)
#define CLASS_4_0C4F666150CF6EB8_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x13F56B90)
#define CLASS_4_0C4F666150CF6EB8_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F55D50)
#define CLASS_4_0C4F666150CF6EB8_TICK_OFFSET UNITYSDK_OFFSET(0x13F55440)
#define CLASS_4_0C4F666150CF6EB8_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x13F55730)
#define CLASS_4_0C4F666150CF6EB8__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F573C0)
#define CLASS_4_0C4F666150CF6EB8__CTOR_OFFSET UNITYSDK_OFFSET(0x13F573B0)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x13F57590)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0x13F57600)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_2_OFFSET UNITYSDK_OFFSET(0x13F57670)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_3_OFFSET UNITYSDK_OFFSET(0x13F576E0)
#define CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_4_OFFSET UNITYSDK_OFFSET(0x13F57750)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0x13F57A90)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F57970)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F579D0)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0x13F57A30)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0x13F57910)
#define CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13F57850)

inline static constexpr unsigned int Class_4_0C4F666150CF6EB8_TypeDefinitionIndex = 66200;

class Class_4_0C4F666150CF6EB8 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::System::String** StaticGet_Field_4_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x43CB0);
	}
	static ::System::String** StaticGet_Field_4_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0x43CB8);
	}
	static ::System::Int32* StaticGet_Field_4_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEA0);
	}
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEA4);
	}
	static ::System::Int32* StaticGet_Field_4_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEA8);
	}
	static ::System::Int32* StaticGet_Field_4_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEAC);
	}
	static ::System::Int32* StaticGet_Field_4_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEB0);
	}
	static ::System::Int32* StaticGet_Field_4_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEB4);
	}
	static ::System::Int32* StaticGet_Field_4_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEB8);
	}
	static ::System::Int32* StaticGet_Field_4_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEBC);
	}
	static ::System::Int32* StaticGet_Field_4_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEC0);
	}
	static ::System::Int32* StaticGet_Field_4_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEC4);
	}
	static ::System::Int32* StaticGet_Field_4_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEC8);
	}
	static ::System::Int32* StaticGet_Field_4_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCECC);
	}
	static ::System::Int32* StaticGet_Field_4_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCED0);
	}
	static ::System::Int32* StaticGet_Field_4_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCED4);
	}
	static ::System::Int32* StaticGet_Field_4_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCED8);
	}
	static ::System::Int32* StaticGet_Field_4_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEDC);
	}
	static ::System::Int32* StaticGet_Field_4_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEE0);
	}
	static ::System::Int32* StaticGet_Field_4_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEE4);
	}
	static ::System::Int32* StaticGet_Field_4_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEE8);
	}
	static ::System::Int32* StaticGet_Field_4_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEEC);
	}
	static ::System::Int32* StaticGet_Field_4_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEF0);
	}
	static ::System::Int32* StaticGet_Field_4_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_0C4F666150CF6EB8_TypeDefinitionIndex)->GetStaticField(0xCEF4);
	}
	::UnityEngine::Renderer* Field_4_24; // 0x48
	::UnityEngine::Material* Field_4_25; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_4_26; // 0x58
	::System::Single Field_4_27; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__CCTOR_OFFSET))();
	}

	::System::Void Method_4_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_DF3C54A5ADEABAF1_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_GETTYPEID_OFFSET))(this);
	}

	::UnityEngine::Material* Method_4_17B58EC18ED9693D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_17B58EC18ED9693D_OFFSET))(this);
	}

	::System::Void Method_4_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_4_51CFFE2AF748ECD7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_51CFFE2AF748ECD7_1_OFFSET))(this);
	}

	::System::Void Method_4_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_50131F4CF014469C_OFFSET))(this);
	}

	static ::System::Void Method_4_151F18E94867FFE1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_151F18E94867FFE1_OFFSET))(a1);
	}

	::RPG::Client::EasyFog* Method_4_E1DE0017D8919A6A()
	{
		return ((::RPG::Client::EasyFog*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_E1DE0017D8919A6A_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__4_0(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_0_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_1(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_1_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_2(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_2_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_3(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_3_OFFSET))(this, a1);
	}

	::System::Void _UnserializeAsync_b__4_4(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8__UNSERIALIZEASYNC_B__4_4_OFFSET))(this, a1);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnObjectCreatedAsync(::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_95BCA8EECFBAC876_Class_1_ACB700F0EE23EB47*))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0C4F666150CF6EB8___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}
};
