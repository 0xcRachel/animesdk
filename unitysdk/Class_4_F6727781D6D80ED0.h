#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_4D01A2E7B479D8DE.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

class Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB;
namespace RPG::Client { class EasyFog; }
namespace ScenenLightManager { class BaseComponentExportData; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }

#define CLASS_4_F6727781D6D80ED0_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xE0D2C30)
#define CLASS_4_F6727781D6D80ED0_GETTYPEID_OFFSET UNITYSDK_OFFSET(0xE0D2CB0)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_0DECA5CE66C31F73_OFFSET UNITYSDK_OFFSET(0xE0D15E0)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_151F18E94867FFE1_OFFSET UNITYSDK_OFFSET(0xE0D16E0)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0xE0D1D80)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xE0D3750)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE0D3680)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0xE0D11B0)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_8291C84F8300DA10_OFFSET UNITYSDK_OFFSET(0xE0D2D00)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_B235E757922104A8_OFFSET UNITYSDK_OFFSET(0xE0D1160)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xE0D1620)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_E7EF6BC52B28648C_1_OFFSET UNITYSDK_OFFSET(0xE0D3140)
#define CLASS_4_F6727781D6D80ED0_METHOD_4_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xE0D14D0)
#define CLASS_4_F6727781D6D80ED0_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D29A0)
#define CLASS_4_F6727781D6D80ED0_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D2A10)
#define CLASS_4_F6727781D6D80ED0_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xE0D2AA0)
#define CLASS_4_F6727781D6D80ED0_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D1CE0)
#define CLASS_4_F6727781D6D80ED0_TICK_OFFSET UNITYSDK_OFFSET(0xE0D1470)
#define CLASS_4_F6727781D6D80ED0_UNSERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0xE0D1760)
#define CLASS_4_F6727781D6D80ED0__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0D3270)
#define CLASS_4_F6727781D6D80ED0__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D3260)
#define CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0xE0D3440)
#define CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0xE0D34B0)
#define CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_2_OFFSET UNITYSDK_OFFSET(0xE0D3520)
#define CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_3_OFFSET UNITYSDK_OFFSET(0xE0D3590)
#define CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_4_OFFSET UNITYSDK_OFFSET(0xE0D3600)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET UNITYSDK_OFFSET(0xE0D3970)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D3820)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D3890)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONOBJECTCREATEDASYNC_OFFSET UNITYSDK_OFFSET(0xE0D3900)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET UNITYSDK_OFFSET(0xE0D37B0)
#define CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xE0D36E0)

inline static constexpr unsigned int Class_4_F6727781D6D80ED0_TypeDefinitionIndex = 65273;

class Class_4_F6727781D6D80ED0 : public ::Class_3_4D01A2E7B479D8DE
{
public:
	static ::System::String** StaticGet_Field_4_26()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x6A1D0);
	}
	static ::System::String** StaticGet_Field_4_27()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x6A1D8);
	}
	static ::System::Int32* StaticGet_Field_4_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11880);
	}
	static ::System::Int32* StaticGet_Field_4_10()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11884);
	}
	static ::System::Int32* StaticGet_Field_4_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11888);
	}
	static ::System::Int32* StaticGet_Field_4_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x1188C);
	}
	static ::System::Int32* StaticGet_Field_4_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11890);
	}
	static ::System::Int32* StaticGet_Field_4_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11894);
	}
	static ::System::Int32* StaticGet_Field_4_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x11898);
	}
	static ::System::Int32* StaticGet_Field_4_8()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x1189C);
	}
	static ::System::Int32* StaticGet_Field_4_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118A0);
	}
	static ::System::Int32* StaticGet_Field_4_24()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118A4);
	}
	static ::System::Int32* StaticGet_Field_4_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118A8);
	}
	static ::System::Int32* StaticGet_Field_4_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118AC);
	}
	static ::System::Int32* StaticGet_Field_4_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118B0);
	}
	static ::System::Int32* StaticGet_Field_4_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118B4);
	}
	static ::System::Int32* StaticGet_Field_4_14()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118B8);
	}
	static ::System::Int32* StaticGet_Field_4_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118BC);
	}
	static ::System::Int32* StaticGet_Field_4_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118C0);
	}
	static ::System::Int32* StaticGet_Field_4_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118C4);
	}
	static ::System::Int32* StaticGet_Field_4_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118C8);
	}
	static ::System::Int32* StaticGet_Field_4_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118CC);
	}
	static ::System::Int32* StaticGet_Field_4_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118D0);
	}
	static ::System::Int32* StaticGet_Field_4_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_F6727781D6D80ED0_TypeDefinitionIndex)->GetStaticField(0x118D4);
	}
	::UnityEngine::Renderer* Field_4_2; // 0x48
	::UnityEngine::Material* Field_4_0; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_4_1; // 0x58
	::System::Single Field_4_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__CCTOR_OFFSET))();
	}

	::System::Void Method_4_B235E757922104A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_B235E757922104A8_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_4_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_4_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void UnserializeAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1, ::ScenenLightManager::BaseComponentExportData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*, ::ScenenLightManager::BaseComponentExportData*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_UNSERIALIZEASYNC_OFFSET))(this, a1, a2);
	}

	::System::Void OnSceneLightFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_ONSCENELIGHTFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnBeginSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_ONBEGINSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnEndSceneLightFading(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_ONENDSCENELIGHTFADING_OFFSET))(this, a1);
	}

	::System::Void OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_ONOBJECTCREATEDASYNC_OFFSET))(this, a1);
	}

	::RPG::CustomRP::CustomLightQualityFilter GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_GETQUALITYFILTER_OFFSET))(this);
	}

	::System::Int32 GetTypeID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_GETTYPEID_OFFSET))(this);
	}

	::UnityEngine::Material* Method_4_8291C84F8300DA10()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_8291C84F8300DA10_OFFSET))(this);
	}

	::System::Void Method_4_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_4_E7EF6BC52B28648C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_E7EF6BC52B28648C_1_OFFSET))(this);
	}

	::System::Void Method_4_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_1713F44301AA802F_OFFSET))(this);
	}

	static ::System::Void Method_4_151F18E94867FFE1(::UnityEngine::Material* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_151F18E94867FFE1_OFFSET))(a1);
	}

	::RPG::Client::EasyFog* Method_4_0DECA5CE66C31F73()
	{
		return ((::RPG::Client::EasyFog*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_0DECA5CE66C31F73_OFFSET))(this);
	}

	::System::Void _UnserializeAsync_b__4_0(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_0_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__4_1(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_1_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__4_2(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_2_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__4_3(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_3_OFFSET))(this, m);
	}

	::System::Void _UnserializeAsync_b__4_4(::UnityEngine::Object* m)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0__UNSERIALIZEASYNC_B__4_4_OFFSET))(this, m);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void Method_4_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0_METHOD_4_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnSceneLightFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONSCENELIGHTFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnBeginSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONBEGINSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEndSceneLightFading(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONENDSCENELIGHTFADING_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnObjectCreatedAsync(::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_17A23D66DE5213CA_Class_1_B8A2EA7C3FFFDEAB*))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_ONOBJECTCREATEDASYNC_OFFSET))(this, P0);
	}

	::RPG::CustomRP::CustomLightQualityFilter __iFixBaseProxy_GetQualityFilter()
	{
		return ((::RPG::CustomRP::CustomLightQualityFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F6727781D6D80ED0___IFIXBASEPROXY_GETQUALITYFILTER_OFFSET))(this);
	}
};
