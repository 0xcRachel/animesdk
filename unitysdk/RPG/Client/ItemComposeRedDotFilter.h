#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x133A99B0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133A98B0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0x133A93D0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x133A9EA0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEISNEWREFRESHED_OFFSET UNITYSDK_OFFSET(0x133A9B50)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEMAINTYPEREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x133A9BA0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONREFRESHCOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET UNITYSDK_OFFSET(0x133A9D20)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHISNEW_OFFSET UNITYSDK_OFFSET(0x133A9450)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEISNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x133A9D70)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEREDDOT_OFFSET UNITYSDK_OFFSET(0x133A9BF0)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x133AA090)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133AA010)
#define RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x133A9F90)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemComposeRedDotFilter_TypeDefinitionIndex = 61551;

	class ItemComposeRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeIsNewList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeTypeIsNewList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* ItemComposeNewMainTypeUnlockList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnItemComposeIsNewRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEISNEWREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnItemComposeMainTypeRedDotRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONITEMCOMPOSEMAINTYPEREDDOTREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _OnRefreshComposeFormulaUnlockTabRedDotRefreshed(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__ONREFRESHCOMPOSEFORMULAUNLOCKTABREDDOTREFRESHED_OFFSET))(this, arg);
		}

		::System::Void _RefreshIsNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHISNEW_OFFSET))(this);
		}

		::System::Void _RefreshMainTypeRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEREDDOT_OFFSET))(this);
		}

		::System::Void _RefreshMainTypeIsNewRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER__REFRESHMAINTYPEISNEWREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMCOMPOSEREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
