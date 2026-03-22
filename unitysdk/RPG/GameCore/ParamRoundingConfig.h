#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"
#include "unitysdk/RPG/GameCore/ParamRoundingType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_3_6FDB7310593A8BB6_OFFSET UNITYSDK_OFFSET(0x16D16990)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_3_DD714B9F989275A7_OFFSET UNITYSDK_OFFSET(0x16D168B0)
#define RPG_GAMECORE_PARAMROUNDINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16D16940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParamRoundingConfig_TypeDefinitionIndex = 15379;

	class ParamRoundingConfig : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::RPG::GameCore::ParamRoundingType RoundingType; // 0x10
		::RPG::GameCore::MiParameterConfigBase* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DD714B9F989275A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamRoundingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamRoundingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_3_DD714B9F989275A7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6FDB7310593A8BB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ParamRoundingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ParamRoundingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARAMROUNDINGCONFIG_METHOD_3_6FDB7310593A8BB6_OFFSET))(a1, a2);
		}
	};
}
