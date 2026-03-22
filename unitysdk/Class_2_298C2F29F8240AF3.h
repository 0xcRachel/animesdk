#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_2_58693492F724A715;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_298C2F29F8240AF3_METHOD_2_9EF64292D3DA5796_OFFSET UNITYSDK_OFFSET(0xD8A7BD0)
#define CLASS_2_298C2F29F8240AF3__CTOR_OFFSET UNITYSDK_OFFSET(0xD8A7D70)
#define CLASS_2_298C2F29F8240AF3__ONBIND_OFFSET UNITYSDK_OFFSET(0xD8A7810)
#define CLASS_2_298C2F29F8240AF3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD8A7DC0)

inline static constexpr unsigned int Class_2_298C2F29F8240AF3_TypeDefinitionIndex = 57506;

class Class_2_298C2F29F8240AF3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::Int32 Field_2_2 = 0x3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::Il2CppArray<::Class_2_58693492F724A715*>* Field_2_1; // 0x68
	::System::Int32 Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298C2F29F8240AF3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298C2F29F8240AF3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_9EF64292D3DA5796(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_298C2F29F8240AF3_METHOD_2_9EF64292D3DA5796_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_298C2F29F8240AF3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
