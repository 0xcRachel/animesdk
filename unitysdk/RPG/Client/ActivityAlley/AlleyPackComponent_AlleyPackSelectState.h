#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_23F67DD15593C8D6;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET UNITYSDK_OFFSET(0x8AEC450)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET UNITYSDK_OFFSET(0x8AED090)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET UNITYSDK_OFFSET(0x8AEC900)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8AE3F70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET UNITYSDK_OFFSET(0x8AEC840)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x8AEC4F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET UNITYSDK_OFFSET(0x8AECD20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET UNITYSDK_OFFSET(0x8AECB10)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_AlleyPackSelectState_TypeDefinitionIndex = 58999;

	class AlleyPackComponent_AlleyPackSelectState : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* _Owner; // 0x10
		::Class_1_23F67DD15593C8D6* _Timer; // 0x18
		::UnityEngine::Vector3 _TargetPosition; // 0x20
		::System::Single _HoverDuration; // 0x2C
		::System::Boolean _IsHover; // 0x30
		::System::Boolean _IsHoverFinish; // 0x31
		::System::Single _SelectDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_ENTER_OFFSET))(this, owner);
		}

		::System::Void Tick(::RPG::Client::ActivityAlley::AlleyPackComponent* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_TICK_OFFSET))(this, owner);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE_EXIT_OFFSET))(this);
		}

		::System::Void _SetSelectDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SETSELECTDURATION_OFFSET))(this);
		}

		::System::Void _SolveTargetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__SOLVETARGETPOSITION_OFFSET))(this);
		}

		::System::Void _TickHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVER_OFFSET))(this);
		}

		::System::Void _TickHoverMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKSELECTSTATE__TICKHOVERMATCH_OFFSET))(this);
		}
	};
}
