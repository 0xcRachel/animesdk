#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_15.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePassRewardPointData; }
namespace RPG::GameCore { class BattlePassLevelRewardRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91D1DB0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_GETREWARDIDS_OFFSET UNITYSDK_OFFSET(0x91D15F0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_HASAVAILABLE_OFFSET UNITYSDK_OFFSET(0x91D13A0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_TRYGETOPTIONPOINT_OFFSET UNITYSDK_OFFSET(0x91D18A0)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_UPDATEREWARDSTATUS_OFFSET UNITYSDK_OFFSET(0x91D1A10)
#define RPG_CLIENT_BATTLEPASSLEVELREWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91D20E0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePassLevelRewardData_TypeDefinitionIndex = 51042;

	class BattlePassLevelRewardData : public ::System::Object
	{
	public:
		::RPG::Client::BattlePassRewardPointData* FreeRewardPoint; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BattlePassRewardPointData*>* PaidRewardPoints; // 0x18
		::System::Boolean IsSpecial; // 0x20
		::System::UInt32 Level; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAvailable(::System::Boolean ignoreOptionReward)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_HASAVAILABLE_OFFSET))(this, ignoreOptionReward);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRewardIDs(::Enum_3_DB663931210BBC27_15 purchaseType)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Enum_3_DB663931210BBC27_15))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_GETREWARDIDS_OFFSET))(this, purchaseType);
		}

		::System::Boolean TryGetOptionPoint(::RPG::Client::BattlePassRewardPointData*& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BattlePassRewardPointData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_TRYGETOPTIONPOINT_OFFSET))(this, point);
		}

		::System::Void UpdateRewardStatus(::System::Boolean isLevelLocked, ::System::Boolean isPaidLocked, ::System::Boolean isFreeTaken, ::System::Boolean isPaid1Taken, ::System::Boolean isPaid2Taken, ::System::Boolean isPaidSelectTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_UPDATEREWARDSTATUS_OFFSET))(this, isLevelLocked, isPaidLocked, isFreeTaken, isPaid1Taken, isPaid2Taken, isPaidSelectTaken);
		}

		static ::RPG::Client::BattlePassLevelRewardData* Create(::RPG::GameCore::BattlePassLevelRewardRow* row)
		{
			return ((::RPG::Client::BattlePassLevelRewardData*(*)(::RPG::GameCore::BattlePassLevelRewardRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEPASSLEVELREWARDDATA_CREATE_OFFSET))(row);
		}
	};
}
