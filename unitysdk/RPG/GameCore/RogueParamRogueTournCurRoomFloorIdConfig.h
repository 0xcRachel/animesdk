#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_5_7421CC43A6D396FA_OFFSET UNITYSDK_OFFSET(0x16EB4E60)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_5_9F46B079102D5B11_OFFSET UNITYSDK_OFFSET(0x16EB4CF0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurRoomFloorIdConfig_TypeDefinitionIndex = 17700;

	class RogueParamRogueTournCurRoomFloorIdConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_9F46B079102D5B11(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_5_9F46B079102D5B11_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7421CC43A6D396FA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurRoomFloorIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURROOMFLOORIDCONFIG_METHOD_5_7421CC43A6D396FA_OFFSET))(a1, a2);
		}
	};
}
