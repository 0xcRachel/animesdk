#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_1D2F768FADEA1789_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x899D2B0)
#define CLASS_1_1D2F768FADEA1789__CCTOR_OFFSET UNITYSDK_OFFSET(0x899D300)
#define CLASS_1_1D2F768FADEA1789__CTOR_OFFSET UNITYSDK_OFFSET(0x899D2F0)

inline static constexpr unsigned int Class_1_1D2F768FADEA1789_TypeDefinitionIndex = 58134;

class Class_1_1D2F768FADEA1789 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D2F768FADEA1789_TypeDefinitionIndex)->GetStaticField(0x47110);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D2F768FADEA1789_TypeDefinitionIndex)->GetStaticField(0x47118);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
