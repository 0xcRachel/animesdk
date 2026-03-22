#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class LightControlData; }
namespace System { class String; }

#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9501F60)
#define RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS16_0__FINDLIGHT_B__0_OFFSET UNITYSDK_OFFSET(0x9502480)

namespace RPG::Client
{
	inline static constexpr unsigned int LightBehaviorEditorManager___c__DisplayClass16_0_TypeDefinitionIndex = 55879;

	class LightBehaviorEditorManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* lightName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindLight_b__0(::RPG::Client::LightControlData* light)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LightControlData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTBEHAVIOREDITORMANAGER___C__DISPLAYCLASS16_0__FINDLIGHT_B__0_OFFSET))(this, light);
		}
	};
}
