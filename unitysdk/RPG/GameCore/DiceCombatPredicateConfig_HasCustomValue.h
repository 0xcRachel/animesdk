#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_059ED8316DBDC6B0_OFFSET UNITYSDK_OFFSET(0x16A3B2B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_BFB91BB75AD8A911_OFFSET UNITYSDK_OFFSET(0x16A397B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A39790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasCustomValue_TypeDefinitionIndex = 14507;

	class DiceCombatPredicateConfig_HasCustomValue : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget ReadTarget; // 0x20
		::System::String* Name; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_059ED8316DBDC6B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_059ED8316DBDC6B0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFB91BB75AD8A911(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASCUSTOMVALUE_METHOD_4_BFB91BB75AD8A911_OFFSET))(a1, a2);
		}
	};
}
