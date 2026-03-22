#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_9565A521AED72D96___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2EC0B0)
#define CLASS_2_9565A521AED72D96___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EC0F0)
#define CLASS_2_9565A521AED72D96___C___QUERYGROUND_B__2_0_OFFSET UNITYSDK_OFFSET(0xB2EC100)

inline static constexpr unsigned int Class_2_9565A521AED72D96___c_TypeDefinitionIndex = 60728;

class Class_2_9565A521AED72D96___c : public ::System::Object
{
public:
	static ::Class_2_9565A521AED72D96___c** StaticGet___9()
	{
		return (::Class_2_9565A521AED72D96___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9565A521AED72D96___c_TypeDefinitionIndex)->GetStaticField(0x46AD0);
	}
	static ::System::Comparison_1<::UnityEngine::RaycastHit>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9565A521AED72D96___c_TypeDefinitionIndex)->GetStaticField(0x46AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __QueryGround_b__2_0(::UnityEngine::RaycastHit lhs, ::UnityEngine::RaycastHit rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_9565A521AED72D96___C___QUERYGROUND_B__2_0_OFFSET))(this, lhs, rhs);
	}
};
