#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_D4EDD67361CB4C7A;
class Class_1_DFF86A25F881990E;
class Class_1_EDD10E908F1C4623;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16CDA990)
#define RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CDB7A0)
#define RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16CDF8D0)
#define RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x16CDCBE0)
#define RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET UNITYSDK_OFFSET(0x16CDF9B0)
#define RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x16CDFA60)
#define RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x16CDFA10)
#define RPG_GAMECORE_MONSTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x16CDF930)
#define RPG_GAMECORE_MONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDF9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRow_TypeDefinitionIndex = 12903;

	class MonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_EDD10E908F1C4623*>* CustomValues; // 0x10
		::Il2CppArray<::Class_1_DFF86A25F881990E*>* OverrideSkillParams; // 0x18
		::System::String* OverrideAIPath; // 0x20
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x28
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x30
		::RPG::GameCore::AetherDivideMonsterRow* _ExpandedDataRowCache; // 0x38
		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* OverrideAISkillSequence; // 0x40
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x48
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x50
		::Il2CppArray<::System::UInt32>* SkillList; // 0x58
		::Il2CppArray<::Class_1_D4EDD67361CB4C7A*>* DynamicValues; // 0x60
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x68
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x70
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x78
		::System::Boolean _IsCached; // 0x80
		::System::UInt32 MonsterType; // 0x84
		::RPG::GameCore::FixPoint StanceModifyValue; // 0x88
		::RPG::GameCore::FixPoint AttackModifyValue; // 0x90
		::System::UInt32 HardLevelGroup; // 0x98
		::System::UInt32 EliteGroup; // 0x9C
		::RPG::GameCore::FixPoint SpeedModifyRatio; // 0xA0
		::RPG::Client::TextID MonsterBattleIntroduction; // 0xA8
		::RPG::GameCore::FixPoint DefenceModifyValue; // 0xB8
		::RPG::GameCore::FixPoint HPModifyRatio; // 0xC0
		::RPG::GameCore::FixPoint DefenceModifyRatio; // 0xC8
		::RPG::GameCore::FixPoint AttackModifyRatio; // 0xD0
		::RPG::GameCore::FixPoint StanceModifyRatio; // 0xD8
		::RPG::Client::TextID MonsterName; // 0xE0
		::RPG::GameCore::FixPoint HPModifyValue; // 0xF0
		::System::UInt32 Level; // 0xF8
		::System::UInt32 MonsterTemplateID; // 0xFC
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0x100
		::RPG::Client::TextID MonsterIntroduction; // 0x108
		::System::UInt32 MonsterID; // 0x118
		::System::Int32 StanceCountDelta; // 0x11C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET))(array, val);
		}

		::RPG::GameCore::AetherSpiritType get_AetherDivideType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_MonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideMonsterRow* get__ExpandedDataRow()
		{
			return ((::RPG::GameCore::AetherDivideMonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRank GetMonsterRank()
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET))(this);
		}
	};
}
