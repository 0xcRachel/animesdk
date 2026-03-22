#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class Retarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E12F06CA34B14828_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEECFDA0)
#define CLASS_2_E12F06CA34B14828_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEECFE40)
#define CLASS_2_E12F06CA34B14828_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEED05D0)
#define CLASS_2_E12F06CA34B14828_TICK_OFFSET UNITYSDK_OFFSET(0xEED0620)
#define CLASS_2_E12F06CA34B14828__CTOR_OFFSET UNITYSDK_OFFSET(0xEECFC40)

inline static constexpr unsigned int Class_2_E12F06CA34B14828_TypeDefinitionIndex = 43241;

class Class_2_E12F06CA34B14828 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_4; // 0x28
	::RPG::GameCore::Retarget* Field_2_3; // 0x30
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x38
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_1; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Retarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Retarget*))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E12F06CA34B14828_TICK_OFFSET))(this, a1);
	}
};
