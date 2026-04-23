#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35661FB1E71DC198;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }

#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_CREATE_OFFSET UNITYSDK_OFFSET(0x16D2D220)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16D2E5F0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x16D2E480)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GETWAYPOINTCONNECTINFO_OFFSET UNITYSDK_OFFSET(0x16D2E2D0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x16D2DE50)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x16D2DED0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x16D2DE10)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16D2E290)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x16D2DE30)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16D2DE70)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16D2DE90)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0x16D2E2B0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x16D2DF30)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x16D2DEB0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISSHOWINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x16D2DFD0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x16D2DF10)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x16D2DEF0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x16D2E260)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x16D2DDF0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x16D2DE60)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x16D2DEE0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x16D2DE20)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16D2E2A0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x16D2DE40)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16D2DE80)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16D2DEA0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_ISAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0x16D2E2C0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x16D2DEC0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x16D2DF20)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x16D2DF00)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x16D2E280)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x16D2DE00)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16D2D8A0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__INITCARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x16D2D8B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapIconTrackSnapshot_TypeDefinitionIndex = 57949;

	class BigMapIconTrackSnapshot : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::ICartographerIdentifier* _CartographerIdentifier_k__BackingField; // 0x10
		::System::UInt32 _StoryLineID_k__BackingField; // 0x18
		::System::Boolean _IsAutoCancelTrack_k__BackingField; // 0x1C
		::System::Boolean _IsOnlinePlayRoom_k__BackingField; // 0x1D
		::System::UInt32 _GroupID_k__BackingField; // 0x20
		::System::UInt32 _MapIconType_k__BackingField; // 0x24
		::System::UInt32 _FloorID_k__BackingField; // 0x28
		::System::UInt32 _ContentID_k__BackingField; // 0x2C
		::UnityEngine::Color _MapIconColor_k__BackingField; // 0x30
		::System::UInt32 _InstanceId_k__BackingField; // 0x40
		::System::UInt64 _CreateTimeStamp_k__BackingField; // 0x48
		::UnityEngine::Vector3 _MapPosition_k__BackingField; // 0x50
		::System::UInt32 _AreaID_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BigMapIconTrackSnapshot* Create(::RPG::Client::IBigMapIcon* mapInfoData)
		{
			return ((::RPG::Client::BigMapIconTrackSnapshot*(*)(::RPG::Client::IBigMapIcon*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_CREATE_OFFSET))(mapInfoData);
		}

		::System::Void _InitCartographerIdentifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__INITCARTOGRAPHERIDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CONTENTID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void set_IsOnlinePlayRoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_ISONLINEPLAYROOM_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::ICartographerIdentifier* get_CartographerIdentifier()
		{
			return ((::RPG::Client::NavMap::ICartographerIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CARTOGRAPHERIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_CartographerIdentifier(::RPG::Client::NavMap::ICartographerIdentifier* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::ICartographerIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CARTOGRAPHERIDENTIFIER_OFFSET))(this, value);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONTYPE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::Void set_MapIconColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONCOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_IsInCurrentScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISINCURRENTSCENE_OFFSET))(this);
		}

		::System::Boolean get_IsShowInCurrentScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISSHOWINCURRENTSCENE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPPOSITION_OFFSET))(this);
		}

		::System::Void set_MapPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPPOSITION_OFFSET))(this, value);
		}

		::System::UInt64 get_CreateTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CREATETIMESTAMP_OFFSET))(this);
		}

		::System::Void set_CreateTimeStamp(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CREATETIMESTAMP_OFFSET))(this, value);
		}

		::System::Boolean get_IsAutoCancelTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISAUTOCANCELTRACK_OFFSET))(this);
		}

		::System::Void set_IsAutoCancelTrack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_ISAUTOCANCELTRACK_OFFSET))(this, value);
		}

		::Class_1_35661FB1E71DC198* GetWaypointConnectInfo()
		{
			return ((::Class_1_35661FB1E71DC198*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GETWAYPOINTCONNECTINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::BigMapIconTrackSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BigMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::RPG::Client::IMapIconTrackSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IMapIconTrackSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}
	};
}
