#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_A87F5B9EE465CB8E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10C69840)
#define CLASS_1_A87F5B9EE465CB8E___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x10C69890)
#define CLASS_1_A87F5B9EE465CB8E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10C69880)

inline static constexpr unsigned int Class_1_A87F5B9EE465CB8E___c_TypeDefinitionIndex = 52114;

class Class_1_A87F5B9EE465CB8E___c : public ::System::Object
{
public:
	static ::Class_1_A87F5B9EE465CB8E___c** StaticGet___9()
	{
		return (::Class_1_A87F5B9EE465CB8E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A87F5B9EE465CB8E___c_TypeDefinitionIndex)->GetStaticField(0x10340);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A87F5B9EE465CB8E___c_TypeDefinitionIndex)->GetStaticField(0x10348);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E___C__CREATEITEM_B__1_0_OFFSET))(this);
	}
};
