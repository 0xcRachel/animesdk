#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_536CC4186B095618;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_434143B198116DB9___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x168672C0)
#define CLASS_2_434143B198116DB9___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16867300)
#define CLASS_2_434143B198116DB9___C___CTOR_B__476_0_OFFSET UNITYSDK_OFFSET(0x16867310)
#define CLASS_2_434143B198116DB9___C___CTOR_B__476_1_OFFSET UNITYSDK_OFFSET(0x16867340)

inline static constexpr unsigned int Class_2_434143B198116DB9___c_TypeDefinitionIndex = 32544;

class Class_2_434143B198116DB9___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_536CC4186B095618*>** StaticGet___9__476_1()
	{
		return (::System::Func_1<::Class_2_536CC4186B095618*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_434143B198116DB9___c_TypeDefinitionIndex)->GetStaticField(0xCA50);
	}
	static ::Class_2_434143B198116DB9___c** StaticGet___9()
	{
		return (::Class_2_434143B198116DB9___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_434143B198116DB9___c_TypeDefinitionIndex)->GetStaticField(0xCA58);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__476_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_434143B198116DB9___c_TypeDefinitionIndex)->GetStaticField(0xCA60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_434143B198116DB9___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434143B198116DB9___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__476_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_434143B198116DB9___C___CTOR_B__476_0_OFFSET))(this, entity);
	}

	::Class_2_536CC4186B095618* __ctor_b__476_1()
	{
		return ((::Class_2_536CC4186B095618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_434143B198116DB9___C___CTOR_B__476_1_OFFSET))(this);
	}
};
