#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleTargetConfigType.h"
#include "unitysdk/RPG/GameCore/BattleTargetIconType.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF7080)
#define RPG_GAMECORE_BATTLETARGETCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF7A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleTargetConfigRow_TypeDefinitionIndex = 11729;

	class BattleTargetConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HintStep; // 0x10
		::Il2CppArray<::System::UInt32>* MultiTarget; // 0x18
		::System::String* AbilityName; // 0x20
		::RPG::GameCore::ParamType ParamType; // 0x28
		::System::UInt32 TargetParam; // 0x2C
		::RPG::Client::TextID TargetName; // 0x30
		::System::Boolean IsFixableHeight; // 0x40
		::System::Boolean SkipWhenSuccessOnEnterBattle; // 0x41
		::System::Boolean ShowInScoreCounter; // 0x42
		::RPG::GameCore::BattleTargetIconType IconType; // 0x44
		::System::UInt32 IconNum; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 IsShowProgress; // 0x50
		::RPG::GameCore::BattleTargetConfigType Type; // 0x54
		::RPG::Client::TextID TargetNameSimple; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleTargetConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleTargetConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLETARGETCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
