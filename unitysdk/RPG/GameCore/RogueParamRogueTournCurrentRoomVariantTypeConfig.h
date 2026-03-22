#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_5_2C4F640324B73A9D_OFFSET UNITYSDK_OFFSET(0x16EB52E0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_5_F7E99F8F6AA73C7E_OFFSET UNITYSDK_OFFSET(0x16EB5170)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournCurrentRoomVariantTypeConfig_TypeDefinitionIndex = 17677;

	class RogueParamRogueTournCurrentRoomVariantTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F7E99F8F6AA73C7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_5_F7E99F8F6AA73C7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2C4F640324B73A9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournCurrentRoomVariantTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNCURRENTROOMVARIANTTYPECONFIG_METHOD_5_2C4F640324B73A9D_OFFSET))(a1, a2);
		}
	};
}
