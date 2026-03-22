#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xFDDEA20)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xFDDEB10)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xFDDEC50)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_B21A07CFEAA186F9_OFFSET UNITYSDK_OFFSET(0xFDDE9B0)
#define CLASS_2_6E0B9E69D0FC929E_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xFDDE950)
#define CLASS_2_6E0B9E69D0FC929E__CTOR_OFFSET UNITYSDK_OFFSET(0xFDDEBC0)
#define CLASS_2_6E0B9E69D0FC929E__ONBIND_OFFSET UNITYSDK_OFFSET(0xFDDE8F0)
#define CLASS_2_6E0B9E69D0FC929E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xFDDEBF0)

inline static constexpr unsigned int Class_2_6E0B9E69D0FC929E_TypeDefinitionIndex = 57358;

class Class_2_6E0B9E69D0FC929E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::UnityEngine::GameObject* Field_2_0; // 0x68
	::System::Boolean Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_B21A07CFEAA186F9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_B21A07CFEAA186F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0B9E69D0FC929E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
