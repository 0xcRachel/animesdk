#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_13.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperExtraParam.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_139779B4AD4540D7;
class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_38;
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }

#define RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0xA9A61B0)
#define RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET UNITYSDK_OFFSET(0xA9A6670)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET UNITYSDK_OFFSET(0xA9A6620)
#define RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET UNITYSDK_OFFSET(0xA9A65D0)
#define RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET UNITYSDK_OFFSET(0xA9A6160)
#define RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA9A6740)
#define RPG_GAMECORE_LINEUPCHARACTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A60E0)
#define RPG_GAMECORE_LINEUPCHARACTER___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA9A6A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineUpCharacter_TypeDefinitionIndex = 45163;

	class LineUpCharacter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpiritPassiveList; // 0x10
		::Il2CppArray<::Class_1_7AB88D713F5121B3_38*>* SkillTreePointList; // 0x18
		::RPG::GameCore::BattleGridFightAvatarData* BattleGridAvatarData; // 0x20
		::Class_1_139779B4AD4540D7* BattleRelicItemModule; // 0x28
		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* BattleEquipmentList; // 0x30
		::Il2CppArray<::Class_1_7AB88D713F5121B3_38*>* ChangedSkillTreePointList; // 0x38
		::System::UInt32 EnhancedID; // 0x40
		::System::UInt32 SpecialAvatarID; // 0x44
		::Enum_3_A35B38E5F9115A76 CharacterAvatarType; // 0x48
		::Enum_3_0A3761FE34514D6C_13 SpiritLineupType; // 0x4C
		::System::UInt32 CharacterRank; // 0x50
		::System::UInt32 CharacterRowIndex; // 0x54
		::System::UInt32 CharacterID; // 0x58
		::RPG::GameCore::FixPoint CharacterSP_Denominator; // 0x60
		::System::UInt32 WorldLevel; // 0x68
		::System::UInt32 Index; // 0x6C
		::RPG::GameCore::FixPoint CharacterHPRatio; // 0x70
		::System::UInt32 CharacterLevel; // 0x78
		::System::UInt32 CharacterPromotion; // 0x7C
		::RPG::GameCore::FixPoint CharacterSP_Numerator; // 0x80
		::System::UInt32 TotalPower; // 0x88
		::System::UInt32 AssistUid; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_RESET_OFFSET))(this);
		}

		::RPG::GameCore::LineUpCharacter* DeepCopy()
		{
			return ((::RPG::GameCore::LineUpCharacter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_DEEPCOPY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CharacterSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_CHARACTERSPRATIO_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperDeriveType get_AvatarDeriveType()
		{
			return ((::RPG::GameCore::AvatarRowWrapperDeriveType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GET_AVATARDERIVETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowWrapperExtraParam GetAvatarRowWrapperExtraParam()
		{
			return ((::RPG::GameCore::AvatarRowWrapperExtraParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_GETAVATARROWWRAPPEREXTRAPARAM_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER_TOSTRING_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPCHARACTER___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
