#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_5_6CB3DDEE584A5DCD_OFFSET UNITYSDK_OFFSET(0x16E622D0)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_5_BE1CB7FD0091A9EE_OFFSET UNITYSDK_OFFSET(0x16E62160)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E62230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondTrueConfig_TypeDefinitionIndex = 17664;

	class RogueCondTrueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BE1CB7FD0091A9EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_5_BE1CB7FD0091A9EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6CB3DDEE584A5DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_5_6CB3DDEE584A5DCD_OFFSET))(a1, a2);
		}
	};
}
