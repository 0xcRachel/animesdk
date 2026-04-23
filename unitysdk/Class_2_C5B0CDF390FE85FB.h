#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_C5B0CDF390FE85FB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7F80F0)
#define CLASS_2_C5B0CDF390FE85FB_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF7F8140)
#define CLASS_2_C5B0CDF390FE85FB_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF7F81D0)
#define CLASS_2_C5B0CDF390FE85FB__CTOR_OFFSET UNITYSDK_OFFSET(0xF7F80B0)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7F8260)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF7F8270)
#define CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF7F8280)

inline static constexpr unsigned int Class_2_C5B0CDF390FE85FB_TypeDefinitionIndex = 53009;

class Class_2_C5B0CDF390FE85FB : public ::Class_1_59305B446B42427E
{
public:
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_C5B0CDF390FE85FB___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
