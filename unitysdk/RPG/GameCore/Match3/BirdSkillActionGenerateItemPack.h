#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_4_6992004A0E8E6428_OFFSET UNITYSDK_OFFSET(0x16C50300)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_4_7852C2067043C89B_OFFSET UNITYSDK_OFFSET(0x16C50450)
#define RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50400)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillActionGenerateItemPack_TypeDefinitionIndex = 22199;

	class BirdSkillActionGenerateItemPack : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ItemPackCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6992004A0E8E6428(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_4_6992004A0E8E6428_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7852C2067043C89B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdSkillActionGenerateItemPack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLACTIONGENERATEITEMPACK_METHOD_4_7852C2067043C89B_OFFSET))(a1, a2);
		}
	};
}
