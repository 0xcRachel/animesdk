#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x188E5910)
#define RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x188E5950)
#define RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__GET__RESIDENTREWARDQUESTIDS_B__1_0_OFFSET UNITYSDK_OFFSET(0x188E5960)
#define RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__HASRESIDENTREWARDTOTAKE_B__8_0_OFFSET UNITYSDK_OFFSET(0x188E59C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RewardInfo___c_TypeDefinitionIndex = 61705;

	class MatchThreeV2RewardInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2RewardInfo___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2RewardInfo___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2RewardInfo___c_TypeDefinitionIndex)->GetStaticField(0x52460);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2RewardInfo___c_TypeDefinitionIndex)->GetStaticField(0x52468);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2RewardInfo___c_TypeDefinitionIndex)->GetStaticField(0x52470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get__ResidentRewardQuestIDs_b__1_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__GET__RESIDENTREWARDQUESTIDS_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasResidentRewardToTake_b__8_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2REWARDINFO___C__HASRESIDENTREWARDTOTAKE_B__8_0_OFFSET))(this, a1);
		}
	};
}
