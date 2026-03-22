#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_3_5F9DCB3D322C11B8_OFFSET UNITYSDK_OFFSET(0x169C36B0)
#define RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_3_6026C887593C3362_OFFSET UNITYSDK_OFFSET(0x169C3790)
#define RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x169C3740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CondLogicOrConfig_TypeDefinitionIndex = 15367;

	class CondLogicOrConfig : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::MiConditionConfigBase*>* ConditionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5F9DCB3D322C11B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_3_5F9DCB3D322C11B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6026C887593C3362(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CondLogicOrConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CondLogicOrConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONDLOGICORCONFIG_METHOD_3_6026C887593C3362_OFFSET))(a1, a2);
		}
	};
}
