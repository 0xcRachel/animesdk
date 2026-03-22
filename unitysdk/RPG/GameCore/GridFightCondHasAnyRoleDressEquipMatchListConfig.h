#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_5_5CDC2D396E4889C9_OFFSET UNITYSDK_OFFSET(0x16B1CC30)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_5_6C381DA5C7E50282_OFFSET UNITYSDK_OFFSET(0x16B1CAC0)
#define RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1CB90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondHasAnyRoleDressEquipMatchListConfig_TypeDefinitionIndex = 17346;

	class GridFightCondHasAnyRoleDressEquipMatchListConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6C381DA5C7E50282(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_5_6C381DA5C7E50282_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5CDC2D396E4889C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondHasAnyRoleDressEquipMatchListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDHASANYROLEDRESSEQUIPMATCHLISTCONFIG_METHOD_5_5CDC2D396E4889C9_OFFSET))(a1, a2);
		}
	};
}
