#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54715B955DC6C855.h"
#include "unitysdk/Struct_2_93933A3163B85D6A.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_440;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_73E5271104319C89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9CC6C0)
#define CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF40)
#define CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF20)
#define CLASS_2_73E5271104319C89_GET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF00)
#define CLASS_2_73E5271104319C89_METHOD_2_00A21F4F9F70DF35_OFFSET UNITYSDK_OFFSET(0xA9CCB30)
#define CLASS_2_73E5271104319C89_METHOD_2_096B939B64704DA0_OFFSET UNITYSDK_OFFSET(0xA9D7CD0)
#define CLASS_2_73E5271104319C89_METHOD_2_0B91B5089911179E_OFFSET UNITYSDK_OFFSET(0xA9CD900)
#define CLASS_2_73E5271104319C89_METHOD_2_120C13B173795276_OFFSET UNITYSDK_OFFSET(0xA9D66D0)
#define CLASS_2_73E5271104319C89_METHOD_2_151F1F9F9B5A7140_OFFSET UNITYSDK_OFFSET(0xA9D8090)
#define CLASS_2_73E5271104319C89_METHOD_2_27852A7254A0CF28_OFFSET UNITYSDK_OFFSET(0xA9D3E20)
#define CLASS_2_73E5271104319C89_METHOD_2_33C4B285E4B1271C_OFFSET UNITYSDK_OFFSET(0xA9D7ED0)
#define CLASS_2_73E5271104319C89_METHOD_2_39C3145B3710B7A9_OFFSET UNITYSDK_OFFSET(0xA9CFB90)
#define CLASS_2_73E5271104319C89_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xA9DBE90)
#define CLASS_2_73E5271104319C89_METHOD_2_3DA285007593B7CA_OFFSET UNITYSDK_OFFSET(0xA9DBF80)
#define CLASS_2_73E5271104319C89_METHOD_2_403856ACA4113054_OFFSET UNITYSDK_OFFSET(0xA9D97E0)
#define CLASS_2_73E5271104319C89_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA9DAFB0)
#define CLASS_2_73E5271104319C89_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0xA9DBF10)
#define CLASS_2_73E5271104319C89_METHOD_2_56C8E05B927126A2_OFFSET UNITYSDK_OFFSET(0xA9DA730)
#define CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA9DBF20)
#define CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA9DBEA0)
#define CLASS_2_73E5271104319C89_METHOD_2_69B91374E27C13B6_OFFSET UNITYSDK_OFFSET(0xA9CF6F0)
#define CLASS_2_73E5271104319C89_METHOD_2_7065EEDEF6B93AF2_OFFSET UNITYSDK_OFFSET(0xA9CCF60)
#define CLASS_2_73E5271104319C89_METHOD_2_7581BA71F2C87672_OFFSET UNITYSDK_OFFSET(0xA9DBDD0)
#define CLASS_2_73E5271104319C89_METHOD_2_7D3FA5683A9E28D3_OFFSET UNITYSDK_OFFSET(0xA9D2DF0)
#define CLASS_2_73E5271104319C89_METHOD_2_82345EB8550259A5_OFFSET UNITYSDK_OFFSET(0xA9D88A0)
#define CLASS_2_73E5271104319C89_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA9CC760)
#define CLASS_2_73E5271104319C89_METHOD_2_8C6D8980FD2A1137_OFFSET UNITYSDK_OFFSET(0xA9DB020)
#define CLASS_2_73E5271104319C89_METHOD_2_95EE5C02015D9AE1_OFFSET UNITYSDK_OFFSET(0xA9D2170)
#define CLASS_2_73E5271104319C89_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA9CC820)
#define CLASS_2_73E5271104319C89_METHOD_2_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xA9CFA60)
#define CLASS_2_73E5271104319C89_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xA9CD8B0)
#define CLASS_2_73E5271104319C89_METHOD_2_B0B91BC7AD0B6A82_OFFSET UNITYSDK_OFFSET(0xA9DA910)
#define CLASS_2_73E5271104319C89_METHOD_2_B88C3CCCAA5DC90B_OFFSET UNITYSDK_OFFSET(0xA9D02C0)
#define CLASS_2_73E5271104319C89_METHOD_2_C182EF672FFF03EE_OFFSET UNITYSDK_OFFSET(0xA9DAD50)
#define CLASS_2_73E5271104319C89_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA9DAF60)
#define CLASS_2_73E5271104319C89_METHOD_2_D0D33CE3B35D1384_OFFSET UNITYSDK_OFFSET(0xA9D74E0)
#define CLASS_2_73E5271104319C89_METHOD_2_D1BE960AC6ADA78E_OFFSET UNITYSDK_OFFSET(0xA9D33E0)
#define CLASS_2_73E5271104319C89_METHOD_2_E6B06AB2B53E7FCD_OFFSET UNITYSDK_OFFSET(0xA9D9E70)
#define CLASS_2_73E5271104319C89_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0xA9CC8C0)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xA9D8060)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0xA9DAD30)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xA9D2140)
#define CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_1_OFFSET UNITYSDK_OFFSET(0xA9CC240)
#define CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_OFFSET UNITYSDK_OFFSET(0xA9CC230)
#define CLASS_2_73E5271104319C89_METHOD_2_FCE3D5229088CFDA_OFFSET UNITYSDK_OFFSET(0xA9CC580)
#define CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF50)
#define CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF30)
#define CLASS_2_73E5271104319C89_SET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0xA9DAF10)
#define CLASS_2_73E5271104319C89__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9DBDB0)
#define CLASS_2_73E5271104319C89__CTOR_OFFSET UNITYSDK_OFFSET(0xA9CC250)
#define CLASS_2_73E5271104319C89___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA9DBDE0)

inline static constexpr unsigned int Class_2_73E5271104319C89_TypeDefinitionIndex = 45957;

class Class_2_73E5271104319C89 : public ::Class_1_54715B955DC6C855
{
public:
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FE0);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FE4);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FE8);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FEC);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FF0);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0x12FF4);
	}
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x6; // 0x0
	::Il2CppArray<::System::Single>* Field_2_15; // 0x160
	::Class_0_16E4307DCC419505_440* Field_2_17; // 0x168
	::UnityEngine::AnimationCurve* Field_2_7; // 0x170
	::UnityEngine::AnimationCurve* Field_2_8; // 0x178
	::UnityEngine::LayerMask _BeforeStoryMoveCapsuleCastLayerMask_k__BackingField; // 0x180
	::System::Boolean _IsSavedBeforeStoryLayerMask_k__BackingField; // 0x184
	::System::Single Field_2_18; // 0x188
	::UnityEngine::LayerMask _BeforeStoryMoveRaycastLayerMask_k__BackingField; // 0x18C
	::System::Single Field_2_16; // 0x190
	::System::Int32 Field_2_14; // 0x194

	::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89__CCTOR_OFFSET))();
	}

	::UnityEngine::AnimationCurve* Method_2_F608E611E2F7EC60()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* Method_2_F608E611E2F7EC60_1()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_1_OFFSET))(this);
	}

	::System::Void Method_2_FCE3D5229088CFDA(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_FCE3D5229088CFDA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_EC1B7452242AE25F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_EC1B7452242AE25F_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_00A21F4F9F70DF35(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_00A21F4F9F70DF35_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7065EEDEF6B93AF2(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_7065EEDEF6B93AF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B88C3CCCAA5DC90B(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_B88C3CCCAA5DC90B_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_D0D33CE3B35D1384(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector2 a4, ::System::Single a5, ::System::Boolean a6, ::UnityEngine::RaycastHit& a7)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_D0D33CE3B35D1384_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_2_69B91374E27C13B6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_69B91374E27C13B6_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_120C13B173795276(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_120C13B173795276_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_096B939B64704DA0(::System::Single a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_096B939B64704DA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_39C3145B3710B7A9(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_39C3145B3710B7A9_OFFSET))(this, a1);
	}

	::System::Void Method_2_A03C765EBC5D1677(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_A03C765EBC5D1677_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_27852A7254A0CF28(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4, ::System::Boolean& a5, ::UnityEngine::RaycastHit& a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_27852A7254A0CF28_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Vector3 Method_2_151F1F9F9B5A7140(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_151F1F9F9B5A7140_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_82345EB8550259A5(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_82345EB8550259A5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_2_E6B06AB2B53E7FCD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Boolean& a3, ::UnityEngine::RaycastHit& a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_E6B06AB2B53E7FCD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_403856ACA4113054(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::RaycastHit& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_403856ACA4113054_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_95EE5C02015D9AE1(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_95EE5C02015D9AE1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_B0B91BC7AD0B6A82(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_B0B91BC7AD0B6A82_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0B91B5089911179E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3& a3, ::Struct_2_93933A3163B85D6A& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::Struct_2_93933A3163B85D6A&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_0B91B5089911179E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_D1BE960AC6ADA78E(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::RaycastHit& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_D1BE960AC6ADA78E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Single Method_2_C182EF672FFF03EE(::UnityEngine::RaycastHit& a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_C182EF672FFF03EE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_56C8E05B927126A2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single& a5, ::UnityEngine::RaycastHit& a6, ::System::Single a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single&, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_56C8E05B927126A2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::Vector3 Method_2_7D3FA5683A9E28D3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_7D3FA5683A9E28D3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_33C4B285E4B1271C(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_33C4B285E4B1271C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_2_OFFSET))(this);
	}

	::System::Boolean get_IsSavedBeforeStoryLayerMask()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_GET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET))(this);
	}

	::System::Void set_IsSavedBeforeStoryLayerMask(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_SET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET))(this, value);
	}

	::UnityEngine::LayerMask get_BeforeStoryMoveRaycastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_BeforeStoryMoveRaycastLayerMask(::UnityEngine::LayerMask value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET))(this, value);
	}

	::UnityEngine::LayerMask get_BeforeStoryMoveCapsuleCastLayerMask()
	{
		return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET))(this);
	}

	::System::Void set_BeforeStoryMoveCapsuleCastLayerMask(::UnityEngine::LayerMask value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET))(this, value);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_8C6D8980FD2A1137(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_8C6D8980FD2A1137_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_7581BA71F2C87672(::UnityEngine::GameObject* P0, ::UnityEngine::Rigidbody* P1, ::UnityEngine::CapsuleCollider* P2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_7581BA71F2C87672_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_4A13BD8A67015544()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_4A13BD8A67015544_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_3DA285007593B7CA(::System::Single P0)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_3DA285007593B7CA_OFFSET))(this, P0);
	}
};
