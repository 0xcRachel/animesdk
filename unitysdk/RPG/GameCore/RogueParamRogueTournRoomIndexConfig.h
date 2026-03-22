#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_5_1386E6CD0DE86C3E_OFFSET UNITYSDK_OFFSET(0x16EB55F0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_5_49A8936170BB085D_OFFSET UNITYSDK_OFFSET(0x16EB5760)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB56C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomIndexConfig_TypeDefinitionIndex = 17689;

	class RogueParamRogueTournRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1386E6CD0DE86C3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_5_1386E6CD0DE86C3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_49A8936170BB085D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_5_49A8936170BB085D_OFFSET))(a1, a2);
		}
	};
}
