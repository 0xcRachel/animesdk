#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class ActivityRelicBoxQuestConfigRow; }

#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16028A90)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETALLREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x16028D50)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETCURRENTQUEST_OFFSET UNITYSDK_OFFSET(0x16028B50)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETQUESTREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x16028E70)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETTAKENREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x16028F10)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x16029130)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16029110)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_QUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x16028B30)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_TABID_OFFSET UNITYSDK_OFFSET(0x160290F0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_TAKEREWARD_OFFSET UNITYSDK_OFFSET(0x16028AF0)
#define RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16028AE0)

namespace RPG::Client::RelicBox
{
	inline static constexpr unsigned int RelicBoxRewardData_TypeDefinitionIndex = 68718;

	class RelicBoxRewardData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRelicBoxQuestConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::RelicBox::RelicBoxRewardData* Create(::RPG::GameCore::ActivityRelicBoxQuestConfigRow* row)
		{
			return ((::RPG::Client::RelicBox::RelicBoxRewardData*(*)(::RPG::GameCore::ActivityRelicBoxQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_CREATE_OFFSET))(row);
		}

		::System::Void TakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_TAKEREWARD_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_QUESTIDLIST_OFFSET))(this);
		}

		::RPG::Client::QuestData* GetCurrentQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETCURRENTQUEST_OFFSET))(this);
		}

		::System::Int32 GetAllRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETALLREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTakenRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETTAKENREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetQuestRewardCount(::RPG::Client::QuestData* questData)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GETQUESTREWARDCOUNT_OFFSET))(this, questData);
		}

		::System::UInt32 get_TabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_TABID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICBOX_RELICBOXREWARDDATA_GET_GOTOID_OFFSET))(this);
		}
	};
}
