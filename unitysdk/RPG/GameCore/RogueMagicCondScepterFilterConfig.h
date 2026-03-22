#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_6_AC44A538378083BE_OFFSET UNITYSDK_OFFSET(0x16E85C40)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_6_E26651CC9A531FDD_OFFSET UNITYSDK_OFFSET(0x16E63F30)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterFilterConfig_TypeDefinitionIndex = 17529;

	class RogueMagicCondScepterFilterConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AC44A538378083BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_6_AC44A538378083BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E26651CC9A531FDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterFilterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterFilterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERFILTERCONFIG_METHOD_6_E26651CC9A531FDD_OFFSET))(a1, a2);
		}
	};
}
