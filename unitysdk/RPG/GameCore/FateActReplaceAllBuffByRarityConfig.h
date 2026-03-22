#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_5_50D7974E2EC6D4FD_OFFSET UNITYSDK_OFFSET(0x16A925F0)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_5_C5D76ABF01B9B1E7_OFFSET UNITYSDK_OFFSET(0x16A924C0)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceAllBuffByRarityConfig_TypeDefinitionIndex = 17264;

	class FateActReplaceAllBuffByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C5D76ABF01B9B1E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_5_C5D76ABF01B9B1E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_50D7974E2EC6D4FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_METHOD_5_50D7974E2EC6D4FD_OFFSET))(a1, a2);
		}
	};
}
