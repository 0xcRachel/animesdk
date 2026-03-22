#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_5_2CF590D64336CCC6_OFFSET UNITYSDK_OFFSET(0x16A9A8D0)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_5_B5E0B462D0773D35_OFFSET UNITYSDK_OFFSET(0x16A9A760)
#define RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterMaxHpConfig_TypeDefinitionIndex = 14987;

	class FateParamMasterMaxHpConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B5E0B462D0773D35(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_5_B5E0B462D0773D35_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2CF590D64336CCC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterMaxHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterMaxHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERMAXHPCONFIG_METHOD_5_2CF590D64336CCC6_OFFSET))(a1, a2);
		}
	};
}
