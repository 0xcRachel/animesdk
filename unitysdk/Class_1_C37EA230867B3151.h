#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RogueDLCCompass_RingPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client { class MultiLightEffectMaterialBlock; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C37EA230867B3151_METHOD_1_121105D34F65FFF9_OFFSET UNITYSDK_OFFSET(0x88054D0)
#define CLASS_1_C37EA230867B3151_METHOD_1_169ACDDF88AD2AC3_OFFSET UNITYSDK_OFFSET(0x8805B80)
#define CLASS_1_C37EA230867B3151_METHOD_1_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x8806170)
#define CLASS_1_C37EA230867B3151_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x88070F0)
#define CLASS_1_C37EA230867B3151_METHOD_1_4F8BD755AF34B283_OFFSET UNITYSDK_OFFSET(0x8806960)
#define CLASS_1_C37EA230867B3151_METHOD_1_6BF28FCDB3FDACE9_OFFSET UNITYSDK_OFFSET(0x8806D60)
#define CLASS_1_C37EA230867B3151_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8805AE0)
#define CLASS_1_C37EA230867B3151_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x88070B0)
#define CLASS_1_C37EA230867B3151_METHOD_1_C6159FCF4A6D407A_OFFSET UNITYSDK_OFFSET(0x8805F70)
#define CLASS_1_C37EA230867B3151_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x8806840)
#define CLASS_1_C37EA230867B3151_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x8807440)
#define CLASS_1_C37EA230867B3151__CCTOR_OFFSET UNITYSDK_OFFSET(0x88074D0)
#define CLASS_1_C37EA230867B3151__CTOR_OFFSET UNITYSDK_OFFSET(0x88074B0)

inline static constexpr unsigned int Class_1_C37EA230867B3151_TypeDefinitionIndex = 64403;

class Class_1_C37EA230867B3151 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_29()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AC0);
	}
	static ::System::Single* StaticGet_Field_1_30()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AC4);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_24()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AC8);
	}
	static ::System::Single* StaticGet_Field_1_33()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AD8);
	}
	static ::System::Single* StaticGet_Field_1_35()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2ADC);
	}
	static ::System::Single* StaticGet_Field_1_32()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AE0);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AE4);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_22()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AE8);
	}
	static ::System::Single* StaticGet_Field_1_34()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AF8);
	}
	static ::System::Single* StaticGet_Field_1_31()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2AFC);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_26()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2B00);
	}
	static ::System::Single* StaticGet_Field_1_27()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2B10);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_23()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2B14);
	}
	static ::UnityEngine::Color* StaticGet_Field_1_25()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C37EA230867B3151_TypeDefinitionIndex)->GetStaticField(0x2B24);
	}
	::System::Action* Field_1_10; // 0x10
	::RPG::Client::MultiLightEffectMaterialBlock* Field_1_6; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_7; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_9; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_1_8; // 0x30
	::UnityEngine::Animator* Field_1_11; // 0x38
	::UnityEngine::Transform* Field_1_5; // 0x40
	::System::Single Field_1_15; // 0x48
	::System::Single Field_1_37; // 0x4C
	::System::Single Field_1_16; // 0x50
	::System::Int32 Field_1_1; // 0x54
	::System::Int32 Field_1_13; // 0x58
	::System::Int32 Field_1_17; // 0x5C
	::System::Boolean Field_1_36; // 0x60
	::System::Boolean Field_1_0; // 0x61
	::System::Single Field_1_20; // 0x64
	::UnityEngine::Color Field_1_39; // 0x68
	::System::Single Field_1_21; // 0x78
	::System::Single Field_1_40; // 0x7C
	::System::Int32 Field_1_14; // 0x80
	::System::Single Field_1_2; // 0x84
	::System::Single Field_1_3; // 0x88
	::System::Single Field_1_19; // 0x8C
	::RPG::Client::Prop::RogueDLCCompass_RingPart Field_1_12; // 0x90
	::System::Single Field_1_18; // 0x94
	::System::Int32 Field_1_38; // 0x98
	::System::Single Field_1_4; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151__CCTOR_OFFSET))();
	}

	::System::Void Method_1_121105D34F65FFF9(::UnityEngine::Transform* a1, ::RPG::Client::Prop::RogueDLCCompass_RingPart a2, ::System::Collections::Generic::List_1<::System::Single>* a3, ::System::Collections::Generic::List_1<::System::Single>* a4, ::System::Collections::Generic::List_1<::System::Int32>* a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::Prop::RogueDLCCompass_RingPart, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_121105D34F65FFF9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_4F8BD755AF34B283(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_4F8BD755AF34B283_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BF28FCDB3FDACE9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_6BF28FCDB3FDACE9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_169ACDDF88AD2AC3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_169ACDDF88AD2AC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6159FCF4A6D407A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_C6159FCF4A6D407A_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C37EA230867B3151_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}
};
