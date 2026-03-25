#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Ecom/CatalogReleaseInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x86459A0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x86459C0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x86459E0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_1_OFFSET UNITYSDK_OFFSET(0x8646120)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_COMPATIBLEAPPIDS_OFFSET UNITYSDK_OFFSET(0x86459B0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_COMPATIBLEPLATFORMS_OFFSET UNITYSDK_OFFSET(0x86459D0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_OFFSET UNITYSDK_OFFSET(0x8645A00)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_RELEASENOTE_OFFSET UNITYSDK_OFFSET(0x86459F0)
#define EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8646250)

namespace Epic::OnlineServices::Ecom
{
	inline static constexpr unsigned int CatalogRelease_TypeDefinitionIndex = 36312;

	class CatalogRelease : public ::System::Object
	{
	public:
		::System::String* _ReleaseNote_k__BackingField; // 0x10
		::Il2CppArray<::System::String*>* _CompatiblePlatforms_k__BackingField; // 0x18
		::Il2CppArray<::System::String*>* _CompatibleAppIds_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_CompatibleAppIds()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_COMPATIBLEAPPIDS_OFFSET))(this);
		}

		::System::Void set_CompatibleAppIds(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_COMPATIBLEAPPIDS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_CompatiblePlatforms()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_COMPATIBLEPLATFORMS_OFFSET))(this);
		}

		::System::Void set_CompatiblePlatforms(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_COMPATIBLEPLATFORMS_OFFSET))(this, value);
		}

		::System::String* get_ReleaseNote()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_GET_RELEASENOTE_OFFSET))(this);
		}

		::System::Void set_ReleaseNote(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_RELEASENOTE_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogReleaseInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Ecom::CatalogReleaseInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ECOM_CATALOGRELEASE_SET_1_OFFSET))(this, other);
		}
	};
}
