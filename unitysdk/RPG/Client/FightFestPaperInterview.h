#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FightFestPaperInterviewRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x925B2B0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x925B2E0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x925B230)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_INFO_OFFSET UNITYSDK_OFFSET(0x925B280)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_NAME_OFFSET UNITYSDK_OFFSET(0x925B250)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_PAPERID_OFFSET UNITYSDK_OFFSET(0x9252A00)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x925AAE0)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_TEXTJOINITEMID_OFFSET UNITYSDK_OFFSET(0x9252A20)
#define RPG_CLIENT_FIGHTFESTPAPERINTERVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x9251FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPaperInterview_TypeDefinitionIndex = 50958;

	class FightFestPaperInterview : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPaperInterviewRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::FightFestPaperInterviewRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPaperInterviewRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_PaperID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_PAPERID_OFFSET))(this);
		}

		::System::UInt32 get_TextJoinItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_TEXTJOINITEMID_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Info()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_INFO_OFFSET))(this);
		}

		::RPG::Client::TextID get_Comment()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_COMMENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPAPERINTERVIEW_GET_DETAIL_OFFSET))(this);
		}
	};
}
