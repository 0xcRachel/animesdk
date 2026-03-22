#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_56F5D8B0959C21DA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105E4BA0)
#define CLASS_2_56F5D8B0959C21DA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105E4BD0)
#define CLASS_2_56F5D8B0959C21DA___C___SETUPVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x105E4BE0)

inline static constexpr unsigned int Class_2_56F5D8B0959C21DA___c_TypeDefinitionIndex = 57484;

class Class_2_56F5D8B0959C21DA___c : public ::System::Object
{
public:
	static ::Class_2_56F5D8B0959C21DA___c** StaticGet___9()
	{
		return (::Class_2_56F5D8B0959C21DA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56F5D8B0959C21DA___c_TypeDefinitionIndex)->GetStaticField(0x45E20);
	}
	static ::RPG::Client::CustomButton_VoidDelegate** StaticGet___9__7_0()
	{
		return (::RPG::Client::CustomButton_VoidDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_56F5D8B0959C21DA___c_TypeDefinitionIndex)->GetStaticField(0x45E28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_56F5D8B0959C21DA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56F5D8B0959C21DA___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetupView_b__7_0(::UnityEngine::GameObject* _)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_56F5D8B0959C21DA___C___SETUPVIEW_B__7_0_OFFSET))(this, _);
	}
};
