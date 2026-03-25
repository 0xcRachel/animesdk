#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_56.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_36039D62266A61A1;
class Class_1_AB92626B83E1FBF9;
namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace RPG::Client { class RogueTournPersonaRoomCompositionTypeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA3C20E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3C2780)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xA3C2870)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET UNITYSDK_OFFSET(0xA3C2540)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA3C2520)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA3C24E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C2630)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3C2500)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA3C2600)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA3C2480)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA3C24A0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xA3C25E0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA3C24C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET UNITYSDK_OFFSET(0xA3C2650)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xA3C2530)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET UNITYSDK_OFFSET(0xA3C24F0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA3C2510)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET UNITYSDK_OFFSET(0xA3C2490)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET UNITYSDK_OFFSET(0xA3C24B0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA3C24D0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA3C27C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA3C2670)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET UNITYSDK_OFFSET(0xA3C2680)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData_TypeDefinitionIndex = 55220;

	class RogueTournPersonaGameLevelPresetRoomData : public ::System::Object
	{
	public:
		::Class_1_AB92626B83E1FBF9* _PresetData; // 0x10
		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* _Attributes_k__BackingField; // 0x18
		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* _CompositionType_k__BackingField; // 0x20
		::System::UInt32 _RoomID_k__BackingField; // 0x28
		::System::UInt32 _Level_k__BackingField; // 0x2C
		::System::UInt32 _RoomIndex_k__BackingField; // 0x30
		::Enum_3_DB663931210BBC27_56 _Status_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMID_OFFSET))(this);
		}

		::System::Void set_RoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMID_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMINDEX_OFFSET))(this);
		}

		::System::Void set_RoomIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ROOMINDEX_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_56 get_Status()
		{
			return ((::Enum_3_DB663931210BBC27_56(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_DB663931210BBC27_56 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_56))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_STATUS_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaRoomCompositionTypeData* get_CompositionType()
		{
			return ((::RPG::Client::RogueTournPersonaRoomCompositionTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_COMPOSITIONTYPE_OFFSET))(this);
		}

		::System::Void set_CompositionType(::RPG::Client::RogueTournPersonaRoomCompositionTypeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomCompositionTypeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_COMPOSITIONTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_Attributes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_Attributes(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SET_ATTRIBUTES_OFFSET))(this, value);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>* get_AttributeList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IRogueTournPersonaRoomAttribute*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ATTRIBUTELIST_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType get_RoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ToastIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GET_TOASTICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournPersonaGameLevelPresetRoomData* Create(::System::UInt32 presetID)
		{
			return ((::RPG::Client::RogueTournPersonaGameLevelPresetRoomData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_CREATE_OFFSET))(presetID);
		}

		::System::Void _Init(::System::UInt32 presetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA__INIT_OFFSET))(this, presetID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_36039D62266A61A1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36039D62266A61A1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_SYNC_OFFSET))(this, proto);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA_GETDEBUGINFO_OFFSET))(this);
		}
	};
}
