#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_642419429F509B0B_2.h"

class Class_0_16E4307DCC419505_600;
namespace System { class String; }

#define CLASS_2_240A5733EAF48F21_4_METHOD_2_480F833A21D9E432_OFFSET UNITYSDK_OFFSET(0x1387A580)
#define CLASS_2_240A5733EAF48F21_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1387A730)
#define CLASS_2_240A5733EAF48F21_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1387A570)
#define CLASS_2_240A5733EAF48F21_4___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1387A7D0)

inline static constexpr unsigned int Class_2_240A5733EAF48F21_4_TypeDefinitionIndex = 74339;

class Class_2_240A5733EAF48F21_4 : public ::Class_1_642419429F509B0B_2
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_600* a1, ::Class_0_16E4307DCC419505_600* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_600*, ::Class_0_16E4307DCC419505_600*))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Double Method_2_480F833A21D9E432()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_4_METHOD_2_480F833A21D9E432_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_4_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_240A5733EAF48F21_4___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
