#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_626F93E2306641CC;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_7009E78248CBF996_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEA84BE0)
#define CLASS_1_7009E78248CBF996_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEA84BA0)
#define CLASS_1_7009E78248CBF996_METHOD_1_99A06458F9624E96_OFFSET UNITYSDK_OFFSET(0xEA849D0)
#define CLASS_1_7009E78248CBF996_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xEA85040)
#define CLASS_1_7009E78248CBF996__CTOR_OFFSET UNITYSDK_OFFSET(0xEA84AF0)

inline static constexpr unsigned int Class_1_7009E78248CBF996_TypeDefinitionIndex = 63586;

class Class_1_7009E78248CBF996 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_1; // 0x10
	::Class_3_626F93E2306641CC* Field_1_0; // 0x18

	::System::Void _ctor(::Class_3_626F93E2306641CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_7009E78248CBF996__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7009E78248CBF996* Method_1_99A06458F9624E96(::Class_3_626F93E2306641CC* a1)
	{
		return ((::Class_1_7009E78248CBF996*(*)(::Class_3_626F93E2306641CC*))((::PBYTE)hIl2Cpp + CLASS_1_7009E78248CBF996_METHOD_1_99A06458F9624E96_OFFSET))(a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7009E78248CBF996_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7009E78248CBF996_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7009E78248CBF996_TEARDOWN_OFFSET))(this);
	}
};
