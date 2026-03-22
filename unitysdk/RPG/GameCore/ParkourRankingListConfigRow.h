#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3745C69C00F04B7D;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D17FC0)
#define RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D181F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourRankingListConfigRow_TypeDefinitionIndex = 11020;

	class ParkourRankingListConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_3745C69C00F04B7D*>* LevelBestRecordList; // 0x10
		::System::String* NPCIconPath; // 0x18
		::RPG::Client::TextID NPCName; // 0x20
		::System::UInt32 RailBallID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ParkourRankingListConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParkourRankingListConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURRANKINGLISTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
