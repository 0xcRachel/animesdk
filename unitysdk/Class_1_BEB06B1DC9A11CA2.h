#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_BEB06B1DC9A11CA2_METHOD_1_52288CDC0F33744D_OFFSET UNITYSDK_OFFSET(0x89585B0)
#define CLASS_1_BEB06B1DC9A11CA2_METHOD_1_916FEF0CB3EEF980_OFFSET UNITYSDK_OFFSET(0x89586E0)

inline static constexpr unsigned int Class_1_BEB06B1DC9A11CA2_TypeDefinitionIndex = 47832;

class Class_1_BEB06B1DC9A11CA2 : public ::System::Object
{
public:
	static ::RPG::GameCore::GameEntity* Method_1_52288CDC0F33744D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BEB06B1DC9A11CA2_METHOD_1_52288CDC0F33744D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_916FEF0CB3EEF980(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo*& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_BEB06B1DC9A11CA2_METHOD_1_916FEF0CB3EEF980_OFFSET))(a1, a2, a3);
	}
};
