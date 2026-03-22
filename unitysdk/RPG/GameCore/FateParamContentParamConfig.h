#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_5_A77503F14B762C47_OFFSET UNITYSDK_OFFSET(0x16A99940)
#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_5_D69BF4D2309EB5AE_OFFSET UNITYSDK_OFFSET(0x16A997C0)
#define RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A998A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamContentParamConfig_TypeDefinitionIndex = 14991;

	class FateParamContentParamConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::FateContentParamType ParamType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D69BF4D2309EB5AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamContentParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamContentParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_5_D69BF4D2309EB5AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_A77503F14B762C47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamContentParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamContentParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMCONTENTPARAMCONFIG_METHOD_5_A77503F14B762C47_OFFSET))(a1, a2);
		}
	};
}
