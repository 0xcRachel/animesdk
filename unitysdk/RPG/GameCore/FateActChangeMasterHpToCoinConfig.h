#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_5_DCC9E184B453D019_OFFSET UNITYSDK_OFFSET(0x16A91AC0)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_5_FA51DC0838E37E7B_OFFSET UNITYSDK_OFFSET(0x16A91BF0)
#define RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActChangeMasterHpToCoinConfig_TypeDefinitionIndex = 17247;

	class FateActChangeMasterHpToCoinConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DCC9E184B453D019(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_5_DCC9E184B453D019_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_FA51DC0838E37E7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActChangeMasterHpToCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTCHANGEMASTERHPTOCOINCONFIG_METHOD_5_FA51DC0838E37E7B_OFFSET))(a1, a2);
		}
	};
}
