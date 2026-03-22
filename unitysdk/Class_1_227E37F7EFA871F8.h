#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_227E37F7EFA871F8__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15FFDFD0)
#define CLASS_1_227E37F7EFA871F8__CTOR_2_OFFSET UNITYSDK_OFFSET(0x15FFE650)
#define CLASS_1_227E37F7EFA871F8__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFDFC0)

inline static constexpr unsigned int Class_1_227E37F7EFA871F8_TypeDefinitionIndex = 27655;

class Class_1_227E37F7EFA871F8 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_7; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x28
	::System::Boolean Field_1_3; // 0x30
	::System::UInt32 Field_1_4; // 0x34
	::System::UInt32 Field_1_0; // 0x38
	::System::UInt32 Field_1_6; // 0x3C
	::System::UInt32 Field_1_8; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_227E37F7EFA871F8__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_3A7B270FE0BE90AE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + CLASS_1_227E37F7EFA871F8__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_227E37F7EFA871F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_227E37F7EFA871F8*))((::PBYTE)hIl2Cpp + CLASS_1_227E37F7EFA871F8__CTOR_2_OFFSET))(this, a1);
	}
};
