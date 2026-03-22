#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_5_A633E5FE076285E8_OFFSET UNITYSDK_OFFSET(0x16EB46F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_5_C34BFA3748983133_OFFSET UNITYSDK_OFFSET(0x16EB4860)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB47C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicPreviousRoomTypeConfig_TypeDefinitionIndex = 17693;

	class RogueParamRogueMagicPreviousRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_A633E5FE076285E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_5_A633E5FE076285E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C34BFA3748983133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicPreviousRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICPREVIOUSROOMTYPECONFIG_METHOD_5_C34BFA3748983133_OFFSET))(a1, a2);
		}
	};
}
