#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_417F172B458C9E14_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x11832860)
#define CLASS_2_417F172B458C9E14_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x11832950)
#define CLASS_2_417F172B458C9E14_METHOD_2_73FB9DE4849AF1B5_OFFSET UNITYSDK_OFFSET(0x11832740)
#define CLASS_2_417F172B458C9E14_METHOD_2_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x118327E0)
#define CLASS_2_417F172B458C9E14__CTOR_OFFSET UNITYSDK_OFFSET(0x11832A50)
#define CLASS_2_417F172B458C9E14__ONBIND_OFFSET UNITYSDK_OFFSET(0x118326A0)
#define CLASS_2_417F172B458C9E14___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11832A80)

inline static constexpr unsigned int Class_2_417F172B458C9E14_TypeDefinitionIndex = 58957;

class Class_2_417F172B458C9E14 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::UnityEngine::GameObject* Field_2_0; // 0x60
	::System::String* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_1; // 0x70
	::System::Boolean Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_73FB9DE4849AF1B5(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14_METHOD_2_73FB9DE4849AF1B5_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14_METHOD_2_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_417F172B458C9E14___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
