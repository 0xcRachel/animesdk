#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_5_CBC88EB2DBE48D88_OFFSET UNITYSDK_OFFSET(0x16DFBD60)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_5_F27A5DEE8AF5B52C_OFFSET UNITYSDK_OFFSET(0x16DFBF20)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFBE60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitByParamConfig_TypeDefinitionIndex = 17639;

	class RogueActGetMagicUnitByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_CBC88EB2DBE48D88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_5_CBC88EB2DBE48D88_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F27A5DEE8AF5B52C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITBYPARAMCONFIG_METHOD_5_F27A5DEE8AF5B52C_OFFSET))(a1, a2);
		}
	};
}
