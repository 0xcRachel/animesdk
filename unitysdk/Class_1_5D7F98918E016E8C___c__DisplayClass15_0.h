#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0A490681D87FEF21;
class Class_1_877AA22B04AFB81F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1662F3A0)
#define CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS15_0__GETFARTARGETACCURATEGOALWEIGHTCOMPUTER_B__0_OFFSET UNITYSDK_OFFSET(0x166319A0)

inline static constexpr unsigned int Class_1_5D7F98918E016E8C___c__DisplayClass15_0_TypeDefinitionIndex = 28921;

class Class_1_5D7F98918E016E8C___c__DisplayClass15_0 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Int32>* targetToAreaDistance; // 0x10
	::System::Int32 catTargetDistance; // 0x18
	::System::UInt32 targetSlopeDistance; // 0x1C
	::System::Int32 targetY; // 0x20
	::System::Int32 targetX; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Single _GetFarTargetAccurateGoalWeightComputer_b__0(::Class_1_0A490681D87FEF21* cat, ::Class_1_877AA22B04AFB81F* posComp, ::System::UInt32 fieldX, ::System::UInt32 fieldY)
	{
		return ((::System::Single(*)(::PVOID, ::Class_1_0A490681D87FEF21*, ::Class_1_877AA22B04AFB81F*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D7F98918E016E8C___C__DISPLAYCLASS15_0__GETFARTARGETACCURATEGOALWEIGHTCOMPUTER_B__0_OFFSET))(this, cat, posComp, fieldX, fieldY);
	}
};
