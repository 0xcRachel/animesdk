#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_046D7E7D73E44996_1_GET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x10EEC780)
#define CLASS_1_046D7E7D73E44996_1_GET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x10EEC7A0)
#define CLASS_1_046D7E7D73E44996_1_SET_ACCOUNTID_OFFSET UNITYSDK_OFFSET(0x10EEC790)
#define CLASS_1_046D7E7D73E44996_1_SET_ONLINEID_OFFSET UNITYSDK_OFFSET(0x10EEC7B0)
#define CLASS_1_046D7E7D73E44996_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEC7C0)

inline static constexpr unsigned int Class_1_046D7E7D73E44996_1_TypeDefinitionIndex = 53151;

class Class_1_046D7E7D73E44996_1 : public ::System::Object
{
public:
	::System::String* _OnlineID_k__BackingField; // 0x10
	::System::String* _AccountID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_1__CTOR_OFFSET))(this);
	}

	::System::String* get_AccountID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_1_GET_ACCOUNTID_OFFSET))(this);
	}

	::System::Void set_AccountID(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_1_SET_ACCOUNTID_OFFSET))(this, value);
	}

	::System::String* get_OnlineID()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_1_GET_ONLINEID_OFFSET))(this);
	}

	::System::Void set_OnlineID(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_1_SET_ONLINEID_OFFSET))(this, value);
	}
};
