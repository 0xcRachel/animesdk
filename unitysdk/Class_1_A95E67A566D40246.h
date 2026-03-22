#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A95E67A566D40246_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD876380)
#define CLASS_1_A95E67A566D40246_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xD8763A0)
#define CLASS_1_A95E67A566D40246_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xD876350)
#define CLASS_1_A95E67A566D40246_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD876390)
#define CLASS_1_A95E67A566D40246_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xD8763B0)
#define CLASS_1_A95E67A566D40246_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xD876370)
#define CLASS_1_A95E67A566D40246__CTOR_OFFSET UNITYSDK_OFFSET(0xD8763C0)

inline static constexpr unsigned int Class_1_A95E67A566D40246_TypeDefinitionIndex = 59570;

class Class_1_A95E67A566D40246 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x1C
	::System::UInt32 _InstanceID_k__BackingField; // 0x20

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
