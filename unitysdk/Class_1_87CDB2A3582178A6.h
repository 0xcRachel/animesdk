#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_87CDB2A3582178A6_METHOD_1_B1EA5E21BEF07FF9_OFFSET UNITYSDK_OFFSET(0x152CCAB0)
#define CLASS_1_87CDB2A3582178A6_METHOD_1_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x152CCB70)

inline static constexpr unsigned int Class_1_87CDB2A3582178A6_TypeDefinitionIndex = 70157;

class Class_1_87CDB2A3582178A6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87CDB2A3582178A6_TypeDefinitionIndex)->GetStaticField(0x6A6A0);
	}

	static ::System::UInt32 Method_1_B1EA5E21BEF07FF9(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87CDB2A3582178A6_METHOD_1_B1EA5E21BEF07FF9_OFFSET))(a1);
	}

	static ::System::Void Method_1_D460587695D41831()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87CDB2A3582178A6_METHOD_1_D460587695D41831_OFFSET))();
	}
};
