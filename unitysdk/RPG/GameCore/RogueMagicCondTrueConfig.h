#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_6_7D349F7807E84C93_OFFSET UNITYSDK_OFFSET(0x16E63FE0)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_6_B4E0BA30A42C4E48_OFFSET UNITYSDK_OFFSET(0x16E85D10)
#define RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E63F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicCondTrueConfig_TypeDefinitionIndex = 17532;

	class RogueMagicCondTrueConfig : public ::RPG::GameCore::RogueMagicConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B4E0BA30A42C4E48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_6_B4E0BA30A42C4E48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7D349F7807E84C93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueMagicCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICCONDTRUECONFIG_METHOD_6_7D349F7807E84C93_OFFSET))(a1, a2);
		}
	};
}
