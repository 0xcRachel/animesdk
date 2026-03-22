#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6A72189E69F8EFA1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16308BC0)
#define CLASS_1_6A72189E69F8EFA1__CTOR_OFFSET UNITYSDK_OFFSET(0x16308C30)

inline static constexpr unsigned int Class_1_6A72189E69F8EFA1_TypeDefinitionIndex = 31432;

class Class_1_6A72189E69F8EFA1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Single Field_1_2; // 0x18
	::UnityEngine::Vector3 Field_1_0; // 0x1C
	::System::Single Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A72189E69F8EFA1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A72189E69F8EFA1_CLEAR_OFFSET))(this);
	}
};
