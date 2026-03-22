#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_5_1AF6569F23DB6AF2_OFFSET UNITYSDK_OFFSET(0x16E61330)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_5_FE14E0AEF1C8F7E9_OFFSET UNITYSDK_OFFSET(0x16E611C0)
#define RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondBrokenMiracleCountConfig_TypeDefinitionIndex = 17662;

	class RogueCondBrokenMiracleCountConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FE14E0AEF1C8F7E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_5_FE14E0AEF1C8F7E9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1AF6569F23DB6AF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondBrokenMiracleCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDBROKENMIRACLECOUNTCONFIG_METHOD_5_1AF6569F23DB6AF2_OFFSET))(a1, a2);
		}
	};
}
