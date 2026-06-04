#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_AF57533F17F060F7;
class Class_1_D11FF2E4C51BF3B1;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitComparePinOperator; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_87E4361C62E7454E_METHOD_1_02273A74D32E9757_OFFSET UNITYSDK_OFFSET(0x13F26470)
#define CLASS_1_87E4361C62E7454E_METHOD_1_3FD8D0D438226890_OFFSET UNITYSDK_OFFSET(0x13F26880)
#define CLASS_1_87E4361C62E7454E_METHOD_1_446F40F97FCBDAD7_OFFSET UNITYSDK_OFFSET(0x13F262A0)
#define CLASS_1_87E4361C62E7454E_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x13F26D50)
#define CLASS_1_87E4361C62E7454E_METHOD_1_49A440150EBA5A39_OFFSET UNITYSDK_OFFSET(0x13F26280)
#define CLASS_1_87E4361C62E7454E_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x13F26260)
#define CLASS_1_87E4361C62E7454E_METHOD_1_5574E6B244C57D1D_OFFSET UNITYSDK_OFFSET(0x13F262C0)
#define CLASS_1_87E4361C62E7454E_METHOD_1_5771681ECDFE1F61_OFFSET UNITYSDK_OFFSET(0x13F265E0)
#define CLASS_1_87E4361C62E7454E_METHOD_1_697CEBDDAD44641A_OFFSET UNITYSDK_OFFSET(0x13F26A30)
#define CLASS_1_87E4361C62E7454E_METHOD_1_890F78BEF7B16ED9_OFFSET UNITYSDK_OFFSET(0x13F26650)
#define CLASS_1_87E4361C62E7454E__CTOR_OFFSET UNITYSDK_OFFSET(0x13F263D0)

inline static constexpr unsigned int Class_1_87E4361C62E7454E_TypeDefinitionIndex = 69475;

class Class_1_87E4361C62E7454E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::Class_1_AF57533F17F060F7*>* Field_1_0; // 0x10
	::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E__CTOR_OFFSET))(this, a1);
	}

	::Class_1_D11FF2E4C51BF3B1* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_D11FF2E4C51BF3B1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_528BD4865C714C5C_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_1_49A440150EBA5A39()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_49A440150EBA5A39_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator* Method_1_446F40F97FCBDAD7()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitComparePinOperator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_446F40F97FCBDAD7_OFFSET))(this);
	}

	static ::Class_1_87E4361C62E7454E* Method_1_5574E6B244C57D1D(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
	{
		return ((::Class_1_87E4361C62E7454E*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_5574E6B244C57D1D_OFFSET))(a1);
	}

	::System::Void Method_1_02273A74D32E9757()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_02273A74D32E9757_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_5771681ECDFE1F61()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_5771681ECDFE1F61_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* Method_1_890F78BEF7B16ED9(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_890F78BEF7B16ED9_OFFSET))(this, a1);
	}

	::Class_1_AF57533F17F060F7* Method_1_3FD8D0D438226890(::RPG::GameCore::RelicType a1)
	{
		return ((::Class_1_AF57533F17F060F7*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_3FD8D0D438226890_OFFSET))(this, a1);
	}

	::System::Void Method_1_697CEBDDAD44641A(::Class_1_AF57533F17F060F7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF57533F17F060F7*))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_697CEBDDAD44641A_OFFSET))(this, a1);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87E4361C62E7454E_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}
};
