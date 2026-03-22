#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_4_7AC3866FC21257C6_OFFSET UNITYSDK_OFFSET(0x170FF580)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_4_7D27596314E8AD8D_OFFSET UNITYSDK_OFFSET(0x170FF430)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddBuildCoinConfig_TypeDefinitionIndex = 16211;

	class TrainPartyActionAddBuildCoinConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7D27596314E8AD8D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_4_7D27596314E8AD8D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7AC3866FC21257C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINCONFIG_METHOD_4_7AC3866FC21257C6_OFFSET))(a1, a2);
		}
	};
}
