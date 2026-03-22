#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournGameLayerItem; }

#define RPG_CLIENT_ROGUETOURNGAMEDATA___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E72CB0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA___C__DISPLAYCLASS28_0___GETLAYERROOMROWBYPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x9E72FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameData___c__DisplayClass28_0_TypeDefinitionIndex = 53736;

	class RogueTournGameData___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::UInt32 layerIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetLayerRoomRowByProgress_b__0(::RPG::Client::RogueTournGameLayerItem* layer)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournGameLayerItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA___C__DISPLAYCLASS28_0___GETLAYERROOMROWBYPROGRESS_B__0_OFFSET))(this, layer);
		}
	};
}
