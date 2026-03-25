#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimStatisticPlayerActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_433F704C0E180372;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_31629077A8A2D68B_CLEAR_OFFSET UNITYSDK_OFFSET(0x167A99D0)
#define CLASS_1_31629077A8A2D68B_METHOD_1_5BAA4479E0F421EC_OFFSET UNITYSDK_OFFSET(0x167A9400)
#define CLASS_1_31629077A8A2D68B_ONALLOC_OFFSET UNITYSDK_OFFSET(0x167A9D80)
#define CLASS_1_31629077A8A2D68B_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x167A9F60)
#define CLASS_1_31629077A8A2D68B__CTOR_OFFSET UNITYSDK_OFFSET(0x167A9FA0)

inline static constexpr unsigned int Class_1_31629077A8A2D68B_TypeDefinitionIndex = 33580;

class Class_1_31629077A8A2D68B : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::FiveDimStatisticPlayerActionType, ::System::UInt32>* Field_1_15; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::Class_1_433F704C0E180372*>* Field_1_14; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::PoolList_1<::System::UInt32>* Field_1_20; // 0x28
	::RPG::PoolDictionary_2<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_19; // 0x30
	::RPG::PoolList_1<::System::UInt32>* Field_1_22; // 0x38
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_9; // 0x40
	::System::String* Field_1_0; // 0x48
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolDictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_11; // 0x50
	::System::String* Field_1_1; // 0x58
	::RPG::PoolList_1<::System::UInt32>* Field_1_21; // 0x60
	::System::Single Field_1_5; // 0x68
	::System::UInt32 Field_1_10; // 0x6C
	::System::UInt32 Field_1_12; // 0x70
	::System::UInt32 Field_1_16; // 0x74
	::System::UInt32 Field_1_17; // 0x78
	::System::UInt32 Field_1_23; // 0x7C
	::System::UInt32 Field_1_24; // 0x80
	::System::UInt32 Field_1_6; // 0x84
	::RPG::Client::LittleGame::FiveDim::FiveDimExitType Field_1_7; // 0x88
	::System::UInt32 Field_1_13; // 0x8C
	::System::Single Field_1_18; // 0x90
	::System::UInt32 Field_1_3; // 0x94
	::RPG::Client::LittleGame::FiveDim::FiveDimEnterType Field_1_4; // 0x98
	::System::UInt32 Field_1_8; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5BAA4479E0F421EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_METHOD_1_5BAA4479E0F421EC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31629077A8A2D68B_ONRECYCLE_OFFSET))(this);
	}
};
