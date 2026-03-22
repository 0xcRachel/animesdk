#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_04EFC6ACBD9914E6_OFFSET UNITYSDK_OFFSET(0x10ED71F0)
#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_2F381669E5B3EF9F_OFFSET UNITYSDK_OFFSET(0x10ED7CA0)
#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x10ED7510)
#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_60257B6750C859C3_OFFSET UNITYSDK_OFFSET(0x10ED7160)
#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_EDD415564F986802_OFFSET UNITYSDK_OFFSET(0x10ED7380)
#define CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED7150)

inline static constexpr unsigned int Class_2_90153E8BD5DB57E2_Class_1_EF5C6DDB2E06D631_TypeDefinitionIndex = 56040;

class Class_2_90153E8BD5DB57E2_Class_1_EF5C6DDB2E06D631 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x28
	::UnityEngine::MaterialPropertyBlock* Field_1_1; // 0x30
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60257B6750C859C3(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_60257B6750C859C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F381669E5B3EF9F(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_2F381669E5B3EF9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04EFC6ACBD9914E6(::System::String* a1, ::System::Collections::Generic::List_1<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_04EFC6ACBD9914E6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDD415564F986802(::System::String* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_EDD415564F986802_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_CLASS_1_EF5C6DDB2E06D631_METHOD_1_55157FBA4997D865_OFFSET))(this);
	}
};
