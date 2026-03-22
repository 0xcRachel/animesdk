#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_5_AD163C16757720E9_OFFSET UNITYSDK_OFFSET(0x16EB4270)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_5_C9F7B206A78993F2_OFFSET UNITYSDK_OFFSET(0x16EB43E0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicCurrentRoomMarkTypeConfig_TypeDefinitionIndex = 17694;

	class RogueParamRogueMagicCurrentRoomMarkTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AD163C16757720E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_5_AD163C16757720E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C9F7B206A78993F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICCURRENTROOMMARKTYPECONFIG_METHOD_5_C9F7B206A78993F2_OFFSET))(a1, a2);
		}
	};
}
