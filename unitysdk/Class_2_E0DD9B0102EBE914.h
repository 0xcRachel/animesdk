#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonopolyTriggerMoveToNextMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E0DD9B0102EBE914_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE738520)
#define CLASS_2_E0DD9B0102EBE914_METHOD_2_1650D7D6437FCD61_OFFSET UNITYSDK_OFFSET(0xE738430)
#define CLASS_2_E0DD9B0102EBE914_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE738330)
#define CLASS_2_E0DD9B0102EBE914_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE7384D0)
#define CLASS_2_E0DD9B0102EBE914_TICK_OFFSET UNITYSDK_OFFSET(0xE738560)
#define CLASS_2_E0DD9B0102EBE914__CTOR_OFFSET UNITYSDK_OFFSET(0xE738320)

inline static constexpr unsigned int Class_2_E0DD9B0102EBE914_TypeDefinitionIndex = 53699;

class Class_2_E0DD9B0102EBE914 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::MonopolyTriggerMoveToNextMap* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_1650D7D6437FCD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_METHOD_2_1650D7D6437FCD61_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0DD9B0102EBE914_TICK_OFFSET))(this, a1);
	}
};
