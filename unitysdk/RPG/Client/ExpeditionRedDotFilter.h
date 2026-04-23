#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x161DACF0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161DAC20)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x161DAA70)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161DB750)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__INITUNSEEN_OFFSET UNITYSDK_OFFSET(0x161DB3D0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONCOMPLETEREFRESHED_OFFSET UNITYSDK_OFFSET(0x161DAE90)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0x161DB000)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__ONEXPEDITIONREFRESHED_OFFSET UNITYSDK_OFFSET(0x161DB370)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETEOREMPTY_OFFSET UNITYSDK_OFFSET(0x161DAEE0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0x161DB050)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x161DB8F0)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161DB870)
#define RPG_CLIENT_EXPEDITIONREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x161DB7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionRedDotFilter_TypeDefinitionIndex = 61544;

	class ExpeditionRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionGroupsList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* NewExpeditionsList; // 0x18
		::System::Boolean IsCompleted; // 0x20
		::System::Boolean IsEmpty; // 0x21

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

		::System::Void _RefreshCompleteOrEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONREDDOTFILTER__REFRESHCOMPLETEOREMPTY_OFFSET))(this);
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
