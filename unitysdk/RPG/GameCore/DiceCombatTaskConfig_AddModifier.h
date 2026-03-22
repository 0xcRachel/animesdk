#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_3264CD600A369702_OFFSET UNITYSDK_OFFSET(0x16A42170)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_E6489866D2DA2FD8_OFFSET UNITYSDK_OFFSET(0x16A3E990)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3E8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AddModifier_TypeDefinitionIndex = 14502;

	class DiceCombatTaskConfig_AddModifier : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::UInt32 ModifierID; // 0x14
		::RPG::GameCore::DynamicFloat* LifeTime; // 0x18
		::RPG::GameCore::DynamicFloat* Stack; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3264CD600A369702(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_3264CD600A369702_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E6489866D2DA2FD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ADDMODIFIER_METHOD_3_E6489866D2DA2FD8_OFFSET))(a1, a2);
		}
	};
}
