#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"

namespace RPG::Client { class LevelDirector; }

#define CLASS_2_141CA4DD191E098C_METHOD_2_67EEA78C0217615A_OFFSET UNITYSDK_OFFSET(0x11538600)
#define CLASS_2_141CA4DD191E098C_ONINIT_OFFSET UNITYSDK_OFFSET(0x11538520)
#define CLASS_2_141CA4DD191E098C_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x115385A0)
#define CLASS_2_141CA4DD191E098C__CTOR_OFFSET UNITYSDK_OFFSET(0x11538610)
#define CLASS_2_141CA4DD191E098C___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x11538620)
#define CLASS_2_141CA4DD191E098C___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x11538680)

inline static constexpr unsigned int Class_2_141CA4DD191E098C_TypeDefinitionIndex = 60106;

class Class_2_141CA4DD191E098C : public ::Class_1_47C4886CB6C61234
{
public:
	::RPG::Client::LevelDirector* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C_ONUNINIT_OFFSET))(this);
	}

	::RPG::Client::LevelDirector* Method_2_67EEA78C0217615A()
	{
		return ((::RPG::Client::LevelDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C_METHOD_2_67EEA78C0217615A_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141CA4DD191E098C___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}
};
