#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ClockParkAttributeType.h"
#include "unitysdk/RPG/Client/ClockParkCardRarity.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkCardTipsTypeEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkDiceItem; }
namespace RPG::Client { class ClockParkEffectResult; }
namespace RPG::Client { class ClockParkSlotInfo; }
namespace RPG::GameCore { class ClockParkCardActionRow; }
namespace RPG::GameCore { class ClockParkCardRow; }
namespace RPG::GameCore { class ClockParkEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CLOCKPARKCARDITEM_ADDDICE_OFFSET UNITYSDK_OFFSET(0x178B9890)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GETAVAILABLEACTIONROW_OFFSET UNITYSDK_OFFSET(0x178B9660)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GETEFFECTROWS_OFFSET UNITYSDK_OFFSET(0x178B9330)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDDESC_OFFSET UNITYSDK_OFFSET(0x178BA090)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDFOREIMGPATH_OFFSET UNITYSDK_OFFSET(0x178BA0F0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDIMGPATH_OFFSET UNITYSDK_OFFSET(0x178BA110)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDSLOTCOUNT_OFFSET UNITYSDK_OFFSET(0x178B76A0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTAG_OFFSET UNITYSDK_OFFSET(0x178BA0C0)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSPARAM_OFFSET UNITYSDK_OFFSET(0x178BA050)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSTYPE_OFFSET UNITYSDK_OFFSET(0x178BA030)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPS_OFFSET UNITYSDK_OFFSET(0x178B9F90)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDVALUE_OFFSET UNITYSDK_OFFSET(0x178B9F70)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x178BA070)
#define RPG_CLIENT_CLOCKPARKCARDITEM_GET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0x178B9F50)
#define RPG_CLIENT_CLOCKPARKCARDITEM_HASANYDICE_OFFSET UNITYSDK_OFFSET(0x178B9220)
#define RPG_CLIENT_CLOCKPARKCARDITEM_HASEMPTYSLOT_OFFSET UNITYSDK_OFFSET(0x178B6F30)
#define RPG_CLIENT_CLOCKPARKCARDITEM_REMOVEDICE_OFFSET UNITYSDK_OFFSET(0x178B9B30)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SETDICE_OFFSET UNITYSDK_OFFSET(0x178B7250)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_CARDVALUE_OFFSET UNITYSDK_OFFSET(0x178B9F80)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x178BA080)
#define RPG_CLIENT_CLOCKPARKCARDITEM_SET_SLOTINFO_OFFSET UNITYSDK_OFFSET(0x178B9F60)
#define RPG_CLIENT_CLOCKPARKCARDITEM_TRYADDDICE_OFFSET UNITYSDK_OFFSET(0x178B9760)
#define RPG_CLIENT_CLOCKPARKCARDITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x178BA130)
#define RPG_CLIENT_CLOCKPARKCARDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x178B71B0)
#define RPG_CLIENT_CLOCKPARKCARDITEM__INITCARDHINTRARITY_OFFSET UNITYSDK_OFFSET(0x178B77C0)
#define RPG_CLIENT_CLOCKPARKCARDITEM__ONDICECHANGED_OFFSET UNITYSDK_OFFSET(0x178B9A80)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkCardItem_TypeDefinitionIndex = 56701;

	class ClockParkCardItem : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::ClockParkCardItem*>** StaticGet_OnDiceChangedActionCallback()
		{
			return (::System::Action_1<::RPG::Client::ClockParkCardItem*>**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardItem_TypeDefinitionIndex)->GetStaticField(0x681A0);
		}
		static ::RPG::Client::ClockParkEffectResult** StaticGet__EffectHelper()
		{
			return (::RPG::Client::ClockParkEffectResult**)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardItem_TypeDefinitionIndex)->GetStaticField(0x681A8);
		}
		static ::System::UInt32* StaticGet__DiceMaxValue()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardItem_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::System::UInt32* StaticGet__DiceMinValue()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ClockParkCardItem_TypeDefinitionIndex)->GetStaticField(0x10FD4);
		}
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeDisplayPositiveHint; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeDisplayNegativeHint; // 0x18
		::RPG::Client::ClockParkEffectResult* SuccessEffectResult; // 0x20
		::RPG::Client::ClockParkSlotInfo* _SlotInfo_k__BackingField; // 0x28
		::RPG::Client::ClockParkEffectResult* EffectResult; // 0x30
		::RPG::GameCore::ClockParkCardRow* _Config_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ClockParkAttributeType, ::System::Boolean>* AttributeBuffHint; // 0x40
		::System::UInt32 _CardValue_k__BackingField; // 0x48
		::System::UInt32 CardID; // 0x4C
		::RPG::Client::ClockParkCardRarity Rarity; // 0x50

		::System::Void _ctor(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__CTOR_OFFSET))(this, cardID);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__CCTOR_OFFSET))();
		}

		::System::Boolean HasEmptySlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_HASEMPTYSLOT_OFFSET))(this);
		}

		::System::Boolean HasAnyDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_HASANYDICE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ClockParkEffectRow*>* GetEffectRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ClockParkEffectRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GETEFFECTROWS_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardActionRow* GetAvailableActionRow(::System::UInt32 dice)
		{
			return ((::RPG::GameCore::ClockParkCardActionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GETAVAILABLEACTIONROW_OFFSET))(this, dice);
		}

		::System::Boolean TryAddDice(::RPG::Client::ClockParkDiceItem* diceItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_TRYADDDICE_OFFSET))(this, diceItem);
		}

		::System::Boolean AddDice(::System::Int32 slotIndex, ::RPG::Client::ClockParkDiceItem* diceItem, ::System::Boolean isDiceFixed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_ADDDICE_OFFSET))(this, slotIndex, diceItem, isDiceFixed);
		}

		::System::Void SetDice(::System::Int32 slotIndex, ::RPG::Client::ClockParkDiceItem* diceItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ClockParkDiceItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SETDICE_OFFSET))(this, slotIndex, diceItem);
		}

		::System::Boolean RemoveDice(::System::Int32 slotIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_REMOVEDICE_OFFSET))(this, slotIndex);
		}

		::System::Void _InitCardHintRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__INITCARDHINTRARITY_OFFSET))(this);
		}

		::System::Void _OnDiceChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM__ONDICECHANGED_OFFSET))(this);
		}

		::RPG::Client::ClockParkSlotInfo* get_SlotInfo()
		{
			return ((::RPG::Client::ClockParkSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_SLOTINFO_OFFSET))(this);
		}

		::System::Void set_SlotInfo(::RPG::Client::ClockParkSlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_SLOTINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_CardValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDVALUE_OFFSET))(this);
		}

		::System::Void set_CardValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_CARDVALUE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CardTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPS_OFFSET))(this);
		}

		::System::UInt32 get_CardTipsParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSPARAM_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardRow* get_Config()
		{
			return ((::RPG::GameCore::ClockParkCardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ClockParkCardRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ClockParkCardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_SET_CONFIG_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_CardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_CardTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTAG_OFFSET))(this);
		}

		::System::String* get_CardForeImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDFOREIMGPATH_OFFSET))(this);
		}

		::System::String* get_CardImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDIMGPATH_OFFSET))(this);
		}

		::System::UInt32 get_CardSlotCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDSLOTCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ClockParkCardTipsTypeEnum get_CardTipsType()
		{
			return ((::RPG::GameCore::ClockParkCardTipsTypeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKCARDITEM_GET_CARDTIPSTYPE_OFFSET))(this);
		}
	};
}
