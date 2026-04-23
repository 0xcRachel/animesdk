#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvModifierListenPhotograph; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_C622968C338D8F4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103B71A0)
#define CLASS_2_C622968C338D8F4F_METHOD_2_475D7AF7572E6782_OFFSET UNITYSDK_OFFSET(0x103B74A0)
#define CLASS_2_C622968C338D8F4F_METHOD_2_7908E0A3A062534E_OFFSET UNITYSDK_OFFSET(0x103B7330)
#define CLASS_2_C622968C338D8F4F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x103B6FF0)
#define CLASS_2_C622968C338D8F4F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x103B70D0)
#define CLASS_2_C622968C338D8F4F_TICK_OFFSET UNITYSDK_OFFSET(0x103B72D0)
#define CLASS_2_C622968C338D8F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x103B6EF0)

inline static constexpr unsigned int Class_2_C622968C338D8F4F_TypeDefinitionIndex = 48373;

class Class_2_C622968C338D8F4F : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x30
	::RPG::GameCore::AdvModifierListenPhotograph* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7908E0A3A062534E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_METHOD_2_7908E0A3A062534E_OFFSET))(this, a1);
	}

	::System::Void Method_2_475D7AF7572E6782(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C622968C338D8F4F_METHOD_2_475D7AF7572E6782_OFFSET))(this, a1);
	}
};
