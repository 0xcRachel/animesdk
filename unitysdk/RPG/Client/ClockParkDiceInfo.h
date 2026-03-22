#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ClockParkDiceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_64C1E63642C4A2DF;

#define RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICEANDGET_OFFSET UNITYSDK_OFFSET(0x8FA0A30)
#define RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICE_OFFSET UNITYSDK_OFFSET(0x8FA0AD0)
#define RPG_CLIENT_CLOCKPARKDICEINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x8FA08A0)
#define RPG_CLIENT_CLOCKPARKDICEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8FA0690)
#define RPG_CLIENT_CLOCKPARKDICEINFO_GET_DICEITEMLIST_OFFSET UNITYSDK_OFFSET(0x8FA0B80)
#define RPG_CLIENT_CLOCKPARKDICEINFO_ISALLDICEINSLOT_OFFSET UNITYSDK_OFFSET(0x8FA0740)
#define RPG_CLIENT_CLOCKPARKDICEINFO_SET_DICEITEMLIST_OFFSET UNITYSDK_OFFSET(0x8FA0B90)
#define RPG_CLIENT_CLOCKPARKDICEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA0BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkDiceInfo_TypeDefinitionIndex = 48751;

	class ClockParkDiceInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* _DiceItemList_k__BackingField; // 0x10
		::Class_1_64C1E63642C4A2DF<::RPG::Client::ClockParkDiceItem*>* _DiceItemPool; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsAllDiceInSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ISALLDICEINSLOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_CLEAR_OFFSET))(this);
		}

		::RPG::Client::ClockParkDiceItem* AddDiceAndGet(::System::UInt32 diceValue)
		{
			return ((::RPG::Client::ClockParkDiceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICEANDGET_OFFSET))(this, diceValue);
		}

		::System::Void AddDice(::System::UInt32 diceValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_ADDDICE_OFFSET))(this, diceValue);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* get_DiceItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_GET_DICEITEMLIST_OFFSET))(this);
		}

		::System::Void set_DiceItemList(::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ClockParkDiceItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKDICEINFO_SET_DICEITEMLIST_OFFSET))(this, value);
		}
	};
}
