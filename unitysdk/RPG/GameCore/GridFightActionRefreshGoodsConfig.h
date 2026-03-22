#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_5_0F93C1B9EB48FEBA_OFFSET UNITYSDK_OFFSET(0x16B18BF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_5_D806639ACF688668_OFFSET UNITYSDK_OFFSET(0x16B18340)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B182C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshGoodsConfig_TypeDefinitionIndex = 17325;

	class GridFightActionRefreshGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0F93C1B9EB48FEBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_5_0F93C1B9EB48FEBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D806639ACF688668(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_METHOD_5_D806639ACF688668_OFFSET))(a1, a2);
		}
	};
}
