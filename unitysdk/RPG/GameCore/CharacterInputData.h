#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_DD2A07650CD0727B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0xA36D570)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0xA36D340)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xA36D240)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0xA36D5C0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA36D760)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0xA36D2D0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0xA36D480)
#define RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA36D780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 44818;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Single DesireDirectionAngle; // 0x10
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x14
		::RPG::MVector3 _desiredMoveVector; // 0x18
		::System::Boolean NavigationMoveCheck; // 0x24
		::System::Boolean TriggerAlert; // 0x25
		::System::Boolean TriggerAttack; // 0x26
		::System::Boolean IsInTurnBack; // 0x27
		::System::Boolean MovingSteerOnly; // 0x28
		::System::Boolean TriggerSkill; // 0x29
		::System::Boolean NavigationToTarget; // 0x2A
		::System::Boolean RushMoveFlag; // 0x2B
		::System::Boolean CacheAttack; // 0x2C
		::System::Boolean CacheSkill; // 0x2D
		::System::Boolean NavigationToTargetRestrict; // 0x2E
		::System::Single DesiredMoveMag; // 0x30
		::System::Single MoveTime; // 0x34
		::UnityEngine::Vector3 DeltaPosition; // 0x38
		::System::Single OverrideTurnSpeed; // 0x44
		::RPG::MVector3 DesiredTarget; // 0x48
		::System::Nullable_1<::Struct_2_DD2A07650CD0727B> NavigationFinishedConstraint; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET))(this);
		}

		::System::Void ClearSteer(::System::Boolean cleanDesiredDir)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET))(this, cleanDesiredDir);
		}

		::System::Void ClearMoveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET))(this);
		}

		::System::Void Copy(::RPG::GameCore::CharacterInputData* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET))(this, other);
		}

		::System::Void set_DesiredMoveVector(::RPG::MVector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET))(this, value);
		}

		::RPG::MVector3 get_DesiredMoveVector()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET))(this);
		}
	};
}
