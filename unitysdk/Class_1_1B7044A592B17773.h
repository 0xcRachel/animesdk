#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xFE411D0)
#define CLASS_1_1B7044A592B17773_METHOD_1_58DE06D90C51DB70_OFFSET UNITYSDK_OFFSET(0xFE411F0)
#define CLASS_1_1B7044A592B17773_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xFE411E0)
#define CLASS_1_1B7044A592B17773__CTOR_OFFSET UNITYSDK_OFFSET(0xFE412E0)

inline static constexpr unsigned int Class_1_1B7044A592B17773_TypeDefinitionIndex = 51111;

class Class_1_1B7044A592B17773 : public ::System::Object
{
public:
	::System::UInt32 _FloorID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_SET_FLOORID_OFFSET))(this, value);
	}

	static ::Class_1_1B7044A592B17773* Method_1_58DE06D90C51DB70()
	{
		return ((::Class_1_1B7044A592B17773*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_METHOD_1_58DE06D90C51DB70_OFFSET))();
	}
};
