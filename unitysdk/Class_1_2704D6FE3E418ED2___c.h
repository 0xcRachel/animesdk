#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_2704D6FE3E418ED2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDEEDA0)
#define CLASS_1_2704D6FE3E418ED2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDEEDD0)
#define CLASS_1_2704D6FE3E418ED2___C___ONGAMEFINALLEAVE_B__22_0_OFFSET UNITYSDK_OFFSET(0xFDEEDE0)

inline static constexpr unsigned int Class_1_2704D6FE3E418ED2___c_TypeDefinitionIndex = 47957;

class Class_1_2704D6FE3E418ED2___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__22_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2704D6FE3E418ED2___c_TypeDefinitionIndex)->GetStaticField(0xA1A0);
	}
	static ::Class_1_2704D6FE3E418ED2___c** StaticGet___9()
	{
		return (::Class_1_2704D6FE3E418ED2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2704D6FE3E418ED2___c_TypeDefinitionIndex)->GetStaticField(0xA1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2704D6FE3E418ED2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2704D6FE3E418ED2___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnGameFinalLeave_b__22_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2704D6FE3E418ED2___C___ONGAMEFINALLEAVE_B__22_0_OFFSET))(this);
	}
};
