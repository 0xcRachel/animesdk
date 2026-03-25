#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7E0DCA9D208905FE;
class Class_3_DA947530FE358084_Class_1_0DC6D3ABD3F513ED_Class_1_392329507188B0AA;
namespace UnityEngine { class Transform; }

#define CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED_METHOD_1_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x8B639F0)
#define CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED_METHOD_1_58D68FEBA7B5A778_OFFSET UNITYSDK_OFFSET(0x8B63320)
#define CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED__CTOR_OFFSET UNITYSDK_OFFSET(0x8B628B0)

inline static constexpr unsigned int Class_3_DA947530FE358084_Class_1_0DC6D3ABD3F513ED_TypeDefinitionIndex = 42318;

class Class_3_DA947530FE358084_Class_1_0DC6D3ABD3F513ED : public ::System::Object
{
public:
	::Class_3_DA947530FE358084_Class_1_0DC6D3ABD3F513ED_Class_1_392329507188B0AA* Field_1_3; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::Class_1_7E0DCA9D208905FE* Field_1_1; // 0x20
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_58D68FEBA7B5A778(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED_METHOD_1_58D68FEBA7B5A778_OFFSET))(this, a1);
	}

	::System::Void Method_1_45F0369A056A5CE7(::Class_1_7E0DCA9D208905FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7E0DCA9D208905FE*))((::PBYTE)hIl2Cpp + CLASS_3_DA947530FE358084_CLASS_1_0DC6D3ABD3F513ED_METHOD_1_45F0369A056A5CE7_OFFSET))(this, a1);
	}
};
