#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_4_03B37394B80915DC_OFFSET UNITYSDK_OFFSET(0x16C505A0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_4_DF22FCF3EFB6FFA3_OFFSET UNITYSDK_OFFSET(0x16C504E0)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50550)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGeneratePiece_TypeDefinitionIndex = 22197;

	class BirdSkillActionGeneratePiece : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::UInt32 PieceCount; // 0x14
		::System::Boolean ScoreBonus; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DF22FCF3EFB6FFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_4_DF22FCF3EFB6FFA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_03B37394B80915DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGeneratePiece*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEPIECE_METHOD_4_03B37394B80915DC_OFFSET))(a1, a2);
		}
	};
}
