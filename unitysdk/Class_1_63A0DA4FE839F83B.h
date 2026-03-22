#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_D508B1981C147C96;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_63A0DA4FE839F83B_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x15F3A510)
#define CLASS_1_63A0DA4FE839F83B_METHOD_1_0A5D3177EA2A88B9_OFFSET UNITYSDK_OFFSET(0x15F3AA70)
#define CLASS_1_63A0DA4FE839F83B_METHOD_1_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x15F3A350)
#define CLASS_1_63A0DA4FE839F83B_METHOD_1_86DC077948806E82_OFFSET UNITYSDK_OFFSET(0x15F3AC60)
#define CLASS_1_63A0DA4FE839F83B_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15F36200)
#define CLASS_1_63A0DA4FE839F83B_METHOD_1_F1649FC87CD0080F_OFFSET UNITYSDK_OFFSET(0x15F3A5B0)
#define CLASS_1_63A0DA4FE839F83B__CTOR_OFFSET UNITYSDK_OFFSET(0x15F3AD90)

inline static constexpr unsigned int Class_1_63A0DA4FE839F83B_TypeDefinitionIndex = 27591;

class Class_1_63A0DA4FE839F83B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D508B1981C147C96*>* Field_1_1; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_D508B1981C147C96*>* Field_1_3; // 0x30
	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Field_1_5; // 0x38
	::System::Int32 Field_1_12; // 0x40
	::System::Int32 Field_1_7; // 0x44
	::System::Int32 Field_1_10; // 0x48
	::System::Int32 Field_1_6; // 0x4C
	::System::Int32 Field_1_13; // 0x50
	::System::Int32 Field_1_11; // 0x54
	::System::Int32 Field_1_9; // 0x58
	::System::Int32 Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_63A0DA4FE839F83B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_63A0DA4FE839F83B*))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::ValueTuple_3<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_F1649FC87CD0080F()
	{
		return ((::System::ValueTuple_3<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_F1649FC87CD0080F_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*> Method_1_0A5D3177EA2A88B9()
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_0A5D3177EA2A88B9_OFFSET))(this);
	}

	::System::Boolean Method_1_86DC077948806E82(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_63A0DA4FE839F83B_METHOD_1_86DC077948806E82_OFFSET))(this, a1);
	}
};
