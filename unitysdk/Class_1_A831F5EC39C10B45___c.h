#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A831F5EC39C10B45;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define CLASS_1_A831F5EC39C10B45___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BC34D0)
#define CLASS_1_A831F5EC39C10B45___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BC3510)
#define CLASS_1_A831F5EC39C10B45___C___LISTENLEVELVAR_B__34_0_OFFSET UNITYSDK_OFFSET(0x8BC3520)

inline static constexpr unsigned int Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex = 62485;

class Class_1_A831F5EC39C10B45___c : public ::System::Object
{
public:
	static ::System::Action_3<::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*>** StaticGet___9__34_0()
	{
		return (::System::Action_3<::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex)->GetStaticField(0x467D0);
	}
	static ::Class_1_A831F5EC39C10B45___c** StaticGet___9()
	{
		return (::Class_1_A831F5EC39C10B45___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A831F5EC39C10B45___c_TypeDefinitionIndex)->GetStaticField(0x467D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__CTOR_OFFSET))(this);
	}

	::System::Void __ListenLevelVar_b__34_0(::Class_1_A831F5EC39C10B45* self, ::System::Int32 entID, ::System::String* varName)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A831F5EC39C10B45*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C___LISTENLEVELVAR_B__34_0_OFFSET))(this, self, entID, varName);
	}
};
