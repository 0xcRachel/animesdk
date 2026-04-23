#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterHeadConstraint; }

#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_GET_OVERRIDECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1694C6E0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHDOWN_OFFSET UNITYSDK_OFFSET(0x1694C760)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHUP_OFFSET UNITYSDK_OFFSET(0x1694C700)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWLEFT_OFFSET UNITYSDK_OFFSET(0x1694C7C0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWRIGHT_OFFSET UNITYSDK_OFFSET(0x1694C820)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT_SET_OVERRIDECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1694C6F0)
#define RPG_CLIENT_LOOKATTARGETCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16942400)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtTargetConstraint_TypeDefinitionIndex = 63143;

	class LookAtTargetConstraint : public ::System::Object
	{
	public:
		::System::Boolean DrawConstraint; // 0x10
		::System::Single PitchUp; // 0x14
		::System::Single PitchDown; // 0x18
		::System::Single YawLeft; // 0x1C
		::System::Single YawRight; // 0x20
		::RPG::GameCore::CharacterHeadConstraint* _OverrideConstraint_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharacterHeadConstraint* get_OverrideConstraint()
		{
			return ((::RPG::GameCore::CharacterHeadConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_GET_OVERRIDECONSTRAINT_OFFSET))(this);
		}

		::System::Void set_OverrideConstraint(::RPG::GameCore::CharacterHeadConstraint* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterHeadConstraint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_SET_OVERRIDECONSTRAINT_OFFSET))(this, value);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_PitchUp()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHUP_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_PitchDown()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_PITCHDOWN_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_YawLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWLEFT_OFFSET))(this);
		}

		::System::Single RPG_Client_ILookAtConstraint_get_YawRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATTARGETCONSTRAINT_RPG_CLIENT_ILOOKATCONSTRAINT_GET_YAWRIGHT_OFFSET))(this);
		}
	};
}
