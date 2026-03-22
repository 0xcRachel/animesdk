#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RaidConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_FINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0xA112680)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_PROGRESSOFTARGETS_OFFSET UNITYSDK_OFFSET(0xA112640)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA112620)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xA112660)
#define RPG_CLIENT_TREASURECHALLENGETARGET_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xA1127D0)
#define RPG_CLIENT_TREASURECHALLENGETARGET_INITTARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xA112910)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SETTARGETSPROGRESS_OFFSET UNITYSDK_OFFSET(0xA112A20)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_PROGRESSOFTARGETS_OFFSET UNITYSDK_OFFSET(0xA112650)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA112630)
#define RPG_CLIENT_TREASURECHALLENGETARGET_SET_TARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xA112670)
#define RPG_CLIENT_TREASURECHALLENGETARGET_TRYSETTARGETSTATUS_OFFSET UNITYSDK_OFFSET(0xA112B70)
#define RPG_CLIENT_TREASURECHALLENGETARGET_TRYUPDATETARGETPROGRESS_OFFSET UNITYSDK_OFFSET(0xA112AA0)
#define RPG_CLIENT_TREASURECHALLENGETARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA112830)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeTarget_TypeDefinitionIndex = 53195;

	class TreasureChallengeTarget : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* _TargetStatus_k__BackingField; // 0x10
		::RPG::GameCore::RaidConfigRow* _Row_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ProgressOfTargets_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::RaidConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET__CTOR_OFFSET))(this, row);
		}

		::RPG::GameCore::RaidConfigRow* get_Row()
		{
			return ((::RPG::GameCore::RaidConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::RaidConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RaidConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_ROW_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_ProgressOfTargets()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_PROGRESSOFTARGETS_OFFSET))(this);
		}

		::System::Void set_ProgressOfTargets(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_PROGRESSOFTARGETS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* get_TargetStatus()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_TARGETSTATUS_OFFSET))(this);
		}

		::System::Void set_TargetStatus(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SET_TARGETSTATUS_OFFSET))(this, value);
		}

		::System::Int32 get_FinishedCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_FINISHEDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void SetTargetsProgress(::System::UInt32 targetID, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_SETTARGETSPROGRESS_OFFSET))(this, targetID, progress);
		}

		::System::Void TrySetTargetStatus(::System::UInt32 targetID, ::RPG::Client::TreasureChallengeTargetStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_TRYSETTARGETSTATUS_OFFSET))(this, targetID, status);
		}

		::System::Void TryUpdateTargetProgress(::System::UInt32 targetID, ::System::UInt32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_TRYUPDATETARGETPROGRESS_OFFSET))(this, targetID, progress);
		}

		::System::Void InitTargetStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGETARGET_INITTARGETSTATUS_OFFSET))(this);
		}
	};
}
