#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_5_53DB8692164DD420_OFFSET UNITYSDK_OFFSET(0x16EB3C60)
#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_5_D45FF08DC660DD9B_OFFSET UNITYSDK_OFFSET(0x16EB3AF0)
#define RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamMagicUnitCountConfig_TypeDefinitionIndex = 17686;

	class RogueParamMagicUnitCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D45FF08DC660DD9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamMagicUnitCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamMagicUnitCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_5_D45FF08DC660DD9B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_53DB8692164DD420(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamMagicUnitCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamMagicUnitCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMMAGICUNITCOUNTCONFIG_METHOD_5_53DB8692164DD420_OFFSET))(a1, a2);
		}
	};
}
