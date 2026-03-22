#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_68C7EAEDA46C0580_PlayerMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameSceneItemType.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewDirection.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelLayerType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A_1;
class Class_1_AF85D707C83D7C65;
class Class_2_0C58AD91B0F4D809;
class Class_2_9C2F1FCEC1A75FFD;
class Class_2_AF4E89503EBBCCA0;
class Class_3_44EDAE37250FA2DB;
class Class_3_79A4F66B82C02A5E;
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAutoRotateStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelMoveStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { template <typename T> class FourRotateVoxelLayer_1; }
namespace RPG::GameCore { class FourRotateVoxel2DPlatformConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_06F7ACE9FB1C8082_OFFSET UNITYSDK_OFFSET(0x8A17A50)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0C65D29C3029253B_OFFSET UNITYSDK_OFFSET(0x8A1C030)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0D084A424403BCDF_OFFSET UNITYSDK_OFFSET(0x8A18B20)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0D5E5F297B383D99_OFFSET UNITYSDK_OFFSET(0x8A17390)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0DD4E0EFA987B972_OFFSET UNITYSDK_OFFSET(0x8A18D50)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0E8FD277F344B6A3_OFFSET UNITYSDK_OFFSET(0x8A16110)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_111764E0A24DC8E7_OFFSET UNITYSDK_OFFSET(0x8A189D0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_1161B0E93F7E44AD_OFFSET UNITYSDK_OFFSET(0x8A12B60)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_13230F274612BEE7_OFFSET UNITYSDK_OFFSET(0x8A10A30)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2C4CA79B306A10BC_1_OFFSET UNITYSDK_OFFSET(0x8A16270)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2C4CA79B306A10BC_OFFSET UNITYSDK_OFFSET(0x8A16070)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2D5BAC6A9C01B54E_OFFSET UNITYSDK_OFFSET(0x8A1CCA0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_3265B427FAD2DFA4_OFFSET UNITYSDK_OFFSET(0x8A1BDB0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_34D62C3A30DB2CCC_OFFSET UNITYSDK_OFFSET(0x8A1A760)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_389DD77D46E62BA5_OFFSET UNITYSDK_OFFSET(0x8A10F30)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_40E67CBB89CCD844_OFFSET UNITYSDK_OFFSET(0x8A131A0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5583457303B61230_OFFSET UNITYSDK_OFFSET(0x8A120C0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_59CED54B012B9E98_OFFSET UNITYSDK_OFFSET(0x8A10630)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5BF933E10BDAEED5_OFFSET UNITYSDK_OFFSET(0x8A1C490)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5D6318C6D37F3318_OFFSET UNITYSDK_OFFSET(0x8A174C0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_627D67C0054186C7_1_OFFSET UNITYSDK_OFFSET(0x8A13000)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_627D67C0054186C7_OFFSET UNITYSDK_OFFSET(0x8A129C0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_638280C73975FA50_OFFSET UNITYSDK_OFFSET(0x8A183B0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_64234880CE869987_OFFSET UNITYSDK_OFFSET(0x8A171B0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_68F4C7AD8B57681F_OFFSET UNITYSDK_OFFSET(0x8A1A6C0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6A01BE48CAE79AE4_OFFSET UNITYSDK_OFFSET(0x8A15680)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6BE01179B6313199_1_OFFSET UNITYSDK_OFFSET(0x8A14F80)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6BE01179B6313199_OFFSET UNITYSDK_OFFSET(0x8A14990)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_75BF251FCFD511C3_OFFSET UNITYSDK_OFFSET(0x8A1AA60)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_76060C53AC0F1320_OFFSET UNITYSDK_OFFSET(0x8A18140)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_781B28964D24BF78_OFFSET UNITYSDK_OFFSET(0x8A168F0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_7ADFCE481234BD93_OFFSET UNITYSDK_OFFSET(0x8A187D0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_804A559216BD71FA_OFFSET UNITYSDK_OFFSET(0x8A16E80)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x8A1D5E0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_81A00FB59F21F39A_OFFSET UNITYSDK_OFFSET(0x8A13250)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_828B3C0B74DFB8A6_OFFSET UNITYSDK_OFFSET(0x8A159A0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_88E6494389A0E18D_OFFSET UNITYSDK_OFFSET(0x8A11FE0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_8C4201C4170903FB_OFFSET UNITYSDK_OFFSET(0x8A177A0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_8D5A30D3C3C72786_OFFSET UNITYSDK_OFFSET(0x8A1A990)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_918BDEB5630729B9_OFFSET UNITYSDK_OFFSET(0x8A1C980)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9A905A114E858EC9_1_OFFSET UNITYSDK_OFFSET(0x8A13120)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9A905A114E858EC9_OFFSET UNITYSDK_OFFSET(0x8A12AE0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9B78EADB6CBA8DA3_OFFSET UNITYSDK_OFFSET(0x8A12260)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9DE72F9D3AF721F1_OFFSET UNITYSDK_OFFSET(0x8A1D7E0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9FCC4062A872D255_OFFSET UNITYSDK_OFFSET(0x8A1C750)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A0CD5E82FD180A5C_OFFSET UNITYSDK_OFFSET(0x8A17FF0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A1F90F4B49B60010_OFFSET UNITYSDK_OFFSET(0x8A10D30)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A21CCBFEF665AE17_OFFSET UNITYSDK_OFFSET(0x8A15570)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A54AFA66C2AE094E_OFFSET UNITYSDK_OFFSET(0x8A13AB0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A703BEBEEBA84608_OFFSET UNITYSDK_OFFSET(0x8A10DE0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_AB079E503915B2CD_OFFSET UNITYSDK_OFFSET(0x8A13CE0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_AF81BE78BA8873E2_OFFSET UNITYSDK_OFFSET(0x8A12440)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_B119438CD74FAABB_OFFSET UNITYSDK_OFFSET(0x8A1C7E0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_B7033E01C594201D_OFFSET UNITYSDK_OFFSET(0x8A16310)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_BB80D5CDCCF2A751_OFFSET UNITYSDK_OFFSET(0x8A12D90)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x8A12910)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CAAF4F77CA410C4E_OFFSET UNITYSDK_OFFSET(0x8A17C60)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CADC01A61694D7BE_OFFSET UNITYSDK_OFFSET(0x8A135A0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CB14CB246A68B57D_OFFSET UNITYSDK_OFFSET(0x8A13810)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CBC4BAA742E57AED_OFFSET UNITYSDK_OFFSET(0x8A176D0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x8A14850)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_DA30A0B05EC94CB6_OFFSET UNITYSDK_OFFSET(0x8A0F980)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x8A1D1B0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_EDACF3D84F32DDEF_OFFSET UNITYSDK_OFFSET(0x8A14750)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8A1D7D0)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x8A1C910)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F1A21F6053A7E0EC_OFFSET UNITYSDK_OFFSET(0x8A19A70)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x8A1CD30)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_FAC31CE5A7DA4972_OFFSET UNITYSDK_OFFSET(0x8A10720)
#define CLASS_1_B41AA56EA3DB6CD8_METHOD_1_FC1FE8EE78A25012_OFFSET UNITYSDK_OFFSET(0x8A1CBF0)
#define CLASS_1_B41AA56EA3DB6CD8__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A1DA80)
#define CLASS_1_B41AA56EA3DB6CD8__CTOR_OFFSET UNITYSDK_OFFSET(0x8A0F700)

inline static constexpr unsigned int Class_1_B41AA56EA3DB6CD8_TypeDefinitionIndex = 60481;

class Class_1_B41AA56EA3DB6CD8 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_9()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41AA56EA3DB6CD8_TypeDefinitionIndex)->GetStaticField(0x9D50);
	}
	static ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41AA56EA3DB6CD8_TypeDefinitionIndex)->GetStaticField(0x9D58);
	}
	static ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B41AA56EA3DB6CD8_TypeDefinitionIndex)->GetStaticField(0x9D60);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>* Field_1_8; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_5; // 0x20
	::Class_1_867B6CE75953535A_1* Field_1_3; // 0x28
	::Class_3_44EDAE37250FA2DB* Field_1_4; // 0x30
	::Class_2_AF4E89503EBBCCA0* Field_1_2; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::UnityEngine::Transform*>* Field_1_12; // 0x48
	::System::Boolean Field_1_11; // 0x50
	::System::Boolean Field_1_10; // 0x51

	::System::Void _ctor(::Class_3_44EDAE37250FA2DB* a1, ::Class_1_867B6CE75953535A_1* a2, ::Class_2_AF4E89503EBBCCA0* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_44EDAE37250FA2DB*, ::Class_1_867B6CE75953535A_1*, ::Class_2_AF4E89503EBBCCA0*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8__CCTOR_OFFSET))();
	}

	::System::Void Method_1_DA30A0B05EC94CB6(::Class_1_AF85D707C83D7C65* a1, ::UnityEngine::GameObject* a2, ::Class_2_0C58AD91B0F4D809* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::UnityEngine::GameObject*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_DA30A0B05EC94CB6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_389DD77D46E62BA5(::Class_1_AF85D707C83D7C65* a1, ::Class_2_0C58AD91B0F4D809* a2, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::Class_2_0C58AD91B0F4D809*, ::RPG::GameCore::FourRotateVoxel2DPlatformConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_389DD77D46E62BA5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A703BEBEEBA84608(::Class_1_AF85D707C83D7C65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AF85D707C83D7C65*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A703BEBEEBA84608_OFFSET))(this, a1);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_13230F274612BEE7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_0C58AD91B0F4D809* a3)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_13230F274612BEE7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5583457303B61230(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5583457303B61230_OFFSET))(this, a1);
	}

	::Class_2_0C58AD91B0F4D809* Method_1_FAC31CE5A7DA4972(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAutoRotateStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_FAC31CE5A7DA4972_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_0C58AD91B0F4D809* Method_1_59CED54B012B9E98(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a3, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4)
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_59CED54B012B9E98_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_AF81BE78BA8873E2(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView* a2, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>* a3, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a4, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelMoveStructGameView*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_AF81BE78BA8873E2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_C3FCFEB83374757C(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_627D67C0054186C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9A905A114E858EC9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_627D67C0054186C7_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_627D67C0054186C7_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9A905A114E858EC9_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9A905A114E858EC9_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_40E67CBB89CCD844(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_40E67CBB89CCD844_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_81A00FB59F21F39A(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_81A00FB59F21F39A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_BB80D5CDCCF2A751(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_BB80D5CDCCF2A751_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>* Method_1_CADC01A61694D7BE(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CADC01A61694D7BE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CB14CB246A68B57D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CB14CB246A68B57D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1161B0E93F7E44AD(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_1161B0E93F7E44AD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A54AFA66C2AE094E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A54AFA66C2AE094E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AB079E503915B2CD(::System::Single& a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5, ::System::Single& a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_AB079E503915B2CD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_EDACF3D84F32DDEF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_EDACF3D84F32DDEF_OFFSET))(this);
	}

	::System::Single Method_1_D3CDDBF95A81E584()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_D3CDDBF95A81E584_OFFSET))(this);
	}

	::System::Single Method_1_6BE01179B6313199(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6BE01179B6313199_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_6BE01179B6313199_1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6BE01179B6313199_1_OFFSET))(this, a1, a2);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_88E6494389A0E18D(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::Boolean a2, ::Class_2_0C58AD91B0F4D809* a3)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_88E6494389A0E18D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_6A01BE48CAE79AE4(::Class_2_9C2F1FCEC1A75FFD* a1, ::Class_2_0C58AD91B0F4D809* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_6A01BE48CAE79AE4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B78EADB6CBA8DA3(::Class_2_9C2F1FCEC1A75FFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9B78EADB6CBA8DA3_OFFSET))(this, a1);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_2C4CA79B306A10BC(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_0C58AD91B0F4D809* a2)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2C4CA79B306A10BC_OFFSET))(this, a1, a2);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_2C4CA79B306A10BC_1(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_0C58AD91B0F4D809* a2)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2C4CA79B306A10BC_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7033E01C594201D(::Class_2_9C2F1FCEC1A75FFD* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_B7033E01C594201D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_828B3C0B74DFB8A6(::Class_2_9C2F1FCEC1A75FFD* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_828B3C0B74DFB8A6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_804A559216BD71FA(::Class_2_9C2F1FCEC1A75FFD* a1, ::Class_2_9C2F1FCEC1A75FFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_804A559216BD71FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_64234880CE869987(::Class_2_9C2F1FCEC1A75FFD* a1, ::Class_2_9C2F1FCEC1A75FFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_64234880CE869987_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1F90F4B49B60010(::Class_2_9C2F1FCEC1A75FFD* a1, ::Class_2_9C2F1FCEC1A75FFD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A1F90F4B49B60010_OFFSET))(this, a1, a2);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_0E8FD277F344B6A3(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection a3, ::Class_2_0C58AD91B0F4D809* a4)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewDirection, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0E8FD277F344B6A3_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_0D5E5F297B383D99(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::Class_2_0C58AD91B0F4D809* a2)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0D5E5F297B383D99_OFFSET))(this, a1, a2);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_A21CCBFEF665AE17(::Class_1_AF85D707C83D7C65* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2, ::System::Boolean a3, ::Class_2_0C58AD91B0F4D809* a4)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::Class_1_AF85D707C83D7C65*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::Boolean, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A21CCBFEF665AE17_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_5D6318C6D37F3318(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5D6318C6D37F3318_OFFSET))(this, a1);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_CBC4BAA742E57AED(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_3_79A4F66B82C02A5E* a2, ::System::Int32 a3)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_3_79A4F66B82C02A5E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CBC4BAA742E57AED_OFFSET))(this, a1, a2, a3);
	}

	::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord> Method_1_8C4201C4170903FB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Nullable_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord>(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_8C4201C4170903FB_OFFSET))(this, a1);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_06F7ACE9FB1C8082(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType a2, ::System::Int32 a3, ::Class_2_0C58AD91B0F4D809* a4)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayerType, ::System::Int32, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_06F7ACE9FB1C8082_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CAAF4F77CA410C4E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_1_68C7EAEDA46C0580_PlayerMoveState a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_1_68C7EAEDA46C0580_PlayerMoveState, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_CAAF4F77CA410C4E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_A0CD5E82FD180A5C(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_A0CD5E82FD180A5C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_76060C53AC0F1320(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1, ::Class_2_9C2F1FCEC1A75FFD* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_9C2F1FCEC1A75FFD*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_76060C53AC0F1320_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_638280C73975FA50(::Class_2_0C58AD91B0F4D809* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_638280C73975FA50_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_7ADFCE481234BD93(::Class_2_0C58AD91B0F4D809* a1, ::System::Boolean a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_7ADFCE481234BD93_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0D084A424403BCDF(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0D084A424403BCDF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_111764E0A24DC8E7(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_111764E0A24DC8E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0DD4E0EFA987B972(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*& a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Boolean a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0DD4E0EFA987B972_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_F1A21F6053A7E0EC(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*& a5, ::System::Int32 a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F1A21F6053A7E0EC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Single Method_1_34D62C3A30DB2CCC(::Class_2_9C2F1FCEC1A75FFD* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_34D62C3A30DB2CCC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68F4C7AD8B57681F(::Class_2_9C2F1FCEC1A75FFD* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_68F4C7AD8B57681F_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8D5A30D3C3C72786(::Class_2_9C2F1FCEC1A75FFD* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_8D5A30D3C3C72786_OFFSET))(this, a1, a2);
	}

	::Class_2_9C2F1FCEC1A75FFD* Method_1_75BF251FCFD511C3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7, ::System::Boolean a8, ::UnityEngine::Vector3 a9, ::System::Boolean a10)
	{
		return ((::Class_2_9C2F1FCEC1A75FFD*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_75BF251FCFD511C3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::Void Method_1_3265B427FAD2DFA4(::Class_2_9C2F1FCEC1A75FFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_3265B427FAD2DFA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0C65D29C3029253B(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_0C65D29C3029253B_OFFSET))(this, a1);
	}

	::System::Void Method_1_5BF933E10BDAEED5(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_5BF933E10BDAEED5_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* Method_1_9FCC4062A872D255(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9FCC4062A872D255_OFFSET))(this, a1);
	}

	::System::Single Method_1_B119438CD74FAABB(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_B119438CD74FAABB_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_1_918BDEB5630729B9(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_918BDEB5630729B9_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord Method_1_FC1FE8EE78A25012(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_FC1FE8EE78A25012_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Method_1_2D5BAC6A9C01B54E(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1)
	{
		return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_2D5BAC6A9C01B54E_OFFSET))(this, a1);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_EA0BA3E4AF50C583()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_9DE72F9D3AF721F1(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameSceneItemType, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_9DE72F9D3AF721F1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_781B28964D24BF78(::Class_2_9C2F1FCEC1A75FFD* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_9C2F1FCEC1A75FFD*>* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_9C2F1FCEC1A75FFD*>* a3, ::System::Boolean a4, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a5, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a6, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C2F1FCEC1A75FFD*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_9C2F1FCEC1A75FFD*>*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelLayer_1<::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Boolean, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord))((::PBYTE)hIl2Cpp + CLASS_1_B41AA56EA3DB6CD8_METHOD_1_781B28964D24BF78_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
