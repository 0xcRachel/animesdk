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

#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x187A8E50)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187A9A40)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x187A8D80)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x187A8DE0)
#define RPG_GAMECORE_BATTLEEVENTSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187AA6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventSkillRow_TypeDefinitionIndex = 12153;

	class BattleEventSkillRow : public ::System::Object
	{
	public:
		::System::String* SkillTriggerKey; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::System::String* SkillIcon; // 0x28
		::System::String* UltraSkillIcon; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x38
		::System::String* CutinPath; // 0x40
		::System::String* SkillButtonEffType; // 0x48
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x50
		::RPG::Client::TextID SkillTypeDesc; // 0x58
		::RPG::GameCore::FixPoint DelayRatio; // 0x68
		::RPG::GameCore::FixPoint SPNeed; // 0x70
		::RPG::GameCore::FixPoint BPAdd; // 0x78
		::RPG::Client::TextID SkillName; // 0x80
		::RPG::GameCore::FixPoint SPBase; // 0x90
		::RPG::GameCore::AttackType AttackType; // 0x98
		::System::Int32 StanceDamageDisplay; // 0x9C
		::RPG::Client::TextID SimpleSkillDesc; // 0xA0
		::System::UInt32 SkillID; // 0xB0
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xB4
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xB8
		::RPG::GameCore::FixPoint SPAdd; // 0xC0
		::RPG::Client::TextID SkillTag; // 0xC8
		::RPG::GameCore::FixPoint BPNeed; // 0xD8
		::RPG::Client::TextID SkillDesc; // 0xE0
		::RPG::GameCore::SkillEffect SkillEffect; // 0xF0
		::RPG::Client::TextID SkillNeed; // 0xF8

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
