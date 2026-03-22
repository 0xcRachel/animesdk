#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_5_9E19164C8E9A071B_OFFSET UNITYSDK_OFFSET(0x16DFC0F0)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_5_D22FBDCF5027F837_OFFSET UNITYSDK_OFFSET(0x16DFBF30)
#define RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetMagicUnitCountByParamConfig_TypeDefinitionIndex = 17640;

	class RogueActGetMagicUnitCountByParamConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D22FBDCF5027F837(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_5_D22FBDCF5027F837_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9E19164C8E9A071B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetMagicUnitCountByParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETMAGICUNITCOUNTBYPARAMCONFIG_METHOD_5_9E19164C8E9A071B_OFFSET))(a1, a2);
		}
	};
}
