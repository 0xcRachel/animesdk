#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AEA95A1F4A190A36__CTOR_OFFSET UNITYSDK_OFFSET(0x1615F630)

inline static constexpr unsigned int Class_1_AEA95A1F4A190A36_TypeDefinitionIndex = 32369;

class Class_1_AEA95A1F4A190A36 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_3; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_0; // 0x19
	::UnityEngine::Vector3 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEA95A1F4A190A36__CTOR_OFFSET))(this);
	}
};
