#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_6_37A355FE3EBB8971_OFFSET UNITYSDK_OFFSET(0x16E85AA0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_6_6BE972BA3FBDB3DA_OFFSET UNITYSDK_OFFSET(0x16E63DD0)
#define RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondScepterCountConfig_TypeDefinitionIndex = 17528;

	class RogueMagicCondScepterCountConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_37A355FE3EBB8971(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_6_37A355FE3EBB8971_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_6BE972BA3FBDB3DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDSCEPTERCOUNTCONFIG_METHOD_6_6BE972BA3FBDB3DA_OFFSET))(a1, a2);
		}
	};
}
