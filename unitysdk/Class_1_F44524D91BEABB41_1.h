#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6BFAFA494F2D1E4B;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x843C1B0)

inline static constexpr unsigned int Class_1_F44524D91BEABB41_1_TypeDefinitionIndex = 44885;

class Class_1_F44524D91BEABB41_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::Class_2_6BFAFA494F2D1E4B* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F44524D91BEABB41_1__CTOR_OFFSET))(this);
	}
};
