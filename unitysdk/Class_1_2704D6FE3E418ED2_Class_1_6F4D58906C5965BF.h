#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_151B93D9C4BBDCA4;
class Class_1_AEA95A1F4A190A36;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }

#define CLASS_1_2704D6FE3E418ED2_CLASS_1_6F4D58906C5965BF__CTOR_OFFSET UNITYSDK_OFFSET(0xFDEDDF0)

inline static constexpr unsigned int Class_1_2704D6FE3E418ED2_Class_1_6F4D58906C5965BF_TypeDefinitionIndex = 47956;

class Class_1_2704D6FE3E418ED2_Class_1_6F4D58906C5965BF : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::LittleGameLevelConfig* Field_1_3; // 0x18
	::Class_1_151B93D9C4BBDCA4* Field_1_4; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28
	::System::String* Field_1_2; // 0x30
	::Class_1_AEA95A1F4A190A36* Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2704D6FE3E418ED2_CLASS_1_6F4D58906C5965BF__CTOR_OFFSET))(this);
	}
};
