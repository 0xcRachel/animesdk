#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_C67FC594DCD3746C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x9ED3780)
#define CLASS_1_C67FC594DCD3746C__CTOR_OFFSET UNITYSDK_OFFSET(0x9ED37C0)

inline static constexpr unsigned int Class_1_C67FC594DCD3746C_TypeDefinitionIndex = 58137;

class Class_1_C67FC594DCD3746C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	::System::Text::RegularExpressions::Regex* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67FC594DCD3746C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C67FC594DCD3746C_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
