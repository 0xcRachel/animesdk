#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_BABC62761ACA0657_2_METHOD_1_2950721C7E5FF481_OFFSET UNITYSDK_OFFSET(0x91FB8B0)
#define CLASS_1_BABC62761ACA0657_2__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB970)

inline static constexpr unsigned int Class_1_BABC62761ACA0657_2_TypeDefinitionIndex = 50931;

class Class_1_BABC62761ACA0657_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BABC62761ACA0657_2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_2950721C7E5FF481(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_BABC62761ACA0657_2_METHOD_1_2950721C7E5FF481_OFFSET))(this, a1);
	}
};
