#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class AvatarData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8B0C630)
#define RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8B0C6D0)
#define RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x8B0C5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationAvatarDataHighlightComparer_TypeDefinitionIndex = 48766;

	class ActivityElationAvatarDataHighlightComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* _modifiedAvatarDataList; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* modifiedAvatarDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER__CTOR_OFFSET))(this, modifiedAvatarDataList);
		}

		::System::Int32 Compare(::RPG::Client::AvatarData* a, ::RPG::Client::AvatarData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER_COMPARE_OFFSET))(this, a, b);
		}

		::System::Boolean IsModifiedAvatar(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONAVATARDATAHIGHLIGHTCOMPARER_ISMODIFIEDAVATAR_OFFSET))(this, avatarData);
		}
	};
}
