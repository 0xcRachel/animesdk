#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_109729CD11AC6CD9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E2CA39EC4DD667C8_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x111674C0)
#define CLASS_1_E2CA39EC4DD667C8__CTOR_OFFSET UNITYSDK_OFFSET(0x11167520)

inline static constexpr unsigned int Class_1_E2CA39EC4DD667C8_TypeDefinitionIndex = 57429;

class Class_1_E2CA39EC4DD667C8 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_109729CD11AC6CD9*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_109729CD11AC6CD9*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CA39EC4DD667C8__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2CA39EC4DD667C8_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}
};
