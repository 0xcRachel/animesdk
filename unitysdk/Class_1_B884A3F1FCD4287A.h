#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_ACC7757D49879D15;
namespace System { class String; }

#define CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x10CA0540)
#define CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET UNITYSDK_OFFSET(0x10CA0500)
#define CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET UNITYSDK_OFFSET(0x10CA0520)
#define CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x10CA04E0)
#define CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x10CA0460)
#define CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET UNITYSDK_OFFSET(0x10CA0530)
#define CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET UNITYSDK_OFFSET(0x10CA04F0)
#define CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET UNITYSDK_OFFSET(0x10CA0510)
#define CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x10CA04D0)
#define CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA0550)

inline static constexpr unsigned int Class_1_B884A3F1FCD4287A_TypeDefinitionIndex = 56691;

class Class_1_B884A3F1FCD4287A : public ::System::Object
{
public:
	::System::String* _Host_k__BackingField; // 0x10
	::System::String* _FightToken_k__BackingField; // 0x18
	::System::UInt16 _Port_k__BackingField; // 0x20
	::System::UInt64 _RoomUID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_ACC7757D49879D15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ACC7757D49879D15*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void set_RoomUID(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_ROOMUID_OFFSET))(this, value);
	}

	::System::UInt64 get_RoomUID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_ROOMUID_OFFSET))(this);
	}

	::System::Void set_Host(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_HOST_OFFSET))(this, value);
	}

	::System::String* get_Host()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_HOST_OFFSET))(this);
	}

	::System::Void set_Port(::System::UInt16 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_PORT_OFFSET))(this, value);
	}

	::System::UInt16 get_Port()
	{
		return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_PORT_OFFSET))(this);
	}

	::System::Void set_FightToken(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_SET_FIGHTTOKEN_OFFSET))(this, value);
	}

	::System::String* get_FightToken()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B884A3F1FCD4287A_GET_FIGHTTOKEN_OFFSET))(this);
	}
};
