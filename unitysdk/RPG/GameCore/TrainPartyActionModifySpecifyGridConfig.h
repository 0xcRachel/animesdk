#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_4_6711008210D8BF2D_OFFSET UNITYSDK_OFFSET(0x17100380)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_4_8B10B3C6B21BBE3D_OFFSET UNITYSDK_OFFSET(0x17100510)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17100360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifySpecifyGridConfig_TypeDefinitionIndex = 16219;

	class TrainPartyActionModifySpecifyGridConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8B10B3C6B21BBE3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_4_8B10B3C6B21BBE3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6711008210D8BF2D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifySpecifyGridConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYSPECIFYGRIDCONFIG_METHOD_4_6711008210D8BF2D_OFFSET))(a1, a2);
		}
	};
}
