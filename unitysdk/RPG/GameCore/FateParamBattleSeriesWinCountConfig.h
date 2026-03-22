#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_5_0D7F2FE286AA3C59_OFFSET UNITYSDK_OFFSET(0x16A99400)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_5_45285115BC144AE2_OFFSET UNITYSDK_OFFSET(0x16A99570)
#define RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A994D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamBattleSeriesWinCountConfig_TypeDefinitionIndex = 14984;

	class FateParamBattleSeriesWinCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_0D7F2FE286AA3C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_5_0D7F2FE286AA3C59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_45285115BC144AE2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamBattleSeriesWinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMBATTLESERIESWINCOUNTCONFIG_METHOD_5_45285115BC144AE2_OFFSET))(a1, a2);
		}
	};
}
