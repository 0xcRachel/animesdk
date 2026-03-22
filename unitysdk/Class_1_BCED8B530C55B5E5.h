#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_325;
class Class_1_16D8E68BCE885505;

#define CLASS_1_BCED8B530C55B5E5_GET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xFDC0F20)
#define CLASS_1_BCED8B530C55B5E5_GET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xFDC0F00)
#define CLASS_1_BCED8B530C55B5E5_SET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xFDC0F30)
#define CLASS_1_BCED8B530C55B5E5_SET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0xFDC0F10)
#define CLASS_1_BCED8B530C55B5E5__CTOR_OFFSET UNITYSDK_OFFSET(0xFDC0F40)

inline static constexpr unsigned int Class_1_BCED8B530C55B5E5_TypeDefinitionIndex = 40915;

class Class_1_BCED8B530C55B5E5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_325* _AvatarRowDataProvider_k__BackingField; // 0x10
	::Class_1_16D8E68BCE885505* _Prototype_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5__CTOR_OFFSET))(this);
	}

	::Class_1_16D8E68BCE885505* get_Prototype()
	{
		return ((::Class_1_16D8E68BCE885505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_GET_PROTOTYPE_OFFSET))(this);
	}

	::System::Void set_Prototype(::Class_1_16D8E68BCE885505* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16D8E68BCE885505*))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_SET_PROTOTYPE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_325* get_AvatarRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_325*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_GET_AVATARROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_AvatarRowDataProvider(::Class_0_16E4307DCC419505_325* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_325*))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_SET_AVATARROWDATAPROVIDER_OFFSET))(this, value);
	}
};
