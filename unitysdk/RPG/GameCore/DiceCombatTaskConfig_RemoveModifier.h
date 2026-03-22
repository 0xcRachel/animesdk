#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_F8D5510034DC751D_OFFSET UNITYSDK_OFFSET(0x16A42F10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_FCB9C4CA8D9ADE54_OFFSET UNITYSDK_OFFSET(0x16A408B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_RemoveModifier_TypeDefinitionIndex = 14503;

	class DiceCombatTaskConfig_RemoveModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8D5510034DC751D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_F8D5510034DC751D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FCB9C4CA8D9ADE54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_REMOVEMODIFIER_METHOD_3_FCB9C4CA8D9ADE54_OFFSET))(a1, a2);
		}
	};
}
