#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define CLASS_1_D9FA7C16C819C934_METHOD_1_25BE1E16AC47D248_OFFSET UNITYSDK_OFFSET(0x10A11400)

inline static constexpr unsigned int Class_1_D9FA7C16C819C934_TypeDefinitionIndex = 44375;

class Class_1_D9FA7C16C819C934 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_25BE1E16AC47D248(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_D9FA7C16C819C934_METHOD_1_25BE1E16AC47D248_OFFSET))(a1);
	}
};
