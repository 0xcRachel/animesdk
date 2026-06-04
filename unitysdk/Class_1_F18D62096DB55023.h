#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2CDF619C23140440;
class Class_2_B8E38BF47138A2E5;
class Class_3_D6E9A038FA23103A;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_F18D62096DB55023_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16364DC0)
#define CLASS_1_F18D62096DB55023_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x163649C0)
#define CLASS_1_F18D62096DB55023_METHOD_1_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x16364910)
#define CLASS_1_F18D62096DB55023_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16364A00)
#define CLASS_1_F18D62096DB55023__CTOR_OFFSET UNITYSDK_OFFSET(0x16364650)

inline static constexpr unsigned int Class_1_F18D62096DB55023_TypeDefinitionIndex = 71353;

class Class_1_F18D62096DB55023 : public ::System::Object
{
public:
	::Class_1_2CDF619C23140440* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x18
	::Class_3_D6E9A038FA23103A* Field_1_2; // 0x20
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* Field_1_3; // 0x28
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_4; // 0x30
	::Entitas::IGroup_1<::Class_2_B8E38BF47138A2E5*>* Field_1_5; // 0x38

	::System::Void _ctor(::Class_1_2CDF619C23140440* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_METHOD_1_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F18D62096DB55023_EXECUTE_OFFSET))(this);
	}
};
