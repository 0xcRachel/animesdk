#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_109729CD11AC6CD9;
class Class_2_C42DC95D779DE8C4;
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F8F9B17C609AAEC9___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8777F40)
#define CLASS_2_F8F9B17C609AAEC9___C__DISPLAYCLASS6_0___DORELOADALL_B__0_OFFSET UNITYSDK_OFFSET(0x87782A0)

inline static constexpr unsigned int Class_2_F8F9B17C609AAEC9___c__DisplayClass6_0_TypeDefinitionIndex = 57424;

class Class_2_F8F9B17C609AAEC9___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_109729CD11AC6CD9*>* dataList; // 0x10
	::System::Predicate_1<::Class_2_C42DC95D779DE8C4*>* __9__0; // 0x18
	::System::Int32 i; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F9B17C609AAEC9___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DoReloadAll_b__0(::Class_2_C42DC95D779DE8C4* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_C42DC95D779DE8C4*))((::PBYTE)hIl2Cpp + CLASS_2_F8F9B17C609AAEC9___C__DISPLAYCLASS6_0___DORELOADALL_B__0_OFFSET))(this, item);
	}
};
