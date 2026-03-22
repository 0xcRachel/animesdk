#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35B024CC96B837C1;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }

#define CLASS_1_63B7BAADB49B213B_METHOD_1_268EDC1637C255D1_OFFSET UNITYSDK_OFFSET(0xFE85BD0)
#define CLASS_1_63B7BAADB49B213B_METHOD_1_E864A544A2F8CDBB_OFFSET UNITYSDK_OFFSET(0xFE85B40)
#define CLASS_1_63B7BAADB49B213B__CTOR_OFFSET UNITYSDK_OFFSET(0xFE85B30)

inline static constexpr unsigned int Class_1_63B7BAADB49B213B_TypeDefinitionIndex = 59438;

class Class_1_63B7BAADB49B213B : public ::System::Object
{
public:
	::Class_1_35B024CC96B837C1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_E864A544A2F8CDBB(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B_METHOD_1_E864A544A2F8CDBB_OFFSET))(this, a1);
	}

	::System::Single Method_1_268EDC1637C255D1(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_63B7BAADB49B213B_METHOD_1_268EDC1637C255D1_OFFSET))(this, a1);
	}
};
