#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_3_9A9268029B4EDB6A_OFFSET UNITYSDK_OFFSET(0x1677A610)
#define RPG_GAMECORE_ACTIONNONECONFIG_METHOD_3_CDCDB2DB647FEF98_OFFSET UNITYSDK_OFFSET(0x1677A6F0)
#define RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677A6D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionNoneConfig_TypeDefinitionIndex = 15358;

	class ActionNoneConfig : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9A9268029B4EDB6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_3_9A9268029B4EDB6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDCDB2DB647FEF98(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActionNoneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActionNoneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONNONECONFIG_METHOD_3_CDCDB2DB647FEF98_OFFSET))(a1, a2);
		}
	};
}
