#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_59B625D4A276A5FA_2_METHOD_1_BCF4048B13FCE5EE_OFFSET UNITYSDK_OFFSET(0x847EC00)
#define CLASS_1_59B625D4A276A5FA_2__CTOR_OFFSET UNITYSDK_OFFSET(0x847EC80)

inline static constexpr unsigned int Class_1_59B625D4A276A5FA_2_TypeDefinitionIndex = 50933;

class Class_1_59B625D4A276A5FA_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B625D4A276A5FA_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_BCF4048B13FCE5EE(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_59B625D4A276A5FA_2_METHOD_1_BCF4048B13FCE5EE_OFFSET))(this, a1);
	}
};
