#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_4_91D87613EF8F1A2B_OFFSET UNITYSDK_OFFSET(0x17102870)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_4_D4E2CAB4421D75D2_OFFSET UNITYSDK_OFFSET(0x171027A0)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17102820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondGridIdxBetweenConfig_TypeDefinitionIndex = 16225;

	class TrainPartyCondGridIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D4E2CAB4421D75D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_4_D4E2CAB4421D75D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_91D87613EF8F1A2B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXBETWEENCONFIG_METHOD_4_91D87613EF8F1A2B_OFFSET))(a1, a2);
		}
	};
}
