#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6DF7001559D3575B;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x161B4730)
#define CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161B4770)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x161B4780)
#define CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_1_OFFSET UNITYSDK_OFFSET(0x161B47B0)

inline static constexpr unsigned int Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex = 31688;

class Class_2_C8461ACA8308A704_1___c : public ::System::Object
{
public:
	static ::System::Func_1<::Class_2_6DF7001559D3575B*>** StaticGet___9__5_1()
	{
		return (::System::Func_1<::Class_2_6DF7001559D3575B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x9870);
	}
	static ::Class_2_C8461ACA8308A704_1___c** StaticGet___9()
	{
		return (::Class_2_C8461ACA8308A704_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x9878);
	}
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C8461ACA8308A704_1___c_TypeDefinitionIndex)->GetStaticField(0x9880);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__5_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_0_OFFSET))(this, entity);
	}

	::Class_2_6DF7001559D3575B* __ctor_b__5_1()
	{
		return ((::Class_2_6DF7001559D3575B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C8461ACA8308A704_1___C___CTOR_B__5_1_OFFSET))(this);
	}
};
