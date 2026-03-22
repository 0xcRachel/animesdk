#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_5_75CE8018340F3B6B_OFFSET UNITYSDK_OFFSET(0x16A94630)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_5_E36F0DE380FFE730_OFFSET UNITYSDK_OFFSET(0x16A947A0)
#define RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondMasterBattleResultConfig_TypeDefinitionIndex = 17272;

	class FateCondMasterBattleResultConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_75CE8018340F3B6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondMasterBattleResultConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_5_75CE8018340F3B6B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E36F0DE380FFE730(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondMasterBattleResultConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondMasterBattleResultConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDMASTERBATTLERESULTCONFIG_METHOD_5_E36F0DE380FFE730_OFFSET))(a1, a2);
		}
	};
}
