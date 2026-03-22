#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_85AC304C554D1558_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A49E0327DEC9D96E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CEFB10)
#define CLASS_2_A49E0327DEC9D96E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CEF870)
#define CLASS_2_A49E0327DEC9D96E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10CEFB50)
#define CLASS_2_A49E0327DEC9D96E_TICK_OFFSET UNITYSDK_OFFSET(0x10CEFB90)
#define CLASS_2_A49E0327DEC9D96E__CTOR_OFFSET UNITYSDK_OFFSET(0x10CEF850)
#define CLASS_2_A49E0327DEC9D96E__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x10CEFBF0)

inline static constexpr unsigned int Class_2_A49E0327DEC9D96E_TypeDefinitionIndex = 41801;

class Class_2_A49E0327DEC9D96E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_85AC304C554D1558_1* Field_2_1; // 0x18
	::System::Single Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_85AC304C554D1558_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_85AC304C554D1558_1*))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A49E0327DEC9D96E__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
