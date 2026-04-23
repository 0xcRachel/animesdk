#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6C2797E3349B53EE_CLEAR_OFFSET UNITYSDK_OFFSET(0x105AEE50)
#define CLASS_1_6C2797E3349B53EE_GET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x105AEE30)
#define CLASS_1_6C2797E3349B53EE_GET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x105AEE10)
#define CLASS_1_6C2797E3349B53EE_SET_ISPROPAGATEATTACK_OFFSET UNITYSDK_OFFSET(0x105AEE40)
#define CLASS_1_6C2797E3349B53EE_SET_LOCKDAMAGEZERO_OFFSET UNITYSDK_OFFSET(0x105AEE20)
#define CLASS_1_6C2797E3349B53EE__CTOR_OFFSET UNITYSDK_OFFSET(0x105AEEC0)

inline static constexpr unsigned int Class_1_6C2797E3349B53EE_TypeDefinitionIndex = 49638;

class Class_1_6C2797E3349B53EE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_4; // 0x28
	::System::Boolean _IsPropagateAttack_k__BackingField; // 0x30
	::System::Boolean _LockDamageZero_k__BackingField; // 0x31
	::System::Boolean Field_1_6; // 0x32
	::System::Boolean Field_1_5; // 0x33
	::System::Boolean Field_1_7; // 0x34
	::System::Boolean Field_1_3; // 0x35

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
