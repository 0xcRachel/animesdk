#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_5_77A4E646E86F23A8_OFFSET UNITYSDK_OFFSET(0x16EB40E0)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_5_7E6C5FACD3C36043_OFFSET UNITYSDK_OFFSET(0x16EB3F70)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaIDConfig_TypeDefinitionIndex = 17695;

	class RogueParamRogueAreaIDConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7E6C5FACD3C36043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_5_7E6C5FACD3C36043_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_77A4E646E86F23A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_METHOD_5_77A4E646E86F23A8_OFFSET))(a1, a2);
		}
	};
}
