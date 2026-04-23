#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_54715B955DC6C855.h"
#include "unitysdk/Struct_2_93933A3163B85D6A.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_512;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define CLASS_2_73E5271104319C89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF414120)
#define CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF4228F0)
#define CLASS_2_73E5271104319C89_GET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF4228D0)
#define CLASS_2_73E5271104319C89_GET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF4228B0)
#define CLASS_2_73E5271104319C89_METHOD_2_00A21F4F9F70DF35_OFFSET UNITYSDK_OFFSET(0xF4145A0)
#define CLASS_2_73E5271104319C89_METHOD_2_096B939B64704DA0_OFFSET UNITYSDK_OFFSET(0xF41F6F0)
#define CLASS_2_73E5271104319C89_METHOD_2_0B91B5089911179E_OFFSET UNITYSDK_OFFSET(0xF415370)
#define CLASS_2_73E5271104319C89_METHOD_2_120C13B173795276_OFFSET UNITYSDK_OFFSET(0xF41E0F0)
#define CLASS_2_73E5271104319C89_METHOD_2_27852A7254A0CF28_OFFSET UNITYSDK_OFFSET(0xF41B950)
#define CLASS_2_73E5271104319C89_METHOD_2_33C4B285E4B1271C_OFFSET UNITYSDK_OFFSET(0xF41F8F0)
#define CLASS_2_73E5271104319C89_METHOD_2_39C3145B3710B7A9_OFFSET UNITYSDK_OFFSET(0xF417660)
#define CLASS_2_73E5271104319C89_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xF423830)
#define CLASS_2_73E5271104319C89_METHOD_2_3DA285007593B7CA_OFFSET UNITYSDK_OFFSET(0xF423920)
#define CLASS_2_73E5271104319C89_METHOD_2_3ED4F3CB0AD0487F_OFFSET UNITYSDK_OFFSET(0xF41FAC0)
#define CLASS_2_73E5271104319C89_METHOD_2_403856ACA4113054_OFFSET UNITYSDK_OFFSET(0xF4211A0)
#define CLASS_2_73E5271104319C89_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xF422960)
#define CLASS_2_73E5271104319C89_METHOD_2_4A13BD8A67015544_OFFSET UNITYSDK_OFFSET(0xF4238B0)
#define CLASS_2_73E5271104319C89_METHOD_2_56C8E05B927126A2_OFFSET UNITYSDK_OFFSET(0xF4220F0)
#define CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xF4238C0)
#define CLASS_2_73E5271104319C89_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF423840)
#define CLASS_2_73E5271104319C89_METHOD_2_69B91374E27C13B6_OFFSET UNITYSDK_OFFSET(0xF4171C0)
#define CLASS_2_73E5271104319C89_METHOD_2_7065EEDEF6B93AF2_OFFSET UNITYSDK_OFFSET(0xF4149D0)
#define CLASS_2_73E5271104319C89_METHOD_2_7581BA71F2C87672_OFFSET UNITYSDK_OFFSET(0xF423780)
#define CLASS_2_73E5271104319C89_METHOD_2_7D3FA5683A9E28D3_OFFSET UNITYSDK_OFFSET(0xF41A8D0)
#define CLASS_2_73E5271104319C89_METHOD_2_82345EB8550259A5_OFFSET UNITYSDK_OFFSET(0xF4202B0)
#define CLASS_2_73E5271104319C89_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xF4141B0)
#define CLASS_2_73E5271104319C89_METHOD_2_8C6D8980FD2A1137_OFFSET UNITYSDK_OFFSET(0xF4229D0)
#define CLASS_2_73E5271104319C89_METHOD_2_95EE5C02015D9AE1_OFFSET UNITYSDK_OFFSET(0xF419C50)
#define CLASS_2_73E5271104319C89_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xF414270)
#define CLASS_2_73E5271104319C89_METHOD_2_A03C765EBC5D1677_OFFSET UNITYSDK_OFFSET(0xF417530)
#define CLASS_2_73E5271104319C89_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xF415320)
#define CLASS_2_73E5271104319C89_METHOD_2_B0B91BC7AD0B6A82_OFFSET UNITYSDK_OFFSET(0xF4222D0)
#define CLASS_2_73E5271104319C89_METHOD_2_B88C3CCCAA5DC90B_OFFSET UNITYSDK_OFFSET(0xF417D90)
#define CLASS_2_73E5271104319C89_METHOD_2_C182EF672FFF03EE_OFFSET UNITYSDK_OFFSET(0xF422700)
#define CLASS_2_73E5271104319C89_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF422910)
#define CLASS_2_73E5271104319C89_METHOD_2_D0D33CE3B35D1384_OFFSET UNITYSDK_OFFSET(0xF41EF00)
#define CLASS_2_73E5271104319C89_METHOD_2_D1BE960AC6ADA78E_OFFSET UNITYSDK_OFFSET(0xF41AEC0)
#define CLASS_2_73E5271104319C89_METHOD_2_E6B06AB2B53E7FCD_OFFSET UNITYSDK_OFFSET(0xF421860)
#define CLASS_2_73E5271104319C89_METHOD_2_EC1B7452242AE25F_OFFSET UNITYSDK_OFFSET(0xF414310)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_1_OFFSET UNITYSDK_OFFSET(0xF41FA90)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_2_OFFSET UNITYSDK_OFFSET(0xF4226E0)
#define CLASS_2_73E5271104319C89_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xF419C20)
#define CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_1_OFFSET UNITYSDK_OFFSET(0xF413CA0)
#define CLASS_2_73E5271104319C89_METHOD_2_F608E611E2F7EC60_OFFSET UNITYSDK_OFFSET(0xF413C90)
#define CLASS_2_73E5271104319C89_METHOD_2_FCE3D5229088CFDA_OFFSET UNITYSDK_OFFSET(0xF413FE0)
#define CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVECAPSULECASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF422900)
#define CLASS_2_73E5271104319C89_SET_BEFORESTORYMOVERAYCASTLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF4228E0)
#define CLASS_2_73E5271104319C89_SET_ISSAVEDBEFORESTORYLAYERMASK_OFFSET UNITYSDK_OFFSET(0xF4228C0)
#define CLASS_2_73E5271104319C89__CCTOR_OFFSET UNITYSDK_OFFSET(0xF423760)
#define CLASS_2_73E5271104319C89__CTOR_OFFSET UNITYSDK_OFFSET(0xF413CB0)
#define CLASS_2_73E5271104319C89___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF423790)

inline static constexpr unsigned int Class_2_73E5271104319C89_TypeDefinitionIndex = 52618;

class Class_2_73E5271104319C89 : public ::Class_1_54715B955DC6C855
{
public:
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF2F0);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF2F4);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF2F8);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF2FC);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF300);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_73E5271104319C89_TypeDefinitionIndex)->GetStaticField(0xF304);
	}
	// static const ::System::Single Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x14; // 0x0
	// static const ::System::Int32 Field_2_2 = 0x6; // 0x0
	::UnityEngine::AnimationCurve* Field_2_7; // 0x160
	::Il2CppArray<::System::Single>* Field_2_15; // 0x168
	::UnityEngine::AnimationCurve* Field_2_8; // 0x170
	::Class_0_16E4307DCC419505_512* Field_2_17; // 0x178
	::System::Single Field_2_18; // 0x180
	::UnityEngine::LayerMask _BeforeStoryMoveCapsuleCastLayerMask_k__BackingField; // 0x184
	::System::Boolean _IsSavedBeforeStoryLayerMask_k__BackingField; // 0x188
	::UnityEngine::LayerMask _BeforeStoryMoveRaycastLayerMask_k__BackingField; // 0x18C
	::System::Int32 Field_2_14; // 0x190
	::System::Single Field_2_16; // 0x194

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

	::UnityEngine::Vector3 Method_2_3ED4F3CB0AD0487F(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean& a4, ::UnityEngine::RaycastHit& a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_2_73E5271104319C89_METHOD_2_3ED4F3CB0AD0487F_OFFSET))(this, a1, a2, a3, a4, a5);
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
