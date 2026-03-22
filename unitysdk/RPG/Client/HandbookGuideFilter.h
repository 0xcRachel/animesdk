#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9489A80)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9489980)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWGROWTHTARGETNEW_OFFSET UNITYSDK_OFFSET(0x94892C0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWROGUESCOREREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x94891E0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9489560)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x948A8F0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0x948A4F0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0x9489D70)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEPRERELEASEAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x948A440)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x9489DC0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER__UPDATEROGUESCOREREWARDGUIDEREDDOT_OFFSET UNITYSDK_OFFSET(0x948A3D0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x948AAF0)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x948AA70)
#define RPG_CLIENT_HANDBOOKGUIDEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x948A9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideFilter_TypeDefinitionIndex = 53245;

	class HandbookGuideFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideMainTabIDs; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotWorldIDs; // 0x20
		::System::UInt32 _GrowthGuideTabID; // 0x28
		::System::UInt32 _ChallengeTabTypeID; // 0x2C
		::System::Boolean _IsRogueTabUnlocked; // 0x30
		::System::Boolean ShowRogueGuideSubTabNew; // 0x31
		::System::Boolean _IsChallengeTabUnlocked; // 0x32
		::System::UInt32 _RogueTabTypeID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowRogueScoreRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDEFILTER_GET_SHOWROGUESCOREREWARDREDDOT_OFFSET))(this);
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
