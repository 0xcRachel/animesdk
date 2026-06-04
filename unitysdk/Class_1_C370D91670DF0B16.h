#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C370D91670DF0B16__CTOR_OFFSET UNITYSDK_OFFSET(0x19443480)

inline static constexpr unsigned int Class_1_C370D91670DF0B16_TypeDefinitionIndex = 39822;

class Class_1_C370D91670DF0B16 : public ::System::Object
{
public:
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::Class_2_B8E38BF47138A2E5* Field_1_2; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x34
	::System::Boolean Field_1_6; // 0x35
	::System::Boolean Field_1_7; // 0x36
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C370D91670DF0B16__CTOR_OFFSET))(this);
	}
};
