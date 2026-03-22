#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RequestGroupStateChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_9A1C0BBCB68140E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10556320)
#define CLASS_2_9A1C0BBCB68140E7_METHOD_2_7015249E1B474314_OFFSET UNITYSDK_OFFSET(0x10556950)
#define CLASS_2_9A1C0BBCB68140E7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105564A0)
#define CLASS_2_9A1C0BBCB68140E7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105563C0)
#define CLASS_2_9A1C0BBCB68140E7_TICK_OFFSET UNITYSDK_OFFSET(0x10556440)
#define CLASS_2_9A1C0BBCB68140E7__CTOR_OFFSET UNITYSDK_OFFSET(0x10556310)

inline static constexpr unsigned int Class_2_9A1C0BBCB68140E7_TypeDefinitionIndex = 42020;

class Class_2_9A1C0BBCB68140E7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RequestGroupStateChange* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::System::UInt32 Field_2_3; // 0x28
	::System::UInt32 Field_2_5; // 0x2C
	::System::UInt32 Field_2_4; // 0x30
	::System::UInt32 Field_2_2; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_7015249E1B474314(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_9A1C0BBCB68140E7_METHOD_2_7015249E1B474314_OFFSET))(this, a1, a2);
	}
};
