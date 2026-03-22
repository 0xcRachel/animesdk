#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_99BD961747420BEB_7;
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8E9BF20)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS43_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET UNITYSDK_OFFSET(0x8E9C4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext___c__DisplayClass43_0_TypeDefinitionIndex = 50153;

	class ChallengePeakTeamContext___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakTeamContext* __4__this; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* lineupAvatarIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckHaveEquipmentConflict_b__1(::Class_1_99BD961747420BEB_7* snapshot)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_99BD961747420BEB_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS43_0___CHECKHAVEEQUIPMENTCONFLICT_B__1_OFFSET))(this, snapshot);
		}
	};
}
