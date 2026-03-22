#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_5_255E7F4D79981C1B_OFFSET UNITYSDK_OFFSET(0x16DF8AA0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_5_E5E18D2AD7BCB077_OFFSET UNITYSDK_OFFSET(0x16DF8C60)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueNousValueConfig_TypeDefinitionIndex = 17589;

	class RogueActChangeChessRogueNousValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_255E7F4D79981C1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_5_255E7F4D79981C1B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E5E18D2AD7BCB077(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueNousValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUENOUSVALUECONFIG_METHOD_5_E5E18D2AD7BCB077_OFFSET))(a1, a2);
		}
	};
}
