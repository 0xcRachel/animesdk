#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MiniGameHundredFloorWaveConfig; }

#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_METHOD_3_218004AD221F6BED_OFFSET UNITYSDK_OFFSET(0x16CAAB00)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_METHOD_3_42C89B90886C1F68_OFFSET UNITYSDK_OFFSET(0x16CAAA90)
#define RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAAAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameHundredFloorConfig_TypeDefinitionIndex = 16862;

	class MiniGameHundredFloorConfig : public ::RPG::GameCore::BaseScrollGameConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiniGameHundredFloorWaveConfig*>* WaveConfig; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_42C89B90886C1F68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_METHOD_3_42C89B90886C1F68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_218004AD221F6BED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameHundredFloorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameHundredFloorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEHUNDREDFLOORCONFIG_METHOD_3_218004AD221F6BED_OFFSET))(a1, a2);
		}
	};
}
