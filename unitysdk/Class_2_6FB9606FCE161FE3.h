#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_E541610CE7338ECE;

#define CLASS_2_6FB9606FCE161FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1578DC20)

inline static constexpr unsigned int Class_2_6FB9606FCE161FE3_TypeDefinitionIndex = 34582;

class Class_2_6FB9606FCE161FE3 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_E541610CE7338ECE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E541610CE7338ECE*))((::PBYTE)hIl2Cpp + CLASS_2_6FB9606FCE161FE3__CTOR_OFFSET))(this, a1);
	}
};
