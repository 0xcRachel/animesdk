#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E709A6395EE1661C;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_E709A6395EE1661C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2F2EF0)
#define CLASS_1_E709A6395EE1661C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F2F20)
#define CLASS_1_E709A6395EE1661C___C___TRYINITENTITYDYNAMICCOLLISION_B__3_0_OFFSET UNITYSDK_OFFSET(0xB2F2F30)

inline static constexpr unsigned int Class_1_E709A6395EE1661C___c_TypeDefinitionIndex = 60628;

class Class_1_E709A6395EE1661C___c : public ::System::Object
{
public:
	static ::Class_1_E709A6395EE1661C___c** StaticGet___9()
	{
		return (::Class_1_E709A6395EE1661C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E709A6395EE1661C___c_TypeDefinitionIndex)->GetStaticField(0x46AF0);
	}
	static ::System::Action_2<::Class_1_E709A6395EE1661C*, ::Class_2_9DD8A46984F1AFFD*>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::Class_1_E709A6395EE1661C*, ::Class_2_9DD8A46984F1AFFD*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E709A6395EE1661C___c_TypeDefinitionIndex)->GetStaticField(0x46AF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C___C__CTOR_OFFSET))(this);
	}

	::System::Void __TryInitEntityDynamicCollision_b__3_0(::Class_1_E709A6395EE1661C* system, ::Class_2_9DD8A46984F1AFFD* ent)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E709A6395EE1661C*, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_E709A6395EE1661C___C___TRYINITENTITYDYNAMICCOLLISION_B__3_0_OFFSET))(this, system, ent);
	}
};
