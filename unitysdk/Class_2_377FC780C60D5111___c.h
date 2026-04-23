#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_377FC780C60D5111___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105A0A00)
#define CLASS_2_377FC780C60D5111___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0A40)
#define CLASS_2_377FC780C60D5111___C___ONBIND_B__1_2_OFFSET UNITYSDK_OFFSET(0x105A0A50)

inline static constexpr unsigned int Class_2_377FC780C60D5111___c_TypeDefinitionIndex = 66600;

class Class_2_377FC780C60D5111___c : public ::System::Object
{
public:
	static ::RPG::Client::CustomButton_VoidDelegate** StaticGet___9__1_2()
	{
		return (::RPG::Client::CustomButton_VoidDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_377FC780C60D5111___c_TypeDefinitionIndex)->GetStaticField(0x6A240);
	}
	static ::Class_2_377FC780C60D5111___c** StaticGet___9()
	{
		return (::Class_2_377FC780C60D5111___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_377FC780C60D5111___c_TypeDefinitionIndex)->GetStaticField(0x6A248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBind_b__1_2(::UnityEngine::GameObject* _)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_377FC780C60D5111___C___ONBIND_B__1_2_OFFSET))(this, _);
	}
};
