#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_143FD5C33B171ABE;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_143FD5C33B171ABE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8959F30)
#define CLASS_3_143FD5C33B171ABE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8959F70)
#define CLASS_3_143FD5C33B171ABE___C__GET_SWITCHTOGROUNDMOVE_B__6_0_OFFSET UNITYSDK_OFFSET(0x8959F80)

inline static constexpr unsigned int Class_3_143FD5C33B171ABE___c_TypeDefinitionIndex = 60734;

class Class_3_143FD5C33B171ABE___c : public ::System::Object
{
public:
	static ::Class_3_143FD5C33B171ABE___c** StaticGet___9()
	{
		return (::Class_3_143FD5C33B171ABE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_143FD5C33B171ABE___c_TypeDefinitionIndex)->GetStaticField(0x47090);
	}
	static ::System::Action_1<::Class_3_143FD5C33B171ABE*>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::Class_3_143FD5C33B171ABE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_143FD5C33B171ABE___c_TypeDefinitionIndex)->GetStaticField(0x47098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_143FD5C33B171ABE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_143FD5C33B171ABE___C__CTOR_OFFSET))(this);
	}

	::System::Void _get_SwitchToGroundMove_b__6_0(::Class_3_143FD5C33B171ABE* state)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_143FD5C33B171ABE*))((::PBYTE)hIl2Cpp + CLASS_3_143FD5C33B171ABE___C__GET_SWITCHTOGROUNDMOVE_B__6_0_OFFSET))(this, state);
	}
};
