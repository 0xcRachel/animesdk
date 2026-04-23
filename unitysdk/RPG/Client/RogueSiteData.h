#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_28.h"
#include "unitysdk/System/Object.h"

class Class_1_76D163FB7972360A_1;
namespace RPG::GameCore { class RogueMapRow; }
namespace RPG::GameCore { class RogueRoomRow; }

#define RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163662B0)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSX_OFFSET UNITYSDK_OFFSET(0x163662F0)
#define RPG_CLIENT_ROGUESITEDATA_GETMAPPOSY_OFFSET UNITYSDK_OFFSET(0x163663E0)
#define RPG_CLIENT_ROGUESITEDATA_GETNEXTSITEIDARRAY_OFFSET UNITYSDK_OFFSET(0x16341B40)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEHIDDENROOMTYPE_OFFSET UNITYSDK_OFFSET(0x16341DC0)
#define RPG_CLIENT_ROGUESITEDATA_GETROGUEROOMTYPE_OFFSET UNITYSDK_OFFSET(0x16341D00)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0x16366600)
#define RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x16366620)
#define RPG_CLIENT_ROGUESITEDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x16366580)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x163665C0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET UNITYSDK_OFFSET(0x16341EC0)
#define RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x163665E0)
#define RPG_CLIENT_ROGUESITEDATA_GET_SITEID_OFFSET UNITYSDK_OFFSET(0x163665A0)
#define RPG_CLIENT_ROGUESITEDATA_HASNEXTSITE_OFFSET UNITYSDK_OFFSET(0x16366440)
#define RPG_CLIENT_ROGUESITEDATA_ISSTARTSITE_OFFSET UNITYSDK_OFFSET(0x163423E0)
#define RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET UNITYSDK_OFFSET(0x163502D0)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET UNITYSDK_OFFSET(0x16366610)
#define RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x16366630)
#define RPG_CLIENT_ROGUESITEDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x16366590)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x163665D0)
#define RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x163665F0)
#define RPG_CLIENT_ROGUESITEDATA_SET_SITEID_OFFSET UNITYSDK_OFFSET(0x163665B0)
#define RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x163416F0)
#define RPG_CLIENT_ROGUESITEDATA__INITROOMROW_OFFSET UNITYSDK_OFFSET(0x16366500)
#define RPG_CLIENT_ROGUESITEDATA__TRYINITSITEROW_OFFSET UNITYSDK_OFFSET(0x16366350)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueSiteData_TypeDefinitionIndex = 62164;

	class RogueSiteData : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMapRow* _SiteRow; // 0x10
		::RPG::GameCore::RogueRoomRow* _HiddenRoomRow; // 0x18
		::RPG::GameCore::RogueRoomRow* _RoomRow; // 0x20
		::System::UInt32 _MapID_k__BackingField; // 0x28
		::System::UInt32 _RoomID_k__BackingField; // 0x2C
		::Enum_3_4608E37A1B3D374A_28 _RoomStatus_k__BackingField; // 0x30
		::Enum_3_4608E37A1B3D374A_28 _HiddenRoomStatus_k__BackingField; // 0x34
		::System::UInt32 _HiddenRoomID_k__BackingField; // 0x38
		::System::UInt32 _SiteID_k__BackingField; // 0x3C

		::System::Void _ctor(::System::UInt32 mapID, ::Class_1_76D163FB7972360A_1* rogueSite)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_76D163FB7972360A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA__CTOR_OFFSET))(this, mapID, rogueSite);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshRooms(::Class_1_76D163FB7972360A_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76D163FB7972360A_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_REFRESHROOMS_OFFSET))(this, proto);
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

		::Enum_3_4608E37A1B3D374A_28 get_RoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_ROOMSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_HiddenRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMID_OFFSET))(this);
		}

		::System::Void set_HiddenRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_28 get_HiddenRoomStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_HIDDENROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_HiddenRoomStatus(::Enum_3_4608E37A1B3D374A_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_SET_HIDDENROOMSTATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueRoomRow* get_RoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUESITEDATA_GET_ROOMROW_OFFSET))(this);
		}
	};
}
