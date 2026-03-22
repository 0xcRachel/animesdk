#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_4_9B14876043C2D404_OFFSET UNITYSDK_OFFSET(0x16C53E10)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_4_B6A59E395E42D26F_OFFSET UNITYSDK_OFFSET(0x16C5ACD0)
#define RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C53DC0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int RandomFreezeBombAction_TypeDefinitionIndex = 22182;

	class RandomFreezeBombAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Boolean Line; // 0x10
		::System::Boolean Square; // 0x11
		::System::Boolean MultiStyle; // 0x12
		::System::UInt32 Count; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B6A59E395E42D26F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomFreezeBombAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_4_B6A59E395E42D26F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9B14876043C2D404(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::RandomFreezeBombAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::RandomFreezeBombAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_RANDOMFREEZEBOMBACTION_METHOD_4_9B14876043C2D404_OFFSET))(a1, a2);
		}
	};
}
