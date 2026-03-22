#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16CE0970)
#define RPG_GAMECORE_MONSTERSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CE11A0)
#define RPG_GAMECORE_MONSTERSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16CE22B0)
#define RPG_GAMECORE_MONSTERSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x16CE2310)
#define RPG_GAMECORE_MONSTERSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE2350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterSkillRow_TypeDefinitionIndex = 12911;

	class MonsterSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::System::String*>* ModifierList; // 0x28
		::Il2CppArray<::System::UInt32>* PhaseList; // 0x30
		::System::String* IconPath; // 0x38
		::RPG::GameCore::FixPoint SPHitBase; // 0x40
		::RPG::Client::TextID SkillDesc; // 0x48
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x58
		::System::Boolean IsThreat; // 0x60
		::System::UInt32 SkillID; // 0x64
		::RPG::Client::TextID SkillName; // 0x68
		::RPG::GameCore::AttackType AttackType; // 0x78
		::System::UInt32 AI_CD; // 0x7C
		::RPG::Client::TextID SkillTypeDesc; // 0x80
		::System::UInt32 AI_ICD; // 0x90
		::RPG::GameCore::FixPoint DelayRatio; // 0x98
		::RPG::Client::TextID SkillTag; // 0xA0
		::RPG::GameCore::AttackDamageType DamageType; // 0xB0
		::System::UInt32 SortOrder; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterSkillRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
