#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_2B6684D3E43696AE.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class CreateBattleCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D9455851245C4EB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF22FB0)
#define CLASS_2_D9455851245C4EB7_METHOD_2_7A642F973B3AE691_OFFSET UNITYSDK_OFFSET(0xFF239C0)
#define CLASS_2_D9455851245C4EB7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFF23000)
#define CLASS_2_D9455851245C4EB7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFF23BE0)
#define CLASS_2_D9455851245C4EB7_TICK_OFFSET UNITYSDK_OFFSET(0xFF23C30)
#define CLASS_2_D9455851245C4EB7__CTOR_OFFSET UNITYSDK_OFFSET(0xFF22F10)

inline static constexpr unsigned int Class_2_D9455851245C4EB7_TypeDefinitionIndex = 42956;

class Class_2_D9455851245C4EB7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_0; // 0x20
	::RPG::GameCore::CreateBattleCharacter* Field_2_2; // 0x28
	::RPG::GameCore::TaskContext* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_ONTASKBEGIN_OFFSET))(this);
	}

	::Struct_2_2B6684D3E43696AE Method_2_7A642F973B3AE691()
	{
		return ((::Struct_2_2B6684D3E43696AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_METHOD_2_7A642F973B3AE691_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D9455851245C4EB7_TICK_OFFSET))(this, a1);
	}
};
