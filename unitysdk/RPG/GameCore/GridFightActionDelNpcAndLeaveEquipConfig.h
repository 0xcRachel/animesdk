#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_5_46868CB6B83CA295_OFFSET UNITYSDK_OFFSET(0x16B18B40)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_5_5E9F6EA50B63F9DF_OFFSET UNITYSDK_OFFSET(0x16B182B0)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B18230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionDelNpcAndLeaveEquipConfig_TypeDefinitionIndex = 17333;

	class GridFightActionDelNpcAndLeaveEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_46868CB6B83CA295(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_5_46868CB6B83CA295_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_5E9F6EA50B63F9DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_5_5E9F6EA50B63F9DF_OFFSET))(a1, a2);
		}
	};
}
