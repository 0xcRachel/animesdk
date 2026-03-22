#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class MarbleEffect; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BCBF56C391A9F038___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BFDA90)
#define CLASS_2_BCBF56C391A9F038___C__DISPLAYCLASS55_0__TRIGGERMARBLEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9C03BC0)

inline static constexpr unsigned int Class_2_BCBF56C391A9F038___c__DisplayClass55_0_TypeDefinitionIndex = 47837;

class Class_2_BCBF56C391A9F038___c__DisplayClass55_0 : public ::System::Object
{
public:
	::UnityEngine::Transform* attachTransform; // 0x10
	::RPG::GameCore::MarbleEffect* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCBF56C391A9F038___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerMarbleEffect_b__0(::RPG::Client::MonoEffect* eff, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_BCBF56C391A9F038___C__DISPLAYCLASS55_0__TRIGGERMARBLEEFFECT_B__0_OFFSET))(this, eff, extraParams);
	}
};
