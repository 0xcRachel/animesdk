#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_5_1DBF78CEE5C61AEB_OFFSET UNITYSDK_OFFSET(0x16EB5470)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_5_8B60069A32B6C6B0_OFFSET UNITYSDK_OFFSET(0x16EB55E0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournPreviousRoomTypeConfig_TypeDefinitionIndex = 17675;

	class RogueParamRogueTournPreviousRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1DBF78CEE5C61AEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_5_1DBF78CEE5C61AEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8B60069A32B6C6B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNPREVIOUSROOMTYPECONFIG_METHOD_5_8B60069A32B6C6B0_OFFSET))(a1, a2);
		}
	};
}
