#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SceneGachaListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_7D410B11D876F24C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2B3FD0)
#define CLASS_2_7D410B11D876F24C_METHOD_2_33E04F40C443C2C0_OFFSET UNITYSDK_OFFSET(0xC2B4650)
#define CLASS_2_7D410B11D876F24C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2B44D0)
#define CLASS_2_7D410B11D876F24C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2B41A0)
#define CLASS_2_7D410B11D876F24C_TICK_OFFSET UNITYSDK_OFFSET(0xC2B4320)
#define CLASS_2_7D410B11D876F24C__CTOR_OFFSET UNITYSDK_OFFSET(0xC2B3EE0)

inline static constexpr unsigned int Class_2_7D410B11D876F24C_TypeDefinitionIndex = 53932;

class Class_2_7D410B11D876F24C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x28
	::RPG::GameCore::SceneGachaListener* Field_2_0; // 0x30
	::RPG::GameCore::GameEntity* Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SceneGachaListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SceneGachaListener*))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_33E04F40C443C2C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7D410B11D876F24C_METHOD_2_33E04F40C443C2C0_OFFSET))(this, a1);
	}
};
