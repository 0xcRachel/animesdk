#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_5_78FF1806B3B61C3E_OFFSET UNITYSDK_OFFSET(0x16A9AA60)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_5_AF20C49B1688B85D_OFFSET UNITYSDK_OFFSET(0x16A9ABD0)
#define RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9AB30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamOccupiedBuffSlotNumConfig_TypeDefinitionIndex = 14986;

	class FateParamOccupiedBuffSlotNumConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_78FF1806B3B61C3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_5_78FF1806B3B61C3E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_AF20C49B1688B85D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamOccupiedBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMOCCUPIEDBUFFSLOTNUMCONFIG_METHOD_5_AF20C49B1688B85D_OFFSET))(a1, a2);
		}
	};
}
