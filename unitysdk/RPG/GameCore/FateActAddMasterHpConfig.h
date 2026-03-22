#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_5_4560B70285A8BB6A_OFFSET UNITYSDK_OFFSET(0x16A91340)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_5_E1C27C61FDE993D8_OFFSET UNITYSDK_OFFSET(0x16A91470)
#define RPG_GAMECORE_FATEACTADDMASTERHPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A913F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterHpConfig_TypeDefinitionIndex = 17248;

	class FateActAddMasterHpConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_4560B70285A8BB6A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterHpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterHpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_5_4560B70285A8BB6A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E1C27C61FDE993D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterHpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterHpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERHPCONFIG_METHOD_5_E1C27C61FDE993D8_OFFSET))(a1, a2);
		}
	};
}
