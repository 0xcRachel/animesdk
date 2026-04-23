#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SwordTrainingUnlockData; }
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16FFE530)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FFEA50)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x16FFEF30)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET UNITYSDK_OFFSET(0x16FFE2D0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x16FFF090)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x16FE6800)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x16FFF020)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x16FFE9F0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET UNITYSDK_OFFSET(0x16FFECF0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x16FFEDD0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET UNITYSDK_OFFSET(0x16FFEBF0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET UNITYSDK_OFFSET(0x16FFEEB0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET UNITYSDK_OFFSET(0x16FFEE40)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x16FFED60)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x16FFEC70)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x16FFEA90)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET UNITYSDK_OFFSET(0x16FFDC50)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x16FFF0A0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFE9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryLineData_TypeDefinitionIndex = 57186;

	class SwordTrainingStoryLineData : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingUnlockData* UnlockData; // 0x10
		::System::UInt32 StoryLineID; // 0x18
		::System::Boolean _IsTriggered_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStoryLineData* Create(::System::UInt32 storyLineID)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET))(storyLineID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockConditionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryHardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStoryLineRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_StartTalkImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_TalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET))(this);
		}

		::System::UInt32 get_StartTalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EndingStoryIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET))(this);
		}

		::System::String* get_StoryLineImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryLineDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void set_IsTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET))(this, value);
		}
	};
}
