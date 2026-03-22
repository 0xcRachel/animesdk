#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text::RegularExpressions { class Regex; }

#define CLASS_1_0EF318D657C7242E_METHOD_1_651739DF23965FAC_OFFSET UNITYSDK_OFFSET(0x10DDCD30)
#define CLASS_1_0EF318D657C7242E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10DDD950)
#define CLASS_1_0EF318D657C7242E__CTOR_OFFSET UNITYSDK_OFFSET(0x10DDD940)

inline static constexpr unsigned int Class_1_0EF318D657C7242E_TypeDefinitionIndex = 51897;

class Class_1_0EF318D657C7242E : public ::System::Object
{
public:
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_0()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EF318D657C7242E_TypeDefinitionIndex)->GetStaticField(0x28420);
	}
	static ::System::Text::RegularExpressions::Regex** StaticGet_Field_1_1()
	{
		return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0EF318D657C7242E_TypeDefinitionIndex)->GetStaticField(0x28428);
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
	// static const ::System::String* Field_1_11; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EF318D657C7242E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0EF318D657C7242E__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_651739DF23965FAC(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0EF318D657C7242E_METHOD_1_651739DF23965FAC_OFFSET))(a1, a2);
	}
};
