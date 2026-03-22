#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"

class Class_1_AF85D707C83D7C65;
class Class_1_CA9A7ECA43FC8636;
class Class_2_0C58AD91B0F4D809;
class Class_2_9C2F1FCEC1A75FFD;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1034FEB0)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x10350C30)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x10350720)
#define CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET UNITYSDK_OFFSET(0x10350AA0)

inline static constexpr unsigned int Class_1_CA9A7ECA43FC8636___c__DisplayClass13_0_TypeDefinitionIndex = 60542;

class Class_1_CA9A7ECA43FC8636___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_AF85D707C83D7C65* scene; // 0x10
	::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_9C2F1FCEC1A75FFD*>*>* data; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* parentStruct; // 0x20
	::Class_1_CA9A7ECA43FC8636* __4__this; // 0x28
	::Class_2_0C58AD91B0F4D809* triggerEntity; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __Add2DBrickInteractTrigger_b__1(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__1_OFFSET))(this, guestEntity);
	}

	::System::Void __Add2DBrickInteractTrigger_b__2(::Class_2_0C58AD91B0F4D809* guestEntity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__2_OFFSET))(this, guestEntity);
	}

	::System::Void __Add2DBrickInteractTrigger_b__0(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636___C__DISPLAYCLASS13_0___ADD2DBRICKINTERACTTRIGGER_B__0_OFFSET))(this, entity);
	}
};
