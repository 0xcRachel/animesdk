#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

#define CLASS_2_AA9239F66AD90F88_4_ONINIT_OFFSET UNITYSDK_OFFSET(0x10BA9800)
#define CLASS_2_AA9239F66AD90F88_4_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x10BA9840)
#define CLASS_2_AA9239F66AD90F88_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA9880)
#define CLASS_2_AA9239F66AD90F88_4___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x10BA9890)
#define CLASS_2_AA9239F66AD90F88_4___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x10BA98F0)

inline static constexpr unsigned int Class_2_AA9239F66AD90F88_4_TypeDefinitionIndex = 47753;

class Class_2_AA9239F66AD90F88_4 : public ::Class_1_47C4886CB6C61234
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_4__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_4_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_4_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_4___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AA9239F66AD90F88_4___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
