#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D5DA62FC7DE2D532.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapNpcType.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_382;
class Class_1_64D890C466F37235;
class Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7;
class Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C;
class Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610;
class Class_2_36C95D73718D07B1;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD2EFC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_045C0D1CDFEA6CF8_OFFSET UNITYSDK_OFFSET(0xCD33230)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET UNITYSDK_OFFSET(0xB03FBC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xB0415F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET UNITYSDK_OFFSET(0xCD31E90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1B4006F1E2A8A72A_OFFSET UNITYSDK_OFFSET(0xB03D150)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET UNITYSDK_OFFSET(0xCD2F0F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB03C120)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_1F75300F8F64184B_OFFSET UNITYSDK_OFFSET(0xCD32020)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_2B3F9EB6E9FE8E93_OFFSET UNITYSDK_OFFSET(0xCD33EB0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_2DB829532599BBA8_OFFSET UNITYSDK_OFFSET(0xCD33C50)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB040F10)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0xCD32740)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_36785A8C685A7E7F_OFFSET UNITYSDK_OFFSET(0xB03D3B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB03E180)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0xB03BB60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_451DEEAA5CAA4985_OFFSET UNITYSDK_OFFSET(0xCD31D30)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0xB03C3D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_485502A9571E17C0_OFFSET UNITYSDK_OFFSET(0xB040FC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xB03C780)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xB0409C0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xB03FC90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET UNITYSDK_OFFSET(0xB03EA70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_1_OFFSET UNITYSDK_OFFSET(0xB03CAE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xB03B840)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xCD34090)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_1_OFFSET UNITYSDK_OFFSET(0xB03F580)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_OFFSET UNITYSDK_OFFSET(0xB03E1D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_6448FC1A0D5B69FF_OFFSET UNITYSDK_OFFSET(0xB041960)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0xCD320A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0xB03BC10)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_732A9A075B4F413C_OFFSET UNITYSDK_OFFSET(0xCD31DC0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7435303307FA82B1_OFFSET UNITYSDK_OFFSET(0xCD32D70)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xB0410B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_81AE2C6A8507033E_OFFSET UNITYSDK_OFFSET(0xCD33970)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_1_OFFSET UNITYSDK_OFFSET(0xB03DB40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_OFFSET UNITYSDK_OFFSET(0xB03EF40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_867FEC4BB85307F1_OFFSET UNITYSDK_OFFSET(0xB0419F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_917F67D57E3EA21C_OFFSET UNITYSDK_OFFSET(0xB040C60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0xB03C180)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xB03C890)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET UNITYSDK_OFFSET(0xCD31E40)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A0529F9E6E9763B9_OFFSET UNITYSDK_OFFSET(0xCD32CE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0xCD2F4D0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB041660)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xCD33AF0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AA7E3074254D484A_OFFSET UNITYSDK_OFFSET(0xB03CD80)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET UNITYSDK_OFFSET(0xB040BF0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1108037D050A1C8_OFFSET UNITYSDK_OFFSET(0xCD32900)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET UNITYSDK_OFFSET(0xB03CFE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_1_OFFSET UNITYSDK_OFFSET(0xB0418F0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_OFFSET UNITYSDK_OFFSET(0xB041880)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET UNITYSDK_OFFSET(0xB041150)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xB041100)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB03CCE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xB03CD30)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD32C90)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xCD32BE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xCD31340)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D08C85013FF6E8A5_OFFSET UNITYSDK_OFFSET(0xCD33680)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D092180295618BD8_OFFSET UNITYSDK_OFFSET(0xCD33B60)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xCD33080)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET UNITYSDK_OFFSET(0xCD33110)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0xB041810)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xB03B760)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0xB0411A0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_EE521AD0C975A674_OFFSET UNITYSDK_OFFSET(0xCD326B0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET UNITYSDK_OFFSET(0xB03EBE0)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xB03B540)
#define CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET UNITYSDK_OFFSET(0xCD33160)
#define CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET UNITYSDK_OFFSET(0xB041720)
#define CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET UNITYSDK_OFFSET(0xB041710)
#define CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB0417B0)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex = 55878;

class Class_2_2F6354F2F5DDBF64 : public ::Class_1_D5DA62FC7DE2D532
{
public:
	static ::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>** StaticGet_Field_2_23()
	{
		return (::Il2CppArray<::RPG::GameCore::CharacterVisibleReason>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2F6354F2F5DDBF64_TypeDefinitionIndex)->GetStaticField(0x68EF0);
	}
	// static const ::System::Single Field_2_9; // 0x0
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_3; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_13; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*>* Field_2_20; // 0x20
	::RPG::Client::MapRotationInfo* Field_2_5; // 0x28
	::Class_1_64D890C466F37235* Field_2_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_4EEA23509C9211E7*>* Field_2_14; // 0x38
	::Class_2_36C95D73718D07B1* Field_2_7; // 0x40
	::RPG::Client::MapDef* Field_2_6; // 0x48
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_12; // 0x50
	::UnityEngine::Coroutine* Field_2_11; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C*>* Field_2_2; // 0x60
	::RPG::GameCore::GameWorld* Field_2_8; // 0x68
	::System::Boolean Field_2_10; // 0x70
	::System::Boolean Field_2_18; // 0x71
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState Field_2_22; // 0x74
	::Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState Field_2_19; // 0x78
	::System::Boolean Field_2_21; // 0x7C
	::System::Boolean Field_2_17; // 0x7D
	::System::Boolean Field_2_16; // 0x7E
	::System::Boolean Field_2_15; // 0x7F
	::System::Int32 Field_2_1; // 0x80
	::System::Int32 Field_2_0; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1BEA6E8E084D8523(::Class_1_64D890C466F37235* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1BEA6E8E084D8523_OFFSET))(this, a1);
	}

	::System::Void Method_2_451DEEAA5CAA4985(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_451DEEAA5CAA4985_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A5629F2ADDD9D81(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_9A5629F2ADDD9D81_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F75300F8F64184B(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1F75300F8F64184B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EE521AD0C975A674(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_EE521AD0C975A674_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_35A1A641353400E6_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0529F9E6E9763B9(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A0529F9E6E9763B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D20BF56E36607D54(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D20BF56E36607D54_OFFSET))(this, a1);
	}

	::System::Void Method_2_7435303307FA82B1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7435303307FA82B1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F9C08076C6DB1321(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F9C08076C6DB1321_OFFSET))(this, a1);
	}

	::System::Void Method_2_045C0D1CDFEA6CF8(::RPG::GameCore::GameEntity* a1, ::RPG::Client::MapNpcDef* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_045C0D1CDFEA6CF8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D08C85013FF6E8A5(::RPG::Client::MapNpcDef* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D08C85013FF6E8A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_81AE2C6A8507033E(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_81AE2C6A8507033E_OFFSET))(this, a1);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A2172401030892FD_OFFSET))(this);
	}

	static ::System::Boolean Method_2_D092180295618BD8(::RPG::GameCore::LevelNPCInfo* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_D092180295618BD8_OFFSET))(a1);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_1A72AC7AF2C9C69D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1A72AC7AF2C9C69D_OFFSET))(this, a1);
	}

	::System::Void Method_2_732A9A075B4F413C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_732A9A075B4F413C_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2DB829532599BBA8(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_2DB829532599BBA8_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1108037D050A1C8(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_B1108037D050A1C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_2B3F9EB6E9FE8E93(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_2B3F9EB6E9FE8E93_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5E72916301E347E2_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_AA7E3074254D484A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AA7E3074254D484A_OFFSET))(this);
	}

	::System::Void Method_2_BC091A0885B0518A(::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F6354F2F5DDBF64_Class_1_ACE5DCAE36A0D610*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_BC091A0885B0518A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1B4006F1E2A8A72A(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1B4006F1E2A8A72A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_64078AC0A26DD3FD(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_824D745937FC6969(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_OFFSET))(this, a1);
	}

	::System::Void Method_2_64078AC0A26DD3FD_1(::RPG::Client::MapNpcDef* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_64078AC0A26DD3FD_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_824D745937FC6969_1(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_824D745937FC6969_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F2BC66B73E52706A(::RPG::Client::MapRotation::EffectType a1, ::System::String* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F a5, ::UnityEngine::Transform* a6, ::RPG::GameCore::GameEntity* a7, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotation::EffectType, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*, ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_F2BC66B73E52706A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_5C2D2F72ACB32AEA(::RPG::Client::MapNpcDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5C2D2F72ACB32AEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_36785A8C685A7E7F(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_36785A8C685A7E7F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_0DAAD2EBEEA22BD4(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_0DAAD2EBEEA22BD4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_5BCE9210F4ACDD0B_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Void Method_2_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_464B80C09A37526F_OFFSET))(this);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_AD8270226A78BAF5(::RPG::Client::MapNpcDef* a1)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_AD8270226A78BAF5_OFFSET))(this, a1);
	}

	::RPG::GameCore::MapRotationEntityEffectConfig* Method_2_917F67D57E3EA21C(::RPG::Client::MapNpcType a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MapRotationEntityEffectConfig*(*)(::PVOID, ::RPG::Client::MapNpcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_917F67D57E3EA21C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_485502A9571E17C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_485502A9571E17C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50B93169B85DAEA_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C50B93169B85DAEA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_2_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_64D890C466F37235* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_64D890C466F37235*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_OFFSET))(this, P0);
	}

	::System::Void Method_2_C3CC026A96540DAB_1(::System::UInt32 P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_C3CC026A96540DAB_1_OFFSET))(this, P0);
	}

	::System::Void Method_2_6448FC1A0D5B69FF(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_6448FC1A0D5B69FF_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_867FEC4BB85307F1(::UnityEngine::Vector3 P0, ::UnityEngine::Quaternion P1, ::UnityEngine::Quaternion P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_METHOD_2_867FEC4BB85307F1_OFFSET))(this, P0, P1, P2);
	}
};
