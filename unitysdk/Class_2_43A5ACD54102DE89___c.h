#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_536CC4186B095618;
namespace Entitas { class IAERC; }
namespace Entitas { class IEntity; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_43A5ACD54102DE89___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1616D550)
#define CLASS_2_43A5ACD54102DE89___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1616D590)
#define CLASS_2_43A5ACD54102DE89___C___CTOR_B__476_0_OFFSET UNITYSDK_OFFSET(0x1616D5A0)
#define CLASS_2_43A5ACD54102DE89___C___CTOR_B__476_1_OFFSET UNITYSDK_OFFSET(0x1616D5D0)

inline static constexpr unsigned int Class_2_43A5ACD54102DE89___c_TypeDefinitionIndex = 31634;

class Class_2_43A5ACD54102DE89___c : public ::System::Object
{
public:
	static ::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>** StaticGet___9__476_0()
	{
		return (::System::Func_2<::Entitas::IEntity*, ::Entitas::IAERC*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_43A5ACD54102DE89___c_TypeDefinitionIndex)->GetStaticField(0x7380);
	}
	static ::System::Func_1<::Class_2_536CC4186B095618*>** StaticGet___9__476_1()
	{
		return (::System::Func_1<::Class_2_536CC4186B095618*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_43A5ACD54102DE89___c_TypeDefinitionIndex)->GetStaticField(0x7388);
	}
	static ::Class_2_43A5ACD54102DE89___c** StaticGet___9()
	{
		return (::Class_2_43A5ACD54102DE89___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_43A5ACD54102DE89___c_TypeDefinitionIndex)->GetStaticField(0x7390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_43A5ACD54102DE89___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A5ACD54102DE89___C__CTOR_OFFSET))(this);
	}

	::Entitas::IAERC* __ctor_b__476_0(::Entitas::IEntity* entity)
	{
		return ((::Entitas::IAERC*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_43A5ACD54102DE89___C___CTOR_B__476_0_OFFSET))(this, entity);
	}

	::Class_2_536CC4186B095618* __ctor_b__476_1()
	{
		return ((::Class_2_536CC4186B095618*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43A5ACD54102DE89___C___CTOR_B__476_1_OFFSET))(this);
	}
};
