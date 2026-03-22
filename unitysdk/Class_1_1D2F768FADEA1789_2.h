#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_1D2F768FADEA1789_2_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10249C20)
#define CLASS_1_1D2F768FADEA1789_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10249C60)

inline static constexpr unsigned int Class_1_1D2F768FADEA1789_2_TypeDefinitionIndex = 58144;

class Class_1_1D2F768FADEA1789_2 : public ::System::Object
{
public:
	::System::Text::RegularExpressions::Regex* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_2__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_2_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
