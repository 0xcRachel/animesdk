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

#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16FC83C0)
#define RPG_GAMECORE_AVATARSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FC9450)
#define RPG_GAMECORE_AVATARSKILLROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16FCBF40)
#define RPG_GAMECORE_AVATARSKILLROW_RESET_OFFSET UNITYSDK_OFFSET(0x16FCBFA0)
#define RPG_GAMECORE_AVATARSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FCC030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkillRow_TypeDefinitionIndex = 11625;

	class AvatarSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RatedSkillTreeID; // 0x10
		::System::String* UltraSkillIcon; // 0x18
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x20
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x28
		::System::String* SkillIcon; // 0x30
		::Il2CppArray<::System::String*>* LevelUpCostList; // 0x38
		::System::String* SkillTriggerKey; // 0x40
		::Il2CppArray<::Class_1_E8C259E730C95D15*>* ShowHealList; // 0x48
		::Il2CppArray<::System::UInt32>* RatedRankID; // 0x50
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x58
		::Il2CppArray<::Class_1_5D31C4140DCE7D34*>* ShowDamageList; // 0x60
		::Il2CppArray<::RPG::GameCore::FixPoint>* ShowStanceList; // 0x68
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x70
		::RPG::Client::TextID SkillName; // 0x78
		::RPG::GameCore::FixPoint DelayRatio; // 0x88
		::System::Boolean HideInUI; // 0x90
		::RPG::GameCore::AttackType AttackType; // 0x94
		::System::Int32 CoolDown; // 0x98
		::RPG::GameCore::SkillEffect SkillEffect; // 0x9C
		::RPG::Client::TextID SkillNeed; // 0xA0
		::RPG::Client::TextID SkillDesc; // 0xB0
		::RPG::GameCore::FixPoint SPBase; // 0xC0
		::RPG::GameCore::FixPoint BPNeed; // 0xC8
		::RPG::Client::TextID SkillTypeDesc; // 0xD0
		::RPG::GameCore::FixPoint SPNeed; // 0xE0
		::RPG::Client::TextID SimpleSkillDesc; // 0xE8
		::System::UInt32 MaxLevel; // 0xF8
		::System::Int32 InitCoolDown; // 0xFC
		::RPG::GameCore::FixPoint SkillComboValueDelta; // 0x100
		::RPG::GameCore::FixPoint SPMultipleRatio; // 0x108
		::System::UInt32 Level; // 0x110
		::System::UInt32 SkillID; // 0x114
		::RPG::GameCore::FixPoint SPAdd; // 0x118
		::RPG::GameCore::FixPoint BPAdd; // 0x120
		::RPG::Client::TextID SkillTag; // 0x128
		::RPG::GameCore::AttackDamageType StanceDamageType; // 0x138
		::System::UInt32 LevelUpRankCond; // 0x13C
		::System::UInt32 LevelUpLevelCond; // 0x140
		::System::Int32 StanceDamageDisplay; // 0x144

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
