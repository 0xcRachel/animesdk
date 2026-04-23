#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61F4F52B897D6AD7;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_61F4F52B897D6AD7___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13596A40)
#define CLASS_1_61F4F52B897D6AD7___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13596A70)
#define CLASS_1_61F4F52B897D6AD7___C__GET__FIXEDUPDATEACTION_B__26_0_OFFSET UNITYSDK_OFFSET(0x13596A80)
#define CLASS_1_61F4F52B897D6AD7___C__GET__LATEFIXEDUPDATEACTION_B__28_0_OFFSET UNITYSDK_OFFSET(0x13596AA0)

inline static constexpr unsigned int Class_1_61F4F52B897D6AD7___c_TypeDefinitionIndex = 70719;

class Class_1_61F4F52B897D6AD7___c : public ::System::Object
{
public:
	static ::Class_1_61F4F52B897D6AD7___c** StaticGet___9()
	{
		return (::Class_1_61F4F52B897D6AD7___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61F4F52B897D6AD7___c_TypeDefinitionIndex)->GetStaticField(0xE3B0);
	}
	static ::System::Action_1<::Class_1_61F4F52B897D6AD7*>** StaticGet___9__26_0()
	{
		return (::System::Action_1<::Class_1_61F4F52B897D6AD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61F4F52B897D6AD7___c_TypeDefinitionIndex)->GetStaticField(0xE3B8);
	}
	static ::System::Action_1<::Class_1_61F4F52B897D6AD7*>** StaticGet___9__28_0()
	{
		return (::System::Action_1<::Class_1_61F4F52B897D6AD7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_61F4F52B897D6AD7___c_TypeDefinitionIndex)->GetStaticField(0xE3C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_61F4F52B897D6AD7___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F4F52B897D6AD7___C__CTOR_OFFSET))(this);
	}

	::System::Void _get__FixedUpdateAction_b__26_0(::Class_1_61F4F52B897D6AD7* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61F4F52B897D6AD7*))((::PBYTE)hIl2Cpp + CLASS_1_61F4F52B897D6AD7___C__GET__FIXEDUPDATEACTION_B__26_0_OFFSET))(this, self);
	}

	::System::Void _get__LateFixedUpdateAction_b__28_0(::Class_1_61F4F52B897D6AD7* self)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_61F4F52B897D6AD7*))((::PBYTE)hIl2Cpp + CLASS_1_61F4F52B897D6AD7___C__GET__LATEFIXEDUPDATEACTION_B__28_0_OFFSET))(this, self);
	}
};
