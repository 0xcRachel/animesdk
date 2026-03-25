#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FB4A30)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FB5950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarGlobalBuffConfigRow_TypeDefinitionIndex = 11681;

	class AvatarGlobalBuffConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TrialBagStageTypeWhiteList; // 0x10
		::Il2CppArray<::System::UInt32>* TeamStageTypeBlackList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x20
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x28
		::Il2CppArray<::RPG::GameCore::FixPoint>* SimpleParamList; // 0x30
		::Il2CppArray<::System::UInt32>* StageTypeBlackList; // 0x38
		::Il2CppArray<::System::UInt32>* TeamBlackList; // 0x40
		::Il2CppArray<::System::UInt32>* GameModeBlackList; // 0x48
		::Il2CppArray<::System::UInt32>* SimpleExtraEffectIDList; // 0x50
		::RPG::Client::TextID Desc; // 0x58
		::RPG::Client::TextID SimpleDesc; // 0x68
		::RPG::Client::TextID SkillTag; // 0x78
		::System::UInt32 AvatarID; // 0x88
		::System::UInt32 SkillID; // 0x8C
		::RPG::Client::TextID Name; // 0x90
		::System::UInt32 MazeBuffID; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarGlobalBuffConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarGlobalBuffConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
