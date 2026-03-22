#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CFBB347E95E1071F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B02146BC258AF220_METHOD_1_02B1338A9DC48FE1_OFFSET UNITYSDK_OFFSET(0x898EA60)
#define CLASS_1_B02146BC258AF220_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x898E3E0)
#define CLASS_1_B02146BC258AF220_METHOD_1_3AFD10932D5A27E7_OFFSET UNITYSDK_OFFSET(0x898E540)
#define CLASS_1_B02146BC258AF220_METHOD_1_588DF62BE09F323B_OFFSET UNITYSDK_OFFSET(0x898F140)
#define CLASS_1_B02146BC258AF220_METHOD_1_901A2ACBE3F10DAC_OFFSET UNITYSDK_OFFSET(0x898EAD0)
#define CLASS_1_B02146BC258AF220_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x898E4A0)
#define CLASS_1_B02146BC258AF220_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x898E450)
#define CLASS_1_B02146BC258AF220_METHOD_1_CC91DBD18A27AB3E_OFFSET UNITYSDK_OFFSET(0x898EF70)
#define CLASS_1_B02146BC258AF220_METHOD_1_F2975EDE8C706B76_OFFSET UNITYSDK_OFFSET(0x898EDA0)
#define CLASS_1_B02146BC258AF220__CTOR_OFFSET UNITYSDK_OFFSET(0x898FA80)

inline static constexpr unsigned int Class_1_B02146BC258AF220_TypeDefinitionIndex = 48546;

class Class_1_B02146BC258AF220 : public ::System::Object
{
public:
	::Class_1_CFBB347E95E1071F* Field_1_1; // 0x10
	::Class_1_CFBB347E95E1071F* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_3AFD10932D5A27E7(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_3AFD10932D5A27E7_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_02B1338A9DC48FE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_02B1338A9DC48FE1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_F2975EDE8C706B76()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_F2975EDE8C706B76_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* Method_1_901A2ACBE3F10DAC(::Class_1_CFBB347E95E1071F* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>*(*)(::PVOID, ::Class_1_CFBB347E95E1071F*))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_901A2ACBE3F10DAC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_CC91DBD18A27AB3E()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_CC91DBD18A27AB3E_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_588DF62BE09F323B(::Class_1_CFBB347E95E1071F* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::Class_1_CFBB347E95E1071F*))((::PBYTE)hIl2Cpp + CLASS_1_B02146BC258AF220_METHOD_1_588DF62BE09F323B_OFFSET))(this, a1);
	}
};
