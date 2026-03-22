#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }

#define CLASS_1_54504405A2A3EB5B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xEED4C90)
#define CLASS_1_54504405A2A3EB5B_METHOD_1_D3573CA6670E0EE0_OFFSET UNITYSDK_OFFSET(0xEED4CD0)
#define CLASS_1_54504405A2A3EB5B__CTOR_OFFSET UNITYSDK_OFFSET(0xEED4E40)

inline static constexpr unsigned int Class_1_54504405A2A3EB5B_TypeDefinitionIndex = 58139;

class Class_1_54504405A2A3EB5B : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54504405A2A3EB5B__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54504405A2A3EB5B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_D3573CA6670E0EE0(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54504405A2A3EB5B_METHOD_1_D3573CA6670E0EE0_OFFSET))(this, a1);
	}
};
