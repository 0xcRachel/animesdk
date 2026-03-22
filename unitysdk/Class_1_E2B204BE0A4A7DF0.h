#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_E2B204BE0A4A7DF0_METHOD_1_55DC79615E519D51_OFFSET UNITYSDK_OFFSET(0x111D3910)
#define CLASS_1_E2B204BE0A4A7DF0_METHOD_1_8EC232CD49461EE7_OFFSET UNITYSDK_OFFSET(0x111D3800)
#define CLASS_1_E2B204BE0A4A7DF0__CTOR_OFFSET UNITYSDK_OFFSET(0x111D39F0)

inline static constexpr unsigned int Class_1_E2B204BE0A4A7DF0_TypeDefinitionIndex = 58032;

class Class_1_E2B204BE0A4A7DF0 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2B204BE0A4A7DF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EC232CD49461EE7(::UnityEngine::UI::RawImage* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_E2B204BE0A4A7DF0_METHOD_1_8EC232CD49461EE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_55DC79615E519D51(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E2B204BE0A4A7DF0_METHOD_1_55DC79615E519D51_OFFSET))(this, a1, a2);
	}
};
