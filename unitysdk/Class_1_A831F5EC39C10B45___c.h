#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A831F5EC39C10B45;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_A831F5EC39C10B45___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF469500)
#define CLASS_1_A831F5EC39C10B45___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF469540)
#define CLASS_1_A831F5EC39C10B45___C___LISTENLEVELVAR_B__37_0_OFFSET UNITYSDK_OFFSET(0xF469550)

inline static constexpr unsigned int Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex = 70494;

class Class_1_A831F5EC39C10B45___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*>** StaticGet___9__37_0()
	{
		return (::System::Action_3<::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex)->GetStaticField(0x26E40);
	}
	static ::Class_1_A831F5EC39C10B45___c** StaticGet___9()
	{
		return (::Class_1_A831F5EC39C10B45___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex)->GetStaticField(0x26E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__37_0(::Class_1_A831F5EC39C10B45* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C___LISTENLEVELVAR_B__37_0_OFFSET))(this, self, entID, varName);
	}
};
