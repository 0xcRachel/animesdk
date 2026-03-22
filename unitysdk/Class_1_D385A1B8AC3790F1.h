#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_D385A1B8AC3790F1_METHOD_1_5B3124EABE650E25_OFFSET UNITYSDK_OFFSET(0x877BE40)
#define CLASS_1_D385A1B8AC3790F1__CTOR_OFFSET UNITYSDK_OFFSET(0x877C330)

inline static constexpr unsigned int Class_1_D385A1B8AC3790F1_TypeDefinitionIndex = 62293;

class Class_1_D385A1B8AC3790F1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D385A1B8AC3790F1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_5B3124EABE650E25(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_D385A1B8AC3790F1_METHOD_1_5B3124EABE650E25_OFFSET))(this, a1);
	}
};
