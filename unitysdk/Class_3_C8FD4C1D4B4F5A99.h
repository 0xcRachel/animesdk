#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99AE43441189916F.h"

namespace System { class String; }

#define CLASS_3_C8FD4C1D4B4F5A99__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD6BC80)
#define CLASS_3_C8FD4C1D4B4F5A99__CTOR_OFFSET UNITYSDK_OFFSET(0xFD6BC50)
#define CLASS_3_C8FD4C1D4B4F5A99__ONBIND_OFFSET UNITYSDK_OFFSET(0xFD6B930)
#define CLASS_3_C8FD4C1D4B4F5A99___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xFD6BCC0)

inline static constexpr unsigned int Class_3_C8FD4C1D4B4F5A99_TypeDefinitionIndex = 56992;

class Class_3_C8FD4C1D4B4F5A99 : public ::Class_2_99AE43441189916F
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C8FD4C1D4B4F5A99_TypeDefinitionIndex)->GetStaticField(0x6BF0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C8FD4C1D4B4F5A99___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
