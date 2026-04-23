#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimeRewindState.h"
#include "unitysdk/System/Object.h"

class Class_1_4E1996B50E2373CB;
class Class_1_F65DC6656DEF8159;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class SphereCollider; }

#define CLASS_1_5C7F0A9A533D7AE6_CLEAR_OFFSET UNITYSDK_OFFSET(0xEBAFD50)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_14CC93689192A32B_OFFSET UNITYSDK_OFFSET(0xEBB0240)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_1991A7B40B7BA36D_OFFSET UNITYSDK_OFFSET(0xEBAFE60)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xEBB0A80)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_976CDF5EF06E0838_OFFSET UNITYSDK_OFFSET(0xEBB0B80)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_9AE63F0E1E9BDA2F_OFFSET UNITYSDK_OFFSET(0xEBAFEC0)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_9B61E6AE99113B3F_OFFSET UNITYSDK_OFFSET(0xEBAFC00)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xEBB0650)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_A5624AB15FE32AEC_OFFSET UNITYSDK_OFFSET(0xEBB07C0)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_B8739D0DE156F9EB_OFFSET UNITYSDK_OFFSET(0xEBB06A0)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0xEBB0B00)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xEBB0740)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xEBB0780)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEBB0700)
#define CLASS_1_5C7F0A9A533D7AE6_METHOD_1_D71F1E82F429310A_OFFSET UNITYSDK_OFFSET(0xEBAFAF0)
#define CLASS_1_5C7F0A9A533D7AE6__CCTOR_OFFSET UNITYSDK_OFFSET(0xEBB0D00)
#define CLASS_1_5C7F0A9A533D7AE6__CTOR_OFFSET UNITYSDK_OFFSET(0xEBB0CB0)

inline static constexpr unsigned int Class_1_5C7F0A9A533D7AE6_TypeDefinitionIndex = 56056;

class Class_1_5C7F0A9A533D7AE6 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5C7F0A9A533D7AE6_TypeDefinitionIndex)->GetStaticField(0x5850);
	}
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_4E1996B50E2373CB*>* Field_1_8; // 0x18
	::UnityEngine::SphereCollider* Field_1_3; // 0x20
	::Class_1_4E1996B50E2373CB* Field_1_6; // 0x28
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x30
	::RPG::GameCore::CharacterModelComponent* Field_1_2; // 0x38
	::Class_1_F65DC6656DEF8159* Field_1_9; // 0x40
	::System::Single Field_1_5; // 0x48
	::System::Boolean Field_1_11; // 0x4C
	::System::Single Field_1_7; // 0x50
	::RPG::GameCore::TimeRewindState Field_1_4; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D71F1E82F429310A(::RPG::GameCore::GameEntity* a1, ::Class_1_F65DC6656DEF8159* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_F65DC6656DEF8159*))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_D71F1E82F429310A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9B61E6AE99113B3F(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a5, ::Il2CppArray<::UnityEngine::AnimationCurve*>* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::Il2CppArray<::UnityEngine::AnimationCurve*>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_9B61E6AE99113B3F_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_1991A7B40B7BA36D(::RPG::GameCore::TimeRewindState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_1991A7B40B7BA36D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9AE63F0E1E9BDA2F(::System::Single a1, ::RPG::GameCore::TimeRewindState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::TimeRewindState))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_9AE63F0E1E9BDA2F_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::Class_1_4E1996B50E2373CB* Method_1_B8739D0DE156F9EB(::System::Single& a1)
	{
		return ((::Class_1_4E1996B50E2373CB*(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_B8739D0DE156F9EB_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_14CC93689192A32B(::Class_1_4E1996B50E2373CB* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4E1996B50E2373CB*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_14CC93689192A32B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A5624AB15FE32AEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_A5624AB15FE32AEC_OFFSET))(this, a1);
	}

	::System::Void Method_1_976CDF5EF06E0838(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_976CDF5EF06E0838_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C7F0A9A533D7AE6_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
