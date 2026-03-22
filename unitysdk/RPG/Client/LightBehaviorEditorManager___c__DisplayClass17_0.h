#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LightType.h"

namespace RPG::Client { class LightControlData; }

#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9502050)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS17_0__GETLIGHTSBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x95024D0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightBehaviorEditorManager___c__DisplayClass17_0_TypeDefinitionIndex = 55880;

	class LightBehaviorEditorManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::UnityEngine::LightType lightType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLightsByType_b__0(::RPG::Client::LightControlData* light)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LightControlData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS17_0__GETLIGHTSBYTYPE_B__0_OFFSET))(this, light);
		}
	};
}
