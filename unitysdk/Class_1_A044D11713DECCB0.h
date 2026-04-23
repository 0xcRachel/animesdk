#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A044D11713DECCB0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF269D20)
#define CLASS_1_A044D11713DECCB0_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xF269A90)
#define CLASS_1_A044D11713DECCB0_METHOD_1_1709D3280A2D3A51_OFFSET UNITYSDK_OFFSET(0xF26A5A0)
#define CLASS_1_A044D11713DECCB0_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xF269A80)
#define CLASS_1_A044D11713DECCB0_METHOD_1_E55199F4E71DB1AE_OFFSET UNITYSDK_OFFSET(0xF26A4F0)
#define CLASS_1_A044D11713DECCB0_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0xF269CC0)
#define CLASS_1_A044D11713DECCB0__CTOR_OFFSET UNITYSDK_OFFSET(0xF269BE0)

inline static constexpr unsigned int Class_1_A044D11713DECCB0_TypeDefinitionIndex = 55162;

class Class_1_A044D11713DECCB0 : public ::System::Object
{
public:
	static ::Class_1_A044D11713DECCB0** StaticGet_Field_1_1()
	{
		return (::Class_1_A044D11713DECCB0**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A044D11713DECCB0_TypeDefinitionIndex)->GetStaticField(0x41C60);
	}
	// static const ::System::Int32 Field_1_0 = 0x4; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::UnityEngine::Object*>* Field_1_4; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*>* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0__CTOR_OFFSET))(this);
	}

	static ::Class_1_A044D11713DECCB0* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A044D11713DECCB0*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_METHOD_1_24748FC20F375725_OFFSET))();
	}

	static ::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_METHOD_1_0865E94460F11643_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_DISPOSE_OFFSET))(this);
	}

	static ::System::Void Method_1_E55199F4E71DB1AE(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_METHOD_1_E55199F4E71DB1AE_OFFSET))(a1);
	}

	::UnityEngine::Transform* Method_1_1709D3280A2D3A51()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A044D11713DECCB0_METHOD_1_1709D3280A2D3A51_OFFSET))(this);
	}
};
