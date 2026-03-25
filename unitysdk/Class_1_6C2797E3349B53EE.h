#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6C2797E3349B53EE_CLEAR_OFFSET UNITYSDK_OFFSET(0x8CEA920)
#define CLASS_1_6C2797E3349B53EE_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x8CEA900)
#define CLASS_1_6C2797E3349B53EE_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x8CEA8E0)
#define CLASS_1_6C2797E3349B53EE_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x8CEA910)
#define CLASS_1_6C2797E3349B53EE_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x8CEA8F0)
#define CLASS_1_6C2797E3349B53EE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CEA980)

inline static constexpr unsigned int Class_1_6C2797E3349B53EE_TypeDefinitionIndex = 44009;

class Class_1_6C2797E3349B53EE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_2; // 0x18
	::RPG::GameCore::GameEntity* Field_1_1; // 0x20
	::RPG::GameCore::FixPoint Field_1_4; // 0x28
	::RPG::GameCore::FixPoint Field_1_5; // 0x30
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x38
	::System::Boolean _LockDamageZero_k__BackingField; // 0x39
	::System::Boolean Field_1_3; // 0x3A
	::System::Boolean Field_1_8; // 0x3B
	::System::Boolean Field_1_6; // 0x3C
	::System::Boolean Field_1_7; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE__CTOR_OFFSET))(this);
	}

	::System::Boolean get_LockDamageZero()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_GET_LOCKDAMAGEZERO_OFFSET))(this);
	}

	::System::Void set_LockDamageZero(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_SET_LOCKDAMAGEZERO_OFFSET))(this, value);
	}

	::System::Boolean get_IsPropagateAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_GET_ISPROPAGATEATTACK_OFFSET))(this);
	}

	::System::Void set_IsPropagateAttack(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_SET_ISPROPAGATEATTACK_OFFSET))(this, value);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C2797E3349B53EE_CLEAR_OFFSET))(this);
	}
};
