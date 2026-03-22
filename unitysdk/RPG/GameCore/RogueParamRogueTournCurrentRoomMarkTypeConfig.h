#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_5_88EDA117AB8C9278_OFFSET UNITYSDK_OFFSET(0x16EB4E70)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_5_9CEE54767A7D6343_OFFSET UNITYSDK_OFFSET(0x16EB4FE0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomMarkTypeConfig_TypeDefinitionIndex = 17676;

	class RogueParamRogueTournCurrentRoomMarkTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_88EDA117AB8C9278(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_5_88EDA117AB8C9278_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9CEE54767A7D6343(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomMarkTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMMARKTYPECONFIG_METHOD_5_9CEE54767A7D6343_OFFSET))(a1, a2);
		}
	};
}
