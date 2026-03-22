#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_DED79409492DC63C_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET UNITYSDK_OFFSET(0x109AFEA0)
#define CLASS_2_DED79409492DC63C_CLASS_1_8C2C52864F506F61__CTOR_OFFSET UNITYSDK_OFFSET(0x109AFF00)

inline static constexpr unsigned int Class_2_DED79409492DC63C_Class_1_8C2C52864F506F61_TypeDefinitionIndex = 58450;

class Class_2_DED79409492DC63C_Class_1_8C2C52864F506F61 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::Client::BaseShaderPropertyTransition* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED79409492DC63C_CLASS_1_8C2C52864F506F61__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DED79409492DC63C_CLASS_1_8C2C52864F506F61_CLEAR_OFFSET))(this);
	}
};
