#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_181A7F9409C60DBC;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_E9C9AAD7C711B3E3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D4DAE0)
#define CLASS_2_E9C9AAD7C711B3E3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15D4DB20)
#define CLASS_2_E9C9AAD7C711B3E3___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x15D4DB30)
#define CLASS_2_E9C9AAD7C711B3E3___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x15D4DB60)

inline static constexpr unsigned int Class_2_E9C9AAD7C711B3E3___c_TypeDefinitionIndex = 38118;

class Class_2_E9C9AAD7C711B3E3___c : public ::System::Object
{
public:
	static ::Class_2_E9C9AAD7C711B3E3___c** StaticGet___9()
	{
		return (::Class_2_E9C9AAD7C711B3E3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C9AAD7C711B3E3___c_TypeDefinitionIndex)->GetStaticField(0x36330);
	}
	static ::System::Func_1<::Class_2_181A7F9409C60DBC*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_181A7F9409C60DBC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C9AAD7C711B3E3___c_TypeDefinitionIndex)->GetStaticField(0x36338);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9C9AAD7C711B3E3___c_TypeDefinitionIndex)->GetStaticField(0x36340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9C9AAD7C711B3E3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C9AAD7C711B3E3___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E9C9AAD7C711B3E3___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_181A7F9409C60DBC* __ctor_b__0_1()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9C9AAD7C711B3E3___C___CTOR_B__0_1_OFFSET))(this);
	}
};
