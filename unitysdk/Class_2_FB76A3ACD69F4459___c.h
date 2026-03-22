#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_FB76A3ACD69F4459___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD8755A0)
#define CLASS_2_FB76A3ACD69F4459___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD8755E0)
#define CLASS_2_FB76A3ACD69F4459___C___CLOSESCREENTRANSFER_B__15_0_OFFSET UNITYSDK_OFFSET(0xD8755F0)

inline static constexpr unsigned int Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex = 41686;

class Class_2_FB76A3ACD69F4459___c : public ::System::Object
{
public:
	static ::Class_2_FB76A3ACD69F4459___c** StaticGet___9()
	{
		return (::Class_2_FB76A3ACD69F4459___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex)->GetStaticField(0x433A0);
	}
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_FB76A3ACD69F4459___c_TypeDefinitionIndex)->GetStaticField(0x433A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C__CTOR_OFFSET))(this);
	}

	::System::Void __CloseScreenTransfer_b__15_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB76A3ACD69F4459___C___CLOSESCREENTRANSFER_B__15_0_OFFSET))(this);
	}
};
