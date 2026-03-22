#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class RequestSetServerGroupPropertyV2; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_989FB4F6445EE733_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105903D0)
#define CLASS_2_989FB4F6445EE733_METHOD_2_DC029EEDE931ACB9_OFFSET UNITYSDK_OFFSET(0x10590410)
#define CLASS_2_989FB4F6445EE733_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10590000)
#define CLASS_2_989FB4F6445EE733_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1058FFA0)
#define CLASS_2_989FB4F6445EE733_TICK_OFFSET UNITYSDK_OFFSET(0x10590370)
#define CLASS_2_989FB4F6445EE733__CTOR_OFFSET UNITYSDK_OFFSET(0x1058FF90)

inline static constexpr unsigned int Class_2_989FB4F6445EE733_TypeDefinitionIndex = 42023;

class Class_2_989FB4F6445EE733 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RequestSetServerGroupPropertyV2* Field_2_1; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::System::UInt32 Field_2_6; // 0x38
	::System::UInt32 Field_2_5; // 0x3C
	::System::UInt32 Field_2_4; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestSetServerGroupPropertyV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestSetServerGroupPropertyV2*))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DC029EEDE931ACB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_989FB4F6445EE733_METHOD_2_DC029EEDE931ACB9_OFFSET))(this, a1, a2);
	}
};
