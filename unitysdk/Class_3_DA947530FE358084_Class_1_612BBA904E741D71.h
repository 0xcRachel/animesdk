#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C8BA815B6612F0EA;
class Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET UNITYSDK_OFFSET(0x10C9DBF0)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x10C9D510)
#define CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9CE40)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_612BBA904E741D71_TypeDefinitionIndex = 41275;

class Class_3_DA947530FE358084_Class_1_612BBA904E741D71 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::Class_1_C8BA815B6612F0EA* Field_1_1; // 0x18
	::Class_3_DA947530FE358084_Class_1_612BBA904E741D71_Class_1_392329507188B0AA* Field_1_3; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_58D68FEBA7B5A778_OFFSET))(this, a1);
	}

	::System::Void Method_1_1851C433B7254E4E(::Class_1_C8BA815B6612F0EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C8BA815B6612F0EA*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_612BBA904E741D71_METHOD_1_1851C433B7254E4E_OFFSET))(this, a1);
	}
};
