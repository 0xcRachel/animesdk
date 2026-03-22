#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
namespace RPG::GameCore { class FourRotateVoxelFinishPointConfig; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_C370D91670DF0B16__CTOR_OFFSET UNITYSDK_OFFSET(0x162947F0)

inline static constexpr unsigned int Class_1_C370D91670DF0B16_TypeDefinitionIndex = 32357;

class Class_1_C370D91670DF0B16 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::Class_2_0C58AD91B0F4D809* Field_1_0; // 0x18
	::RPG::GameCore::FourRotateVoxelFinishPointConfig* Field_1_1; // 0x20
	::UnityEngine::GameObject* Field_1_5; // 0x28
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_6; // 0x30
	::System::Int32 Field_1_3; // 0x48
	::System::Boolean Field_1_4; // 0x4C
	::System::Boolean Field_1_8; // 0x4D
	::System::Boolean Field_1_2; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C370D91670DF0B16__CTOR_OFFSET))(this);
	}
};
