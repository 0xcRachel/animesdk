#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_5_1688CAE7EB5D6982_OFFSET UNITYSDK_OFFSET(0x16EB58E0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_5_930BFFB7BC295CF9_OFFSET UNITYSDK_OFFSET(0x16EB5770)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB5840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournTitanFloorTypeConfig_TypeDefinitionIndex = 17701;

	class RogueParamRogueTournTitanFloorTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_930BFFB7BC295CF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_5_930BFFB7BC295CF9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1688CAE7EB5D6982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_METHOD_5_1688CAE7EB5D6982_OFFSET))(a1, a2);
		}
	};
}
