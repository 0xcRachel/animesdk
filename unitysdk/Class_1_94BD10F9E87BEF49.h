#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_94BD10F9E87BEF49_METHOD_1_3B50D4CE23F27014_OFFSET UNITYSDK_OFFSET(0xD89EBB0)
#define CLASS_1_94BD10F9E87BEF49__CTOR_OFFSET UNITYSDK_OFFSET(0xD89ED20)

inline static constexpr unsigned int Class_1_94BD10F9E87BEF49_TypeDefinitionIndex = 62294;

class Class_1_94BD10F9E87BEF49 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94BD10F9E87BEF49__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_3B50D4CE23F27014(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_94BD10F9E87BEF49_METHOD_1_3B50D4CE23F27014_OFFSET))(this, a1);
	}
};
