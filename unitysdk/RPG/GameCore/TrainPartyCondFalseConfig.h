#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_4_8539D14B8E50A260_OFFSET UNITYSDK_OFFSET(0x171026C0)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_4_E8A6455823819839_OFFSET UNITYSDK_OFFSET(0x17102790)
#define RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17102740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondFalseConfig_TypeDefinitionIndex = 16223;

	class TrainPartyCondFalseConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8539D14B8E50A260(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_4_8539D14B8E50A260_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E8A6455823819839(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDFALSECONFIG_METHOD_4_E8A6455823819839_OFFSET))(a1, a2);
		}
	};
}
