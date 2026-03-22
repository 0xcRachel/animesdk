#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_5_607D3EF1C3BEE946_OFFSET UNITYSDK_OFFSET(0x16B1CF30)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_5_E968627E50FF59B5_OFFSET UNITYSDK_OFFSET(0x16B1CDC0)
#define RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1CE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsLastBattlePerfectConfig_TypeDefinitionIndex = 17345;

	class GridFightCondIsLastBattlePerfectConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E968627E50FF59B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_5_E968627E50FF59B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_607D3EF1C3BEE946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsLastBattlePerfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISLASTBATTLEPERFECTCONFIG_METHOD_5_607D3EF1C3BEE946_OFFSET))(a1, a2);
		}
	};
}
