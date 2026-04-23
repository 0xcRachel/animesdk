#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightSeasonTraitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17BAD860)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x17BAD7E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETALLQUESTS_OFFSET UNITYSDK_OFFSET(0x17BADE50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETQUESTS_OFFSET UNITYSDK_OFFSET(0x17BAD8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETSTANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x17BADB90)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ANYFINISHED_OFFSET UNITYSDK_OFFSET(0x17BAE8A0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x17BAE910)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17BAE8C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_QUESTS_OFFSET UNITYSDK_OFFSET(0x17BAD990)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_RELICCOUNT_OFFSET UNITYSDK_OFFSET(0x17BAE900)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_STANDARDQUESTS_OFFSET UNITYSDK_OFFSET(0x17BADC50)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x17BAE8E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITICON_OFFSET UNITYSDK_OFFSET(0x17BAE850)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITNAME_OFFSET UNITYSDK_OFFSET(0x17BAE7F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_REQUESTTAKEQUESTREWARDS_OFFSET UNITYSDK_OFFSET(0x17BADF80)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ANYFINISHED_OFFSET UNITYSDK_OFFSET(0x17BAE8B0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x17BAE8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x17BAE8F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x17BAE440)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17BAD6F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x17BAE2D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0x17BAE160)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitChallenge_TypeDefinitionIndex = 60236;

	class GridFightTraitChallenge : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* _TraitConfig_k__BackingField; // 0x10
		::RPG::GameCore::GridFightSeasonTraitRow* _Row; // 0x18
		::System::UInt32 _SortPriority; // 0x20
		::System::Boolean _IsCompleted_k__BackingField; // 0x24
		::System::Boolean _AnyFinished_k__BackingField; // 0x25

		::System::Void _ctor(::RPG::GameCore::GridFightSeasonTraitRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSeasonTraitRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__CTOR_OFFSET))(this, row);
		}

		::System::Int32 CompareTo(::RPG::Client::GridFightTraitChallenge* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareToWithoutCheckCompleted(::RPG::Client::GridFightTraitChallenge* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitChallenge*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_COMPARETOWITHOUTCHECKCOMPLETED_OFFSET))(this, other);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetStandardQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETSTANDARDQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetAllQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GETALLQUESTS_OFFSET))(this);
		}

		::System::Void RequestTakeQuestRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_REQUESTTAKEQUESTREWARDS_OFFSET))(this);
		}

		::System::Int32 _GetRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetHaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE__GETHAVEGOTTENRELICCOUNT_OFFSET))(this);
		}

		::System::Void UpdateState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_UPDATESTATE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITNAME_OFFSET))(this);
		}

		::System::String* get_TraitIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITICON_OFFSET))(this);
		}

		::System::Boolean get_AnyFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ANYFINISHED_OFFSET))(this);
		}

		::System::Void set_AnyFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ANYFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void set_IsCompleted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_ISCOMPLETED_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitConfig* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Void set_TraitConfig(::RPG::Client::GridFightTraitConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_SET_TRAITCONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>* get_Quests()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_QUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>* get_StandardQuests()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_STANDARDQUESTS_OFFSET))(this);
		}

		::System::Int32 get_RelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_RELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCHALLENGE_GET_HAVEGOTTENRELICCOUNT_OFFSET))(this);
		}
	};
}
