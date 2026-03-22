#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_179553DEA16830ED_1.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/QteCatchGhostNotify.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_86BC741E51F9C2D4_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x100969B0)
#define CLASS_2_86BC741E51F9C2D4_GET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x10096A00)
#define CLASS_2_86BC741E51F9C2D4_SET_NOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x10096A10)
#define CLASS_2_86BC741E51F9C2D4__CTOR_OFFSET UNITYSDK_OFFSET(0x100969A0)
#define CLASS_2_86BC741E51F9C2D4___IFIXBASEPROXY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x10096A20)

inline static constexpr unsigned int Class_2_86BC741E51F9C2D4_TypeDefinitionIndex = 44481;

class Class_2_86BC741E51F9C2D4 : public ::Class_1_179553DEA16830ED_1
{
public:
	::RPG::GameCore::QteCatchGhostNotify _NotifyType_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::QteCatchGhostNotify a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::QteCatchGhostNotify get_NotifyType()
	{
		return ((::RPG::GameCore::QteCatchGhostNotify(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_GET_NOTIFYTYPE_OFFSET))(this);
	}

	::System::Void set_NotifyType(::RPG::GameCore::QteCatchGhostNotify value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::QteCatchGhostNotify))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4_SET_NOTIFYTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::EventType __iFixBaseProxy_GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86BC741E51F9C2D4___IFIXBASEPROXY_GETEVENTTYPE_OFFSET))(this);
	}
};
