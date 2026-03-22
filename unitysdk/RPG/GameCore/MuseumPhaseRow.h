#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CEFD20)
#define RPG_GAMECORE_MUSEUMPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF0520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumPhaseRow_TypeDefinitionIndex = 12937;

	class MuseumPhaseRow : public ::System::Object
	{
	public:
		::System::String* PhaseIconPath; // 0x10
		::System::UInt32 RenewPointCost; // 0x18
		::System::UInt32 PhaseQuestID; // 0x1C
		::System::UInt32 MuseumPhaseID; // 0x20
		::System::UInt32 UnlockMissionID; // 0x24
		::RPG::Client::TextID PhaseName; // 0x28
		::System::UInt32 PhaseFund; // 0x38
		::System::UInt32 UnlockAreaID; // 0x3C
		::RPG::Client::TextID PhaseTextID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumPhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
