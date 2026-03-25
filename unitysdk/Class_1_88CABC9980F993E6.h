#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88CABC9980F993E6_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x16605A50)
#define CLASS_1_88CABC9980F993E6_METHOD_1_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x16605B50)
#define CLASS_1_88CABC9980F993E6_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16605B00)
#define CLASS_1_88CABC9980F993E6__CTOR_OFFSET UNITYSDK_OFFSET(0x16605BA0)

inline static constexpr unsigned int Class_1_88CABC9980F993E6_TypeDefinitionIndex = 28348;

class Class_1_88CABC9980F993E6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_4; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean Field_1_6; // 0x2C
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CABC9980F993E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CABC9980F993E6_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CABC9980F993E6_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88CABC9980F993E6_METHOD_1_A1D8CD775DEC3C21_1_OFFSET))(this);
	}
};
