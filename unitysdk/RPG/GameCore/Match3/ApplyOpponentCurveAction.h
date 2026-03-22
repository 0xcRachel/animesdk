#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_4_3E78DFF89FD2CFE2_OFFSET UNITYSDK_OFFSET(0x16C4FA80)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_4_D64377B5D47CE020_OFFSET UNITYSDK_OFFSET(0x16C4F900)
#define RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4FA30)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int ApplyOpponentCurveAction_TypeDefinitionIndex = 22164;

	class ApplyOpponentCurveAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 CurveID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D64377B5D47CE020(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_4_D64377B5D47CE020_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3E78DFF89FD2CFE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::ApplyOpponentCurveAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::ApplyOpponentCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_APPLYOPPONENTCURVEACTION_METHOD_4_3E78DFF89FD2CFE2_OFFSET))(a1, a2);
		}
	};
}
