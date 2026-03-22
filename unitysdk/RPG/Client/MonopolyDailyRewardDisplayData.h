#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EBB10EC01CCC4716_14;

#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_CHEATDICEVALUE_OFFSET UNITYSDK_OFFSET(0x987F790)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_CURRENCYVALUE_OFFSET UNITYSDK_OFFSET(0x987F750)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_DICEVALUE_OFFSET UNITYSDK_OFFSET(0x987F770)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_ISRECEIVEDDICE_OFFSET UNITYSDK_OFFSET(0x987F7B0)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_NEXTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x987F7D0)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_CHEATDICEVALUE_OFFSET UNITYSDK_OFFSET(0x987F7A0)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_CURRENCYVALUE_OFFSET UNITYSDK_OFFSET(0x987F760)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_DICEVALUE_OFFSET UNITYSDK_OFFSET(0x987F780)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_ISRECEIVEDDICE_OFFSET UNITYSDK_OFFSET(0x987F7C0)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_NEXTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x987F7E0)
#define RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x987F710)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDailyRewardDisplayData_TypeDefinitionIndex = 52756;

	class MonopolyDailyRewardDisplayData : public ::System::Object
	{
	public:
		::System::UInt32 _DiceValue_k__BackingField; // 0x10
		::System::UInt32 _CurrencyValue_k__BackingField; // 0x14
		::System::UInt32 _NextTimeStamp_k__BackingField; // 0x18
		::System::UInt32 _CheatDiceValue_k__BackingField; // 0x1C
		::System::Boolean _IsReceivedDice_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_EBB10EC01CCC4716_14* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA__CTOR_OFFSET))(this, rsp);
		}

		::System::UInt32 get_CurrencyValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_CURRENCYVALUE_OFFSET))(this);
		}

		::System::Void set_CurrencyValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_CURRENCYVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_DiceValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_DICEVALUE_OFFSET))(this);
		}

		::System::Void set_DiceValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_DICEVALUE_OFFSET))(this, value);
		}

		::System::UInt32 get_CheatDiceValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_CHEATDICEVALUE_OFFSET))(this);
		}

		::System::Void set_CheatDiceValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_CHEATDICEVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReceivedDice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_ISRECEIVEDDICE_OFFSET))(this);
		}

		::System::Void set_IsReceivedDice(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_ISRECEIVEDDICE_OFFSET))(this, value);
		}

		::System::UInt32 get_NextTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_GET_NEXTTIMESTAMP_OFFSET))(this);
		}

		::System::Void set_NextTimeStamp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDAILYREWARDDISPLAYDATA_SET_NEXTTIMESTAMP_OFFSET))(this, value);
		}
	};
}
