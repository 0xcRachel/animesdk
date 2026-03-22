#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6D4CF0193B1D034F;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_6D4CF0193B1D034F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CFA450)
#define CLASS_2_6D4CF0193B1D034F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10CFA490)
#define CLASS_2_6D4CF0193B1D034F___C__GET_SWITCHTOIDLE_B__24_0_OFFSET UNITYSDK_OFFSET(0x10CFA4A0)

inline static constexpr unsigned int Class_2_6D4CF0193B1D034F___c_TypeDefinitionIndex = 60732;

class Class_2_6D4CF0193B1D034F___c : public ::System::Object
{
public:
	static ::Class_2_6D4CF0193B1D034F___c** StaticGet___9()
	{
		return (::Class_2_6D4CF0193B1D034F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D4CF0193B1D034F___c_TypeDefinitionIndex)->GetStaticField(0x15EB0);
	}
	static ::System::Action_1<::Class_2_6D4CF0193B1D034F*>** StaticGet___9__24_0()
	{
		return (::System::Action_1<::Class_2_6D4CF0193B1D034F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6D4CF0193B1D034F___c_TypeDefinitionIndex)->GetStaticField(0x15EB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6D4CF0193B1D034F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D4CF0193B1D034F___C__CTOR_OFFSET))(this);
	}

	::System::Void _get_SwitchToIdle_b__24_0(::Class_2_6D4CF0193B1D034F* state)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6D4CF0193B1D034F*))((::PBYTE)hIl2Cpp + CLASS_2_6D4CF0193B1D034F___C__GET_SWITCHTOIDLE_B__24_0_OFFSET))(this, state);
	}
};
