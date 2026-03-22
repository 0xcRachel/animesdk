#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityHipplen { class ActivityHipplenIncidentSettlementParam; }
namespace RPG::GameCore { class HipplenIncidentCommitOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomOptionConfig; }
namespace RPG::GameCore { class HipplenIncidentRandomSettlementConfig; }
namespace RPG::GameCore { class HipplenIncidentSettlementConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATECOMMITOPTION_OFFSET UNITYSDK_OFFSET(0x8B27F60)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATERANDOMOPTION_OFFSET UNITYSDK_OFFSET(0x8B280C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATESETTLEMENTPARAM_OFFSET UNITYSDK_OFFSET(0x8B28190)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x8B27EE0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0x8B27EC0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISSUCC_OFFSET UNITYSDK_OFFSET(0x8B27F40)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_RATIOLIST_OFFSET UNITYSDK_OFFSET(0x8B27F20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_SETTLEMENTID_OFFSET UNITYSDK_OFFSET(0x8B27EA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_WEIGHTLIST_OFFSET UNITYSDK_OFFSET(0x8B27F00)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_DIALOGID_OFFSET UNITYSDK_OFFSET(0x8B27EF0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISRANDOM_OFFSET UNITYSDK_OFFSET(0x8B27ED0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISSUCC_OFFSET UNITYSDK_OFFSET(0x8B27F50)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_RATIOLIST_OFFSET UNITYSDK_OFFSET(0x8B27F30)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_WEIGHTLIST_OFFSET UNITYSDK_OFFSET(0x8B27F10)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8B280B0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentOption_TypeDefinitionIndex = 59941;

	class ActivityHipplenIncidentOption : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _WeightList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RatioList_k__BackingField; // 0x18
		::RPG::GameCore::HipplenIncidentSettlementConfig* _Settlement; // 0x20
		::System::UInt32 _DialogID_k__BackingField; // 0x28
		::System::Boolean _IsRandom_k__BackingField; // 0x2C
		::System::Boolean _IsSucc_k__BackingField; // 0x2D

		::System::Void _ctor(::RPG::GameCore::HipplenIncidentSettlementConfig* settlement)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION__CTOR_OFFSET))(this, settlement);
		}

		::System::UInt32 get_SettlementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_SETTLEMENTID_OFFSET))(this);
		}

		::System::Boolean get_IsRandom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISRANDOM_OFFSET))(this);
		}

		::System::Void set_IsRandom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISRANDOM_OFFSET))(this, value);
		}

		::System::UInt32 get_DialogID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_DIALOGID_OFFSET))(this);
		}

		::System::Void set_DialogID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_DIALOGID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_WeightList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_WEIGHTLIST_OFFSET))(this);
		}

		::System::Void set_WeightList(::System::Collections::Generic::List_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_WEIGHTLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RatioList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_RATIOLIST_OFFSET))(this);
		}

		::System::Void set_RatioList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_RATIOLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsSucc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_GET_ISSUCC_OFFSET))(this);
		}

		::System::Void set_IsSucc(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_SET_ISSUCC_OFFSET))(this, value);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* CreateCommitOption(::RPG::GameCore::HipplenIncidentCommitOptionConfig* config, ::RPG::GameCore::HipplenIncidentSettlementConfig* settlement)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentCommitOptionConfig*, ::RPG::GameCore::HipplenIncidentSettlementConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATECOMMITOPTION_OFFSET))(config, settlement);
		}

		static ::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption* CreateRandomOption(::RPG::GameCore::HipplenIncidentRandomOptionConfig* config, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig* settlement, ::System::Collections::Generic::List_1<::System::Int32>* weightList, ::System::Collections::Generic::List_1<::System::UInt32>* ratioList, ::System::Boolean isSucc)
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentOption*(*)(::RPG::GameCore::HipplenIncidentRandomOptionConfig*, ::RPG::GameCore::HipplenIncidentRandomSettlementConfig*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATERANDOMOPTION_OFFSET))(config, settlement, weightList, ratioList, isSucc);
		}

		::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSettlementParam* CreateSettlementParam()
		{
			return ((::RPG::Client::ActivityHipplen::ActivityHipplenIncidentSettlementParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTOPTION_CREATESETTLEMENTPARAM_OFFSET))(this);
		}
	};
}
