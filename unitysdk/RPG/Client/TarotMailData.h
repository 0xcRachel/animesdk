#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTMAILDATA_HASSEEN_OFFSET UNITYSDK_OFFSET(0xA039E90)
#define RPG_CLIENT_TAROTMAILDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0xA048520)
#define RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA048390)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotMailData_TypeDefinitionIndex = 53984;

	class TarotMailData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* TextIDList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Boolean IsSpecial; // 0x1C
		::RPG::Client::TextID TitleTextID; // 0x20
		::RPG::Client::TextID ToTextID; // 0x30
		::RPG::Client::TextID FromTextID; // 0x40

		::System::Void _ctor(::System::UInt32 mailID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA__CTOR_OFFSET))(this, mailID);
		}

		::System::Boolean HasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA_HASSEEN_OFFSET))(this);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTMAILDATA_MARKSEEN_OFFSET))(this);
		}
	};
}
