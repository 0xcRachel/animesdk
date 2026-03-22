#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleBoard_PuzzleTrail.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2D33D4E16DA6E537;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }
namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class WaitForSeconds; }

#define CLASS_1_D5D8B81C5F91714F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF2D7E0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_081D1124449C70CF_OFFSET UNITYSDK_OFFSET(0xBF2E410)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_0C684A75C783EBC5_OFFSET UNITYSDK_OFFSET(0xBF2EC30)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_0E46DC8C385F3B19_OFFSET UNITYSDK_OFFSET(0xBF2EEB0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0xBF2E6F0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xBF2E630)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_1E2F1551644E6AD0_OFFSET UNITYSDK_OFFSET(0xBF2E950)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xBF2E5D0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_540DB5DAE524BF3C_OFFSET UNITYSDK_OFFSET(0xBF2EE50)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_56E8ED155DF34A44_OFFSET UNITYSDK_OFFSET(0xBF2E2E0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_71B1E6D14E126FBC_OFFSET UNITYSDK_OFFSET(0xBF2DE10)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_9076BB310BB6989E_OFFSET UNITYSDK_OFFSET(0xBF2E0E0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0xBF2D9E0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_A0C3C8FB5CF273C4_OFFSET UNITYSDK_OFFSET(0xBF2DD20)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_C120627FFC990F63_OFFSET UNITYSDK_OFFSET(0xBF2E7B0)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_D219743A444E7E38_OFFSET UNITYSDK_OFFSET(0xBF2DF20)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_F211F18433CEAF48_OFFSET UNITYSDK_OFFSET(0xBF2E520)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_F75084EC8D457B45_1_OFFSET UNITYSDK_OFFSET(0xBF2E850)
#define CLASS_1_D5D8B81C5F91714F_METHOD_1_F75084EC8D457B45_OFFSET UNITYSDK_OFFSET(0xBF2E1E0)
#define CLASS_1_D5D8B81C5F91714F__CCTOR_OFFSET UNITYSDK_OFFSET(0xBF2EEC0)
#define CLASS_1_D5D8B81C5F91714F__CTOR_OFFSET UNITYSDK_OFFSET(0xBF2D6C0)

inline static constexpr unsigned int Class_1_D5D8B81C5F91714F_TypeDefinitionIndex = 61802;

class Class_1_D5D8B81C5F91714F : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D5D8B81C5F91714F_TypeDefinitionIndex)->GetStaticField(0x10AE0);
	}
	::UnityEngine::Coroutine* Field_1_10; // 0x10
	::RPG::Client::MonoEffect* Field_1_8; // 0x18
	::Il2CppArray<::UnityEngine::GameObject*>* Field_1_9; // 0x20
	::RPG::Client::Prop::DestroyRootPuzzleBoard* Field_1_6; // 0x28
	::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleChess*>* Field_1_0; // 0x30
	::System::String* Field_1_2; // 0x38
	::UnityEngine::Transform* Field_1_7; // 0x40
	::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>* Field_1_1; // 0x48
	::UnityEngine::Vector3 Field_1_5; // 0x50
	::System::Single Field_1_4; // 0x5C
	::UnityEngine::Vector3 Field_1_3; // 0x60

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::DestroyRootPuzzleBoard* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::DestroyRootPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9765352E01408D38()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_9765352E01408D38_OFFSET))(this);
	}

	::System::Void Method_1_A0C3C8FB5CF273C4(::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleBoard_PuzzleTrail>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::Prop::DestroyRootPuzzleBoard_PuzzleTrail>*))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_A0C3C8FB5CF273C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_71B1E6D14E126FBC(::RPG::Client::Prop::DestroyRootPuzzleChess* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleChess*))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_71B1E6D14E126FBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_D219743A444E7E38(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::Il2CppArray<::UnityEngine::GameObject*>* a3, ::UnityEngine::GameObject* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::Il2CppArray<::UnityEngine::GameObject*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_D219743A444E7E38_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::IEnumerator* Method_1_F75084EC8D457B45(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_F75084EC8D457B45_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_9076BB310BB6989E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_9076BB310BB6989E_OFFSET))(this);
	}

	::System::Void Method_1_56E8ED155DF34A44()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_56E8ED155DF34A44_OFFSET))(this);
	}

	::System::Void Method_1_081D1124449C70CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_081D1124449C70CF_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_F211F18433CEAF48(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>* a1, ::UnityEngine::WaitForSeconds* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_1_2D33D4E16DA6E537*>*>*, ::UnityEngine::WaitForSeconds*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_F211F18433CEAF48_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_1290EA767C459179_1_OFFSET))(this);
	}

	::RPG::Client::Prop::DestroyRootPuzzleChess* Method_1_C120627FFC990F63(::UnityEngine::Vector2Int a1)
	{
		return ((::RPG::Client::Prop::DestroyRootPuzzleChess*(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_C120627FFC990F63_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_F75084EC8D457B45_1(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_F75084EC8D457B45_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_1E2F1551644E6AD0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_1E2F1551644E6AD0_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_0C684A75C783EBC5(::RPG::Client::Prop::ChessDirection a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_0C684A75C783EBC5_OFFSET))(this, a1);
	}

	::System::Void Method_1_540DB5DAE524BF3C(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_540DB5DAE524BF3C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>* Method_1_0E46DC8C385F3B19()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::DestroyRootPuzzleChess*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D8B81C5F91714F_METHOD_1_0E46DC8C385F3B19_OFFSET))(this);
	}
};
