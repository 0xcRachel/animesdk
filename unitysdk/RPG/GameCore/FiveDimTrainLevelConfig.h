#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTrainEnergySpeedMapItem; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_METHOD_2_939D0964957793AE_OFFSET UNITYSDK_OFFSET(0x16AC4AF0)
#define RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD8FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTrainLevelConfig_TypeDefinitionIndex = 16630;

	class FiveDimTrainLevelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnergyLevelVarName; // 0x10
		::System::String* DistanceDynamicValueName; // 0x18
		::System::Single MaxEnergy; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*>* SpeedMapping; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_939D0964957793AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTrainLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTrainLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINLEVELCONFIG_METHOD_2_939D0964957793AE_OFFSET))(a1, a2);
		}
	};
}
