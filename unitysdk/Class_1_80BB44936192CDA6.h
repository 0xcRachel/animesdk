#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_80BB44936192CDA6__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBF2D0)

inline static constexpr unsigned int Class_1_80BB44936192CDA6_TypeDefinitionIndex = 28007;

class Class_1_80BB44936192CDA6 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_4; // 0x18
	::System::UInt64 Field_1_7; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_6; // 0x2C
	::System::UInt32 Field_1_0; // 0x30
	::System::UInt32 Field_1_5; // 0x34
	::System::UInt32 Field_1_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80BB44936192CDA6__CTOR_OFFSET))(this);
	}
};
