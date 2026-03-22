#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_5_98573C6DA48511BC_OFFSET UNITYSDK_OFFSET(0x16A92230)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_5_ED2BD8C129614B56_OFFSET UNITYSDK_OFFSET(0x16A92100)
#define RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A921B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActModifyLevelParamConfig_TypeDefinitionIndex = 17251;

	class FateActModifyLevelParamConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_ED2BD8C129614B56(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyLevelParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyLevelParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_5_ED2BD8C129614B56_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_98573C6DA48511BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActModifyLevelParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActModifyLevelParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTMODIFYLEVELPARAMCONFIG_METHOD_5_98573C6DA48511BC_OFFSET))(a1, a2);
		}
	};
}
