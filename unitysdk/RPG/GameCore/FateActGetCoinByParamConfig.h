#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_5_0C0CC82061B81F32_OFFSET UNITYSDK_OFFSET(0x16A91E80)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_5_6B55BF8D5BDC45C0_OFFSET UNITYSDK_OFFSET(0x16A91FB0)
#define RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActGetCoinByParamConfig_TypeDefinitionIndex = 17244;

	class FateActGetCoinByParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0C0CC82061B81F32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActGetCoinByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActGetCoinByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_5_0C0CC82061B81F32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6B55BF8D5BDC45C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActGetCoinByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActGetCoinByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTGETCOINBYPARAMCONFIG_METHOD_5_6B55BF8D5BDC45C0_OFFSET))(a1, a2);
		}
	};
}
