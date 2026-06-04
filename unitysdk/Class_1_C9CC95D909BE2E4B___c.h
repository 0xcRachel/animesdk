#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_C9CC95D909BE2E4B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14F6A220)
#define CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0x14F6A270)
#define CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_1_OFFSET UNITYSDK_OFFSET(0x14F6A310)
#define CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_2_OFFSET UNITYSDK_OFFSET(0x14F6A3B0)
#define CLASS_1_C9CC95D909BE2E4B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14F6A260)

inline static constexpr unsigned int Class_1_C9CC95D909BE2E4B___c_TypeDefinitionIndex = 61298;

class Class_1_C9CC95D909BE2E4B___c : public ::System::Object
{
public:
	static ::Class_1_C9CC95D909BE2E4B___c** StaticGet___9()
	{
		return (::Class_1_C9CC95D909BE2E4B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9CC95D909BE2E4B___c_TypeDefinitionIndex)->GetStaticField(0x5C050);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9CC95D909BE2E4B___c_TypeDefinitionIndex)->GetStaticField(0x5C058);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9CC95D909BE2E4B___c_TypeDefinitionIndex)->GetStaticField(0x5C060);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C9CC95D909BE2E4B___c_TypeDefinitionIndex)->GetStaticField(0x5C068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B___C__CTOR_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_0()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_0_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_1_OFFSET))(this);
	}

	::System::String* _CreateItem_b__1_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CC95D909BE2E4B___C__CREATEITEM_B__1_2_OFFSET))(this);
	}
};
