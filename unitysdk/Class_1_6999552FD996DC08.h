#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B304C8FFCA7A1C6A.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_6999552FD996DC08_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8525DE0)
#define CLASS_1_6999552FD996DC08__CTOR_OFFSET UNITYSDK_OFFSET(0x8525E90)

inline static constexpr unsigned int Class_1_6999552FD996DC08_TypeDefinitionIndex = 48401;

class Class_1_6999552FD996DC08 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Struct_2_B304C8FFCA7A1C6A Field_1_1; // 0x18
	::Struct_2_B304C8FFCA7A1C6A Field_1_3; // 0x20
	::Struct_2_B304C8FFCA7A1C6A Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6999552FD996DC08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6999552FD996DC08_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
