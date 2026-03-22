#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_5_B3497EFCDE72ABED_OFFSET UNITYSDK_OFFSET(0x16A920F0)
#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_5_CF8766F4FC5F9D17_OFFSET UNITYSDK_OFFSET(0x16A91FC0)
#define RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A92070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActModifyContentParamConfig_TypeDefinitionIndex = 17250;

	class FateActModifyContentParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CF8766F4FC5F9D17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_5_CF8766F4FC5F9D17_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_B3497EFCDE72ABED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYCONTENTPARAMCONFIG_METHOD_5_B3497EFCDE72ABED_OFFSET))(a1, a2);
		}
	};
}
