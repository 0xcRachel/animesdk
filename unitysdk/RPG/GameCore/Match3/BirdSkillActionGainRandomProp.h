#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_4_B441603982920D4E_OFFSET UNITYSDK_OFFSET(0x16C4FF10)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_4_C876E5ABEFE7C78C_OFFSET UNITYSDK_OFFSET(0x16C50020)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4FFD0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGainRandomProp_TypeDefinitionIndex = 22198;

	class BirdSkillActionGainRandomProp : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B441603982920D4E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_4_B441603982920D4E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C876E5ABEFE7C78C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGainRandomProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGAINRANDOMPROP_METHOD_4_C876E5ABEFE7C78C_OFFSET))(a1, a2);
		}
	};
}
