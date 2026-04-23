#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A95E67A566D40246_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10A13140)
#define CLASS_1_A95E67A566D40246_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10A13160)
#define CLASS_1_A95E67A566D40246_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x10A13110)
#define CLASS_1_A95E67A566D40246_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10A13150)
#define CLASS_1_A95E67A566D40246_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10A13170)
#define CLASS_1_A95E67A566D40246_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x10A13130)
#define CLASS_1_A95E67A566D40246__CTOR_OFFSET UNITYSDK_OFFSET(0x10A13180)

inline static constexpr unsigned int Class_1_A95E67A566D40246_TypeDefinitionIndex = 68831;

class Class_1_A95E67A566D40246 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_SET_POSITION_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A95E67A566D40246_SET_INSTANCEID_OFFSET))(this, value);
	}
};
