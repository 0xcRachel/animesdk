#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19EF7750)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19EF7770)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x19EF7760)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET UNITYSDK_OFFSET(0x19EF7780)
#define EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF7790)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int QueryOffersOptions_TypeDefinitionIndex = 43016;

	class QueryOffersOptions : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::System::String* _OverrideCatalogNamespace_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::String* get_OverrideCatalogNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_GET_OVERRIDECATALOGNAMESPACE_OFFSET))(this);
		}

		::System::Void set_OverrideCatalogNamespace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_QUERYOFFERSOPTIONS_SET_OVERRIDECATALOGNAMESPACE_OFFSET))(this, a1);
		}
	};
}
