#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameViewCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_867B6CE75953535A_1;
class Class_1_CA9A7ECA43FC8636_Class_1_F2D17E30E1E79D69;
class Class_2_0C58AD91B0F4D809;
class Class_2_9C2F1FCEC1A75FFD;
class Class_3_44EDAE37250FA2DB;
namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGameView; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelRuntimeInspector; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_CA9A7ECA43FC8636_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10345C60)
#define CLASS_1_CA9A7ECA43FC8636_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x103450D0)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_076E1E2A0183A470_OFFSET UNITYSDK_OFFSET(0x103479A0)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x10350280)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10345060)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_18188D67877F2AFB_OFFSET UNITYSDK_OFFSET(0x1034BEA0)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_3AC5F11D07AF339C_OFFSET UNITYSDK_OFFSET(0x1034C040)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_45F53D89337FC6C8_OFFSET UNITYSDK_OFFSET(0x1034C970)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_4988666BECC8CE44_OFFSET UNITYSDK_OFFSET(0x1034FEC0)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_52DC9CC69AE40BFA_OFFSET UNITYSDK_OFFSET(0x10347AE0)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_91B48388F4BFAF76_OFFSET UNITYSDK_OFFSET(0x10348C50)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_A37E414ACE798D5C_OFFSET UNITYSDK_OFFSET(0x1034AA60)
#define CLASS_1_CA9A7ECA43FC8636_METHOD_1_E41FCF4CAFD9C569_OFFSET UNITYSDK_OFFSET(0x103500B0)
#define CLASS_1_CA9A7ECA43FC8636_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10345720)
#define CLASS_1_CA9A7ECA43FC8636__CCTOR_OFFSET UNITYSDK_OFFSET(0x103506B0)
#define CLASS_1_CA9A7ECA43FC8636__CTOR_OFFSET UNITYSDK_OFFSET(0x10344D90)

inline static constexpr unsigned int Class_1_CA9A7ECA43FC8636_TypeDefinitionIndex = 60539;

class Class_1_CA9A7ECA43FC8636 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA9A7ECA43FC8636_TypeDefinitionIndex)->GetStaticField(0x3CA30);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CA9A7ECA43FC8636_TypeDefinitionIndex)->GetStaticField(0xE7D0);
	}
	// static const ::System::String* Field_1_15; // 0x0
	::UnityEngine::Coroutine* Field_1_19; // 0x10
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelRuntimeInspector* Field_1_6; // 0x18
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_17; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*>*>* Field_1_8; // 0x28
	::UnityEngine::Transform* Field_1_9; // 0x30
	::System::Collections::Generic::Dictionary_2<::Class_2_9C2F1FCEC1A75FFD*, ::System::Tuple_2<::UnityEngine::GameObject*, ::BansheeGz::BGSpline::Curve::BGCurve*>*>* Field_1_13; // 0x38
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* Field_1_12; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_18; // 0x48
	::Class_1_867B6CE75953535A_1* Field_1_4; // 0x50
	::Class_3_44EDAE37250FA2DB* Field_1_5; // 0x58
	::System::Collections::Generic::Dictionary_2<::Class_2_9C2F1FCEC1A75FFD*, ::Class_2_9C2F1FCEC1A75FFD*>* Field_1_14; // 0x60
	::UnityEngine::Transform* Field_1_10; // 0x68
	::System::Collections::Generic::HashSet_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* Field_1_11; // 0x70
	::System::Collections::Generic::Dictionary_2<::Class_2_0C58AD91B0F4D809*, ::Class_1_CA9A7ECA43FC8636_Class_1_F2D17E30E1E79D69*>* Field_1_16; // 0x78
	::System::Boolean Field_1_0; // 0x80
	::System::Boolean Field_1_7; // 0x81
	::System::Boolean Field_1_3; // 0x82

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636__CCTOR_OFFSET))();
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_076E1E2A0183A470(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_076E1E2A0183A470_OFFSET))(this, a1);
	}

	::System::Void Method_1_A37E414ACE798D5C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_A37E414ACE798D5C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_18188D67877F2AFB(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_18188D67877F2AFB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_91B48388F4BFAF76(::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_91B48388F4BFAF76_OFFSET))(this, a1);
	}

	::System::Void Method_1_52DC9CC69AE40BFA(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_52DC9CC69AE40BFA_OFFSET))(this, a1);
	}

	::System::Void Method_1_45F53D89337FC6C8(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2, ::Class_2_9C2F1FCEC1A75FFD* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_45F53D89337FC6C8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3AC5F11D07AF339C(::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_9C2F1FCEC1A75FFD*>*>* a1, ::Class_2_0C58AD91B0F4D809* a2, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a3, ::Class_2_9C2F1FCEC1A75FFD* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::Collections::Generic::List_1<::Class_2_9C2F1FCEC1A75FFD*>*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameViewCoord, ::Class_2_9C2F1FCEC1A75FFD*>*>*, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::Class_2_9C2F1FCEC1A75FFD*))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_3AC5F11D07AF339C_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void Method_1_4988666BECC8CE44(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_4988666BECC8CE44_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E41FCF4CAFD9C569(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView* a1, ::System::String* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_E41FCF4CAFD9C569_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CA9A7ECA43FC8636_METHOD_1_1283EC0876EAAACF_OFFSET))(this);
	}
};
