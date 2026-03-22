#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11B5C6B3FA66CD5A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xB8FDEC0)
#define CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_7E97FE7B356A7427_OFFSET UNITYSDK_OFFSET(0xB8FDF60)
#define CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xB8FDFE0)
#define CLASS_1_F3EB7D0860A6C71F_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FDBC0)

inline static constexpr unsigned int Class_1_F3EB7D0860A6C71F_3_TypeDefinitionIndex = 50294;

class Class_1_F3EB7D0860A6C71F_3 : public ::System::Object
{
public:
	::Class_1_11B5C6B3FA66CD5A* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_11B5C6B3FA66CD5A*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_11B5C6B3FA66CD5A* Method_1_7E97FE7B356A7427(::System::UInt32 a1)
	{
		return ((::Class_1_11B5C6B3FA66CD5A*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_7E97FE7B356A7427_OFFSET))(this, a1);
	}

	::Class_1_11B5C6B3FA66CD5A* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_11B5C6B3FA66CD5A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3EB7D0860A6C71F_3_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
