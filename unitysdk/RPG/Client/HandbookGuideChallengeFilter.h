#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x94878B0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9487840)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x9487740)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9487EC0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHCHALLENGE_OFFSET UNITYSDK_OFFSET(0x9487C30)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHGUIDE_OFFSET UNITYSDK_OFFSET(0x9487BA0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATELATESTUPDATE_OFFSET UNITYSDK_OFFSET(0x9487C80)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x94877F0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATESUBTAB_OFFSET UNITYSDK_OFFSET(0x9487D80)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9488020)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9487FA0)
#define RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9487F20)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookGuideChallengeFilter_TypeDefinitionIndex = 53244;

	class HandbookGuideChallengeFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RedDotGuideSubTabIDs; // 0x10
		::System::Boolean ShowLatestUpdateRedDot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRedDotRefreshGuide(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHGUIDE_OFFSET))(this, arg);
		}

		::System::Void _OnRedDotRefreshChallenge(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__ONREDDOTREFRESHCHALLENGE_OFFSET))(this, arg);
		}

		::System::Void _UpdateRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATEREDDOT_OFFSET))(this);
		}

		::System::Void _UpdateLatestUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATELATESTUPDATE_OFFSET))(this);
		}

		::System::Void _UpdateSubTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER__UPDATESUBTAB_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKGUIDECHALLENGEFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
