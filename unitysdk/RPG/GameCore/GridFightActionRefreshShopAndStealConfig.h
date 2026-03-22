#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_5_BF05D793EC917014_OFFSET UNITYSDK_OFFSET(0x16B183D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_5_C5B533EF7EC63B6E_OFFSET UNITYSDK_OFFSET(0x16B18CA0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshShopAndStealConfig_TypeDefinitionIndex = 17324;

	class GridFightActionRefreshShopAndStealConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C5B533EF7EC63B6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_5_C5B533EF7EC63B6E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BF05D793EC917014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_METHOD_5_BF05D793EC917014_OFFSET))(a1, a2);
		}
	};
}
