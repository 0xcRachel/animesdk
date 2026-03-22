#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_CC45B4503679E14E.h"

class Class_2_81F92B0B04671207;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimStateWithMove; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_E9BE074AE3BC7CD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD23A430)
#define CLASS_2_E9BE074AE3BC7CD0_METHOD_2_C3B07CFF6BC616BE_OFFSET UNITYSDK_OFFSET(0xD23ACF0)
#define CLASS_2_E9BE074AE3BC7CD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD23A500)
#define CLASS_2_E9BE074AE3BC7CD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD23B010)
#define CLASS_2_E9BE074AE3BC7CD0_TICK_OFFSET UNITYSDK_OFFSET(0xD23B1A0)
#define CLASS_2_E9BE074AE3BC7CD0__CTOR_OFFSET UNITYSDK_OFFSET(0xD23A150)

inline static constexpr unsigned int Class_2_E9BE074AE3BC7CD0_TypeDefinitionIndex = 43575;

class Class_2_E9BE074AE3BC7CD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::UnityEngine::Animator* Field_2_3; // 0x20
	::Class_2_81F92B0B04671207* Field_2_4; // 0x28
	::Struct_2_CC45B4503679E14E Field_2_7; // 0x30
	::RPG::GameCore::TriggerAnimStateWithMove* Field_2_0; // 0x40
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_8; // 0x48
	::RPG::GameCore::GameEntity* Field_2_2; // 0x50
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x60
	::System::Boolean Field_2_5; // 0x61
	::System::Int32 Field_2_6; // 0x64

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimStateWithMove* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimStateWithMove*))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C3B07CFF6BC616BE(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + CLASS_2_E9BE074AE3BC7CD0_METHOD_2_C3B07CFF6BC616BE_OFFSET))(this, a1);
	}
};
