#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99AE43441189916F.h"

namespace System { class String; }

#define CLASS_3_DD4C313565FF87AF_METHOD_3_5244FB902A471D01_OFFSET UNITYSDK_OFFSET(0x103B40F0)
#define CLASS_3_DD4C313565FF87AF_METHOD_3_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x103B3FD0)
#define CLASS_3_DD4C313565FF87AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x103B4050)
#define CLASS_3_DD4C313565FF87AF__CTOR_OFFSET UNITYSDK_OFFSET(0x103B4020)
#define CLASS_3_DD4C313565FF87AF__ONBIND_OFFSET UNITYSDK_OFFSET(0x103B3CB0)
#define CLASS_3_DD4C313565FF87AF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x103B4090)

inline static constexpr unsigned int Class_3_DD4C313565FF87AF_TypeDefinitionIndex = 56988;

class Class_3_DD4C313565FF87AF : public ::Class_2_99AE43441189916F
{
public:
	static ::System::String** StaticGet_Field_3_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DD4C313565FF87AF_TypeDefinitionIndex)->GetStaticField(0x38520);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF_METHOD_3_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_5244FB902A471D01(::System::Boolean P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DD4C313565FF87AF_METHOD_3_5244FB902A471D01_OFFSET))(this, P0, P1);
	}
};
