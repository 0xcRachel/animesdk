#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_5_7677F4F1E405A1DA_OFFSET UNITYSDK_OFFSET(0x16A91D30)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_5_EF65D2586806AC48_OFFSET UNITYSDK_OFFSET(0x16A91C00)
#define RPG_GAMECORE_FATEACTDEBUGLOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A91CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActDebugLogConfig_TypeDefinitionIndex = 17243;

	class FateActDebugLogConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EF65D2586806AC48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActDebugLogConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActDebugLogConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_5_EF65D2586806AC48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7677F4F1E405A1DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActDebugLogConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActDebugLogConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTDEBUGLOGCONFIG_METHOD_5_7677F4F1E405A1DA_OFFSET))(a1, a2);
		}
	};
}
