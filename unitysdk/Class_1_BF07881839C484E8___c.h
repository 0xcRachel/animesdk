#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BF07881839C484E8;
class Class_2_9DD8A46984F1AFFD;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class Collider; }

#define CLASS_1_BF07881839C484E8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C36030)
#define CLASS_1_BF07881839C484E8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C36060)
#define CLASS_1_BF07881839C484E8___C___DEPLOYBORDERPLAT_B__5_0_OFFSET UNITYSDK_OFFSET(0x10C36070)
#define CLASS_1_BF07881839C484E8___C___DEPLOYBORDERPLAT_B__5_1_OFFSET UNITYSDK_OFFSET(0x10C360A0)

inline static constexpr unsigned int Class_1_BF07881839C484E8___c_TypeDefinitionIndex = 60762;

class Class_1_BF07881839C484E8___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_1()
	{
		return (::System::Action_3<::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF07881839C484E8___c_TypeDefinitionIndex)->GetStaticField(0xA150);
	}
	static ::Class_1_BF07881839C484E8___c** StaticGet___9()
	{
		return (::Class_1_BF07881839C484E8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF07881839C484E8___c_TypeDefinitionIndex)->GetStaticField(0xA158);
	}
	static ::System::Action_3<::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>** StaticGet___9__5_0()
	{
		return (::System::Action_3<::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF07881839C484E8___c_TypeDefinitionIndex)->GetStaticField(0xA160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8___C__CTOR_OFFSET))(this);
	}

	::System::Void __DeployBorderPlat_b__5_0(::Class_1_BF07881839C484E8* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8___C___DEPLOYBORDERPLAT_B__5_0_OFFSET))(this, self, ent, other);
	}

	::System::Void __DeployBorderPlat_b__5_1(::Class_1_BF07881839C484E8* self, ::Class_2_9DD8A46984F1AFFD* ent, ::UnityEngine::Collider* other)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF07881839C484E8*, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_BF07881839C484E8___C___DEPLOYBORDERPLAT_B__5_1_OFFSET))(this, self, ent, other);
	}
};
