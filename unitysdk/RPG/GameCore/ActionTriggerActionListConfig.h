#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_3_29F3A3EF8630CC24_OFFSET UNITYSDK_OFFSET(0x1677D440)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_3_FAB74FC40A940B90_OFFSET UNITYSDK_OFFSET(0x1677D4D0)
#define RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677D4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionTriggerActionListConfig_TypeDefinitionIndex = 15362;

	class ActionTriggerActionListConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiActionConfigBase*>* ActionList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_29F3A3EF8630CC24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_3_29F3A3EF8630CC24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FAB74FC40A940B90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionTriggerActionListConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionTriggerActionListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONTRIGGERACTIONLISTCONFIG_METHOD_3_FAB74FC40A940B90_OFFSET))(a1, a2);
		}
	};
}
