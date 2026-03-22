#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WaterInteractor;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_17D1ADB128FED134_CLEAR_OFFSET UNITYSDK_OFFSET(0x1107D3A0)
#define CLASS_1_17D1ADB128FED134_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1107CE10)
#define CLASS_1_17D1ADB128FED134_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x1107E200)
#define CLASS_1_17D1ADB128FED134_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1107E2F0)
#define CLASS_1_17D1ADB128FED134_METHOD_1_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1107DC80)
#define CLASS_1_17D1ADB128FED134_METHOD_1_603E2E21049D7759_OFFSET UNITYSDK_OFFSET(0x1107CF70)
#define CLASS_1_17D1ADB128FED134_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x1107E180)
#define CLASS_1_17D1ADB128FED134_METHOD_1_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x1107DF40)
#define CLASS_1_17D1ADB128FED134_METHOD_1_9A5CF405F224D179_OFFSET UNITYSDK_OFFSET(0x1107CE50)
#define CLASS_1_17D1ADB128FED134_METHOD_1_C9312916D3A31323_OFFSET UNITYSDK_OFFSET(0x1107DEF0)
#define CLASS_1_17D1ADB128FED134_METHOD_1_CF763E7CB510BF26_OFFSET UNITYSDK_OFFSET(0x1107D5D0)
#define CLASS_1_17D1ADB128FED134_METHOD_1_D1CB535E9CE1A646_OFFSET UNITYSDK_OFFSET(0x1107D990)
#define CLASS_1_17D1ADB128FED134_METHOD_1_F13C6990CE1C2126_OFFSET UNITYSDK_OFFSET(0x1107D310)
#define CLASS_1_17D1ADB128FED134_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x1107D760)
#define CLASS_1_17D1ADB128FED134__CCTOR_OFFSET UNITYSDK_OFFSET(0x1107E3A0)
#define CLASS_1_17D1ADB128FED134__CTOR_OFFSET UNITYSDK_OFFSET(0x1107E390)

inline static constexpr unsigned int Class_1_17D1ADB128FED134_TypeDefinitionIndex = 56469;

class Class_1_17D1ADB128FED134 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D1ADB128FED134_TypeDefinitionIndex)->GetStaticField(0x40480);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D1ADB128FED134_TypeDefinitionIndex)->GetStaticField(0x40488);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D1ADB128FED134_TypeDefinitionIndex)->GetStaticField(0xED20);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D1ADB128FED134_TypeDefinitionIndex)->GetStaticField(0xED24);
	}
	static ::System::Single* StaticGet_Field_1_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_17D1ADB128FED134_TypeDefinitionIndex)->GetStaticField(0xED28);
	}
	// static const ::System::Single Field_1_4; // 0x0
	::UnityEngine::Transform* Field_1_12; // 0x10
	::WaterInteractor* Field_1_6; // 0x18
	::UnityEngine::Transform* Field_1_7; // 0x20
	::UnityEngine::Transform* Field_1_8; // 0x28
	::System::UInt32 Field_1_11; // 0x30
	::System::Boolean Field_1_10; // 0x34
	::System::Single Field_1_13; // 0x38
	::System::Nullable_1<::System::Single> Field_1_9; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_128774387667156B_OFFSET))(this);
	}

	static ::System::Single Method_1_9A5CF405F224D179(::Il2CppArray<::System::Single>* a1)
	{
		return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_9A5CF405F224D179_OFFSET))(a1);
	}

	static ::System::Void Method_1_603E2E21049D7759(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_603E2E21049D7759_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_F13C6990CE1C2126(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_F13C6990CE1C2126_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CF763E7CB510BF26(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_CF763E7CB510BF26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1CB535E9CE1A646(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_D1CB535E9CE1A646_OFFSET))(this, a1);
	}

	::System::Void Method_1_C9312916D3A31323()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_C9312916D3A31323_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_97B44ED90A2DE2AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_97B44ED90A2DE2AB_OFFSET))(this);
	}

	::System::Void Method_1_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_455E250D679F9642_OFFSET))(this);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17D1ADB128FED134_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
