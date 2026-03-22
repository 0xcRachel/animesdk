#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_5_830130F61FEC06B9_OFFSET UNITYSDK_OFFSET(0x16A94110)
#define RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_5_B2C0FF6BCEB51542_OFFSET UNITYSDK_OFFSET(0x16A94280)
#define RPG_GAMECORE_FATECONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A941E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondFalseConfig_TypeDefinitionIndex = 17269;

	class FateCondFalseConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_830130F61FEC06B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_5_830130F61FEC06B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B2C0FF6BCEB51542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDFALSECONFIG_METHOD_5_B2C0FF6BCEB51542_OFFSET))(a1, a2);
		}
	};
}
