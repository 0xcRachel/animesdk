#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkTriggerBase.h"

namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define AKTRIGGERCOLLISIONEXIT_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1841EE90)
#define AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1841EF90)

inline static constexpr unsigned int AkTriggerCollisionExit_TypeDefinitionIndex = 33709;

class AkTriggerCollisionExit : public ::AkTriggerBase
{
public:
	::UnityEngine::GameObject* triggerObject; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT__CTOR_OFFSET))(this);
	}

	::System::Void OnCollisionExit(::UnityEngine::Collision* in_other)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + AKTRIGGERCOLLISIONEXIT_ONCOLLISIONEXIT_OFFSET))(this, in_other);
	}
};
