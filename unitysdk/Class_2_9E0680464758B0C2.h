#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleFeverTimeScreenFire; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_9E0680464758B0C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E2FCA0)
#define CLASS_2_9E0680464758B0C2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12E2FCE0)
#define CLASS_2_9E0680464758B0C2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12E2FEE0)
#define CLASS_2_9E0680464758B0C2_TICK_OFFSET UNITYSDK_OFFSET(0x12E2FF30)
#define CLASS_2_9E0680464758B0C2__CTOR_OFFSET UNITYSDK_OFFSET(0x12E2FC90)

inline static constexpr unsigned int Class_2_9E0680464758B0C2_TypeDefinitionIndex = 51267;

class Class_2_9E0680464758B0C2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowBattleFeverTimeScreenFire* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleFeverTimeScreenFire* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleFeverTimeScreenFire*))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9E0680464758B0C2_TICK_OFFSET))(this, a1);
	}
};
