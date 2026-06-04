#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GACHPOOLREWARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19C88110)
#define RPG_GAMECORE_GACHPOOLREWARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19C884E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachPoolRewardConfigRow_TypeDefinitionIndex = 13893;

	class GachPoolRewardConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::RPG::Client::TextID Desc; // 0x20
		::RPG::Client::TextID Bubble; // 0x30
		::System::UInt32 ActivityID; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID Tips; // 0x48
		::System::UInt32 GachaID; // 0x58
		::System::UInt32 QuestID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHPOOLREWARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GachPoolRewardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GachPoolRewardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHPOOLREWARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
