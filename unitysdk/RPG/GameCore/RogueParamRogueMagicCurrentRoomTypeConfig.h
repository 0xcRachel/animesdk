#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_5_DADB3D39AABC99E8_OFFSET UNITYSDK_OFFSET(0x16EB43F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_5_F7F35172EBF24533_OFFSET UNITYSDK_OFFSET(0x16EB4560)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB44C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicCurrentRoomTypeConfig_TypeDefinitionIndex = 17692;

	class RogueParamRogueMagicCurrentRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DADB3D39AABC99E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_5_DADB3D39AABC99E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F7F35172EBF24533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMTYPECONFIG_METHOD_5_F7F35172EBF24533_OFFSET))(a1, a2);
		}
	};
}
