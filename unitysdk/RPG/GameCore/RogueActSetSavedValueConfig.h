#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_5_12CFD1609A8EED01_OFFSET UNITYSDK_OFFSET(0x16E01620)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_5_18876F40724FD795_OFFSET UNITYSDK_OFFSET(0x16E01460)
#define RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E01560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetSavedValueConfig_TypeDefinitionIndex = 17656;

	class RogueActSetSavedValueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_18876F40724FD795(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_5_18876F40724FD795_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_12CFD1609A8EED01(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActSetSavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActSetSavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETSAVEDVALUECONFIG_METHOD_5_12CFD1609A8EED01_OFFSET))(a1, a2);
		}
	};
}
