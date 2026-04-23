#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Achievements/DefinitionV2Internal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Achievements { class StatThresholds; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1943F4F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x1943F590)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1943F5F0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1943F570)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1943F550)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x1943F5D0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x1943F610)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1943F530)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1943F510)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x1943F5B0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_1_OFFSET UNITYSDK_OFFSET(0x194409A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_ACHIEVEMENTID_OFFSET UNITYSDK_OFFSET(0x1943F500)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_FLAVORTEXT_OFFSET UNITYSDK_OFFSET(0x1943F5A0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_ISHIDDEN_OFFSET UNITYSDK_OFFSET(0x1943F600)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1943F580)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1943F560)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x1943F5E0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_OFFSET UNITYSDK_OFFSET(0x1943F630)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_STATTHRESHOLDS_OFFSET UNITYSDK_OFFSET(0x1943F620)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1943F540)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1943F520)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDICONURL_OFFSET UNITYSDK_OFFSET(0x1943F5C0)
#define EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19440B00)

namespace Epic::OnlineServices::Achievements
{
	inline static constexpr unsigned int DefinitionV2_TypeDefinitionIndex = 42605;

	class DefinitionV2 : public ::System::Object
	{
	public:
		::System::String* _LockedDescription_k__BackingField; // 0x10
		::System::String* _LockedDisplayName_k__BackingField; // 0x18
		::System::String* _UnlockedIconURL_k__BackingField; // 0x20
		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* _StatThresholds_k__BackingField; // 0x28
		::System::String* _FlavorText_k__BackingField; // 0x30
		::System::String* _UnlockedDisplayName_k__BackingField; // 0x38
		::System::String* _LockedIconURL_k__BackingField; // 0x40
		::System::String* _UnlockedDescription_k__BackingField; // 0x48
		::System::String* _AchievementId_k__BackingField; // 0x50
		::System::Boolean _IsHidden_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2__CTOR_OFFSET))(this);
		}

		::System::String* get_AchievementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_ACHIEVEMENTID_OFFSET))(this);
		}

		::System::Void set_AchievementId(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_ACHIEVEMENTID_OFFSET))(this, value);
		}

		::System::String* get_UnlockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_UnlockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_UnlockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_UnlockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_LockedDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDDISPLAYNAME_OFFSET))(this);
		}

		::System::Void set_LockedDisplayName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDDISPLAYNAME_OFFSET))(this, value);
		}

		::System::String* get_LockedDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDDESCRIPTION_OFFSET))(this);
		}

		::System::Void set_LockedDescription(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDDESCRIPTION_OFFSET))(this, value);
		}

		::System::String* get_FlavorText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_FLAVORTEXT_OFFSET))(this);
		}

		::System::Void set_FlavorText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_FLAVORTEXT_OFFSET))(this, value);
		}

		::System::String* get_UnlockedIconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_UNLOCKEDICONURL_OFFSET))(this);
		}

		::System::Void set_UnlockedIconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_UNLOCKEDICONURL_OFFSET))(this, value);
		}

		::System::String* get_LockedIconURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_LOCKEDICONURL_OFFSET))(this);
		}

		::System::Void set_LockedIconURL(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_LOCKEDICONURL_OFFSET))(this, value);
		}

		::System::Boolean get_IsHidden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_ISHIDDEN_OFFSET))(this);
		}

		::System::Void set_IsHidden(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_ISHIDDEN_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* get_StatThresholds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_GET_STATTHRESHOLDS_OFFSET))(this);
		}

		::System::Void set_StatThresholds(::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::Achievements::StatThresholds*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_STATTHRESHOLDS_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2Internal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Achievements::DefinitionV2Internal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ACHIEVEMENTS_DEFINITIONV2_SET_1_OFFSET))(this, other);
		}
	};
}
