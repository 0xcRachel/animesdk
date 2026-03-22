#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class Class_1_5286DBF45F0668B0;
class Class_1_929E979D9ED7139E;
class Class_1_B044F82CBFAD3D4B;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0BF4BC17BA691114_CLEAR_OFFSET UNITYSDK_OFFSET(0x869BC80)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_1_OFFSET UNITYSDK_OFFSET(0x869BB70)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_2_OFFSET UNITYSDK_OFFSET(0x869BBC0)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x869BB20)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_3D6722B9F8F20694_1_OFFSET UNITYSDK_OFFSET(0x869B2D0)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x869AD50)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_71C7112141D781BD_OFFSET UNITYSDK_OFFSET(0x8699FA0)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x869BA30)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_875768E9C85840D0_OFFSET UNITYSDK_OFFSET(0x869B930)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_890347A1765071A7_OFFSET UNITYSDK_OFFSET(0x869A7F0)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_8A119D4FE51135C9_OFFSET UNITYSDK_OFFSET(0x869BC10)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_A8458C1526636349_OFFSET UNITYSDK_OFFSET(0x869B830)
#define CLASS_1_0BF4BC17BA691114_METHOD_1_D0B68C1DD4B91F49_OFFSET UNITYSDK_OFFSET(0x869B9D0)
#define CLASS_1_0BF4BC17BA691114__CTOR_OFFSET UNITYSDK_OFFSET(0x869BD00)

inline static constexpr unsigned int Class_1_0BF4BC17BA691114_TypeDefinitionIndex = 55909;

class Class_1_0BF4BC17BA691114 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_12; // 0x10
	::Class_1_929E979D9ED7139E* Field_1_0; // 0x18
	::RPG::Client::LiteInstancedItem::ItemPrototype* Field_1_7; // 0x20
	::Class_1_929E979D9ED7139E* Field_1_2; // 0x28
	::Class_1_5286DBF45F0668B0* Field_1_8; // 0x30
	::Class_1_929E979D9ED7139E* Field_1_1; // 0x38
	::UnityEngine::Bounds Field_1_6; // 0x40
	::System::Boolean Field_1_4; // 0x58
	::System::Boolean Field_1_10; // 0x59
	::System::Boolean Field_1_11; // 0x5A
	::RPG::Client::TSCRendererType Field_1_5; // 0x5B
	::System::Boolean Field_1_9; // 0x5C
	::System::Boolean Field_1_3; // 0x5D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71C7112141D781BD(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::RPG::Client::LiteInstancedItem::ItemPrototype* a4, ::RPG::Client::LiteInstancedItem::ItemPrototype* a5, ::UnityEngine::Transform* a6, ::System::Boolean a7, ::RPG::Client::TSCRendererType a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_71C7112141D781BD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_890347A1765071A7(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Mesh* a2, ::RPG::Client::LiteInstancedItem::ItemPrototype* a3, ::UnityEngine::Transform* a4, ::System::Boolean a5, ::RPG::Client::TSCRendererType a6, ::Class_1_5286DBF45F0668B0* a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Mesh*, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::TSCRendererType, ::Class_1_5286DBF45F0668B0*))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_890347A1765071A7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_3D6722B9F8F20694()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_3D6722B9F8F20694_OFFSET))(this);
	}

	::System::Void Method_1_3D6722B9F8F20694_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_3D6722B9F8F20694_1_OFFSET))(this);
	}

	::System::Void Method_1_A8458C1526636349(::Class_1_B044F82CBFAD3D4B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B044F82CBFAD3D4B*&))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_A8458C1526636349_OFFSET))(this, a1);
	}

	::System::Void Method_1_875768E9C85840D0(::Class_1_B044F82CBFAD3D4B*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B044F82CBFAD3D4B*&))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_875768E9C85840D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D0B68C1DD4B91F49(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_D0B68C1DD4B91F49_OFFSET))(this, a1);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_1_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_06330CD58CB602B6_2_OFFSET))(this);
	}

	::System::Boolean Method_1_8A119D4FE51135C9(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_8A119D4FE51135C9_OFFSET))(this, a1);
	}

	::System::Void Method_1_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_METHOD_1_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BF4BC17BA691114_CLEAR_OFFSET))(this);
	}
};
