#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_4_33135E13D172DEB9_OFFSET UNITYSDK_OFFSET(0x17102660)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_4_CFA6EA073C41E8E0_OFFSET UNITYSDK_OFFSET(0x17102590)
#define RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17102610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondCardIdxBetweenConfig_TypeDefinitionIndex = 16226;

	class TrainPartyCondCardIdxBetweenConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CFA6EA073C41E8E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_4_CFA6EA073C41E8E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_33135E13D172DEB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondCardIdxBetweenConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDCARDIDXBETWEENCONFIG_METHOD_4_33135E13D172DEB9_OFFSET))(a1, a2);
		}
	};
}
