#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournGameLayerItem; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E73CE0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELINFO___C__DISPLAYCLASS8_0___GETROGUETOURNGAMELAYERITEM_B__0_OFFSET UNITYSDK_OFFSET(0x9E73D30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelInfo___c__DisplayClass8_0_TypeDefinitionIndex = 53741;

	class RogueTournGameLevelInfo___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::UInt32 LayerIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetRogueTournGameLayerItem_b__0(::RPG::Client::RogueTournGameLayerItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournGameLayerItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELINFO___C__DISPLAYCLASS8_0___GETROGUETOURNGAMELAYERITEM_B__0_OFFSET))(this, x);
		}
	};
}
