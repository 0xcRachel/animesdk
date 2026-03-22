#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class SwitchHandCatchStateListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_8EB157DBAF836C59_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11173B00)
#define CLASS_2_8EB157DBAF836C59_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0x11173F80)
#define CLASS_2_8EB157DBAF836C59_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11173DC0)
#define CLASS_2_8EB157DBAF836C59_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x111741F0)
#define CLASS_2_8EB157DBAF836C59_TICK_OFFSET UNITYSDK_OFFSET(0x11173C00)
#define CLASS_2_8EB157DBAF836C59__CTOR_OFFSET UNITYSDK_OFFSET(0x11173A20)

inline static constexpr unsigned int Class_2_8EB157DBAF836C59_TypeDefinitionIndex = 42115;

class Class_2_8EB157DBAF836C59 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SwitchHandCatchStateListener* Field_2_0; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandCatchStateListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandCatchStateListener*))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8EB157DBAF836C59_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}
};
