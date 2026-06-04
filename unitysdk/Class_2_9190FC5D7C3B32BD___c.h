#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A02329D041D3C641;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_9190FC5D7C3B32BD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18321E90)
#define CLASS_2_9190FC5D7C3B32BD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18321ED0)
#define CLASS_2_9190FC5D7C3B32BD___C___CTOR_B__14_0_OFFSET UNITYSDK_OFFSET(0x18321EE0)
#define CLASS_2_9190FC5D7C3B32BD___C___CTOR_B__14_1_OFFSET UNITYSDK_OFFSET(0x18321F10)

inline static constexpr unsigned int Class_2_9190FC5D7C3B32BD___c_TypeDefinitionIndex = 39087;

class Class_2_9190FC5D7C3B32BD___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9190FC5D7C3B32BD___c_TypeDefinitionIndex)->GetStaticField(0x278B0);
	}
	static ::Class_2_9190FC5D7C3B32BD___c** StaticGet___9()
	{
		return (::Class_2_9190FC5D7C3B32BD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9190FC5D7C3B32BD___c_TypeDefinitionIndex)->GetStaticField(0x278B8);
	}
	static ::System::Func_1<::Class_2_A02329D041D3C641*>** StaticGet___9__14_1()
	{
		return (::System::Func_1<::Class_2_A02329D041D3C641*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_9190FC5D7C3B32BD___c_TypeDefinitionIndex)->GetStaticField(0x278C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_9190FC5D7C3B32BD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9190FC5D7C3B32BD___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__14_0(::Entitas::IEntity* a1)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9190FC5D7C3B32BD___C___CTOR_B__14_0_OFFSET))(this, a1);
	}

	::Class_2_A02329D041D3C641* __ctor_b__14_1()
	{
		return ((::Class_2_A02329D041D3C641*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9190FC5D7C3B32BD___C___CTOR_B__14_1_OFFSET))(this);
	}
};
