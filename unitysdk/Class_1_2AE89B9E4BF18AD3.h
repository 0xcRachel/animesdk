#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2AE89B9E4BF18AD3_METHOD_1_2ADAF03A44641721_OFFSET UNITYSDK_OFFSET(0x15EF9890)
#define CLASS_1_2AE89B9E4BF18AD3_METHOD_1_E3329EE9BFFF434E_OFFSET UNITYSDK_OFFSET(0x15EF9480)
#define CLASS_1_2AE89B9E4BF18AD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF9470)

inline static constexpr unsigned int Class_1_2AE89B9E4BF18AD3_TypeDefinitionIndex = 27729;

class Class_1_2AE89B9E4BF18AD3 : public ::System::Object
{
public:
	::Class_1_30467842FAA5266B* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_30467842FAA5266B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_1_2AE89B9E4BF18AD3__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_E3329EE9BFFF434E(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_2AE89B9E4BF18AD3_METHOD_1_E3329EE9BFFF434E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_2ADAF03A44641721(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_2AE89B9E4BF18AD3_METHOD_1_2ADAF03A44641721_OFFSET))(this, a1, a2);
	}
};
