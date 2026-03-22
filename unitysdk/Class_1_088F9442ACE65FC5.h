#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A16A135FC5A0DDB9_3;
namespace RPG::Client { class RogueGambleBaseFunc; }

#define CLASS_1_088F9442ACE65FC5_METHOD_1_84D14CEC3B43798E_OFFSET UNITYSDK_OFFSET(0x10F1F840)

inline static constexpr unsigned int Class_1_088F9442ACE65FC5_TypeDefinitionIndex = 53425;

class Class_1_088F9442ACE65FC5 : public ::System::Object
{
public:
	static ::RPG::Client::RogueGambleBaseFunc* Method_1_84D14CEC3B43798E(::Class_1_A16A135FC5A0DDB9_3* a1)
	{
		return ((::RPG::Client::RogueGambleBaseFunc*(*)(::Class_1_A16A135FC5A0DDB9_3*))((::PBYTE)hIl2Cpp + CLASS_1_088F9442ACE65FC5_METHOD_1_84D14CEC3B43798E_OFFSET))(a1);
	}
};
