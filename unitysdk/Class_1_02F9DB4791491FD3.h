#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDataKey; }
namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define CLASS_1_02F9DB4791491FD3_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x14ACF230)
#define CLASS_1_02F9DB4791491FD3_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0x14ACF270)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_486E62A68E7F379E_OFFSET UNITYSDK_OFFSET(0x14ACF1F0)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x14ACF250)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x14ACF210)
#define CLASS_1_02F9DB4791491FD3_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x14ACF240)
#define CLASS_1_02F9DB4791491FD3_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0x14ACF280)
#define CLASS_1_02F9DB4791491FD3__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACF120)

inline static constexpr unsigned int Class_1_02F9DB4791491FD3_TypeDefinitionIndex = 58873;

class Class_1_02F9DB4791491FD3 : public ::System::Object
{
public:
	::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
	::RPG::GameCore::NPCMonsterTrackConfigRow* Field_1_1; // 0x18
	::System::UInt32 _FloorID_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::NPCMonsterTrackConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterTrackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_486E62A68E7F379E()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_486E62A68E7F379E_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_SET_FLOORID_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::Client::MapDataKey* get_MapDataKey()
	{
		return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_GET_MAPDATAKEY_OFFSET))(this);
	}

	::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_SET_MAPDATAKEY_OFFSET))(this, a1);
	}
};
