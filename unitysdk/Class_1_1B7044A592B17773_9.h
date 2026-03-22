#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_9_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10A32A00)
#define CLASS_1_1B7044A592B17773_9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10A32A20)
#define CLASS_1_1B7044A592B17773_9_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10A32A10)
#define CLASS_1_1B7044A592B17773_9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10A32A30)
#define CLASS_1_1B7044A592B17773_9__CTOR_OFFSET UNITYSDK_OFFSET(0x10A32A40)

inline static constexpr unsigned int Class_1_1B7044A592B17773_9_TypeDefinitionIndex = 59569;

class Class_1_1B7044A592B17773_9 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_9__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_9_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_9_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_9_SET_INSTANCEID_OFFSET))(this, value);
	}
};
