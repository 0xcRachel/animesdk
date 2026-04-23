#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_766E1CF11E204F43_8;
namespace RPG::Client { class IRogueTournPersonaStyleGift; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x16362C40)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_FORCESELECTGIFTID_OFFSET UNITYSDK_OFFSET(0x16362A00)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISCORE_OFFSET UNITYSDK_OFFSET(0x16362980)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISFORCESELECT_OFFSET UNITYSDK_OFFSET(0x16362A20)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x16362940)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_REMAINREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x16362960)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_STYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x16362920)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0x16362B40)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_FORCESELECTGIFTID_OFFSET UNITYSDK_OFFSET(0x16362A10)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_MAXREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x16362950)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_REMAINREROLLCOUNT_OFFSET UNITYSDK_OFFSET(0x16362970)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_STYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x16362930)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x16362C80)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CONSTRUCT_OFFSET UNITYSDK_OFFSET(0x16362AD0)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16362A30)
#define RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__SETUPSTYLEGIFTLIST_OFFSET UNITYSDK_OFFSET(0x16362CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoguePersonaStyleGiftSelectAction_TypeDefinitionIndex = 61747;

	class RoguePersonaStyleGiftSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* _StyleGiftList_k__BackingField; // 0x10
		::System::UInt32 _MaxRerollCount_k__BackingField; // 0x18
		::System::UInt32 _RemainRerollCount_k__BackingField; // 0x1C
		::System::UInt32 _ForceSelectGiftID_k__BackingField; // 0x20
		::System::UInt32 _RogueActionID; // 0x24

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_766E1CF11E204F43_8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_766E1CF11E204F43_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* get_StyleGiftList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_STYLEGIFTLIST_OFFSET))(this);
		}

		::System::Void set_StyleGiftList(::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyleGift*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_STYLEGIFTLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_MAXREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxRerollCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_MAXREROLLCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_RemainRerollCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_REMAINREROLLCOUNT_OFFSET))(this);
		}

		::System::Void set_RemainRerollCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_REMAINREROLLCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISCORE_OFFSET))(this);
		}

		::System::UInt32 get_ForceSelectGiftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_FORCESELECTGIFTID_OFFSET))(this);
		}

		::System::Void set_ForceSelectGiftID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_SET_FORCESELECTGIFTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsForceSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GET_ISFORCESELECT_OFFSET))(this);
		}

		::System::Void RefreshOnRollRsp(::Class_1_766E1CF11E204F43_8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::Void _Construct(::Class_1_766E1CF11E204F43_8* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__CONSTRUCT_OFFSET))(this, proto);
		}

		::System::Void _SetupStyleGiftList(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* styleGiftIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEPERSONASTYLEGIFTSELECTACTION__SETUPSTYLEGIFTLIST_OFFSET))(this, styleGiftIDs);
		}
	};
}
