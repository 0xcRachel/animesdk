#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910212C026901FF5.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_2_17282789426EAD93_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x110C8880)
#define CLASS_2_17282789426EAD93__CTOR_OFFSET UNITYSDK_OFFSET(0x110C88D0)
#define CLASS_2_17282789426EAD93___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x110C88E0)

inline static constexpr unsigned int Class_2_17282789426EAD93_TypeDefinitionIndex = 59468;

class Class_2_17282789426EAD93 : public ::Class_1_910212C026901FF5
{
public:
	::RPG::Client::PlanetFesFloatingController* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17282789426EAD93__CTOR_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17282789426EAD93_ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17282789426EAD93___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
