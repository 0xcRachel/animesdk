#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63B7BAADB49B213B.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

class Class_0_16E4307DCC419505_643;
class Class_1_35B024CC96B837C1;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitPlanData; }

#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_216A287DCE48F88F_OFFSET UNITYSDK_OFFSET(0x103353C0)
#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_268EDC1637C255D1_OFFSET UNITYSDK_OFFSET(0x10335D30)
#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_28AFE8C3294EE5CB_OFFSET UNITYSDK_OFFSET(0x10335440)
#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_2B117361F5191106_OFFSET UNITYSDK_OFFSET(0x10335BF0)
#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_99C1852B0FEA659F_OFFSET UNITYSDK_OFFSET(0x10335390)
#define CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_D8FC84EFEFA8C8CB_OFFSET UNITYSDK_OFFSET(0x10335650)
#define CLASS_2_16FE1EFAA9BEC9D1__CTOR_OFFSET UNITYSDK_OFFSET(0x10335430)

inline static constexpr unsigned int Class_2_16FE1EFAA9BEC9D1_TypeDefinitionIndex = 59446;

class Class_2_16FE1EFAA9BEC9D1 : public ::Class_1_63B7BAADB49B213B
{
public:
	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData* Method_2_99C1852B0FEA659F()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitPlanData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_99C1852B0FEA659F_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_643* Method_2_216A287DCE48F88F(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::Class_0_16E4307DCC419505_643*(*)(::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_216A287DCE48F88F_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_28AFE8C3294EE5CB()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_28AFE8C3294EE5CB_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_D8FC84EFEFA8C8CB(::RPG::GameCore::RelicType a1, ::RPG::GameCore::RelicType a2)
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_D8FC84EFEFA8C8CB_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_2B117361F5191106(::RPG::Client::RelicItemData* a1, ::RPG::GameCore::RelicType a2, ::RPG::GameCore::RelicType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RelicItemData*, ::RPG::GameCore::RelicType, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_2B117361F5191106_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_268EDC1637C255D1(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_2_16FE1EFAA9BEC9D1_METHOD_2_268EDC1637C255D1_OFFSET))(this, a1);
	}
};
