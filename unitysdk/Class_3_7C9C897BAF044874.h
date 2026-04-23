#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CF936FB7CE3B8D17.h"
#include "unitysdk/RPG/GameCore/SOFinishReason.h"

class Class_2_9A097580DF02CED3;
class Class_2_9D4DD2F4235F8658;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvTriggerAIPlaySmartObject; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7C9C897BAF044874_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF96B1D0)
#define CLASS_3_7C9C897BAF044874_METHOD_3_5700582BC8616701_OFFSET UNITYSDK_OFFSET(0xF96BAF0)
#define CLASS_3_7C9C897BAF044874_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xF96B9E0)
#define CLASS_3_7C9C897BAF044874_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF96B270)
#define CLASS_3_7C9C897BAF044874_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF96B940)
#define CLASS_3_7C9C897BAF044874_TICK_OFFSET UNITYSDK_OFFSET(0xF96B6D0)
#define CLASS_3_7C9C897BAF044874__CTOR_OFFSET UNITYSDK_OFFSET(0xF96B0F0)
#define CLASS_3_7C9C897BAF044874___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF96BC30)

inline static constexpr unsigned int Class_3_7C9C897BAF044874_TypeDefinitionIndex = 48491;

class Class_3_7C9C897BAF044874 : public ::Class_2_CF936FB7CE3B8D17
{
public:
	::Class_2_9D4DD2F4235F8658* Field_3_3; // 0x30
	::RPG::GameCore::AdvTriggerAIPlaySmartObject* Field_3_0; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_3_1; // 0x40
	::Class_2_9A097580DF02CED3* Field_3_2; // 0x48
	::System::UInt64 Field_3_6; // 0x50
	::System::UInt32 Field_3_4; // 0x58
	::System::Boolean Field_3_5; // 0x5C
	::System::UInt32 Field_3_7; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_5700582BC8616701(::RPG::GameCore::SOFinishReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SOFinishReason))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874_METHOD_3_5700582BC8616701_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7C9C897BAF044874___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
