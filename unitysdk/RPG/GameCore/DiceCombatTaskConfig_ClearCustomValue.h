#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_078B75FC20C65B02_OFFSET UNITYSDK_OFFSET(0x16A42840)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_4F672748709D1DAD_OFFSET UNITYSDK_OFFSET(0x16A3F760)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3F740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ClearCustomValue_TypeDefinitionIndex = 14505;

	class DiceCombatTaskConfig_ClearCustomValue : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_078B75FC20C65B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_078B75FC20C65B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4F672748709D1DAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_CLEARCUSTOMVALUE_METHOD_3_4F672748709D1DAD_OFFSET))(a1, a2);
		}
	};
}
