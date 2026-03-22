#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2AE89B9E4BF18AD3;
class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }

#define CLASS_1_C142A162105BA31E_METHOD_1_439865AF4357C2CC_OFFSET UNITYSDK_OFFSET(0x15FDA150)
#define CLASS_1_C142A162105BA31E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDA730)

inline static constexpr unsigned int Class_1_C142A162105BA31E_TypeDefinitionIndex = 27730;

class Class_1_C142A162105BA31E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C142A162105BA31E__CTOR_OFFSET))(this);
	}

	static ::Class_1_2AE89B9E4BF18AD3* Method_1_439865AF4357C2CC(::RPG::GameCore::DiceCombatDiceSelectorConfig* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::Class_1_2AE89B9E4BF18AD3*(*)(::RPG::GameCore::DiceCombatDiceSelectorConfig*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_1_C142A162105BA31E_METHOD_1_439865AF4357C2CC_OFFSET))(a1, a2);
	}
};
