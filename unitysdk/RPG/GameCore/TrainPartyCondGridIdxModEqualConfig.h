#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_4_495E73F2510EC615_OFFSET UNITYSDK_OFFSET(0x17102950)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_4_C6585EA4B81CC33C_OFFSET UNITYSDK_OFFSET(0x17102880)
#define RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17102900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondGridIdxModEqualConfig_TypeDefinitionIndex = 16224;

	class TrainPartyCondGridIdxModEqualConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C6585EA4B81CC33C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_4_C6585EA4B81CC33C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_495E73F2510EC615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondGridIdxModEqualConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDGRIDIDXMODEQUALCONFIG_METHOD_4_495E73F2510EC615_OFFSET))(a1, a2);
		}
	};
}
