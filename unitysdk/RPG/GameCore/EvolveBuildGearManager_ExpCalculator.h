#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_5C7F69784A5C81DE_2;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_ADDEXP_OFFSET UNITYSDK_OFFSET(0xFE2D9A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CUREXPINSTEP_OFFSET UNITYSDK_OFFSET(0xFE31900)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURMAXEXPOFSTEP_OFFSET UNITYSDK_OFFSET(0xFE28FD0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURSTEP_OFFSET UNITYSDK_OFFSET(0xFE29020)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURTOTALEXP_OFFSET UNITYSDK_OFFSET(0xFE28550)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETCUREXPINCURSTEP_OFFSET UNITYSDK_OFFSET(0xFE298E0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETTOTALEXP_OFFSET UNITYSDK_OFFSET(0xFE27780)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFE275C0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__GETCURSTEPEXPMAX_OFFSET UNITYSDK_OFFSET(0xFE31600)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__NOTIFYEXPCHANGE_OFFSET UNITYSDK_OFFSET(0xFE312D0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__ONOVERSTEP_OFFSET UNITYSDK_OFFSET(0xFE313A0)
#define RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__SOLVEEXPINSTEP_OFFSET UNITYSDK_OFFSET(0xFE31080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildGearManager_ExpCalculator_TypeDefinitionIndex = 51657;

	class EvolveBuildGearManager_ExpCalculator : public ::System::Object
	{
	public:
		::Class_1_5C7F69784A5C81DE_2* _NotifyParam; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* _ExpStepFormat; // 0x18
		::RPG::GameCore::TurnBasedGameMode* _GameMode; // 0x20
		::RPG::GameCore::FixPoint _CurExpInStep; // 0x28
		::RPG::GameCore::FixPoint _CurStep; // 0x30
		::RPG::GameCore::FixPoint _CurTotalExp; // 0x38

		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* pGameMode, ::RPG::GameCore::EvolveBuildSeason eSeason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__CTOR_OFFSET))(this, pGameMode, eSeason);
		}

		::System::Void SetTotalExp(::RPG::GameCore::FixPoint exp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETTOTALEXP_OFFSET))(this, exp);
		}

		::System::Void _NotifyExpChange(::System::Boolean stepUp, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__NOTIFYEXPCHANGE_OFFSET))(this, stepUp, force);
		}

		::System::Void AddExp(::RPG::GameCore::FixPoint expDelta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_ADDEXP_OFFSET))(this, expDelta);
		}

		::System::Void SetCurExpInCurStep(::RPG::GameCore::FixPoint newExp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_SETCUREXPINCURSTEP_OFFSET))(this, newExp);
		}

		::System::Void _SolveExpInStep(::System::Boolean triggerOverStepCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__SOLVEEXPINSTEP_OFFSET))(this, triggerOverStepCallback);
		}

		::System::Void _OnOverStep(::RPG::GameCore::FixPoint oldStep, ::RPG::GameCore::FixPoint newStep)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__ONOVERSTEP_OFFSET))(this, oldStep, newStep);
		}

		::RPG::GameCore::FixPoint _GetCurStepExpMax(::RPG::GameCore::FixPoint step)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR__GETCURSTEPEXPMAX_OFFSET))(this, step);
		}

		::System::UInt32 get_CurStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURSTEP_OFFSET))(this);
		}

		::System::UInt32 get_CurTotalExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURTOTALEXP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurExpInStep()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CUREXPINSTEP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurMaxExpOfStep()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDGEARMANAGER_EXPCALCULATOR_GET_CURMAXEXPOFSTEP_OFFSET))(this);
		}
	};
}
