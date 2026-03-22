#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E046197DFD41D53B_Struct_2_26E46D0ED8EDBA3A.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E046197DFD41D53B_CLASS_1_557C23A103C4D72D__CTOR_OFFSET UNITYSDK_OFFSET(0xFDE7950)

inline static constexpr unsigned int Class_1_E046197DFD41D53B_Class_1_557C23A103C4D72D_TypeDefinitionIndex = 43800;

class Class_1_E046197DFD41D53B_Class_1_557C23A103C4D72D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C
	::Class_1_E046197DFD41D53B_Struct_2_26E46D0ED8EDBA3A Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E046197DFD41D53B_CLASS_1_557C23A103C4D72D__CTOR_OFFSET))(this);
	}
};
