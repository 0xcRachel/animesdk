#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_57.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicMarkType.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_1CBA230307F9C289_57;
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x172BE640)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x172BE6A0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0x172BE600)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x172BE620)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0x172BE680)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x172BE660)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0x172BE6C0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET UNITYSDK_OFFSET(0x172BE650)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x172BE6B0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0x172BE610)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0x172BE630)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0x172BE690)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x172BE670)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0x172BE6D0)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x172BDB30)
#define RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172BDB20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameRoomInfo_TypeDefinitionIndex = 62095;

	class RogueMagicGameRoomInfo : public ::System::Object
	{
	public:
		::System::String* _ToastIconPath_k__BackingField; // 0x10
		::RPG::GameCore::RogueMagicRoomType _RoomType_k__BackingField; // 0x18
		::Enum_3_DB663931210BBC27_57 _Status_k__BackingField; // 0x1C
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::GameCore::RogueMagicMarkType _MarkType_k__BackingField; // 0x30
		::System::UInt32 _RoomID_k__BackingField; // 0x34
		::System::UInt32 _RoomIndex_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_1CBA230307F9C289_57* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_57*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMINDEX_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicMarkType get_MarkType()
		{
			return ((::RPG::GameCore::RogueMagicMarkType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_MARKTYPE_OFFSET))(this);
		}

		::System::Void set_MarkType(::RPG::GameCore::RogueMagicMarkType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicMarkType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_MARKTYPE_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_57 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_57(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_57 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_57))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueMagicRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueMagicRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::RPG::GameCore::RogueMagicRoomType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicRoomType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_ROOMTYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_GET_TOASTICONPATH_OFFSET))(this);
		}

		::System::Void set_ToastIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEROOMINFO_SET_TOASTICONPATH_OFFSET))(this, value);
		}
	};
}
