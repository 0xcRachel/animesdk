#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_44F1C15CA8276327_CLASS_1_31B35383D25353CE__CTOR_OFFSET UNITYSDK_OFFSET(0x89D6750)

inline static constexpr unsigned int Class_2_44F1C15CA8276327_Class_1_31B35383D25353CE_TypeDefinitionIndex = 56952;

class Class_2_44F1C15CA8276327_Class_1_31B35383D25353CE : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44F1C15CA8276327_CLASS_1_31B35383D25353CE__CTOR_OFFSET))(this);
	}
};
