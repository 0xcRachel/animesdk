#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D5AD64F6FB3109AB;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_DFB79F7EE671BF59___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F2B0B0)
#define CLASS_2_DFB79F7EE671BF59___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F2B0E0)
#define CLASS_2_DFB79F7EE671BF59___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x15F2B0F0)
#define CLASS_2_DFB79F7EE671BF59___C___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x15F2B120)

inline static constexpr unsigned int Class_2_DFB79F7EE671BF59___c_TypeDefinitionIndex = 27977;

class Class_2_DFB79F7EE671BF59___c : public ::System::Object
{
public:
	static ::Class_2_DFB79F7EE671BF59___c** StaticGet___9()
	{
		return (::Class_2_DFB79F7EE671BF59___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DFB79F7EE671BF59___c_TypeDefinitionIndex)->GetStaticField(0x2D780);
	}
	static ::System::Func_1<::Class_2_D5AD64F6FB3109AB*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::Class_2_D5AD64F6FB3109AB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DFB79F7EE671BF59___c_TypeDefinitionIndex)->GetStaticField(0x2D788);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_DFB79F7EE671BF59___c_TypeDefinitionIndex)->GetStaticField(0x2D790);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_DFB79F7EE671BF59___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB79F7EE671BF59___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__0_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_DFB79F7EE671BF59___C___CTOR_B__0_0_OFFSET))(this, entity);
	}

	::Class_2_D5AD64F6FB3109AB* __ctor_b__0_1()
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFB79F7EE671BF59___C___CTOR_B__0_1_OFFSET))(this);
	}
};
