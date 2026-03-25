#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1889DE49D24AA9B9.h"

namespace System { class String; }

#define CLASS_3_60565D215769AF7D__CCTOR_OFFSET UNITYSDK_OFFSET(0xD19EE90)
#define CLASS_3_60565D215769AF7D__CTOR_OFFSET UNITYSDK_OFFSET(0xD19EE60)
#define CLASS_3_60565D215769AF7D__ONBIND_OFFSET UNITYSDK_OFFSET(0xD19EA80)
#define CLASS_3_60565D215769AF7D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD19EED0)

inline static constexpr unsigned int Class_3_60565D215769AF7D_TypeDefinitionIndex = 58584;

class Class_3_60565D215769AF7D : public ::Class_2_1889DE49D24AA9B9
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_60565D215769AF7D_TypeDefinitionIndex)->GetStaticField(0x380B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60565D215769AF7D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
