#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_41.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_69;
class Class_1_F1F83A16E5B8B459_1;
namespace RPG::GameCore { class MuseumRandomEventConfigRow; }
namespace RPG::GameCore { class RandomEventChoiceRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET UNITYSDK_OFFSET(0x98F0650)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0x98F0630)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET UNITYSDK_OFFSET(0x98F0570)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0x98F05B0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x98F0590)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x98F0610)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0x98F05D0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x98F05F0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET UNITYSDK_OFFSET(0x98F0640)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET UNITYSDK_OFFSET(0x98F0580)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET UNITYSDK_OFFSET(0x98F05C0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET UNITYSDK_OFFSET(0x98F05A0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET UNITYSDK_OFFSET(0x98F0620)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET UNITYSDK_OFFSET(0x98F05E0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x98F0600)
#define RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET UNITYSDK_OFFSET(0x98F09B0)
#define RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x98F0960)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumRandomEvent_TypeDefinitionIndex = 52830;

	class MuseumRandomEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::RandomEventChoiceRow* _SelectedChoice_k__BackingField; // 0x10
		::RPG::GameCore::MuseumRandomEventConfigRow* _RandomEventConfig_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* _RandomEventChoices_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x28
		::Enum_3_DB663931210BBC27_41 _State_k__BackingField; // 0x2C
		::System::UInt32 _RemainOpenDayCount_k__BackingField; // 0x30
		::System::UInt32 _BeginTurn_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::MuseumRandomEventConfigRow* get_RandomEventConfig()
		{
			return ((::RPG::GameCore::MuseumRandomEventConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCONFIG_OFFSET))(this);
		}

		::System::Void set_RandomEventConfig(::RPG::GameCore::MuseumRandomEventConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MuseumRandomEventConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* get_RandomEventChoices()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_RANDOMEVENTCHOICES_OFFSET))(this);
		}

		::System::Void set_RandomEventChoices(::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::RandomEventChoiceRow*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_RANDOMEVENTCHOICES_OFFSET))(this, value);
		}

		::RPG::GameCore::RandomEventChoiceRow* get_SelectedChoice()
		{
			return ((::RPG::GameCore::RandomEventChoiceRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_SELECTEDCHOICE_OFFSET))(this);
		}

		::System::Void set_SelectedChoice(::RPG::GameCore::RandomEventChoiceRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RandomEventChoiceRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_SELECTEDCHOICE_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_41 get_State()
		{
			return ((::Enum_3_DB663931210BBC27_41(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_DB663931210BBC27_41 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_41))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_STATE_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainOpenDayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_REMAINOPENDAYCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainOpenDayCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_REMAINOPENDAYCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BeginTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_GET_BEGINTURN_OFFSET))(this);
		}

		::System::Void set_BeginTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SET_BEGINTURN_OFFSET))(this, value);
		}

		static ::RPG::Client::MuseumRandomEvent* Create(::Class_1_F1F83A16E5B8B459_1* eventInfo)
		{
			return ((::RPG::Client::MuseumRandomEvent*(*)(::Class_1_F1F83A16E5B8B459_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_CREATE_OFFSET))(eventInfo);
		}

		::System::Void SyncSelectResult(::Class_1_120319518E6F6581_69* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_69*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMRANDOMEVENT_SYNCSELECTRESULT_OFFSET))(this, rsp);
		}
	};
}
