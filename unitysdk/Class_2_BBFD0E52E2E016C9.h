#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/AdvNPCRunAwayPlayerStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_69FF5DE516C87A66;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdvNPCRunAwayPlayer; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_2_BBFD0E52E2E016C9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10603F40)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_05DBE83F8B5D6163_OFFSET UNITYSDK_OFFSET(0x10604320)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_0A68C812815B75DA_OFFSET UNITYSDK_OFFSET(0x10607420)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x106066B0)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_4B95663C16A02708_OFFSET UNITYSDK_OFFSET(0x10606BD0)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_501509B4B58077AF_OFFSET UNITYSDK_OFFSET(0x10607670)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_56D8C8BA32305461_OFFSET UNITYSDK_OFFSET(0x106072A0)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x10606D90)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x10607390)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x106065B0)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_ABFE6A357B89C69A_1_OFFSET UNITYSDK_OFFSET(0x10606E50)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x10606F60)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x10604100)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x10604040)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x106071E0)
#define CLASS_2_BBFD0E52E2E016C9_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x10607070)
#define CLASS_2_BBFD0E52E2E016C9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x106041C0)
#define CLASS_2_BBFD0E52E2E016C9_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10605FD0)
#define CLASS_2_BBFD0E52E2E016C9_TICK_OFFSET UNITYSDK_OFFSET(0x106060B0)
#define CLASS_2_BBFD0E52E2E016C9__CCTOR_OFFSET UNITYSDK_OFFSET(0x10607C60)
#define CLASS_2_BBFD0E52E2E016C9__CTOR_OFFSET UNITYSDK_OFFSET(0x10603C70)

inline static constexpr unsigned int Class_2_BBFD0E52E2E016C9_TypeDefinitionIndex = 41409;

class Class_2_BBFD0E52E2E016C9 : public ::Class_1_5F51D4049EA87B7B
{
public:
	static ::System::Single* StaticGet_Field_2_18()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BBFD0E52E2E016C9_TypeDefinitionIndex)->GetStaticField(0x106B0);
	}
	static ::System::Int32* StaticGet_Field_2_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_BBFD0E52E2E016C9_TypeDefinitionIndex)->GetStaticField(0x106B4);
	}
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::UnityEngine::Coroutine* Field_2_20; // 0x20
	::Class_1_69FF5DE516C87A66* Field_2_2; // 0x28
	::Class_2_A0580152EB393340* Field_2_8; // 0x30
	::Class_1_69FF5DE516C87A66* Field_2_3; // 0x38
	::Class_1_69FF5DE516C87A66* Field_2_4; // 0x40
	::RPG::GameCore::CharacterVisibleComponent* Field_2_10; // 0x48
	::RPG::GameCore::AdvNPCRunAwayPlayer* Field_2_0; // 0x50
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x58
	::RPG::GameCore::AdventureCharacterController* Field_2_9; // 0x60
	::RPG::GameCore::NPCComponent* Field_2_7; // 0x68
	::System::Single Field_2_11; // 0x70
	::RPG::GameCore::AdvNPCRunAwayPlayerStatus Field_2_5; // 0x74
	::UnityEngine::Vector3 Field_2_15; // 0x78
	::System::Int32 Field_2_14; // 0x84
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_17; // 0x88
	::UnityEngine::Vector3 Field_2_16; // 0x98
	::UnityEngine::Vector3 Field_2_13; // 0xA4
	::System::Single Field_2_12; // 0xB0
	::System::Boolean Field_2_21; // 0xB4

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCRunAwayPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCRunAwayPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Nullable_1<::System::Single> Method_2_56D8C8BA32305461(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_56D8C8BA32305461_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_ABFE6A357B89C69A_1_OFFSET))(this);
	}

	::System::Boolean Method_2_4B95663C16A02708()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_4B95663C16A02708_OFFSET))(this);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Boolean Method_2_05DBE83F8B5D6163()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_05DBE83F8B5D6163_OFFSET))(this);
	}

	::System::Boolean Method_2_501509B4B58077AF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_501509B4B58077AF_OFFSET))(this);
	}

	::System::Boolean Method_2_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_5E72916301E347E2_OFFSET))(this);
	}

	::System::Boolean Method_2_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0A68C812815B75DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_BBFD0E52E2E016C9_METHOD_2_0A68C812815B75DA_OFFSET))(this, a1, a2, a3);
	}
};
