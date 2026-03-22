#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_3_60A03A5118C8BB88_OFFSET UNITYSDK_OFFSET(0x169C39D0)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_3_A3AEE7A2946E20F1_OFFSET UNITYSDK_OFFSET(0x169C3900)
#define RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C3980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondParamListInclusionConfig_TypeDefinitionIndex = 15370;

	class CondParamListInclusionConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3AEE7A2946E20F1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondParamListInclusionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondParamListInclusionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_3_A3AEE7A2946E20F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_60A03A5118C8BB88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondParamListInclusionConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondParamListInclusionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDPARAMLISTINCLUSIONCONFIG_METHOD_3_60A03A5118C8BB88_OFFSET))(a1, a2);
		}
	};
}
