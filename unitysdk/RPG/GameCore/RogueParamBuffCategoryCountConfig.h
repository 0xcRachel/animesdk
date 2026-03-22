#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_5_0F29DB9CD1A76196_OFFSET UNITYSDK_OFFSET(0x16EB3660)
#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_5_FD02674EDCBB5705_OFFSET UNITYSDK_OFFSET(0x16EB34F0)
#define RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB35C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamBuffCategoryCountConfig_TypeDefinitionIndex = 17678;

	class RogueParamBuffCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FD02674EDCBB5705(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_5_FD02674EDCBB5705_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0F29DB9CD1A76196(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamBuffCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamBuffCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMBUFFCATEGORYCOUNTCONFIG_METHOD_5_0F29DB9CD1A76196_OFFSET))(a1, a2);
		}
	};
}
