#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CustomButton_VoidDelegate; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_4102F28AD1F76250___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176E8900)
#define CLASS_2_4102F28AD1F76250___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176E8930)
#define CLASS_2_4102F28AD1F76250___C___SETUPVIEW_B__7_0_OFFSET UNITYSDK_OFFSET(0x176E8940)

inline static constexpr unsigned int Class_2_4102F28AD1F76250___c_TypeDefinitionIndex = 67404;

class Class_2_4102F28AD1F76250___c : public ::System::Object
{
public:
	static ::RPG::Client::CustomButton_VoidDelegate** StaticGet___9__7_0()
	{
		return (::RPG::Client::CustomButton_VoidDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4102F28AD1F76250___c_TypeDefinitionIndex)->GetStaticField(0x13D40);
	}
	static ::Class_2_4102F28AD1F76250___c** StaticGet___9()
	{
		return (::Class_2_4102F28AD1F76250___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4102F28AD1F76250___c_TypeDefinitionIndex)->GetStaticField(0x13D48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4102F28AD1F76250___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4102F28AD1F76250___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetupView_b__7_0(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_4102F28AD1F76250___C___SETUPVIEW_B__7_0_OFFSET))(this, a1);
	}
};
