#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D5AD64F6FB3109AB;
class Class_2_DFB79F7EE671BF59;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_193FF13EC6909625_METHOD_1_1B1602B46CB3FF5C_OFFSET UNITYSDK_OFFSET(0x16005380)
#define CLASS_1_193FF13EC6909625_METHOD_1_7F12DF60A4481479_OFFSET UNITYSDK_OFFSET(0x15FDD8C0)
#define CLASS_1_193FF13EC6909625__CTOR_OFFSET UNITYSDK_OFFSET(0x160052D0)

inline static constexpr unsigned int Class_1_193FF13EC6909625_TypeDefinitionIndex = 27825;

class Class_1_193FF13EC6909625 : public ::System::Object
{
public:
	::Class_2_DFB79F7EE671BF59* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_D5AD64F6FB3109AB*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_D5AD64F6FB3109AB*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_DFB79F7EE671BF59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_193FF13EC6909625__CTOR_OFFSET))(this, a1);
	}

	::Class_2_D5AD64F6FB3109AB* Method_1_7F12DF60A4481479(::System::UInt32 a1)
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_193FF13EC6909625_METHOD_1_7F12DF60A4481479_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_2_D5AD64F6FB3109AB*>* Method_1_1B1602B46CB3FF5C()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_D5AD64F6FB3109AB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_193FF13EC6909625_METHOD_1_1B1602B46CB3FF5C_OFFSET))(this);
	}
};
