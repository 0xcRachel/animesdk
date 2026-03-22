#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_141;
namespace RPG::Client { class BaseChallengeTargetData; }
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client { class ChallengeInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_DEEPCOPYFROM_OFFSET UNITYSDK_OFFSET(0x8E70A20)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATEPROGRESS_OFFSET UNITYSDK_OFFSET(0x8E71650)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATETARGETSTATUS_OFFSET UNITYSDK_OFFSET(0x8E71C80)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E71B20)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E70990)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__DEEPCOPYCHALLENGETARGETDATA_OFFSET UNITYSDK_OFFSET(0x8E72940)
#define RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__UPDATECHALLENGETARGETDATA_OFFSET UNITYSDK_OFFSET(0x8E72AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeInstance_ChallengeProgress_TypeDefinitionIndex = 50062;

	class ChallengeInstance_ChallengeProgress : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeInstance* _ChallengeInstanceRef; // 0x10
		::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_141*>* KillMonsters; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* ChallengeTargetDatas; // 0x20
		::System::UInt32 TurnCost; // 0x28
		::System::UInt32 DeadAvatarNum; // 0x2C
		::System::UInt32 Score; // 0x30

		::System::Void _ctor(::RPG::Client::ChallengeInstance* challengeInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_OFFSET))(this, challengeInstance);
		}

		::System::Void _ctor_1(::RPG::Client::ChallengeData* challengeData, ::RPG::Client::ChallengeInstance* challengeInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeData*, ::RPG::Client::ChallengeInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__CTOR_1_OFFSET))(this, challengeData, challengeInstance);
		}

		::System::Void UpdateProgress(::System::UInt32 turnCost, ::System::UInt32 avatarDeadNum, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_141*>* killMonsters, ::System::UInt32 currentScore)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_141*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATEPROGRESS_OFFSET))(this, turnCost, avatarDeadNum, killMonsters, currentScore);
		}

		::System::Void UpdateTargetStatus(::System::UInt32 targetBitSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_UPDATETARGETSTATUS_OFFSET))(this, targetBitSet);
		}

		::System::Void DeepCopyFrom(::RPG::Client::ChallengeInstance_ChallengeProgress* progress)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeInstance_ChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS_DEEPCOPYFROM_OFFSET))(this, progress);
		}

		::System::Void _DeepCopyChallengeTargetData(::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>* challengeTargetDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__DEEPCOPYCHALLENGETARGETDATA_OFFSET))(this, challengeTargetDatas);
		}

		::System::Void _UpdateChallengeTargetData(::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEINSTANCE_CHALLENGEPROGRESS__UPDATECHALLENGETARGETDATA_OFFSET))(this, isFinish);
		}
	};
}
