#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63B7BAADB49B213B.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_643;
class Class_1_35B024CC96B837C1;
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1; }

#define CLASS_2_1B96F4D650A74917_GET__MAX_DFS_COUNT_OFFSET UNITYSDK_OFFSET(0x89E3880)
#define CLASS_2_1B96F4D650A74917_METHOD_2_7FC06002372D5E76_OFFSET UNITYSDK_OFFSET(0x89E4120)
#define CLASS_2_1B96F4D650A74917_METHOD_2_920A8EAE135DB974_OFFSET UNITYSDK_OFFSET(0x89E4400)
#define CLASS_2_1B96F4D650A74917_METHOD_2_BC7B5A0AC7E2F4A4_OFFSET UNITYSDK_OFFSET(0x89E3890)
#define CLASS_2_1B96F4D650A74917_METHOD_2_BEA9E3F64B1C3859_OFFSET UNITYSDK_OFFSET(0x89E3B30)
#define CLASS_2_1B96F4D650A74917_METHOD_2_CCC9EC4850A43DE5_OFFSET UNITYSDK_OFFSET(0x89E4270)
#define CLASS_2_1B96F4D650A74917_METHOD_2_D2C139DFC0606D35_OFFSET UNITYSDK_OFFSET(0x89E3EA0)
#define CLASS_2_1B96F4D650A74917_METHOD_2_DD0F637DC0AF902B_OFFSET UNITYSDK_OFFSET(0x89E4470)
#define CLASS_2_1B96F4D650A74917_METHOD_2_DF809650369A667D_OFFSET UNITYSDK_OFFSET(0x89E3BD0)
#define CLASS_2_1B96F4D650A74917__CTOR_OFFSET UNITYSDK_OFFSET(0x89E3910)

inline static constexpr unsigned int Class_2_1B96F4D650A74917_TypeDefinitionIndex = 53276;

class Class_2_1B96F4D650A74917 : public ::Class_1_63B7BAADB49B213B
{
public:
	// static const ::System::UInt32 Field_2_3 = 0x6; // 0x0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*>* Field_2_4; // 0x18
	::System::UInt32 Field_2_5; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::System::UInt32 __MAX_DFS_COUNT_k__BackingField; // 0x28
	::System::UInt32 Field_2_2; // 0x2C

	::System::Void _ctor(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get__MAX_DFS_COUNT()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_GET__MAX_DFS_COUNT_OFFSET))(this);
	}

	static ::Class_0_16E4307DCC419505_643* Method_2_BC7B5A0AC7E2F4A4(::Class_1_35B024CC96B837C1* a1)
	{
		return ((::Class_0_16E4307DCC419505_643*(*)(::Class_1_35B024CC96B837C1*))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_BC7B5A0AC7E2F4A4_OFFSET))(a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_BEA9E3F64B1C3859()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_BEA9E3F64B1C3859_OFFSET))(this);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_DF809650369A667D(::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a1)
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_DF809650369A667D_OFFSET))(this, a1);
	}

	::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* Method_2_D2C139DFC0606D35(::RPG::GameCore::RelicType a1)
	{
		return ((::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*(*)(::PVOID, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_D2C139DFC0606D35_OFFSET))(this, a1);
	}

	::System::Void Method_2_7FC06002372D5E76(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1, ::RPG::Client::RelicItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_7FC06002372D5E76_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CCC9EC4850A43DE5(::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedSet_1<::System::ValueTuple_2<::System::Single, ::RPG::Client::RelicItemData*>>*))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_CCC9EC4850A43DE5_OFFSET))(this, a1);
	}

	::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* Method_2_920A8EAE135DB974()
	{
		return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_920A8EAE135DB974_OFFSET))(this);
	}

	::System::Boolean Method_2_DD0F637DC0AF902B(::System::Int32 a1, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*&))((::PBYTE)hIl2Cpp + CLASS_2_1B96F4D650A74917_METHOD_2_DD0F637DC0AF902B_OFFSET))(this, a1, a2, a3);
	}
};
