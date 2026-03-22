#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_4_F27AF1D1EC408B97_OFFSET UNITYSDK_OFFSET(0x16C5ABB0)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_4_FA04FF60C3878843_OFFSET UNITYSDK_OFFSET(0x16C53A90)
#define RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53A40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomChangeFruitToBlackFogAction_TypeDefinitionIndex = 22185;

	class RandomChangeFruitToBlackFogAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::UInt32 Count; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_F27AF1D1EC408B97(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_4_F27AF1D1EC408B97_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FA04FF60C3878843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomChangeFruitToBlackFogAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMCHANGEFRUITTOBLACKFOGACTION_METHOD_4_FA04FF60C3878843_OFFSET))(a1, a2);
		}
	};
}
