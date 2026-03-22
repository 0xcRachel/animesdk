#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RelicSmartSuit/SelectorType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_643;
class Class_1_35B024CC96B837C1;

#define CLASS_1_757B3EB752B90D73_METHOD_1_65E4BD26C620016E_OFFSET UNITYSDK_OFFSET(0x100A5A60)

inline static constexpr unsigned int Class_1_757B3EB752B90D73_TypeDefinitionIndex = 59443;

class Class_1_757B3EB752B90D73 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_643* Method_1_65E4BD26C620016E(::RPG::Client::RelicSmartSuit::SelectorType a1, ::Class_1_35B024CC96B837C1* a2)
	{
		return ((::Class_0_16E4307DCC419505_643*(*)(::RPG::Client::RelicSmartSuit::SelectorType, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_1_757B3EB752B90D73_METHOD_1_65E4BD26C620016E_OFFSET))(a1, a2);
	}
};
