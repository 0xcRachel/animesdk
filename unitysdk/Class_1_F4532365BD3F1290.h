#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_9C2F1FCEC1A75FFD;
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayerBase_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F4532365BD3F1290__CTOR_OFFSET UNITYSDK_OFFSET(0x162BD150)

inline static constexpr unsigned int Class_1_F4532365BD3F1290_TypeDefinitionIndex = 32322;

class Class_1_F4532365BD3F1290 : public ::System::Object
{
public:
	::Class_2_0C58AD91B0F4D809* Field_1_9; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerBase_1<::Class_2_9C2F1FCEC1A75FFD*>*>* Field_1_10; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_2; // 0x20
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection Field_1_4; // 0x28
	::System::Boolean Field_1_7; // 0x2C
	::System::Boolean Field_1_5; // 0x2D
	::System::Boolean Field_1_8; // 0x2E
	::System::Boolean Field_1_6; // 0x2F
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType Field_1_3; // 0x30
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_0; // 0x34
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Field_1_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F4532365BD3F1290__CTOR_OFFSET))(this);
	}
};
