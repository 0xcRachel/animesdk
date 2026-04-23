#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x177F8BA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x177F8FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET UNITYSDK_OFFSET(0x177F8F30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET UNITYSDK_OFFSET(0x177F8E80)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDisplayWallContext_AvatarPhotoComparer_TypeDefinitionIndex = 68565;

	class TrainPartyBuildDisplayWallContext_AvatarPhotoComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemA, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* itemB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER_COMPARE_OFFSET))(this, itemA, itemB);
		}

		::System::UInt32 _GetRarity(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETRARITY_OFFSET))(this, item);
		}

		::System::UInt32 _GetID(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDISPLAYWALLCONTEXT_AVATARPHOTOCOMPARER__GETID_OFFSET))(this, item);
		}
	};
}
