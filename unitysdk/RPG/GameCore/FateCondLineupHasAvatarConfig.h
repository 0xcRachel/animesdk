#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_5_3E93115F7536C659_OFFSET UNITYSDK_OFFSET(0x16A94620)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_5_54083CF38BAAF452_OFFSET UNITYSDK_OFFSET(0x16A944B0)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLineupHasAvatarConfig_TypeDefinitionIndex = 17270;

	class FateCondLineupHasAvatarConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_54083CF38BAAF452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_5_54083CF38BAAF452_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_3E93115F7536C659(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_5_3E93115F7536C659_OFFSET))(a1, a2);
		}
	};
}
