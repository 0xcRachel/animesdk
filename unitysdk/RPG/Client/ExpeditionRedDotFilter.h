#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x91B34D0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91B3400)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x91B3250)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x91B3D80)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0x91B3A90)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET UNITYSDK_OFFSET(0x91B3670)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0x91B3760)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET UNITYSDK_OFFSET(0x91B3A30)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x91B36C0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0x91B37B0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x91B3F20)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91B3EA0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x91B3E20)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionRedDotFilter_TypeDefinitionIndex = 53240;

	class ExpeditionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionGroupsList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionsList; // 0x18
		::System::Boolean IsCompleted; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExpeditionCompleteRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnExpeditionIsNewRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnExpeditionRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _InitUnseen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET))(this);
		}

		::System::Void _RefreshComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETE_OFFSET))(this);
		}

		::System::Void _RefreshIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
