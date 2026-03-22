#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_471;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define CLASS_1_BF92495995284A11_METHOD_1_0C8581FBA28B744B_OFFSET UNITYSDK_OFFSET(0xF585310)
#define CLASS_1_BF92495995284A11__CTOR_OFFSET UNITYSDK_OFFSET(0xF585400)

inline static constexpr unsigned int Class_1_BF92495995284A11_TypeDefinitionIndex = 62292;

class Class_1_BF92495995284A11 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF92495995284A11__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_471* Method_1_0C8581FBA28B744B(::RPG::GameCore::MiParameterConfigBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_471*(*)(::PVOID, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_BF92495995284A11_METHOD_1_0C8581FBA28B744B_OFFSET))(this, a1);
	}
};
