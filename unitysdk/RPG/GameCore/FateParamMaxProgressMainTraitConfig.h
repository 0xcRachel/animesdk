#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_5_60B557E8E8312300_OFFSET UNITYSDK_OFFSET(0x16A9AA50)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_5_FA0E6E4274994BFB_OFFSET UNITYSDK_OFFSET(0x16A9A8E0)
#define RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMaxProgressMainTraitConfig_TypeDefinitionIndex = 14988;

	class FateParamMaxProgressMainTraitConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FA0E6E4274994BFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_5_FA0E6E4274994BFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_60B557E8E8312300(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMaxProgressMainTraitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMAXPROGRESSMAINTRAITCONFIG_METHOD_5_60B557E8E8312300_OFFSET))(a1, a2);
		}
	};
}
