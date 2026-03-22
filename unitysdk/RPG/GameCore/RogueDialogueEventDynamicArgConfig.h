#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_METHOD_2_694AE8ADE1045F05_OFFSET UNITYSDK_OFFSET(0x16E7A830)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7A870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventDynamicArgConfig_TypeDefinitionIndex = 16097;

	class RogueDialogueEventDynamicArgConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_694AE8ADE1045F05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventDynamicArgConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventDynamicArgConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTDYNAMICARGCONFIG_METHOD_2_694AE8ADE1045F05_OFFSET))(a1, a2);
		}
	};
}
