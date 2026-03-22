#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E6B080)
#define RPG_CLIENT_CHALLENGEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E6AFE0)
#define RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x8E6BDA0)
#define RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x8E6BD80)
#define RPG_CLIENT_CHALLENGEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x8E6A110)
#define RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET UNITYSDK_OFFSET(0x8E6BDB0)
#define RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x8E6BD90)
#define RPG_CLIENT_CHALLENGEFILTER__ADDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0x8E6BE60)
#define RPG_CLIENT_CHALLENGEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8E6BDC0)
#define RPG_CLIENT_CHALLENGEFILTER__UPDATENEWSCHEDULEREDDOTS_OFFSET UNITYSDK_OFFSET(0x8E6AA60)
#define RPG_CLIENT_CHALLENGEFILTER__UPDATEREWARDREDDOTS_OFFSET UNITYSDK_OFFSET(0x8E6A190)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x8E6BF80)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E6BF00)
#define RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8E6BE80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFilter_TypeDefinitionIndex = 53237;

	class ChallengeFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewScheduleGroupIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardGroupIDs_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _UpdateRewardRedDots(::System::Object* org)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__UPDATEREWARDREDDOTS_OFFSET))(this, org);
		}

		::System::Void _UpdateNewScheduleRedDots(::System::Object* org)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__UPDATENEWSCHEDULEREDDOTS_OFFSET))(this, org);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotRewardGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTREWARDGROUPIDS_OFFSET))(this);
		}

		::System::Void set_RedDotRewardGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTREWARDGROUPIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotNewScheduleGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_GET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET))(this);
		}

		::System::Void set_RedDotNewScheduleGroupIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER_SET_REDDOTNEWSCHEDULEGROUPIDS_OFFSET))(this, value);
		}

		::System::Void _AddHandlers_b__2_0(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER__ADDHANDLERS_B__2_0_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
