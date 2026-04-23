#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDataKey; }
namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define CLASS_1_4C612AB5D47425B6_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xACC5620)
#define CLASS_1_4C612AB5D47425B6_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xACC5660)
#define CLASS_1_4C612AB5D47425B6_METHOD_1_486E62A68E7F379E_OFFSET UNITYSDK_OFFSET(0xACC55E0)
#define CLASS_1_4C612AB5D47425B6_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xACC5640)
#define CLASS_1_4C612AB5D47425B6_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xACC5600)
#define CLASS_1_4C612AB5D47425B6_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xACC5630)
#define CLASS_1_4C612AB5D47425B6_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xACC5670)
#define CLASS_1_4C612AB5D47425B6__CTOR_OFFSET UNITYSDK_OFFSET(0xACC5510)

inline static constexpr unsigned int Class_1_4C612AB5D47425B6_TypeDefinitionIndex = 57957;

class Class_1_4C612AB5D47425B6 : public ::System::Object
{
public:
	::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
	::RPG::GameCore::NPCMonsterTrackConfigRow* Field_1_2; // 0x18
	::System::UInt32 _FloorID_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::NPCMonsterTrackConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterTrackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_486E62A68E7F379E()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_METHOD_1_486E62A68E7F379E_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::Client::MapDataKey* get_MapDataKey()
	{
		return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_GET_MAPDATAKEY_OFFSET))(this);
	}

	::System::Void set_MapDataKey(::RPG::Client::MapDataKey* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + CLASS_1_4C612AB5D47425B6_SET_MAPDATAKEY_OFFSET))(this, value);
	}
};
