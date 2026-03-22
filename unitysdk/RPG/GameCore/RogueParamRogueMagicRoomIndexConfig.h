#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_5_5199EC76A707B097_OFFSET UNITYSDK_OFFSET(0x16EB4870)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_5_EB4E8D004EB6A034_OFFSET UNITYSDK_OFFSET(0x16EB49E0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicRoomIndexConfig_TypeDefinitionIndex = 17691;

	class RogueParamRogueMagicRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5199EC76A707B097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_5_5199EC76A707B097_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EB4E8D004EB6A034(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_5_EB4E8D004EB6A034_OFFSET))(a1, a2);
		}
	};
}
