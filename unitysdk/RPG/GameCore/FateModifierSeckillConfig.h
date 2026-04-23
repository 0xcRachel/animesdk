#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_047A418731E79B64_OFFSET UNITYSDK_OFFSET(0x19478040)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_1EAFCA2C5F19CBDD_OFFSET UNITYSDK_OFFSET(0x194772A0)
#define RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19477250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierSeckillConfig_TypeDefinitionIndex = 18315;

	class FateModifierSeckillConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_047A418731E79B64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSeckillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSeckillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_047A418731E79B64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1EAFCA2C5F19CBDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSeckillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSeckillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSECKILLCONFIG_METHOD_3_1EAFCA2C5F19CBDD_OFFSET))(a1, a2);
		}
	};
}
