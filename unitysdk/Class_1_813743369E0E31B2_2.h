#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_813743369E0E31B2_2_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x10557360)
#define CLASS_1_813743369E0E31B2_2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10557380)
#define CLASS_1_813743369E0E31B2_2_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x105573C0)
#define CLASS_1_813743369E0E31B2_2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x105573A0)
#define CLASS_1_813743369E0E31B2_2_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x10557370)
#define CLASS_1_813743369E0E31B2_2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10557390)
#define CLASS_1_813743369E0E31B2_2_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x105573D0)
#define CLASS_1_813743369E0E31B2_2_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x105573B0)
#define CLASS_1_813743369E0E31B2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x105573E0)

inline static constexpr unsigned int Class_1_813743369E0E31B2_2_TypeDefinitionIndex = 61378;

class Class_1_813743369E0E31B2_2 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x18
	::System::UInt32 _FloorID_k__BackingField; // 0x1C
	::System::UInt32 _InstanceID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_GROUPPROPERTY_OFFSET))(this, value);
	}
};
