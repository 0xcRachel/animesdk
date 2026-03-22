#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63B7BAADB49B213B.h"

class Class_0_16E4307DCC419505_643;
class Class_1_35B024CC96B837C1;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define CLASS_2_8A577A4B8BACFE40_METHOD_2_216A287DCE48F88F_OFFSET UNITYSDK_OFFSET(0xFD3A3A0)
#define CLASS_2_8A577A4B8BACFE40_METHOD_2_3F22F2D5D65C262F_OFFSET UNITYSDK_OFFSET(0xFD3A420)
#define CLASS_2_8A577A4B8BACFE40__CTOR_OFFSET UNITYSDK_OFFSET(0xFD3A410)

inline static constexpr unsigned int Class_2_8A577A4B8BACFE40_TypeDefinitionIndex = 59440;

class Class_2_8A577A4B8BACFE40 : public ::Class_1_63B7BAADB49B213B
{
public:
	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40__CTOR_OFFSET))(this, a1);
	}

	static ::Class_0_16E4307DCC419505_643* Method_2_216A287DCE48F88F(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::Class_0_16E4307DCC419505_643*(*)(::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40_METHOD_2_216A287DCE48F88F_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_3F22F2D5D65C262F()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A577A4B8BACFE40_METHOD_2_3F22F2D5D65C262F_OFFSET))(this);
	}
};
