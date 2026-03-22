#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMIRACLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16ECBC60)
#define RPG_GAMECORE_ROGUETOURNMIRACLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECC3E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiracleRow_TypeDefinitionIndex = 13669;

	class RogueTournMiracleRow : public ::System::Object
	{
	public:
		::System::UInt32 MiracleID; // 0x10
		::System::UInt32 MiracleDisplayID; // 0x14
		::RPG::GameCore::RogueMiracleCategory MiracleCategory; // 0x18
		::System::UInt32 MiracleEffectDisplayID; // 0x1C
		::System::UInt32 HandbookMiracleID; // 0x20
		::RPG::GameCore::RogueTournMode TournMode; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournMiracleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournMiracleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
