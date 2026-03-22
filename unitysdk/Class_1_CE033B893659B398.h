#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_CE033B893659B398_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x104AF470)
#define CLASS_1_CE033B893659B398__CTOR_OFFSET UNITYSDK_OFFSET(0x104AF480)

inline static constexpr unsigned int Class_1_CE033B893659B398_TypeDefinitionIndex = 58143;

class Class_1_CE033B893659B398 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE033B893659B398__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE033B893659B398_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
