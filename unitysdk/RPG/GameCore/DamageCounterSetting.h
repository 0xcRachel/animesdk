#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageCounterStageSetting; }

#define RPG_GAMECORE_DAMAGECOUNTERSETTING_METHOD_2_DF8D7C2885C7B27C_OFFSET UNITYSDK_OFFSET(0x169E0180)
#define RPG_GAMECORE_DAMAGECOUNTERSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x169E02A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageCounterSetting_TypeDefinitionIndex = 15446;

	class DamageCounterSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DefaultOffsetY; // 0x10
		::Il2CppArray<::RPG::GameCore::DamageCounterStageSetting*>* StageSettings; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGECOUNTERSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DF8D7C2885C7B27C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DamageCounterSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DamageCounterSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGECOUNTERSETTING_METHOD_2_DF8D7C2885C7B27C_OFFSET))(a1, a2);
		}
	};
}
