#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { template <typename T1, typename T2> class Func_2; }

inline static constexpr unsigned int Class_1_C9F4E422A71652CA___O_TypeDefinitionIndex = 46867;

class Class_1_C9F4E422A71652CA___O : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt16, ::System::RuntimeTypeHandle>** StaticGet__0___GetCmdTypeHandle()
	{
		return (::System::Func_2<::System::UInt16, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9F4E422A71652CA___O_TypeDefinitionIndex)->GetStaticField(0x45B20);
	}
};
