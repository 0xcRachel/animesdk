#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePhaseContext.h"

#define CLASS_2_8CF02C3C8507EA90_GET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x109B9E10)
#define CLASS_2_8CF02C3C8507EA90_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x109B9D20)
#define CLASS_2_8CF02C3C8507EA90_ONENTERMAP_OFFSET UNITYSDK_OFFSET(0x109B9CE0)
#define CLASS_2_8CF02C3C8507EA90_ONFIRSTENTERMAPFINISH_OFFSET UNITYSDK_OFFSET(0x109B9DD0)
#define CLASS_2_8CF02C3C8507EA90_SET_ISENETERWORLD_OFFSET UNITYSDK_OFFSET(0x109B9E20)
#define CLASS_2_8CF02C3C8507EA90__CTOR_OFFSET UNITYSDK_OFFSET(0x109B9E30)

inline static constexpr unsigned int Class_2_8CF02C3C8507EA90_TypeDefinitionIndex = 49541;

class Class_2_8CF02C3C8507EA90 : public ::RPG::Client::BasePhaseContext
{
public:
	::System::Boolean _IsEneterWorld_k__BackingField; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90__CTOR_OFFSET))(this);
	}

	::System::Void OnEnterMap()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_ONENTERMAP_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void OnFirstEnterMapFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_ONFIRSTENTERMAPFINISH_OFFSET))(this);
	}

	::System::Boolean get_IsEneterWorld()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_GET_ISENETERWORLD_OFFSET))(this);
	}

	::System::Void set_IsEneterWorld(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8CF02C3C8507EA90_SET_ISENETERWORLD_OFFSET))(this, value);
	}
};
