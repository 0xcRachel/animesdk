#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/SlotType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x177FD740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETTAGFLAG_OFFSET UNITYSDK_OFFSET(0x177F8590)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_DIYITEM_OFFSET UNITYSDK_OFFSET(0x17805400)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0x17803390)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x178053E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_REMOVECURRENTDIYITEM_OFFSET UNITYSDK_OFFSET(0x17804E00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SETSLOTID_OFFSET UNITYSDK_OFFSET(0x177F5FA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_DIYITEM_OFFSET UNITYSDK_OFFSET(0x17805410)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0x178053F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x177F4450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0x17805300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177F6000)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17804DF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITSLOTTYPE_OFFSET UNITYSDK_OFFSET(0x17805150)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITTAGFLAGS_OFFSET UNITYSDK_OFFSET(0x17804EE0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildSlotInfo_TypeDefinitionIndex = 68583;

	class TrainPartyBuildSlotInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* _DIYItem_k__BackingField; // 0x10
		::System::Int32 _TagFlag; // 0x18
		::RPG::Client::TrainParty::SlotType _SlotType; // 0x1C
		::System::UInt32 _SlotID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__CTOR_1_OFFSET))(this, slotID);
		}

		::System::Void SetSlotID(::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SETSLOTID_OFFSET))(this, slotID);
		}

		::System::Void Sync(::System::UInt32 slotId, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* diyItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYNC_OFFSET))(this, slotId, diyItem);
		}

		::System::Void RemoveCurrentDIYItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_REMOVECURRENTDIYITEM_OFFSET))(this);
		}

		::System::Int32 GetTagFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETTAGFLAG_OFFSET))(this);
		}

		::RPG::Client::TrainParty::SlotType GetSlotType()
		{
			return ((::RPG::Client::TrainParty::SlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETSLOTTYPE_OFFSET))(this);
		}

		::System::Void _InitTagFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITTAGFLAGS_OFFSET))(this);
		}

		::System::Void _InitSlotType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITSLOTTYPE_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildSlotInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__COMPARETO_OFFSET))(this, other);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_SLOTID_OFFSET))(this, value);
		}

		::RPG::GameCore::PlayerRoomSlotConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PlayerRoomSlotConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* get_DIYItem()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_DIYITEM_OFFSET))(this);
		}

		::System::Void set_DIYItem(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_DIYITEM_OFFSET))(this, value);
		}
	};
}
