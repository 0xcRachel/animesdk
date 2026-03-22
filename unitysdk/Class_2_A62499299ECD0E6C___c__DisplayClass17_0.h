#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A62499299ECD0E6C_Struct_2_86083371450A3659.h"
#include "unitysdk/System/Object.h"

class Class_2_A62499299ECD0E6C;
class Class_2_FE060A211AF9E9E7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A62499299ECD0E6C___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xACA7720)
#define CLASS_2_A62499299ECD0E6C___C__DISPLAYCLASS17_0___REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xACA79D0)

inline static constexpr unsigned int Class_2_A62499299ECD0E6C___c__DisplayClass17_0_TypeDefinitionIndex = 57619;

class Class_2_A62499299ECD0E6C___c__DisplayClass17_0 : public ::System::Object
{
public:
	::Class_2_A62499299ECD0E6C* __4__this; // 0x10
	::System::Collections::Generic::List_1<::Class_2_A62499299ECD0E6C_Struct_2_86083371450A3659>* displayDataList; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A62499299ECD0E6C___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Void __RefreshView_b__0(::Class_2_FE060A211AF9E9E7* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FE060A211AF9E9E7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_A62499299ECD0E6C___C__DISPLAYCLASS17_0___REFRESHVIEW_B__0_OFFSET))(this, panel, i);
	}
};
