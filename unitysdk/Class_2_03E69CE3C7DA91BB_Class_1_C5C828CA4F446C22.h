#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

class Class_0_16E4307DCC419505_847;
class Class_2_03E69CE3C7DA91BB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0xDEA8320)
#define CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_2628791249CF073B_OFFSET UNITYSDK_OFFSET(0xDEA5BB0)
#define CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_58EBFEC1698B7221_OFFSET UNITYSDK_OFFSET(0xDEA8010)
#define CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0xDEA8220)
#define CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22__CTOR_OFFSET UNITYSDK_OFFSET(0xDEA7EE0)

inline static constexpr unsigned int Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22_TypeDefinitionIndex = 58800;

class Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_847*>*>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_847*, ::System::Int32>* Field_1_5; // 0x18
	::System::Single Field_1_0; // 0x20
	::System::Single Field_1_2; // 0x24
	::System::Int32 Field_1_6; // 0x28
	::System::Single Field_1_1; // 0x2C
	::System::Single Field_1_3; // 0x30

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_2628791249CF073B(::System::Single a1, ::Class_2_03E69CE3C7DA91BB* a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3, ::UnityEngine::GameObject* a4, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* a5, ::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22* a6, ::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Class_2_03E69CE3C7DA91BB*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::UnityEngine::GameObject*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*, ::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22*, ::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_2628791249CF073B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_847*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_0ED2EEE19D10A0A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_0ED2EEE19D10A0A7_OFFSET))(this);
	}

	::System::Boolean Method_1_58EBFEC1698B7221(::Class_0_16E4307DCC419505_847* a1, ::System::Int32 a2, ::System::Nullable_1<::UnityEngine::Rect> a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_847*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Rect>))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CLASS_1_C5C828CA4F446C22_METHOD_1_58EBFEC1698B7221_OFFSET))(this, a1, a2, a3);
	}
};
