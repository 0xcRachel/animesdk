#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16DBC6A0)
#define RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16DBC8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordRewardFinishWayRow_TypeDefinitionIndex = 11157;

	class PunkLordRewardFinishWayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID FinishName; // 0x10
		::RPG::GameCore::PunkLordMonsterRare FinishRare; // 0x20
		::System::UInt32 FinishPoint; // 0x24
		::System::UInt32 FinishID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PunkLordRewardFinishWayRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PunkLordRewardFinishWayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDREWARDFINISHWAYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
