#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_51;
namespace RPG::Client { class RogueTournGameRoomItem; }

#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E737C0)
#define RPG_CLIENT_ROGUETOURNGAMELAYERITEM___C__DISPLAYCLASS2_0__UPDATELAYERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x9E73A90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLayerItem___c__DisplayClass2_0_TypeDefinitionIndex = 53738;

	class RogueTournGameLayerItem___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Class_1_352A8B3482C80E7D_51* roomProto; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateLayerInfo_b__0(::RPG::Client::RogueTournGameRoomItem* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournGameRoomItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELAYERITEM___C__DISPLAYCLASS2_0__UPDATELAYERINFO_B__0_OFFSET))(this, x);
		}
	};
}
