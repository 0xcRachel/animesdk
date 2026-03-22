#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_35661FB1E71DC198;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client::NavMap { class ICartographerIdentifier; }

#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_CREATE_OFFSET UNITYSDK_OFFSET(0x8DE52B0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8DE65A0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x8DE6440)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GETWAYPOINTCONNECTINFO_OFFSET UNITYSDK_OFFSET(0x8DE6290)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x8DE5E50)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8DE5EB0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x8DE5E10)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8DE6250)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x8DE5E30)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8DE5E70)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x8DE5E90)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0x8DE6270)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x8DE5F10)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_ISSHOWINCURRENTSCENE_OFFSET UNITYSDK_OFFSET(0x8DE5F60)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x8DE5EF0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x8DE5ED0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x8DE6220)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x8DE5DF0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x8DE5E60)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8DE5EC0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x8DE5E20)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_CREATETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8DE6260)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x8DE5E40)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x8DE5E80)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x8DE5EA0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_ISAUTOCANCELTRACK_OFFSET UNITYSDK_OFFSET(0x8DE6280)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x8DE5F00)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x8DE5EE0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x8DE6240)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x8DE5E00)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE58A0)
#define RPG_CLIENT_BIGMAPICONTRACKSNAPSHOT__INITCARTOGRAPHERIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8DE58B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BigMapIconTrackSnapshot_TypeDefinitionIndex = 49934;

	class BigMapIconTrackSnapshot : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::ICartographerIdentifier* _CartographerIdentifier_k__BackingField; // 0x10
		::System::UInt32 _AreaID_k__BackingField; // 0x18
		::UnityEngine::Vector3 _MapPosition_k__BackingField; // 0x1C
		::System::UInt32 _GroupID_k__BackingField; // 0x28
		::System::UInt32 _ContentID_k__BackingField; // 0x2C
		::System::UInt64 _CreateTimeStamp_k__BackingField; // 0x30
		::System::Boolean _IsAutoCancelTrack_k__BackingField; // 0x38
		::UnityEngine::Color _MapIconColor_k__BackingField; // 0x3C
		::System::UInt32 _MapIconType_k__BackingField; // 0x4C
		::System::UInt32 _StoryLineID_k__BackingField; // 0x50
		::System::UInt32 _FloorID_k__BackingField; // 0x54
		::System::UInt32 _InstanceId_k__BackingField; // 0x58

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
