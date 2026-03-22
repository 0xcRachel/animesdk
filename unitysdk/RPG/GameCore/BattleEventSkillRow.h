#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x168D9D60)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168DA8E0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x168D9CA0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x168D9D00)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x168DB4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 11670;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillIcon; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::System::String* UltraSkillIcon; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x28
		::System::String* SkillButtonEffType; // 0x30
		::System::String* CutinPath; // 0x38
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x40
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x48
		::RPG::Client::TextID SkillNeed; // 0x50
		::RPG::GameCore::FixPoint BPAdd; // 0x60
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x68
		::RPG::GameCore::FixPoint DelayRatio; // 0x70
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x78
		::RPG::Client::TextID SkillDesc; // 0x80
		::RPG::Client::TextID SimpleSkillDesc; // 0x90
		::RPG::Client::TextID SkillTypeDesc; // 0xA0
		::RPG::Client::TextID SkillName; // 0xB0
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xC0
		::System::UInt32 SkillID; // 0xC4
		::RPG::GameCore::FixPoint BPNeed; // 0xC8
		::RPG::GameCore::FixPoint SPBase; // 0xD0
		::RPG::GameCore::FixPoint SPNeed; // 0xD8
		::RPG::Client::TextID SkillTag; // 0xE0
		::RPG::GameCore::FixPoint SPAdd; // 0xF0
		::RPG::GameCore::AttackType AttackType; // 0xF8
		::RPG::GameCore::SkillEffect SkillEffect; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleEventSkillRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BattleEventSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattleEventSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
