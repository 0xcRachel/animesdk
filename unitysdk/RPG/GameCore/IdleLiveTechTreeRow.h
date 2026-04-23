#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/IdleLiveTechTreeEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18887CA0)
#define RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188883A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTechTreeRow_TypeDefinitionIndex = 11169;

	class IdleLiveTechTreeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* AbilityParamList; // 0x10
		::Il2CppArray<::System::UInt32>* PrePointIDList; // 0x18
		::System::String* AbilityName; // 0x20
		::System::String* IconPath; // 0x28
		::RPG::Client::TextID Name; // 0x30
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x48
		::RPG::GameCore::ILBattleAvatarTag TechPowerTagLimit; // 0x4C
		::RPG::GameCore::IdleLiveTechTreeEffectType Type; // 0x50
		::System::UInt32 Cost; // 0x54
		::RPG::Client::TextID Desc; // 0x58
		::RPG::GameCore::FixPoint TechPowerFactor; // 0x68
		::System::Boolean IsBase; // 0x70
		::System::Boolean IsMainPoint; // 0x71
		::System::UInt32 Param; // 0x74
		::System::Double PropertyParam; // 0x78
		::RPG::GameCore::FixPoint TechAddPower; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveTechTreeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTechTreeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETECHTREEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
