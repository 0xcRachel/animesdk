#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaHexEquipmentSlotItemInfoState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace RPG::Client { class RogueTournPersonaHexEquipmentSlotPanelInfo; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1757F880)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_EQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1757FC50)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_HEX_OFFSET UNITYSDK_OFFSET(0x1757F840)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1757F860)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1757FA30)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0x1757FB40)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_HEX_OFFSET UNITYSDK_OFFSET(0x1757F850)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1757F870)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_UNEQUIPHEX_OFFSET UNITYSDK_OFFSET(0x1757FD00)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1757F920)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1757F930)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1757F9C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentSlotItemInfo_TypeDefinitionIndex = 67142;

	class RogueTournPersonaHexEquipmentSlotItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* _SlotPanelInfo; // 0x10
		::RPG::Client::IRogueTournHex* _Hex_k__BackingField; // 0x18
		::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState _State_k__BackingField; // 0x20
		::System::Int32 _Index; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournHex* get_Hex()
		{
			return ((::RPG::Client::IRogueTournHex*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_HEX_OFFSET))(this);
		}

		::System::Void set_Hex(::RPG::Client::IRogueTournHex* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_HEX_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState get_State()
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfoState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_SET_STATE_OFFSET))(this, value);
		}

		static ::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo* Create(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo* slotPanelInfo, ::System::Int32 index)
		{
			return ((::RPG::Client::RogueTournPersonaHexEquipmentSlotItemInfo*(*)(::RPG::Client::RogueTournPersonaHexEquipmentSlotPanelInfo*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_CREATE_OFFSET))(slotPanelInfo, index);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__INIT_OFFSET))(this);
		}

		::System::Boolean IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_ISNEWUNLOCK_OFFSET))(this);
		}

		::System::Void EquipHex(::RPG::Client::IRogueTournHex* hex)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_EQUIPHEX_OFFSET))(this, hex);
		}

		::System::Void UnEquipHex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO_UNEQUIPHEX_OFFSET))(this);
		}

		::System::Void _UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTSLOTITEMINFO__UPDATESTATE_OFFSET))(this);
		}
	};
}
