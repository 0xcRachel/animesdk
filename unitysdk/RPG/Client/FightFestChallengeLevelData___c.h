#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x96C0990)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x96C09D0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET UNITYSDK_OFFSET(0x96C09E0)
#define RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET UNITYSDK_OFFSET(0x96C0A50)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestChallengeLevelData___c_TypeDefinitionIndex = 52090;

	class FightFestChallengeLevelData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FightFestChallengeLevelData___c** StaticGet___9()
		{
			return (::RPG::Client::FightFestChallengeLevelData___c**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0x44B0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0x44B8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FightFestChallengeLevelData___c_TypeDefinitionIndex)->GetStaticField(0x44C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasRewardCanTake_b__27_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_HASREWARDCANTAKE_B__27_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsFinishAllQuest_b__29_0(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTCHALLENGELEVELDATA___C__GET_ISFINISHALLQUEST_B__29_0_OFFSET))(this, x);
		}
	};
}
