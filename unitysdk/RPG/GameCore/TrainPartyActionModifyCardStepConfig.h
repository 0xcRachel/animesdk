#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_4_5B7CCD47CC8AD8EA_OFFSET UNITYSDK_OFFSET(0x17100450)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_4_F984B0866377E0AA_OFFSET UNITYSDK_OFFSET(0x17100320)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17100300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifyCardStepConfig_TypeDefinitionIndex = 16214;

	class TrainPartyActionModifyCardStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B7CCD47CC8AD8EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_4_5B7CCD47CC8AD8EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F984B0866377E0AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyCardStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYCARDSTEPCONFIG_METHOD_4_F984B0866377E0AA_OFFSET))(a1, a2);
		}
	};
}
