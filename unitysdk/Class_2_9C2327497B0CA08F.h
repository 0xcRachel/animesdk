#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9C2327497B0CA08F_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18325CF0)
#define CLASS_2_9C2327497B0CA08F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18325C90)
#define CLASS_2_9C2327497B0CA08F_METHOD_2_D9DDB7A58F4BCA1A_OFFSET UNITYSDK_OFFSET(0x18325070)
#define CLASS_2_9C2327497B0CA08F_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x18324EC0)
#define CLASS_2_9C2327497B0CA08F__CTOR_OFFSET UNITYSDK_OFFSET(0x18325C30)

inline static constexpr unsigned int Class_2_9C2327497B0CA08F_TypeDefinitionIndex = 39229;

class Class_2_9C2327497B0CA08F : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x24
	::System::Single Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2327497B0CA08F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2327497B0CA08F_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_D9DDB7A58F4BCA1A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C2327497B0CA08F_METHOD_2_D9DDB7A58F4BCA1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C2327497B0CA08F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9C2327497B0CA08F_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
