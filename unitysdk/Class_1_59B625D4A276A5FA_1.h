#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_59B625D4A276A5FA_1_METHOD_1_BCF4048B13FCE5EE_OFFSET UNITYSDK_OFFSET(0x10314F80)
#define CLASS_1_59B625D4A276A5FA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10315000)

inline static constexpr unsigned int Class_1_59B625D4A276A5FA_1_TypeDefinitionIndex = 50929;

class Class_1_59B625D4A276A5FA_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59B625D4A276A5FA_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_BCF4048B13FCE5EE(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_59B625D4A276A5FA_1_METHOD_1_BCF4048B13FCE5EE_OFFSET))(this, a1);
	}
};
