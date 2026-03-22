#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MuseumCollectionItemStatus.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EventStuffConfigRow; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class MuseumStuffRow; }
namespace System { class String; }

#define RPG_CLIENT_MUSEUMAVATARITEMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x98E0BB0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x98E0E10)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET UNITYSDK_OFFSET(0x98E0DE0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x98E0F40)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x98E0E30)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x98E0C90)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x98E0CB0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MUSEUMSTUFFROW_OFFSET UNITYSDK_OFFSET(0x98E0D00)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x98E0F60)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STORYDESC_OFFSET UNITYSDK_OFFSET(0x98E0CD0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x98E0F50)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x98E0CA0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONSTARTSTRING_OFFSET UNITYSDK_OFFSET(0x98E0CC0)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x98E0F70)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA_UPDATEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x98E0C10)
#define RPG_CLIENT_MUSEUMAVATARITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x98E0BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumAvatarItemData_TypeDefinitionIndex = 52812;

	class MuseumAvatarItemData : public ::System::Object
	{
	public:
		::RPG::GameCore::MuseumStuffRow* _MuseumStuffRow; // 0x10
		::System::String* _MissionStartString_k__BackingField; // 0x18
		::RPG::GameCore::ItemRow* _ItemRow; // 0x20
		::System::Boolean TakenCollectReward; // 0x28
		::RPG::Client::MuseumCollectionItemStatus _Status_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::UInt32 _MissionID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MuseumAvatarItemData* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::MuseumAvatarItemData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_CREATE_OFFSET))(id);
		}

		::System::Void UpdateEventData(::RPG::GameCore::EventStuffConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventStuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_UPDATEEVENTDATA_OFFSET))(this, row);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONID_OFFSET))(this);
		}

		::System::Void set_MissionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONID_OFFSET))(this, value);
		}

		::System::String* get_MissionStartString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MISSIONSTARTSTRING_OFFSET))(this);
		}

		::System::Void set_MissionStartString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_MISSIONSTARTSTRING_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_StoryDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STORYDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_EvidenceInfoTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_EVIDENCEINFOTEXTID_OFFSET))(this);
		}

		::System::UInt32 get_DisplayOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_DISPLAYORDER_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get_ItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ITEMROW_OFFSET))(this);
		}

		::RPG::GameCore::MuseumStuffRow* get_MuseumStuffRow()
		{
			return ((::RPG::GameCore::MuseumStuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_MUSEUMSTUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::MuseumCollectionItemStatus get_Status()
		{
			return ((::RPG::Client::MuseumCollectionItemStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::MuseumCollectionItemStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumCollectionItemStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMAVATARITEMDATA_SET_STATUS_OFFSET))(this, value);
		}
	};
}
