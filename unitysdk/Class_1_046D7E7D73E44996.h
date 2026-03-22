#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_046D7E7D73E44996_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1051C630)
#define CLASS_1_046D7E7D73E44996_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1051C640)
#define CLASS_1_046D7E7D73E44996__CTOR_OFFSET UNITYSDK_OFFSET(0x1051C650)

inline static constexpr unsigned int Class_1_046D7E7D73E44996_TypeDefinitionIndex = 40890;

class Class_1_046D7E7D73E44996 : public ::System::Object
{
public:
	::System::String* _Name_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996__CTOR_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_046D7E7D73E44996_SET_NAME_OFFSET))(this, value);
	}
};
