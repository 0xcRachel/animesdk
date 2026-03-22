#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_5_CA4B60D02C2B8914_OFFSET UNITYSDK_OFFSET(0x16A9A5E0)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_5_F08D022810022927_OFFSET UNITYSDK_OFFSET(0x16A9A750)
#define RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9A6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamMasterCountConfig_TypeDefinitionIndex = 14990;

	class FateParamMasterCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CA4B60D02C2B8914(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_5_CA4B60D02C2B8914_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F08D022810022927(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamMasterCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamMasterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMMASTERCOUNTCONFIG_METHOD_5_F08D022810022927_OFFSET))(a1, a2);
		}
	};
}
