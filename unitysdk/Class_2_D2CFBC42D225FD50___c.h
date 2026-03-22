#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_D2CFBC42D225FD50;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_2_D2CFBC42D225FD50___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91FA030)
#define CLASS_2_D2CFBC42D225FD50___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91FA060)
#define CLASS_2_D2CFBC42D225FD50___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET UNITYSDK_OFFSET(0x91FA070)
#define CLASS_2_D2CFBC42D225FD50___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET UNITYSDK_OFFSET(0x91FA0A0)

inline static constexpr unsigned int Class_2_D2CFBC42D225FD50___c_TypeDefinitionIndex = 60777;

class Class_2_D2CFBC42D225FD50___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__4_1()
	{
		return (::System::Action_3<::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2CFBC42D225FD50___c_TypeDefinitionIndex)->GetStaticField(0x40EE0);
	}
	static ::Class_2_D2CFBC42D225FD50___c** StaticGet___9()
	{
		return (::Class_2_D2CFBC42D225FD50___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2CFBC42D225FD50___c_TypeDefinitionIndex)->GetStaticField(0x40EE8);
	}
	static ::System::Action_3<::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__4_0()
	{
		return (::System::Action_3<::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D2CFBC42D225FD50___c_TypeDefinitionIndex)->GetStaticField(0x40EF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50___C__CTOR_OFFSET))(this);
	}

	::System::Void __InitDestructibleProp_b__4_0(::Class_2_D2CFBC42D225FD50* self, ::Class_2_9DD8A46984F1AFFD* prop, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50___C___INITDESTRUCTIBLEPROP_B__4_0_OFFSET))(this, self, prop, other);
	}

	::System::Void __InitDestructibleProp_b__4_1(::Class_2_D2CFBC42D225FD50* self, ::Class_2_9DD8A46984F1AFFD* prop, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2CFBC42D225FD50*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_D2CFBC42D225FD50___C___INITDESTRUCTIBLEPROP_B__4_1_OFFSET))(this, self, prop, other);
	}
};
