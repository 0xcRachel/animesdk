#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x15205B60)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15205A60)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET UNITYSDK_OFFSET(0x152053B0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x15205650)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x152069E0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0x152065D0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0x15205E50)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x15206520)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x15205EA0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x152064B0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x15206BE0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15206B60)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x15206AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideFilter_TypeDefinitionIndex = 61549;

	class HandbookGuideFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideMainTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotWorldIDs; // 0x20
		::System::UInt32 _ChallengeTabTypeID; // 0x28
		::System::Boolean _IsRogueTabUnlocked; // 0x2C
		::System::Boolean _IsChallengeTabUnlocked; // 0x2D
		::System::Boolean ShowRogueGuideSubTabNew; // 0x2E
		::System::UInt32 _RogueTabTypeID; // 0x30
		::System::UInt32 _GrowthGuideTabID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowGrowthTargetNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnReddotRefreshGuide(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET))(this, arg);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateRogueScoreRewardGuideRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdatePrereleaseAvatarRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET))(this);
		}

		::System::Void _InitUnseen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
