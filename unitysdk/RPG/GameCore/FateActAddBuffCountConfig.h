#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_5_C76C3078AECF3664_OFFSET UNITYSDK_OFFSET(0x16A90B30)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_5_FDFE7C3A3D13D23E_OFFSET UNITYSDK_OFFSET(0x16A90A00)
#define RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddBuffCountConfig_TypeDefinitionIndex = 17246;

	class FateActAddBuffCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FDFE7C3A3D13D23E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_5_FDFE7C3A3D13D23E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C76C3078AECF3664(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDBUFFCOUNTCONFIG_METHOD_5_C76C3078AECF3664_OFFSET))(a1, a2);
		}
	};
}
