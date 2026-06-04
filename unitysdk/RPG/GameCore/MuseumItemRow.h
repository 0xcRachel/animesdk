#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSEUMITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190F4DC0)
#define RPG_GAMECORE_MUSEUMITEMROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190F5360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumItemRow_TypeDefinitionIndex = 13555;

	class MuseumItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemSkillList; // 0x10
		::System::UInt32 CollectedReward; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 AreaID; // 0x20
		::System::UInt32 SceneGroupID; // 0x24
		::System::UInt32 StatsB; // 0x28
		::System::Boolean HideGetHint; // 0x2C
		::System::Boolean IsInitial; // 0x2D
		::RPG::Client::TextID MuseumItemDesc; // 0x30
		::System::UInt32 StatsA; // 0x40
		::System::UInt32 DisplayOrder; // 0x44
		::RPG::Client::TextID EvidenceInfoTextID; // 0x48
		::System::UInt32 StatsC; // 0x58
		::System::UInt32 RenewPoint; // 0x5C
		::System::UInt32 UnlockPhase; // 0x60
		::System::UInt32 ScenePropID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumItemRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
