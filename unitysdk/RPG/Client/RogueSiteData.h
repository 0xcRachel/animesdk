#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_29.h"
#include "unitysdk/System/Object.h"

class Class_1_F11A35D08F1FB364;
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueRoomRow; }

#define RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E46920)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET UNITYSDK_OFFSET(0x9E46960)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET UNITYSDK_OFFSET(0x9E46A50)
#define RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET UNITYSDK_OFFSET(0x9E46AB0)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET UNITYSDK_OFFSET(0x9E46D90)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET UNITYSDK_OFFSET(0x9E46C50)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0x9E46EA0)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E46EC0)
#define RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x9E46E20)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x9E46E60)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET UNITYSDK_OFFSET(0x9E46EE0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E46E80)
#define RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET UNITYSDK_OFFSET(0x9E46E40)
#define RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET UNITYSDK_OFFSET(0x9E46B30)
#define RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET UNITYSDK_OFFSET(0x9E46BF0)
#define RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET UNITYSDK_OFFSET(0x9E30660)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0x9E46EB0)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E46ED0)
#define RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x9E46E30)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x9E46E70)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E46E90)
#define RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET UNITYSDK_OFFSET(0x9E46E50)
#define RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E468A0)
#define RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET UNITYSDK_OFFSET(0x9E46D10)
#define RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET UNITYSDK_OFFSET(0x9E469C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSiteData_TypeDefinitionIndex = 53619;

	class RogueSiteData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMapRow* _SiteRow; // 0x10
		::RPG::GameCore::RogueRoomRow* _HiddenRoomRow; // 0x18
		::RPG::GameCore::RogueRoomRow* _RoomRow; // 0x20
		::Enum_3_4608E37A1B3D374A_29 _RoomStatus_k__BackingField; // 0x28
		::System::UInt32 _SiteID_k__BackingField; // 0x2C
		::System::UInt32 _MapID_k__BackingField; // 0x30
		::Enum_3_4608E37A1B3D374A_29 _HiddenRoomStatus_k__BackingField; // 0x34
		::System::UInt32 _HiddenRoomID_k__BackingField; // 0x38
		::System::UInt32 _RoomID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 mapID, ::Class_1_F11A35D08F1FB364* rogueSite)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_F11A35D08F1FB364*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET))(this, mapID, rogueSite);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRooms(::Class_1_F11A35D08F1FB364* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F11A35D08F1FB364*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET))(this, proto);
		}

		::System::Single GetMapPosX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET))(this);
		}

		::System::Single GetMapPosY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetNextSiteIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET))(this);
		}

		::System::Boolean HasNextSite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET))(this);
		}

		::System::Boolean IsStartSite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET))(this);
		}

		::System::Void _TryInitSiteRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueRoomType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET))(this);
		}

		::System::Void _InitRoomRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueHiddenRoomType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET))(this);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_SiteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET))(this);
		}

		::System::Void set_SiteID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_29 get_RoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_4608E37A1B3D374A_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_HiddenRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET))(this);
		}

		::System::Void set_HiddenRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_29 get_HiddenRoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_HiddenRoomStatus(::Enum_3_4608E37A1B3D374A_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueRoomRow* get_RoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET))(this);
		}
	};
}
