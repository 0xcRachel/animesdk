#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_5_11B82737E8EE4B08_OFFSET UNITYSDK_OFFSET(0x16E616D0)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_5_353A875D9B09CD23_OFFSET UNITYSDK_OFFSET(0x16E61560)
#define RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondChessLayerConfig_TypeDefinitionIndex = 17669;

	class RogueCondChessLayerConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_353A875D9B09CD23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondChessLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondChessLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_5_353A875D9B09CD23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_11B82737E8EE4B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondChessLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondChessLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDCHESSLAYERCONFIG_METHOD_5_11B82737E8EE4B08_OFFSET))(a1, a2);
		}
	};
}
