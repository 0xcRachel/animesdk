#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_5_0F9C9EA13A7FD5A8_OFFSET UNITYSDK_OFFSET(0x16EB4B60)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_5_1664180725D41243_OFFSET UNITYSDK_OFFSET(0x16EB49F0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicScepterCountConfig_TypeDefinitionIndex = 17696;

	class RogueParamRogueMagicScepterCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1664180725D41243(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_5_1664180725D41243_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0F9C9EA13A7FD5A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_METHOD_5_0F9C9EA13A7FD5A8_OFFSET))(a1, a2);
		}
	};
}
