#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2E64892306548DEA;
class Class_1_BC389B37BA981479;
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }

#define CLASS_1_FDB93105B51C03B5_METHOD_1_12CD8F956BFCC78B_OFFSET UNITYSDK_OFFSET(0xF0AB090)
#define CLASS_1_FDB93105B51C03B5_METHOD_1_1B660AF6A48BE04E_OFFSET UNITYSDK_OFFSET(0xF0AB710)
#define CLASS_1_FDB93105B51C03B5_METHOD_1_1C90B866D8BE6A55_OFFSET UNITYSDK_OFFSET(0xF0ABC50)
#define CLASS_1_FDB93105B51C03B5_METHOD_1_4F32EAFC4DEA9ADD_OFFSET UNITYSDK_OFFSET(0xF0AB5A0)

inline static constexpr unsigned int Class_1_FDB93105B51C03B5_TypeDefinitionIndex = 61860;

class Class_1_FDB93105B51C03B5 : public ::System::Object
{
public:
	static ::System::Void Method_1_12CD8F956BFCC78B(::Class_1_2E64892306548DEA* a1)
	{
		return ((::System::Void(*)(::Class_1_2E64892306548DEA*))((::PBYTE)hIl2Cpp + CLASS_1_FDB93105B51C03B5_METHOD_1_12CD8F956BFCC78B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F32EAFC4DEA9ADD(::RPG::Client::RogueBuffInfo* a1, ::Class_1_BC389B37BA981479* a2)
	{
		return ((::System::Void(*)(::RPG::Client::RogueBuffInfo*, ::Class_1_BC389B37BA981479*))((::PBYTE)hIl2Cpp + CLASS_1_FDB93105B51C03B5_METHOD_1_4F32EAFC4DEA9ADD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B660AF6A48BE04E(::RPG::Client::IRogueMiracleInfo* a1, ::Class_1_BC389B37BA981479* a2)
	{
		return ((::System::Void(*)(::RPG::Client::IRogueMiracleInfo*, ::Class_1_BC389B37BA981479*))((::PBYTE)hIl2Cpp + CLASS_1_FDB93105B51C03B5_METHOD_1_1B660AF6A48BE04E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C90B866D8BE6A55(::RPG::Client::RogueMagicScepterInfo* a1, ::Class_1_BC389B37BA981479* a2)
	{
		return ((::System::Void(*)(::RPG::Client::RogueMagicScepterInfo*, ::Class_1_BC389B37BA981479*))((::PBYTE)hIl2Cpp + CLASS_1_FDB93105B51C03B5_METHOD_1_1C90B866D8BE6A55_OFFSET))(a1, a2);
	}
};
