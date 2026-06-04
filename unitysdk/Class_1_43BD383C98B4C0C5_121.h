#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationAccuratelyMode.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_9B28A54582B92258;
class Class_3_CD04D3296DF4C842_4;
class Class_3_CD04D3296DF4C842_5;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET UNITYSDK_OFFSET(0x1203E590)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_121_TypeDefinitionIndex = 53347;

class Class_1_43BD383C98B4C0C5_121 : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_4* Field_1_0; // 0x10
	::Class_3_9B28A54582B92258* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::Class_3_CD04D3296DF4C842_5* Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::Int32 Field_1_5; // 0x3C
	::System::Single Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x44
	::System::Boolean Field_1_8; // 0x48
	::System::Boolean Field_1_9; // 0x49
	::System::Boolean Field_1_10; // 0x4A
	::System::Boolean Field_1_11; // 0x4B
	::RPG::GameCore::AdvNavigationMotionFlagMode Field_1_12; // 0x4C
	::RPG::GameCore::EAdventureNavigationAccuratelyMode Field_1_13; // 0x50
	::System::Boolean Field_1_14; // 0x54
	::System::Boolean Field_1_15; // 0x55
	::System::Boolean Field_1_16; // 0x56
	::System::Boolean Field_1_17; // 0x57
	::System::Boolean Field_1_18; // 0x58
	::System::Boolean Field_1_19; // 0x59
	::System::Boolean Field_1_20; // 0x5A
	::System::Boolean Field_1_21; // 0x5B
	::System::Single Field_1_22; // 0x5C
	::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> Field_1_23; // 0x60
	::System::Single Field_1_24; // 0x68
	::System::Single Field_1_25; // 0x6C
	::System::Single Field_1_26; // 0x70
	::RPG::GameCore::CharacterMotionFlag Field_1_27; // 0x74
	::System::Single Field_1_28; // 0x78
	::UnityEngine::Quaternion Field_1_29; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_121__CTOR_OFFSET))(this);
	}
};
