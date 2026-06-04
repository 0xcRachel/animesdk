#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A1BACD0)
#define RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BB970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleStarConfigRow_TypeDefinitionIndex = 12861;

	class GridFightRoleStarConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BESkillIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x18
		::System::String* BackAbilityName; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* BackParamList; // 0x28
		::Il2CppArray<::System::UInt32>* SkillOverrideSrc; // 0x30
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyModifyList; // 0x38
		::Il2CppArray<::System::UInt32>* BackShowSkillIDList; // 0x40
		::Il2CppArray<::System::UInt32>* FrontShowSkillIDList; // 0x48
		::Il2CppArray<::System::UInt32>* SkillOverrideDest; // 0x50
		::System::String* JsonOverrideConfig; // 0x58
		::RPG::GameCore::FixPoint BackSpeedRewrite; // 0x60
		::RPG::GameCore::FixPoint BackEnergyBar; // 0x68
		::RPG::Client::TextID FrontOneWordDesc; // 0x70
		::RPG::GameCore::FixPoint BackInitialEnergyBar; // 0x80
		::RPG::GameCore::FixPoint StanceDamageDisplay; // 0x88
		::RPG::GameCore::FixPoint BackPowerBase; // 0x90
		::RPG::GameCore::FixPoint BackMaxSP; // 0x98
		::RPG::GameCore::FixPoint FrontPowerBase; // 0xA0
		::RPG::GameCore::FixPoint BackInitialSP; // 0xA8
		::RPG::GameCore::FixPoint ExtraHealBase; // 0xB0
		::System::UInt32 ID; // 0xB8
		::System::UInt32 Star; // 0xBC
		::RPG::GameCore::FixPoint LuckDamage; // 0xC0
		::RPG::GameCore::FixPoint BackSpeedAddedRatio; // 0xC8
		::System::UInt32 BEID; // 0xD0
		::RPG::GameCore::FixPoint ExtraShieldBase; // 0xD8
		::RPG::Client::TextID BackOneWordDesc; // 0xE0
		::RPG::GameCore::FixPoint LuckChance; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleStarConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleStarConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESTARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
