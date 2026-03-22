#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTACTIONCONFIG_METHOD_2_E71FD9C32F37960D_OFFSET UNITYSDK_OFFSET(0x16E7A8D0)
#define RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E7A910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueEventEffectActionConfig_TypeDefinitionIndex = 16094;

	class RogueDialogueEventEffectActionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTACTIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E71FD9C32F37960D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDialogueEventEffectActionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDialogueEventEffectActionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDIALOGUEEVENTEFFECTACTIONCONFIG_METHOD_2_E71FD9C32F37960D_OFFSET))(a1, a2);
		}
	};
}
