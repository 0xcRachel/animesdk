#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_3_B0BC42CB1306EDA6_OFFSET UNITYSDK_OFFSET(0x169C3310)
#define RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_3_B2348E67D7028CA4_OFFSET UNITYSDK_OFFSET(0x169C3230)
#define RPG_GAMECORE_CONDLOGICANDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C32C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicAndConfig_TypeDefinitionIndex = 15366;

	class CondLogicAndConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2348E67D7028CA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicAndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicAndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_3_B2348E67D7028CA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B0BC42CB1306EDA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicAndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicAndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICANDCONFIG_METHOD_3_B0BC42CB1306EDA6_OFFSET))(a1, a2);
		}
	};
}
