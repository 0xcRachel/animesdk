#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_2_17282789426EAD93_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15025630)
#define CLASS_2_17282789426EAD93__CTOR_OFFSET UNITYSDK_OFFSET(0x15025680)
#define CLASS_2_17282789426EAD93___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15025690)

inline static constexpr unsigned int Class_2_17282789426EAD93_TypeDefinitionIndex = 69542;

class Class_2_17282789426EAD93 : public ::Class_1_3713064DEE761936
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
