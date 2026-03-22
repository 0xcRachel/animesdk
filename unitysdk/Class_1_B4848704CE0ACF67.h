#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_B4848704CE0ACF67__CTOR_OFFSET UNITYSDK_OFFSET(0x8D17E70)

inline static constexpr unsigned int Class_1_B4848704CE0ACF67_TypeDefinitionIndex = 37506;

class Class_1_B4848704CE0ACF67 : public ::System::Object
{
public:
	::RPG::GameCore::BattleUIPanelType Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4848704CE0ACF67__CTOR_OFFSET))(this);
	}
};
