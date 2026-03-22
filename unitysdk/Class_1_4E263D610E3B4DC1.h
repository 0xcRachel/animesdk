#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_49AB19924B4FCC28;
class Class_1_68DDCD4A4411AB4A;
class Class_1_EC8C41D270800CDD;
class Class_2_36A4EB0E077FE274;
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_4E263D610E3B4DC1_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x864CD00)
#define CLASS_1_4E263D610E3B4DC1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x864CD10)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_00A55C75739DC93F_OFFSET UNITYSDK_OFFSET(0x864D270)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x864CCF0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x8651480)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_1F5E8B49C371604B_OFFSET UNITYSDK_OFFSET(0x86517D0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_213AE9BFD0E39A41_OFFSET UNITYSDK_OFFSET(0x864ED00)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_235C0B27B40250B3_OFFSET UNITYSDK_OFFSET(0x86502A0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x864E1F0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_2CF1BF9704A16F81_OFFSET UNITYSDK_OFFSET(0x86518E0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_3358AD9145B4FD7E_OFFSET UNITYSDK_OFFSET(0x8650F50)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x864D150)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8651890)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x8650210)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x8651C50)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_52586E276C6A6CBC_OFFSET UNITYSDK_OFFSET(0x864F370)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x864FFD0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_62167C28EC14CC63_OFFSET UNITYSDK_OFFSET(0x864F040)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x864F9B0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_6DFEF4918C679AF0_OFFSET UNITYSDK_OFFSET(0x864EF40)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_71D24CBD28AD4C4C_OFFSET UNITYSDK_OFFSET(0x864EDA0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_71EC472A4A552FD7_OFFSET UNITYSDK_OFFSET(0x8650780)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x864D090)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_7B2CC38D584B3558_OFFSET UNITYSDK_OFFSET(0x864FEF0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x86515B0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_8BD11CDEA7D5139F_OFFSET UNITYSDK_OFFSET(0x864FB10)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x864E2D0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8651740)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_C1D3BDE2A17F5C9D_OFFSET UNITYSDK_OFFSET(0x864E370)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_C7070D18308CCB7D_OFFSET UNITYSDK_OFFSET(0x864FCF0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8650F10)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x8651BA0)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_DDBE75BF5FCD9E90_OFFSET UNITYSDK_OFFSET(0x864D720)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_E3086F0683D5B483_OFFSET UNITYSDK_OFFSET(0x864CD20)
#define CLASS_1_4E263D610E3B4DC1_METHOD_1_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x864E420)
#define CLASS_1_4E263D610E3B4DC1_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x8651360)
#define CLASS_1_4E263D610E3B4DC1__CTOR_OFFSET UNITYSDK_OFFSET(0x864CD30)
#define CLASS_1_4E263D610E3B4DC1__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x8651DE0)

inline static constexpr unsigned int Class_1_4E263D610E3B4DC1_TypeDefinitionIndex = 55010;

class Class_1_4E263D610E3B4DC1 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	// static const ::System::Single Field_1_2; // 0x0
	// static const ::System::Single Field_1_3; // 0x0
	// static const ::System::Single Field_1_31; // 0x0
	// static const ::System::Single Field_1_32; // 0x0
	// static const ::System::Single Field_1_34; // 0x0
	// static const ::System::Single Field_1_39; // 0x0
	::RPG::Client::RootMotionHandler* Field_1_16; // 0x10
	::System::Action_1<::Class_1_4E263D610E3B4DC1*>* Field_1_25; // 0x18
	::RPG::GameCore::NpcWalkStyleWeightInfo* Field_1_44; // 0x20
	::Class_1_EC8C41D270800CDD* Field_1_24; // 0x28
	::System::Action_1<::System::UInt32>* Field_1_21; // 0x30
	::System::String* Field_1_9; // 0x38
	::UnityEngine::Transform* Field_1_7; // 0x40
	::Class_1_68DDCD4A4411AB4A* Field_1_18; // 0x48
	::Class_1_49AB19924B4FCC28* Field_1_10; // 0x50
	::RPG::Client::NpcBodySizeInfo* Field_1_17; // 0x58
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_11; // 0x60
	::RPG::GameCore::GameEntity* Field_1_6; // 0x68
	::RPG::GameCore::TransformComponent* Field_1_14; // 0x70
	::System::String* Field_1_8; // 0x78
	::Class_2_36A4EB0E077FE274* Field_1_15; // 0x80
	::UnityEngine::Vector3 Field_1_12; // 0x88
	::System::Int32 Field_1_42; // 0x94
	::System::UInt32 Field_1_4; // 0x98
	::System::Single Field_1_40; // 0x9C
	::System::Single Field_1_43; // 0xA0
	::System::Int32 Field_1_29; // 0xA4
	::System::Boolean Field_1_28; // 0xA8
	::System::Boolean Field_1_20; // 0xA9
	::System::Boolean Field_1_35; // 0xAA
	::System::Boolean Field_1_27; // 0xAB
	::System::Single Field_1_41; // 0xAC
	::UnityEngine::Vector3 Field_1_23; // 0xB0
	::System::Single Field_1_30; // 0xBC
	::System::Single Field_1_36; // 0xC0
	::RPG::Client::PedestrianState Field_1_5; // 0xC4
	::System::Int32 Field_1_13; // 0xC8
	::System::Single Field_1_33; // 0xCC
	::System::Single Field_1_38; // 0xD0
	::System::Single Field_1_22; // 0xD4
	::UnityEngine::Vector3 Field_1_19; // 0xD8
	::System::Boolean Field_1_37; // 0xE4
	::System::Boolean Field_1_26; // 0xE5

	::System::Void _ctor(::Class_1_EC8C41D270800CDD* a1, ::System::String* a2, ::System::String* a3, ::Class_1_49AB19924B4FCC28* a4, ::System::Action_1<::Class_1_4E263D610E3B4DC1*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EC8C41D270800CDD*, ::System::String*, ::System::String*, ::Class_1_49AB19924B4FCC28*, ::System::Action_1<::Class_1_4E263D610E3B4DC1*>*))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Int32 get_AnimatorMoveCallbackOrder()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
	}

	::System::Boolean get_EnableAnimatorMoveCallback()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
	}

	::RPG::Client::PedestrianState Method_1_E3086F0683D5B483()
	{
		return ((::RPG::Client::PedestrianState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_E3086F0683D5B483_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_00A55C75739DC93F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_00A55C75739DC93F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_71D24CBD28AD4C4C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_71D24CBD28AD4C4C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52586E276C6A6CBC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_52586E276C6A6CBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_8BD11CDEA7D5139F(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_8BD11CDEA7D5139F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C7070D18308CCB7D(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_C7070D18308CCB7D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7B2CC38D584B3558(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_7B2CC38D584B3558_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DFEF4918C679AF0(::Class_1_49AB19924B4FCC28* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49AB19924B4FCC28*))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_6DFEF4918C679AF0_OFFSET))(this, a1);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_1_DDBE75BF5FCD9E90(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_DDBE75BF5FCD9E90_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_235C0B27B40250B3(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_235C0B27B40250B3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_213AE9BFD0E39A41(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_213AE9BFD0E39A41_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_C1D3BDE2A17F5C9D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_C1D3BDE2A17F5C9D_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_71EC472A4A552FD7(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_71EC472A4A552FD7_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_3358AD9145B4FD7E(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_3358AD9145B4FD7E_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_1_1F5E8B49C371604B(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_1F5E8B49C371604B_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CF1BF9704A16F81(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_2CF1BF9704A16F81_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Method_1_62167C28EC14CC63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_62167C28EC14CC63_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _Hide_b__58_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4E263D610E3B4DC1__HIDE_B__58_0_OFFSET))(this);
	}
};
