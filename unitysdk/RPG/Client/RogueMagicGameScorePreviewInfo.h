#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70D2E0F3216AAE0C_17;
namespace RPG::Client { class RogueMagicGameScorePreviewDataItem; }

#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ISALLEMPTY_OFFSET UNITYSDK_OFFSET(0x172BE720)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ROGUESCOREPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0x172BE700)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_TALENTCOINPREVIEWITEM_OFFSET UNITYSDK_OFFSET(0x172BE710)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x172BC3E0)
#define RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172BAE40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameScorePreviewInfo_TypeDefinitionIndex = 62097;

	class RogueMagicGameScorePreviewInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _RogueScorePreviewItem_k__BackingField; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewDataItem* _TalentCoinPreviewItem_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_70D2E0F3216AAE0C_17* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::RogueMagicGameScorePreviewDataItem* get_RogueScorePreviewItem()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ROGUESCOREPREVIEWITEM_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameScorePreviewDataItem* get_TalentCoinPreviewItem()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_TALENTCOINPREVIEWITEM_OFFSET))(this);
		}

		::System::Boolean get_IsAllEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMESCOREPREVIEWINFO_GET_ISALLEMPTY_OFFSET))(this);
		}
	};
}
