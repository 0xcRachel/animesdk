#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_95;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CB8B5340883CE90A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B80610)
#define CLASS_1_CB8B5340883CE90A__CTOR_OFFSET UNITYSDK_OFFSET(0x17B806C0)

inline static constexpr unsigned int Class_1_CB8B5340883CE90A_TypeDefinitionIndex = 33020;

class Class_1_CB8B5340883CE90A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_43BD383C98B4C0C5_95*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B5340883CE90A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB8B5340883CE90A_DISPOSE_OFFSET))(this);
	}
};
