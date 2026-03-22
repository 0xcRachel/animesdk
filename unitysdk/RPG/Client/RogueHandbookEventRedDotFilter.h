#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DF3DE0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0x9DF4280)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0x9DF42A0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9DF3C10)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0x9DF4290)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0x9DF42B0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0x9DF3F20)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF42C0)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DF4350)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DF42D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookEventRedDotFilter_TypeDefinitionIndex = 53253;

	class RogueHandbookEventRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		// static const ::System::UInt32 _AllTabID = 0x1; // 0x0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UniqueEventRewardAvailableTabIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableTabIDs_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableTabIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableTabIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
