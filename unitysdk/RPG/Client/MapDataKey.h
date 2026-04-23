#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_69EEE63CE134E1EF;

#define RPG_CLIENT_MAPDATAKEY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x158B5730)
#define RPG_CLIENT_MAPDATAKEY_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x158B5520)
#define RPG_CLIENT_MAPDATAKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x158B57E0)
#define RPG_CLIENT_MAPDATAKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x158B5650)
#define RPG_CLIENT_MAPDATAKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x158B58A0)
#define RPG_CLIENT_MAPDATAKEY_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x158B5920)
#define RPG_CLIENT_MAPDATAKEY_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x158B5900)
#define RPG_CLIENT_MAPDATAKEY_GET_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x158B5510)
#define RPG_CLIENT_MAPDATAKEY_GET_ISINONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x158B5930)
#define RPG_CLIENT_MAPDATAKEY_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x158B5910)
#define RPG_CLIENT_MAPDATAKEY_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x158B55A0)
#define RPG_CLIENT_MAPDATAKEY_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x158B5940)
#define RPG_CLIENT_MAPDATAKEY_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x158B56D0)
#define RPG_CLIENT_MAPDATAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x158B54F0)
#define RPG_CLIENT_MAPDATAKEY___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x158B59E0)
#define RPG_CLIENT_MAPDATAKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x158B59F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapDataKey_TypeDefinitionIndex = 61137;

	class MapDataKey : public ::System::Object
	{
	public:
		::System::UInt32 _ContentID_k__BackingField; // 0x10
		::System::Boolean _IsInOnlinePlayRoom_k__BackingField; // 0x14
		::System::UInt32 _StoryLineID_k__BackingField; // 0x18
		::System::UInt32 _FloorID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 storyLineID, ::System::UInt32 contentID, ::System::UInt32 floorID, ::System::Boolean isInOnlinePlayRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY__CTOR_OFFSET))(this, storyLineID, contentID, floorID, isInOnlinePlayRoom);
		}

		::System::Boolean get_IsCurrentMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_ISCURRENTMAP_OFFSET))(this);
		}

		::System::Void Deconstruct(::System::UInt32& storyLineID, ::System::UInt32& contentID, ::System::UInt32& floorID, ::System::Boolean& isInOnlinePlayRoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_DECONSTRUCT_OFFSET))(this, storyLineID, contentID, floorID, isInOnlinePlayRoom);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MapDataKey* left, ::RPG::Client::MapDataKey* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MapDataKey* left, ::RPG::Client::MapDataKey* right)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDataKey*, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Int32 CompareTo(::RPG::Client::MapDataKey* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::RPG::Client::MapDataKey* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_FLOORID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsInOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_GET_ISINONLINEPLAYROOM_OFFSET))(this);
		}

		static ::RPG::Client::MapDataKey* op_Explicit(::Class_1_69EEE63CE134E1EF* sceneIdentifier)
		{
			return ((::RPG::Client::MapDataKey*(*)(::Class_1_69EEE63CE134E1EF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY_OP_EXPLICIT_OFFSET))(sceneIdentifier);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPDATAKEY___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}
	};
}
