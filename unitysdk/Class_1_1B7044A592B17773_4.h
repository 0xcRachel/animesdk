#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_4_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x891EF60)
#define CLASS_1_1B7044A592B17773_4_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x891EF80)
#define CLASS_1_1B7044A592B17773_4_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0x891EF70)
#define CLASS_1_1B7044A592B17773_4__CTOR_OFFSET UNITYSDK_OFFSET(0x891F000)

inline static constexpr unsigned int Class_1_1B7044A592B17773_4_TypeDefinitionIndex = 52554;

class Class_1_1B7044A592B17773_4 : public ::System::Object
{
public:
	::System::UInt32 _BirdID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_4__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BirdID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_4_GET_BIRDID_OFFSET))(this);
	}

	::System::Void set_BirdID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_4_SET_BIRDID_OFFSET))(this, value);
	}

	static ::Class_1_1B7044A592B17773_4* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_1B7044A592B17773_4*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_4_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}
};
