#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6313984181A582D7_2;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_099B78418029B3B1_4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x165C86D0)
#define CLASS_2_099B78418029B3B1_4___C__CTOR_OFFSET UNITYSDK_OFFSET(0x165C8710)
#define CLASS_2_099B78418029B3B1_4___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x165C8720)
#define CLASS_2_099B78418029B3B1_4___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x165C8750)

inline static constexpr unsigned int Class_2_099B78418029B3B1_4___c_TypeDefinitionIndex = 28814;

class Class_2_099B78418029B3B1_4___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_4___c_TypeDefinitionIndex)->GetStaticField(0x34150);
	}
	static ::System::Func_1<::Class_2_6313984181A582D7_2*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_6313984181A582D7_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_4___c_TypeDefinitionIndex)->GetStaticField(0x34158);
	}
	static ::Class_2_099B78418029B3B1_4___c** StaticGet___9()
	{
		return (::Class_2_099B78418029B3B1_4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_4___c_TypeDefinitionIndex)->GetStaticField(0x34160);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_4___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_4___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_6313984181A582D7_2* __ctor_b__0_1()
	{
		return ((::Class_2_6313984181A582D7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_4___C___CTOR_B__0_1_OFFSET))(this);
	}
};
