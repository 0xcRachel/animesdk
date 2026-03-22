#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8AFC13302DAA04F7_GET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x10D339B0)
#define CLASS_1_8AFC13302DAA04F7_METHOD_1_7AEB4305BA171FD4_OFFSET UNITYSDK_OFFSET(0x10D33B10)
#define CLASS_1_8AFC13302DAA04F7_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x10D339D0)
#define CLASS_1_8AFC13302DAA04F7_METHOD_1_AC2B072F6EDFA2FE_OFFSET UNITYSDK_OFFSET(0x10D33A50)
#define CLASS_1_8AFC13302DAA04F7_SET_LOCKKEY_OFFSET UNITYSDK_OFFSET(0x10D339C0)
#define CLASS_1_8AFC13302DAA04F7__CTOR_OFFSET UNITYSDK_OFFSET(0x10D33C80)

inline static constexpr unsigned int Class_1_8AFC13302DAA04F7_TypeDefinitionIndex = 43080;

class Class_1_8AFC13302DAA04F7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::System::String* _LockKey_k__BackingField; // 0x18
	::RPG::GameCore::ActionDelayChangeTypeMask Field_1_2; // 0x20
	::RPG::GameCore::ActionDelayChangeReasonMask Field_1_1; // 0x22
	::RPG::GameCore::ActionDelayChangeTypeMask Field_1_4; // 0x24
	::System::Boolean Field_1_3; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7__CTOR_OFFSET))(this);
	}

	::System::String* get_LockKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7_GET_LOCKKEY_OFFSET))(this);
	}

	::System::Void set_LockKey(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7_SET_LOCKKEY_OFFSET))(this, value);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AC2B072F6EDFA2FE(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7_METHOD_1_AC2B072F6EDFA2FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7AEB4305BA171FD4(::RPG::GameCore::ActionDelayChangeReason a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ActionDelayChangeTypeMask a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActionDelayChangeReason, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayChangeTypeMask, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8AFC13302DAA04F7_METHOD_1_7AEB4305BA171FD4_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
