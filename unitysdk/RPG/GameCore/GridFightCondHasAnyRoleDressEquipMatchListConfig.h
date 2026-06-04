#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_2BFD07B4190D7198_OFFSET UNITYSDK_OFFSET(0x1AC7F280)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_A37234E431800F3C_OFFSET UNITYSDK_OFFSET(0x1AC7F440)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC7F380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondHasAnyRoleDressEquipMatchListConfig_TypeDefinitionIndex = 18336;

	class GridFightCondHasAnyRoleDressEquipMatchListConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2BFD07B4190D7198(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_2BFD07B4190D7198_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A37234E431800F3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_6_A37234E431800F3C_OFFSET))(a1, a2);
		}
	};
}
