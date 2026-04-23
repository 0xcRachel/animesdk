#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_18E5AA7AE6CB884D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152CB790)
#define CLASS_1_18E5AA7AE6CB884D_METHOD_1_880658A3F2B6561B_OFFSET UNITYSDK_OFFSET(0x152CB7D0)
#define CLASS_1_18E5AA7AE6CB884D__CTOR_OFFSET UNITYSDK_OFFSET(0x152CB830)

inline static constexpr unsigned int Class_1_18E5AA7AE6CB884D_TypeDefinitionIndex = 69515;

class Class_1_18E5AA7AE6CB884D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18E5AA7AE6CB884D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_18E5AA7AE6CB884D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_880658A3F2B6561B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_18E5AA7AE6CB884D_METHOD_1_880658A3F2B6561B_OFFSET))(this, a1);
	}
};
