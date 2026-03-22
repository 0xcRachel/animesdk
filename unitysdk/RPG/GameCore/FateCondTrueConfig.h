#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_5_78F111EEA2524A55_OFFSET UNITYSDK_OFFSET(0x16A94920)
#define RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_5_F5A380892CF3E256_OFFSET UNITYSDK_OFFSET(0x16A947B0)
#define RPG_GAMECORE_FATECONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondTrueConfig_TypeDefinitionIndex = 17268;

	class FateCondTrueConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F5A380892CF3E256(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_5_F5A380892CF3E256_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_78F111EEA2524A55(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDTRUECONFIG_METHOD_5_78F111EEA2524A55_OFFSET))(a1, a2);
		}
	};
}
