#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_7417CA3454CD3FC1;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_099B78418029B3B1_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16817130)
#define CLASS_2_099B78418029B3B1_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16817170)
#define CLASS_2_099B78418029B3B1_5___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x16817180)
#define CLASS_2_099B78418029B3B1_5___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x168171B0)

inline static constexpr unsigned int Class_2_099B78418029B3B1_5___c_TypeDefinitionIndex = 32564;

class Class_2_099B78418029B3B1_5___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_7417CA3454CD3FC1*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_7417CA3454CD3FC1*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_5___c_TypeDefinitionIndex)->GetStaticField(0x2BFA0);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_5___c_TypeDefinitionIndex)->GetStaticField(0x2BFA8);
	}
	static ::Class_2_099B78418029B3B1_5___c** StaticGet___9()
	{
		return (::Class_2_099B78418029B3B1_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_099B78418029B3B1_5___c_TypeDefinitionIndex)->GetStaticField(0x2BFB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_5___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_5___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_7417CA3454CD3FC1* __ctor_b__0_1()
	{
		return ((::Class_2_7417CA3454CD3FC1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_099B78418029B3B1_5___C___CTOR_B__0_1_OFFSET))(this);
	}
};
