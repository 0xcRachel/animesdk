#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_69FF5DE516C87A66;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class PropPuzzleMissionResetEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E73C702B8FEF006F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E9D7E0)
#define CLASS_2_E73C702B8FEF006F_METHOD_2_3F5DC960A2A68BBD_OFFSET UNITYSDK_OFFSET(0x10E9DA90)
#define CLASS_2_E73C702B8FEF006F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10E9D8B0)
#define CLASS_2_E73C702B8FEF006F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10E9D950)
#define CLASS_2_E73C702B8FEF006F_TICK_OFFSET UNITYSDK_OFFSET(0x10E9DA00)
#define CLASS_2_E73C702B8FEF006F__CTOR_OFFSET UNITYSDK_OFFSET(0x10E9D720)

inline static constexpr unsigned int Class_2_E73C702B8FEF006F_TypeDefinitionIndex = 41998;

class Class_2_E73C702B8FEF006F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::PropPuzzleMissionResetEventListener* Field_2_0; // 0x28
	::Class_1_69FF5DE516C87A66* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F5DC960A2A68BBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E73C702B8FEF006F_METHOD_2_3F5DC960A2A68BBD_OFFSET))(this, a1);
	}
};
