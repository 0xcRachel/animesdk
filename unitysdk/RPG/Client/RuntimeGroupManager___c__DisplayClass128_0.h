#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDistrictDef; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9F49AC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0___REMOVELOCALLEGACYDISTRICT_B__0_OFFSET UNITYSDK_OFFSET(0x9F4CD50)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager___c__DisplayClass128_0_TypeDefinitionIndex = 49272;

	class RuntimeGroupManager___c__DisplayClass128_0 : public ::System::Object
	{
	public:
		::System::UInt32 instanceID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveLocalLegacyDistrict_b__0(::RPG::Client::MapDistrictDef* def)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER___C__DISPLAYCLASS128_0___REMOVELOCALLEGACYDISTRICT_B__0_OFFSET))(this, def);
		}
	};
}
