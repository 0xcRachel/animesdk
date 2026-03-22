#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotWikiSubTitle; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET UNITYSDK_OFFSET(0xA049450)
#define RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET UNITYSDK_OFFSET(0xA048240)
#define RPG_CLIENT_TAROTWIKITIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0xA047E00)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotWikiTimeLine_TypeDefinitionIndex = 54016;

	class TarotWikiTimeLine : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotWikiSubTitle*>* SubTitleList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 SpecialType; // 0x1C
		::System::Single Progress; // 0x20
		::RPG::Client::TextID TitleTextID; // 0x28

		::System::Void _ctor(::System::UInt32 timeLineID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE__CTOR_OFFSET))(this, timeLineID);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_ISNEW_OFFSET))(this);
		}

		::System::Void MarkAllSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTWIKITIMELINE_MARKALLSEEN_OFFSET))(this);
		}
	};
}
