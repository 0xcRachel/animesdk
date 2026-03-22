#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_5_69A41244B2F650E0_OFFSET UNITYSDK_OFFSET(0x16E61850)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_5_DC8F471880AC6E5B_OFFSET UNITYSDK_OFFSET(0x16E616E0)
#define RPG_GAMECORE_ROGUECONDCURAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E617B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondCurAeonConfig_TypeDefinitionIndex = 17658;

	class RogueCondCurAeonConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DC8F471880AC6E5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondCurAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondCurAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_5_DC8F471880AC6E5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_69A41244B2F650E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondCurAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondCurAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCURAEONCONFIG_METHOD_5_69A41244B2F650E0_OFFSET))(a1, a2);
		}
	};
}
