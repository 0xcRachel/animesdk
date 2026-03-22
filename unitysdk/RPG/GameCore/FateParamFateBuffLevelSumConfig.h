#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_5_E094D896F31FEA70_OFFSET UNITYSDK_OFFSET(0x16A99A20)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_5_EAB4765B49F45FA0_OFFSET UNITYSDK_OFFSET(0x16A99C60)
#define RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A99BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamFateBuffLevelSumConfig_TypeDefinitionIndex = 14995;

	class FateParamFateBuffLevelSumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::UInt32 SubTraitID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E094D896F31FEA70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_5_E094D896F31FEA70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EAB4765B49F45FA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamFateBuffLevelSumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamFateBuffLevelSumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMFATEBUFFLEVELSUMCONFIG_METHOD_5_EAB4765B49F45FA0_OFFSET))(a1, a2);
		}
	};
}
