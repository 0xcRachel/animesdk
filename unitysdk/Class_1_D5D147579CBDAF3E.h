#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WaterInteractor;
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D5D147579CBDAF3E_CLEAR_OFFSET UNITYSDK_OFFSET(0x13C3C200)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x13C3BC00)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x13C3D040)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x13C3D190)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_3DD9CDD21849C79E_OFFSET UNITYSDK_OFFSET(0x13C3CD80)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_8723A000853037DA_OFFSET UNITYSDK_OFFSET(0x13C3CFC0)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_9A5CF405F224D179_OFFSET UNITYSDK_OFFSET(0x13C3BC40)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_B13E42FE90E0A910_OFFSET UNITYSDK_OFFSET(0x13C3BD60)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_CF763E7CB510BF26_OFFSET UNITYSDK_OFFSET(0x13C3C470)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_D1CB535E9CE1A646_OFFSET UNITYSDK_OFFSET(0x13C3C850)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x13C3CDD0)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0x13C3CB10)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_F13C6990CE1C2126_OFFSET UNITYSDK_OFFSET(0x13C3C170)
#define CLASS_1_D5D147579CBDAF3E_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x13C3C610)
#define CLASS_1_D5D147579CBDAF3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C3D240)
#define CLASS_1_D5D147579CBDAF3E__CTOR_OFFSET UNITYSDK_OFFSET(0x13C3D230)

inline static constexpr unsigned int Class_1_D5D147579CBDAF3E_TypeDefinitionIndex = 66255;

class Class_1_D5D147579CBDAF3E : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D147579CBDAF3E_TypeDefinitionIndex)->GetStaticField(0x13040);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D147579CBDAF3E_TypeDefinitionIndex)->GetStaticField(0x13048);
	}
	static ::System::Single* StaticGet_Field_1_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D147579CBDAF3E_TypeDefinitionIndex)->GetStaticField(0x56B0);
	}
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D147579CBDAF3E_TypeDefinitionIndex)->GetStaticField(0x56B4);
	}
	static ::System::Single* StaticGet_Field_1_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D147579CBDAF3E_TypeDefinitionIndex)->GetStaticField(0x56B8);
	}
	// static const ::System::Single Field_1_5; // 0x0
	::UnityEngine::Transform* Field_1_6; // 0x10
	::WaterInteractor* Field_1_7; // 0x18
	::UnityEngine::Transform* Field_1_8; // 0x20
	::UnityEngine::Transform* Field_1_9; // 0x28
	::System::Single Field_1_10; // 0x30
	::System::Nullable_1<::System::Single> Field_1_11; // 0x34
	::System::Boolean Field_1_12; // 0x3C
	::System::UInt32 Field_1_13; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_128774387667156B_OFFSET))(this);
	}

	static ::System::Single Method_1_9A5CF405F224D179(::Il2CppArray<::System::Single>* a1)
	{
		return ((::System::Single(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_9A5CF405F224D179_OFFSET))(a1);
	}

	static ::System::Void Method_1_B13E42FE90E0A910(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_B13E42FE90E0A910_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_F13C6990CE1C2126(::System::Single a1)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_F13C6990CE1C2126_OFFSET))(a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CF763E7CB510BF26(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_CF763E7CB510BF26_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1CB535E9CE1A646(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_D1CB535E9CE1A646_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DD9CDD21849C79E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_3DD9CDD21849C79E_OFFSET))(this);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_D87A7D8243E04FD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_D87A7D8243E04FD7_OFFSET))(this);
	}

	::System::Void Method_1_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Boolean Method_1_8723A000853037DA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_8723A000853037DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2B9D478141E0F891()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_2B9D478141E0F891_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
