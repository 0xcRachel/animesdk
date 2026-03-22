#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_813743369E0E31B2_2_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x10BA6230)
#define CLASS_1_813743369E0E31B2_2_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x10BA6250)
#define CLASS_1_813743369E0E31B2_2_GET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x10BA62F0)
#define CLASS_1_813743369E0E31B2_2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10BA6270)
#define CLASS_1_813743369E0E31B2_2_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x10BA62D0)
#define CLASS_1_813743369E0E31B2_2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10BA6290)
#define CLASS_1_813743369E0E31B2_2_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x10BA62B0)
#define CLASS_1_813743369E0E31B2_2_SET_CHESTID_OFFSET UNITYSDK_OFFSET(0x10BA6240)
#define CLASS_1_813743369E0E31B2_2_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x10BA6260)
#define CLASS_1_813743369E0E31B2_2_SET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x10BA6300)
#define CLASS_1_813743369E0E31B2_2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10BA6280)
#define CLASS_1_813743369E0E31B2_2_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x10BA62E0)
#define CLASS_1_813743369E0E31B2_2_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10BA62A0)
#define CLASS_1_813743369E0E31B2_2_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x10BA62C0)
#define CLASS_1_813743369E0E31B2_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA6310)

inline static constexpr unsigned int Class_1_813743369E0E31B2_2_TypeDefinitionIndex = 59625;

class Class_1_813743369E0E31B2_2 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x18
	::System::UInt32 _GroupID_k__BackingField; // 0x1C
	::System::UInt32 _FloorID_k__BackingField; // 0x20
	::System::UInt32 _GPValue_k__BackingField; // 0x24
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x28
	::System::UInt32 _ChestID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_CHESTID_OFFSET))(this);
	}

	::System::Void set_ChestID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_CHESTID_OFFSET))(this, value);
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

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_LITTLEGAMEENTITYID_OFFSET))(this, value);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_GROUPPROPERTY_OFFSET))(this, value);
	}

	::System::UInt32 get_GPValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_GET_GPVALUE_OFFSET))(this);
	}

	::System::Void set_GPValue(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_2_SET_GPVALUE_OFFSET))(this, value);
	}
};
