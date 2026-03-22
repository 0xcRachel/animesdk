#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class PropStateChangeListenerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_FA8F9E334D481E99_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1D4DB0)
#define CLASS_2_FA8F9E334D481E99_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xD1D4B00)
#define CLASS_2_FA8F9E334D481E99_METHOD_2_BA03FB322C6038D0_OFFSET UNITYSDK_OFFSET(0xD1D4BC0)
#define CLASS_2_FA8F9E334D481E99_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1D4500)
#define CLASS_2_FA8F9E334D481E99_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1D4AB0)
#define CLASS_2_FA8F9E334D481E99_TICK_OFFSET UNITYSDK_OFFSET(0xD1D4E20)
#define CLASS_2_FA8F9E334D481E99__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D44E0)

inline static constexpr unsigned int Class_2_FA8F9E334D481E99_TypeDefinitionIndex = 46028;

class Class_2_FA8F9E334D481E99 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::System::String* Field_2_6; // 0x20
	::RPG::GameCore::PropStateChangeListenerConfig* Field_2_0; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x30
	::System::UInt32 Field_2_3; // 0x38
	::System::Boolean Field_2_2; // 0x3C
	::System::UInt32 Field_2_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropStateChangeListenerConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropStateChangeListenerConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_BA03FB322C6038D0(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_METHOD_2_BA03FB322C6038D0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA8F9E334D481E99_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}
};
