#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_5_42B482E05216CA15_OFFSET UNITYSDK_OFFSET(0x16EB4FF0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_5_4FDD81703B202FA6_OFFSET UNITYSDK_OFFSET(0x16EB5160)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB50C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomTypeConfig_TypeDefinitionIndex = 17674;

	class RogueParamRogueTournCurrentRoomTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_42B482E05216CA15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_5_42B482E05216CA15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_4FDD81703B202FA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMTYPECONFIG_METHOD_5_4FDD81703B202FA6_OFFSET))(a1, a2);
		}
	};
}
