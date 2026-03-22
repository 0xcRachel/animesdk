#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99AE43441189916F.h"

namespace System { class String; }

#define CLASS_3_C8FD4C1D4B4F5A99_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2E9800)
#define CLASS_3_C8FD4C1D4B4F5A99_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB2E97D0)
#define CLASS_3_C8FD4C1D4B4F5A99_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2E94B0)
#define CLASS_3_C8FD4C1D4B4F5A99_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2E9820)

inline static constexpr unsigned int Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex = 56993;

class Class_3_C8FD4C1D4B4F5A99_1 : public ::Class_2_99AE43441189916F
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8FD4C1D4B4F5A99_1_TypeDefinitionIndex)->GetStaticField(0x38530);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
