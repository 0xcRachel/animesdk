#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_1;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1886B840)
#define RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1886BF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatRankConfigRow_TypeDefinitionIndex = 10781;

	class ActivityDiceCombatRankConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* IconSmallPath; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_1*>* RuleGroupMapList; // 0x20
		::RPG::Client::TextID Name; // 0x28
		::System::UInt32 DiceRankID; // 0x38
		::System::UInt32 RankMaxScore; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityDiceCombatRankConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATRANKCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
