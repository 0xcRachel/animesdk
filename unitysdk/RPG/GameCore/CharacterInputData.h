#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_DD2A07650CD0727B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARMOVEINPUT_OFFSET UNITYSDK_OFFSET(0x11D44E60)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEARSTEER_OFFSET UNITYSDK_OFFSET(0x11D44C50)
#define RPG_GAMECORE_CHARACTERINPUTDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x11D44B50)
#define RPG_GAMECORE_CHARACTERINPUTDATA_COPY_OFFSET UNITYSDK_OFFSET(0x11D44EB0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_GET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x11D45050)
#define RPG_GAMECORE_CHARACTERINPUTDATA_RESET_OFFSET UNITYSDK_OFFSET(0x11D44BE0)
#define RPG_GAMECORE_CHARACTERINPUTDATA_SET_DESIREDMOVEVECTOR_OFFSET UNITYSDK_OFFSET(0x11D44D80)
#define RPG_GAMECORE_CHARACTERINPUTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D45070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterInputData_TypeDefinitionIndex = 52537;

	class CharacterInputData : public ::System::Object
	{
	public:
		::System::Single DesiredMoveMag; // 0x10
		::System::Nullable_1<::Struct_2_DD2A07650CD0727B> NavigationFinishedConstraint; // 0x14
		::RPG::MVector3 _desiredMoveVector; // 0x2C
		::System::Single MoveTime; // 0x38
		::System::Boolean IsInTurnBack; // 0x3C
		::System::Boolean CacheSkill; // 0x3D
		::System::Boolean TriggerAlert; // 0x3E
		::System::Boolean NavigationToTargetRestrict; // 0x3F
		::System::Boolean MovingSteerOnly; // 0x40
		::System::Boolean TriggerSkill; // 0x41
		::System::Boolean TriggerAttack; // 0x42
		::System::Boolean RushMoveFlag; // 0x43
		::UnityEngine::Vector3 DeltaPosition; // 0x44
		::System::Boolean NavigationMoveCheck; // 0x50
		::System::Boolean NavigationToTarget; // 0x51
		::System::Boolean CacheAttack; // 0x52
		::System::Single OverrideTurnSpeed; // 0x54
		::System::Single DesireDirectionAngle; // 0x58
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x5C
		::RPG::MVector3 DesiredTarget; // 0x60

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
