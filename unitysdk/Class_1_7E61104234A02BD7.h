#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class BattleQTEBaseConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_7E61104234A02BD7__CTOR_OFFSET UNITYSDK_OFFSET(0x1119C5A0)

inline static constexpr unsigned int Class_1_7E61104234A02BD7_TypeDefinitionIndex = 43968;

class Class_1_7E61104234A02BD7 : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_6; // 0x10
	::Class_3_BCCE950C2E8DF1F0* Field_1_2; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_1_3; // 0x20
	::RPG::GameCore::BattleQTEBaseConfig* Field_1_0; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_1_5; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_1_4; // 0x38
	::System::Single Field_1_1; // 0x40

	::System::Void _ctor(::RPG::GameCore::BattleQTEBaseConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleQTEBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7E61104234A02BD7__CTOR_OFFSET))(this, a1, a2);
	}
};
