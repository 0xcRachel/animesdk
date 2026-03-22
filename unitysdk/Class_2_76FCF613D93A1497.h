#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class AttachPointSet;
class Class_1_5F51D4049EA87B7B;
class Class_1_9CBC71DC5240DC00;
class Class_1_A0302E9AE0B8A2B9;
class Class_3_FA4469B9FB916D4B;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client { class FollowPointMapping; }
namespace RPG::Client { class MonoEffectPluginCharaMaterialBlock; }
namespace RPG::Client { class MonoEffectPluginCharacterModelCapture; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_76FCF613D93A1497_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEFBC70)
#define CLASS_2_76FCF613D93A1497_METHOD_2_2233B4E123DC1DDC_OFFSET UNITYSDK_OFFSET(0xFEFE050)
#define CLASS_2_76FCF613D93A1497_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xFEFC000)
#define CLASS_2_76FCF613D93A1497_METHOD_2_3368F1CBCE68D2D1_OFFSET UNITYSDK_OFFSET(0xFEFE430)
#define CLASS_2_76FCF613D93A1497_METHOD_2_4D5E094CBA8FF21F_OFFSET UNITYSDK_OFFSET(0xFEFE850)
#define CLASS_2_76FCF613D93A1497_METHOD_2_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0xFEFE3B0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_6792BDDE0B7A8419_OFFSET UNITYSDK_OFFSET(0xFEFED00)
#define CLASS_2_76FCF613D93A1497_METHOD_2_6A704A44799D4069_OFFSET UNITYSDK_OFFSET(0xFEFBAB0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_8735D14C38F2A99E_OFFSET UNITYSDK_OFFSET(0xFEFEDB0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_8CB9BDF340E2FC64_OFFSET UNITYSDK_OFFSET(0xFEFBCE0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xFEFF660)
#define CLASS_2_76FCF613D93A1497_METHOD_2_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xFEFF5F0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0xFEFBFB0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_96E44500D1F491E7_OFFSET UNITYSDK_OFFSET(0xFEFC1A0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_A4F4A9B75254E92D_OFFSET UNITYSDK_OFFSET(0xFEFE250)
#define CLASS_2_76FCF613D93A1497_METHOD_2_A745463C7F86C829_OFFSET UNITYSDK_OFFSET(0xFEFBC20)
#define CLASS_2_76FCF613D93A1497_METHOD_2_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xFEFF5E0)
#define CLASS_2_76FCF613D93A1497_METHOD_2_BC17691AD818C776_OFFSET UNITYSDK_OFFSET(0xFEFDD10)
#define CLASS_2_76FCF613D93A1497_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0xFEFF350)
#define CLASS_2_76FCF613D93A1497_METHOD_2_FD2A5158841A130C_OFFSET UNITYSDK_OFFSET(0xFEFF540)
#define CLASS_2_76FCF613D93A1497__CTOR_OFFSET UNITYSDK_OFFSET(0xFEFF650)
#define CLASS_2_76FCF613D93A1497___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEFF6D0)

inline static constexpr unsigned int Class_2_76FCF613D93A1497_TypeDefinitionIndex = 55752;

class Class_2_76FCF613D93A1497 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::Collections::Generic::List_1<::AttachPointSet*>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::List_1<::AttachPointSet*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_76FCF613D93A1497_TypeDefinitionIndex)->GetStaticField(0x1A1B0);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>** StaticGet_Field_2_14()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_76FCF613D93A1497_TypeDefinitionIndex)->GetStaticField(0x1A1B8);
	}
	static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_76FCF613D93A1497_TypeDefinitionIndex)->GetStaticField(0x1A1C0);
	}
	::Class_1_9CBC71DC5240DC00* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_2_5; // 0x20
	::RPG::GameCore::GameEntity* Field_2_10; // 0x28
	::RPG::Client::AttachPointMapping* Field_2_11; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::RPG::Client::FollowPointMapping* Field_2_12; // 0x48
	::UnityEngine::GameObject* Field_2_1; // 0x50
	::Class_1_A0302E9AE0B8A2B9* Field_2_0; // 0x58
	::Il2CppArray<::RPG::Client::MonoEffectPluginCharaMaterialBlock*>* Field_2_13; // 0x60
	::System::Int32 Field_2_7; // 0x68
	::System::Boolean Field_2_9; // 0x6C
	::System::Boolean Field_2_6; // 0x6D
	::System::Single Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6A704A44799D4069(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_6A704A44799D4069_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_BC17691AD818C776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_BC17691AD818C776_OFFSET))(this, a1);
	}

	::System::Void Method_2_96E44500D1F491E7(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_96E44500D1F491E7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Method_2_3368F1CBCE68D2D1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_3368F1CBCE68D2D1_OFFSET))(this);
	}

	::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* Method_2_4D5E094CBA8FF21F()
	{
		return ((::RPG::PoolDictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_4D5E094CBA8FF21F_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_2_A4F4A9B75254E92D(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_A4F4A9B75254E92D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_6792BDDE0B7A8419(::Class_1_5F51D4049EA87B7B* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::Class_1_5F51D4049EA87B7B*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_6792BDDE0B7A8419_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_8735D14C38F2A99E(::Class_3_FA4469B9FB916D4B* a1, ::RPG::Client::AttachPointMapping* a2)
	{
		return ((::System::Void(*)(::Class_3_FA4469B9FB916D4B*, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_8735D14C38F2A99E_OFFSET))(a1, a2);
	}

	::System::Void Method_2_2233B4E123DC1DDC(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_2233B4E123DC1DDC_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_2_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_2_8CB9BDF340E2FC64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_8CB9BDF340E2FC64_OFFSET))(this);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}

	static ::System::Void Method_2_FD2A5158841A130C(::UnityEngine::Object* a1)
	{
		return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_FD2A5158841A130C_OFFSET))(a1);
	}

	::RPG::Client::MonoEffectPluginCharacterModelCapture* Method_2_A745463C7F86C829()
	{
		return ((::RPG::Client::MonoEffectPluginCharacterModelCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_A745463C7F86C829_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_90EC931103FB6F31_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76FCF613D93A1497___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
