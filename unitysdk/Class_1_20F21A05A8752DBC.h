#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextmapStatic_TextCompileContext; }
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Match; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_20F21A05A8752DBC_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xACA5920)
#define CLASS_1_20F21A05A8752DBC_METHOD_1_43983D78A9EF6486_OFFSET UNITYSDK_OFFSET(0xACA59F0)
#define CLASS_1_20F21A05A8752DBC_METHOD_1_867E5A8954B90970_OFFSET UNITYSDK_OFFSET(0xACA5960)
#define CLASS_1_20F21A05A8752DBC__CCTOR_OFFSET UNITYSDK_OFFSET(0xACA5AA0)
#define CLASS_1_20F21A05A8752DBC__CTOR_OFFSET UNITYSDK_OFFSET(0xACA5A20)

inline static constexpr unsigned int Class_1_20F21A05A8752DBC_TypeDefinitionIndex = 58141;

class Class_1_20F21A05A8752DBC : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20F21A05A8752DBC_TypeDefinitionIndex)->GetStaticField(0x467F0);
	}
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	::System::Text::StringBuilder* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20F21A05A8752DBC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20F21A05A8752DBC__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20F21A05A8752DBC_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_867E5A8954B90970(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20F21A05A8752DBC_METHOD_1_867E5A8954B90970_OFFSET))(this, a1, a2);
	}

	::System::IFormatProvider* Method_1_43983D78A9EF6486()
	{
		return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20F21A05A8752DBC_METHOD_1_43983D78A9EF6486_OFFSET))(this);
	}
};
