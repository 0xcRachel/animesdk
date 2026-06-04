#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B66C1067C0468FBB;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CBEDA6B2CE02E7FF_GET__RANDOM_OFFSET UNITYSDK_OFFSET(0x15833F20)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_85C746F74910D9C1_OFFSET UNITYSDK_OFFSET(0x158342A0)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET UNITYSDK_OFFSET(0x15834300)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_8DE44EEC3E24E5B0_OFFSET UNITYSDK_OFFSET(0x15833FB0)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_AE20D5A8C4D1776D_OFFSET UNITYSDK_OFFSET(0x15834020)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15833F70)
#define CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_FCAE20CD32D19671_OFFSET UNITYSDK_OFFSET(0x15834220)
#define CLASS_1_CBEDA6B2CE02E7FF__CTOR_OFFSET UNITYSDK_OFFSET(0x15833F30)

inline static constexpr unsigned int Class_1_CBEDA6B2CE02E7FF_TypeDefinitionIndex = 71952;

class Class_1_CBEDA6B2CE02E7FF : public ::System::Object
{
public:
	::System::Random* __Random_k__BackingField; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF__CTOR_OFFSET))(this, a1);
	}

	::System::Random* get__Random()
	{
		return ((::System::Random*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_GET__RANDOM_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_8DE44EEC3E24E5B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE20D5A8C4D1776D(::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_AE20D5A8C4D1776D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FCAE20CD32D19671(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_FCAE20CD32D19671_OFFSET))(this, a1);
	}

	::System::Double Method_1_85C746F74910D9C1()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_85C746F74910D9C1_OFFSET))(this);
	}

	::System::Int32 Method_1_8DE44EEC3E24E5B0_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBEDA6B2CE02E7FF_METHOD_1_8DE44EEC3E24E5B0_1_OFFSET))(this, a1, a2);
	}
};
