#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_04ACFE3BD72A6F8B_METHOD_1_3D748C76CD30A0E2_OFFSET UNITYSDK_OFFSET(0x8731B50)
#define CLASS_1_04ACFE3BD72A6F8B_METHOD_1_8EC232CD49461EE7_OFFSET UNITYSDK_OFFSET(0x8731A50)
#define CLASS_1_04ACFE3BD72A6F8B__CTOR_OFFSET UNITYSDK_OFFSET(0x8731CD0)

inline static constexpr unsigned int Class_1_04ACFE3BD72A6F8B_TypeDefinitionIndex = 58033;

class Class_1_04ACFE3BD72A6F8B : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_04ACFE3BD72A6F8B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EC232CD49461EE7(::UnityEngine::UI::RawImage* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_04ACFE3BD72A6F8B_METHOD_1_8EC232CD49461EE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3D748C76CD30A0E2(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_04ACFE3BD72A6F8B_METHOD_1_3D748C76CD30A0E2_OFFSET))(this, a1, a2);
	}
};
