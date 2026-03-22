#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_55.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_51;

#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9E73DD0)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x9E73D70)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x9E73D50)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMMARKTYPE_OFFSET UNITYSDK_OFFSET(0x9E73DB0)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E73D90)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x9E73D80)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x9E73D60)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMMARKTYPE_OFFSET UNITYSDK_OFFSET(0x9E73DC0)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x9E73DA0)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM_UPDATEROOM_OFFSET UNITYSDK_OFFSET(0x9E737D0)
#define RPG_CLIENT_ROGUETOURNGAMEROOMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E733D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameRoomItem_TypeDefinitionIndex = 53739;

	class RogueTournGameRoomItem : public ::System::Object
	{
	public:
		::System::UInt32 _RoomMarkType_k__BackingField; // 0x10
		::Enum_3_DB663931210BBC27_55 _RoomStatus_k__BackingField; // 0x14
		::System::UInt32 _RoomID_k__BackingField; // 0x18
		::System::UInt32 _RoomIndex_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_352A8B3482C80E7D_51* roomProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM__CTOR_OFFSET))(this, roomProto);
		}

		::System::Void UpdateRoom(::Class_1_352A8B3482C80E7D_51* roomProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_UPDATEROOM_OFFSET))(this, roomProto);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMID_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_55 get_RoomStatus()
		{
			return ((::Enum_3_DB663931210BBC27_55(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMSTATUS_OFFSET))(this);
		}

		::System::Void set_RoomStatus(::Enum_3_DB663931210BBC27_55 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_55))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMSTATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomMarkType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ROOMMARKTYPE_OFFSET))(this);
		}

		::System::Void set_RoomMarkType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_SET_ROOMMARKTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEROOMITEM_GET_ISFINISHED_OFFSET))(this);
		}
	};
}
