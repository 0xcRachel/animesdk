#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_5_755D76471CEF9A86_OFFSET UNITYSDK_OFFSET(0x16B18190)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_5_F3BC3A08D9A6F72C_OFFSET UNITYSDK_OFFSET(0x16B189E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionCostAllFreeRefreshConfig_TypeDefinitionIndex = 17339;

	class GridFightActionCostAllFreeRefreshConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F3BC3A08D9A6F72C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_5_F3BC3A08D9A6F72C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_755D76471CEF9A86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionCostAllFreeRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCOSTALLFREEREFRESHCONFIG_METHOD_5_755D76471CEF9A86_OFFSET))(a1, a2);
		}
	};
}
