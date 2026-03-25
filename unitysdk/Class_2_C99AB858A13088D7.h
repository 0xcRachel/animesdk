#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LevelDirector.h"

namespace RPG::GameCore { class GameWorld; }

#define CLASS_2_C99AB858A13088D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EFBBF0)
#define CLASS_2_C99AB858A13088D7_TICK_OFFSET UNITYSDK_OFFSET(0x9EFBC60)
#define CLASS_2_C99AB858A13088D7__CTOR_OFFSET UNITYSDK_OFFSET(0x9EFBBB0)
#define CLASS_2_C99AB858A13088D7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EFBD00)
#define CLASS_2_C99AB858A13088D7___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9EFBD70)

inline static constexpr unsigned int Class_2_C99AB858A13088D7_TypeDefinitionIndex = 47951;

class Class_2_C99AB858A13088D7 : public ::RPG::Client::LevelDirector
{
public:
	::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C99AB858A13088D7___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
