#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A696AB4980B3D7B5.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_20BEC8858E8F128D_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16B4F4F0)
#define CLASS_2_20BEC8858E8F128D_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x16B4F570)
#define CLASS_2_20BEC8858E8F128D__CTOR_OFFSET UNITYSDK_OFFSET(0x16B4F4B0)
#define CLASS_2_20BEC8858E8F128D___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0x16B4F620)
#define CLASS_2_20BEC8858E8F128D___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x16B4F630)

inline static constexpr unsigned int Class_2_20BEC8858E8F128D_TypeDefinitionIndex = 53727;

class Class_2_20BEC8858E8F128D : public ::Class_1_A696AB4980B3D7B5
{
public:
	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20BEC8858E8F128D__CTOR_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20BEC8858E8F128D_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_20BEC8858E8F128D_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_20BEC8858E8F128D___IFIXBASEPROXY_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_20BEC8858E8F128D___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, a1, a2);
	}
};
