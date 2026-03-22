#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_68.h"
#include "unitysdk/System/Object.h"

class Class_1_DBE1913405A6C120;
namespace RPG::Client { class RogueTournGameRoomItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9E738C0)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETCURROGUETOURNGAMEROOM_OFFSET UNITYSDK_OFFSET(0x9E73830)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETCURROOMPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E73910)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0x9E73A30)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9E739F0)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9E739D0)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERSTATUS_OFFSET UNITYSDK_OFFSET(0x9E73A10)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_ROOMLIST_OFFSET UNITYSDK_OFFSET(0x9E73A50)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_CURROOMINDEX_OFFSET UNITYSDK_OFFSET(0x9E73A40)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERID_OFFSET UNITYSDK_OFFSET(0x9E73A00)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERINDEX_OFFSET UNITYSDK_OFFSET(0x9E739E0)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERSTATUS_OFFSET UNITYSDK_OFFSET(0x9E73A20)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_ROOMLIST_OFFSET UNITYSDK_OFFSET(0x9E73A60)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SYNCALLLAYERINFO_OFFSET UNITYSDK_OFFSET(0x9E73020)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM_UPDATELAYERINFO_OFFSET UNITYSDK_OFFSET(0x9E73440)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E73010)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM__GETCURROGUETOURNGAMEROOM_B__3_0_OFFSET UNITYSDK_OFFSET(0x9E73A70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLayerItem_TypeDefinitionIndex = 53737;

	class RogueTournGameLayerItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameRoomItem*>* _RoomList_k__BackingField; // 0x10
		::System::UInt32 _LayerIndex_k__BackingField; // 0x18
		::System::UInt32 _CurRoomIndex_k__BackingField; // 0x1C
		::System::UInt32 _LayerID_k__BackingField; // 0x20
		::Enum_3_0A3761FE34514D6C_68 _LayerStatus_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM__CTOR_OFFSET))(this);
		}

		::System::Void SyncAllLayerInfo(::Class_1_DBE1913405A6C120* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SYNCALLLAYERINFO_OFFSET))(this, proto);
		}

		::System::Void UpdateLayerInfo(::Class_1_DBE1913405A6C120* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DBE1913405A6C120*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_UPDATELAYERINFO_OFFSET))(this, proto);
		}

		::RPG::Client::RogueTournGameRoomItem* GetCurRogueTournGameRoom()
		{
			return ((::RPG::Client::RogueTournGameRoomItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETCURROGUETOURNGAMEROOM_OFFSET))(this);
		}

		::System::UInt32 GetAllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETALLROOMCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetCurRoomProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GETCURROOMPROGRESS_OFFSET))(this);
		}

		::System::UInt32 get_LayerIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERINDEX_OFFSET))(this);
		}

		::System::Void set_LayerIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_LayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERID_OFFSET))(this);
		}

		::System::Void set_LayerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERID_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_68 get_LayerStatus()
		{
			return ((::Enum_3_0A3761FE34514D6C_68(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_LAYERSTATUS_OFFSET))(this);
		}

		::System::Void set_LayerStatus(::Enum_3_0A3761FE34514D6C_68 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_68))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_LAYERSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurRoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_CURROOMINDEX_OFFSET))(this);
		}

		::System::Void set_CurRoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_CURROOMINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameRoomItem*>* get_RoomList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameRoomItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_GET_ROOMLIST_OFFSET))(this);
		}

		::System::Void set_RoomList(::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameRoomItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueTournGameRoomItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM_SET_ROOMLIST_OFFSET))(this, value);
		}

		::System::Boolean _GetCurRogueTournGameRoom_b__3_0(::RPG::Client::RogueTournGameRoomItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournGameRoomItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM__GETCURROGUETOURNGAMEROOM_B__3_0_OFFSET))(this, x);
		}
	};
}
