#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CheckoutEntryInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_GET_OFFERID_OFFSET UNITYSDK_OFFSET(0x196DA1B0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_1_OFFSET UNITYSDK_OFFSET(0x196DA3C0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFERID_OFFSET UNITYSDK_OFFSET(0x196DA1C0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFSET UNITYSDK_OFFSET(0x196DA1D0)
#define EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x196DA5D0)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CheckoutEntry_TypeDefinitionIndex = 42142;

	class CheckoutEntry : public ::System::Object
	{
	public:
		::System::String* _OfferId_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY__CTOR_OFFSET))(this);
		}

		::System::String* get_OfferId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_GET_OFFERID_OFFSET))(this);
		}

		::System::Void set_OfferId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFERID_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutEntryInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CheckoutEntryInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CHECKOUTENTRY_SET_1_OFFSET))(this, other);
		}
	};
}
