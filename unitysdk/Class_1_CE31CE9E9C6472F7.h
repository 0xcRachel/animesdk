#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_CE31CE9E9C6472F7_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8A8FB20)
#define CLASS_1_CE31CE9E9C6472F7__CTOR_OFFSET UNITYSDK_OFFSET(0x8A8FB60)

inline static constexpr unsigned int Class_1_CE31CE9E9C6472F7_TypeDefinitionIndex = 58142;

class Class_1_CE31CE9E9C6472F7 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* Field_1_2; // 0x10
	::System::Text::RegularExpressions::Regex* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE31CE9E9C6472F7__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE31CE9E9C6472F7_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
