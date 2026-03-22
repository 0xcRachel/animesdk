#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class MonsterBehaviour; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B9B3C04B6E93CEA0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF034A0)
#define CLASS_2_B9B3C04B6E93CEA0_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBF03890)
#define CLASS_2_B9B3C04B6E93CEA0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF03510)
#define CLASS_2_B9B3C04B6E93CEA0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF03610)
#define CLASS_2_B9B3C04B6E93CEA0_TICK_OFFSET UNITYSDK_OFFSET(0xBF036E0)
#define CLASS_2_B9B3C04B6E93CEA0__CTOR_OFFSET UNITYSDK_OFFSET(0xBF033F0)

inline static constexpr unsigned int Class_2_B9B3C04B6E93CEA0_TypeDefinitionIndex = 41869;

class Class_2_B9B3C04B6E93CEA0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::MonsterBehaviour* Field_2_1; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x28
	::System::Int32 Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterBehaviour* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_TICK_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9B3C04B6E93CEA0_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
