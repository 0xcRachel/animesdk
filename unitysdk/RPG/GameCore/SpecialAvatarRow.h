#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTreeTemplateType.h"
#include "unitysdk/RPG/GameCore/SpecialAvatarType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AbilityPropertyValue; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x16F794D0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F7A0A0)
#define RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x16F7BDB0)
#define RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET UNITYSDK_OFFSET(0x16F7BE10)
#define RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7BE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRow_TypeDefinitionIndex = 13744;

	class SpecialAvatarRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x18
		::System::String* AnchorName; // 0x20
		::System::String* LevelAreaPrefab; // 0x28
		::Il2CppArray<::RPG::GameCore::AbilityPropertyValue*>* OverrideProperty; // 0x30
		::System::String* PlayerJsonPath; // 0x38
		::System::String* CustomSkillTreeKey; // 0x40
		::System::UInt32 RelicSubValue; // 0x48
		::System::UInt32 PlayerID; // 0x4C
		::System::UInt32 WorldLevel; // 0x50
		::System::UInt32 RelicPropertyType; // 0x54
		::System::Boolean DisableSwitch; // 0x58
		::System::Boolean IsAutoBattle; // 0x59
		::System::Boolean IsProtected; // 0x5A
		::System::Boolean HasJoinHint; // 0x5B
		::System::UInt32 AvatarID; // 0x5C
		::System::UInt32 RelicPropertyTypeExtra; // 0x60
		::System::UInt32 EnhancedID; // 0x64
		::System::UInt32 EquipmentLevel; // 0x68
		::RPG::GameCore::SpecialAvatarType Type; // 0x6C
		::System::UInt32 AvatarSkinID; // 0x70
		::System::UInt32 SpecialAvatarID; // 0x74
		::System::UInt32 PlaneID; // 0x78
		::System::Boolean LockBattleInfo; // 0x7C
		::System::Boolean HasLeaveHint; // 0x7D
		::System::UInt32 MainMissionID; // 0x80
		::System::UInt32 RelicMainValue; // 0x84
		::System::UInt32 Rank; // 0x88
		::System::UInt32 EquipmentRank; // 0x8C
		::System::UInt32 Level; // 0x90
		::System::Boolean HaveActionDelay; // 0x94
		::System::Boolean IsUseWorldLevel; // 0x95
		::System::Boolean LockMazeSkill; // 0x96
		::System::UInt32 Promotion; // 0x98
		::System::UInt32 EquipmentID; // 0x9C
		::RPG::GameCore::SkillTreeTemplateType SkillTreeTemplate; // 0xA0
		::System::UInt32 EquipmentPromotion; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SpecialAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SpecialAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
