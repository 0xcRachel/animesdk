#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_167.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C98C16D7C011A85C_CLASS_2_256649204E187324__CTOR_OFFSET UNITYSDK_OFFSET(0x111E0BA0)

inline static constexpr unsigned int Class_2_C98C16D7C011A85C_Class_2_256649204E187324_TypeDefinitionIndex = 61026;

class Class_2_C98C16D7C011A85C_Class_2_256649204E187324 : public ::Class_1_43BD383C98B4C0C5_167
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C98C16D7C011A85C_CLASS_2_256649204E187324__CTOR_OFFSET))(this);
	}
};
