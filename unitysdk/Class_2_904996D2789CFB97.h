#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyGameplayShowMaskBG; }

#define CLASS_2_904996D2789CFB97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E3B0D0)
#define CLASS_2_904996D2789CFB97_METHOD_2_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x12E3B120)
#define CLASS_2_904996D2789CFB97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E3B1D0)
#define CLASS_2_904996D2789CFB97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12E3B260)
#define CLASS_2_904996D2789CFB97_TICK_OFFSET UNITYSDK_OFFSET(0x12E3B2B0)
#define CLASS_2_904996D2789CFB97__CTOR_OFFSET UNITYSDK_OFFSET(0x12E3B0C0)

inline static constexpr unsigned int Class_2_904996D2789CFB97_TypeDefinitionIndex = 49254;

class Class_2_904996D2789CFB97 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TrainPartyGameplayShowMaskBG* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyGameplayShowMaskBG* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyGameplayShowMaskBG*))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_904996D2789CFB97_METHOD_2_AD23FDCC7576BB32_OFFSET))(this, a1);
	}
};
