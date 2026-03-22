#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_5_13E63316EDBAC5F7_OFFSET UNITYSDK_OFFSET(0x16E61CD0)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_5_8A9764951CEEE7A4_OFFSET UNITYSDK_OFFSET(0x16E61B60)
#define RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondItemCountConfig_TypeDefinitionIndex = 17661;

	class RogueCondItemCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8A9764951CEEE7A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondItemCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondItemCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_5_8A9764951CEEE7A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_13E63316EDBAC5F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondItemCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondItemCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDITEMCOUNTCONFIG_METHOD_5_13E63316EDBAC5F7_OFFSET))(a1, a2);
		}
	};
}
