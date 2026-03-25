#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7DED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityPropertyChangeReason_TypeDefinitionIndex = 46547;

	class AbilityPropertyChangeReason : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Damage()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13460);
		}
		static ::System::String** StaticGet_LoseHP()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13468);
		}
		static ::System::String** StaticGet_LoseHPByRatio()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13470);
		}
		static ::System::String** StaticGet_SummonInit()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13478);
		}
		static ::System::String** StaticGet_SyncProperty()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AbilityPropertyChangeReason_TypeDefinitionIndex)->GetStaticField(0x13480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABILITYPROPERTYCHANGEREASON__CCTOR_OFFSET))();
		}
	};
}
