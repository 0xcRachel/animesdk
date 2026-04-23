#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillEffect.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_5D31C4140DCE7D34;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_E8C259E730C95D15;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x18217CB0)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18218D40)
#define RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1821B770)
#define RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x1821B7D0)
#define RPG_GAMECORE_AVATARSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillRow_TypeDefinitionIndex = 12035;

	class AvatarSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* SkillTriggerKey; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x20
		::System::String* UltraSkillIcon; // 0x28
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x30
		::Il2CppArray<::Class_1_E8C259E730C95D15*>* ShowHealList; // 0x38
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x40
		::System::String* SkillIcon; // 0x48
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x50
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x58
		::Il2CppArray<::System::String*>* LevelUpCostList; // 0x60
		::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* ShowDamageList; // 0x68
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x70
		::RPG::Client::TextID SkillName; // 0x78
		::RPG::GameCore::FixPoint BPAdd; // 0x88
		::RPG::GameCore::FixPoint SPNeed; // 0x90
		::RPG::GameCore::FixPoint SPAdd; // 0x98
		::System::Boolean HideInUI; // 0xA0
		::RPG::GameCore::AttackType AttackType; // 0xA4
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0xA8
		::RPG::Client::TextID SkillDesc; // 0xB0
		::System::UInt32 MaxLevel; // 0xC0
		::System::UInt32 Level; // 0xC4
		::RPG::GameCore::FixPoint BPNeed; // 0xC8
		::RPG::GameCore::FixPoint SPBase; // 0xD0
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0xD8
		::RPG::Client::TextID SkillNeed; // 0xE0
		::System::UInt32 SkillID; // 0xF0
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0xF4
		::RPG::Client::TextID SkillTypeDesc; // 0xF8
		::RPG::GameCore::SkillEffect SkillEffect; // 0x108
		::System::Int32 InitCoolDown; // 0x10C
		::RPG::Client::TextID SkillTag; // 0x110
		::System::UInt32 LevelUpRankCond; // 0x120
		::System::Int32 CoolDown; // 0x124
		::RPG::GameCore::FixPoint DelayRatio; // 0x128
		::System::UInt32 LevelUpLevelCond; // 0x130
		::System::Int32 StanceDamageDisplay; // 0x134
		::RPG::Client::TextID SimpleSkillDesc; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSkillRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
