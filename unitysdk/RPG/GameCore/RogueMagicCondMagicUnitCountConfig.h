#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_6_4158712AA2CC8713_OFFSET UNITYSDK_OFFSET(0x16E63D20)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_6_79048BE33F1088C8_OFFSET UNITYSDK_OFFSET(0x16E859D0)
#define RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondMagicUnitCountConfig_TypeDefinitionIndex = 17530;

	class RogueMagicCondMagicUnitCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_79048BE33F1088C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_6_79048BE33F1088C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4158712AA2CC8713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDMAGICUNITCOUNTCONFIG_METHOD_6_4158712AA2CC8713_OFFSET))(a1, a2);
		}
	};
}
