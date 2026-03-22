#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_4_61A53B684CE0B558_OFFSET UNITYSDK_OFFSET(0x16C50140)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_4_8A6A421F3868C924_OFFSET UNITYSDK_OFFSET(0x16C50080)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x16C500F0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateBomb_TypeDefinitionIndex = 22196;

	class BirdSkillActionGenerateBomb : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::RPG::GameCore::Match3::BombType BombType; // 0x10
		::System::UInt32 BombCount; // 0x14
		::System::Boolean IsSelfDestruct; // 0x18
		::System::Boolean GenerateAtCenter; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8A6A421F3868C924(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_4_8A6A421F3868C924_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_61A53B684CE0B558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateBomb*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEBOMB_METHOD_4_61A53B684CE0B558_OFFSET))(a1, a2);
		}
	};
}
