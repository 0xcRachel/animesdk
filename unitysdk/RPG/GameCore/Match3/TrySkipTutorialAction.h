#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_4_12079553909F1A05_OFFSET UNITYSDK_OFFSET(0x16C5C1F0)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_4_37BC6E34113CA913_OFFSET UNITYSDK_OFFSET(0x16C56070)
#define RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C56020)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int TrySkipTutorialAction_TypeDefinitionIndex = 22186;

	class TrySkipTutorialAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_12079553909F1A05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TrySkipTutorialAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_4_12079553909F1A05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_37BC6E34113CA913(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::TrySkipTutorialAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::TrySkipTutorialAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_TRYSKIPTUTORIALACTION_METHOD_4_37BC6E34113CA913_OFFSET))(a1, a2);
		}
	};
}
