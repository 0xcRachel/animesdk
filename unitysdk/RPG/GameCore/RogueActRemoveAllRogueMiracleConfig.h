#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_5_42BE3655C996EFD3_OFFSET UNITYSDK_OFFSET(0x16DFF1E0)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_5_F2A7B7027912F02F_OFFSET UNITYSDK_OFFSET(0x16DFF020)
#define RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFF120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveAllRogueMiracleConfig_TypeDefinitionIndex = 17613;

	class RogueActRemoveAllRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F2A7B7027912F02F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_5_F2A7B7027912F02F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_42BE3655C996EFD3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveAllRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEALLROGUEMIRACLECONFIG_METHOD_5_42BE3655C996EFD3_OFFSET))(a1, a2);
		}
	};
}
