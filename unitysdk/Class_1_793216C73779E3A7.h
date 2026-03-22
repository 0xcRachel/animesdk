#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_793216C73779E3A7_METHOD_1_627C2133246B309B_OFFSET UNITYSDK_OFFSET(0x9EA07F0)
#define CLASS_1_793216C73779E3A7__CTOR_OFFSET UNITYSDK_OFFSET(0x9EA08F0)

inline static constexpr unsigned int Class_1_793216C73779E3A7_TypeDefinitionIndex = 50926;

class Class_1_793216C73779E3A7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_793216C73779E3A7__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_627C2133246B309B(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_793216C73779E3A7_METHOD_1_627C2133246B309B_OFFSET))(this, a1);
	}
};
