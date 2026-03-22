#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_1D2F768FADEA1789_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8678910)
#define CLASS_1_1D2F768FADEA1789_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x8678960)
#define CLASS_1_1D2F768FADEA1789_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8678950)

inline static constexpr unsigned int Class_1_1D2F768FADEA1789_1_TypeDefinitionIndex = 58135;

class Class_1_1D2F768FADEA1789_1 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1D2F768FADEA1789_1_TypeDefinitionIndex)->GetStaticField(0x46EA0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_1__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D2F768FADEA1789_1_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
