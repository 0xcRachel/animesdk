#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookStory_IServerAgent; }
namespace RPG::GameCore { class TarotBookStoryRow; }

#define RPG_CLIENT_TAROTBOOKSTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA045230)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xA047840)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xA0477B0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CLUELIST_OFFSET UNITYSDK_OFFSET(0xA040680)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0xA035030)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASPRECONDITIONMET_OFFSET UNITYSDK_OFFSET(0xA035130)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA0350D0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_ID_OFFSET UNITYSDK_OFFSET(0xA03FE90)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA03FC80)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_PRESTORYID_OFFSET UNITYSDK_OFFSET(0xA047820)
#define RPG_CLIENT_TAROTBOOKSTORY_MARKHASFINISHED_OFFSET UNITYSDK_OFFSET(0xA035FC0)
#define RPG_CLIENT_TAROTBOOKSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xA047860)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookStory_TypeDefinitionIndex = 54013;

	class TarotBookStory : public ::System::Object
	{
	public:
		::RPG::GameCore::TarotBookStoryRow* _Meta; // 0x10
		::RPG::Client::TarotBookStory_IServerAgent* _ServerAgent; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookStoryRow* meta, ::RPG::Client::TarotBookStory_IServerAgent* serverAgent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookStoryRow*, ::RPG::Client::TarotBookStory_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY__CTOR_OFFSET))(this, meta, serverAgent);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_PreStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_PRESTORYID_OFFSET))(this);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CHARACTERID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ClueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CLUELIST_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasPreconditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASPRECONDITIONMET_OFFSET))(this);
		}

		::System::Boolean get_HasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookStory* Create(::RPG::GameCore::TarotBookStoryRow* meta, ::RPG::Client::TarotBookStory_IServerAgent* serverAgent)
		{
			return ((::RPG::Client::TarotBookStory*(*)(::RPG::GameCore::TarotBookStoryRow*, ::RPG::Client::TarotBookStory_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_CREATE_OFFSET))(meta, serverAgent);
		}

		::System::Void MarkHasFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_MARKHASFINISHED_OFFSET))(this);
		}
	};
}
