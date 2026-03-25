#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_715;
class Class_1_1A781135C1474CFC;
namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_20CEC91E2CE52D24_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8849030)
#define CLASS_1_20CEC91E2CE52D24_METHOD_1_A1DA4199BBD6C589_OFFSET UNITYSDK_OFFSET(0x8849070)
#define CLASS_1_20CEC91E2CE52D24__CCTOR_OFFSET UNITYSDK_OFFSET(0x88495E0)
#define CLASS_1_20CEC91E2CE52D24__CTOR_OFFSET UNITYSDK_OFFSET(0x88495D0)

inline static constexpr unsigned int Class_1_20CEC91E2CE52D24_TypeDefinitionIndex = 60125;

class Class_1_20CEC91E2CE52D24 : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_20CEC91E2CE52D24_TypeDefinitionIndex)->GetStaticField(0x44900);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20CEC91E2CE52D24__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20CEC91E2CE52D24__CCTOR_OFFSET))();
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20CEC91E2CE52D24_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_A1DA4199BBD6C589(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_715* a3, ::Class_1_1A781135C1474CFC* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_715*, ::Class_1_1A781135C1474CFC*))((::PBYTE)hIl2Cpp + CLASS_1_20CEC91E2CE52D24_METHOD_1_A1DA4199BBD6C589_OFFSET))(this, a1, a2, a3, a4);
	}
};
