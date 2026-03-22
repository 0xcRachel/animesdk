#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowAttackTime; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DE7CC8E1C63053CB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A51480)
#define CLASS_2_DE7CC8E1C63053CB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A514C0)
#define CLASS_2_DE7CC8E1C63053CB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A51650)
#define CLASS_2_DE7CC8E1C63053CB_TICK_OFFSET UNITYSDK_OFFSET(0x10A516A0)
#define CLASS_2_DE7CC8E1C63053CB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A51470)

inline static constexpr unsigned int Class_2_DE7CC8E1C63053CB_TypeDefinitionIndex = 44313;

class Class_2_DE7CC8E1C63053CB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowAttackTime* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAttackTime* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAttackTime*))((::PBYTE)hIl2Cpp + CLASS_2_DE7CC8E1C63053CB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE7CC8E1C63053CB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE7CC8E1C63053CB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DE7CC8E1C63053CB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DE7CC8E1C63053CB_TICK_OFFSET))(this, a1);
	}
};
