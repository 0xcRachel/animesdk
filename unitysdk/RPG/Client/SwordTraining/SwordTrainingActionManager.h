#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2EC37637598BC283.h"
#include "unitysdk/System/Object.h"

class Class_1_E7C4009BCC22497A_78;
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CLEARALLHIGHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0xA515390)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CONFIRMSELECTEDACTIONS_OFFSET UNITYSDK_OFFSET(0xA5155E0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA515140)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATAENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA5154E0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATA_OFFSET UNITYSDK_OFFSET(0xA512E90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA514DD0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xA5151F0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_UPDATEINFOAFTERSERVERCONFIRMSELECTEDACTIONS_OFFSET UNITYSDK_OFFSET(0xA515C30)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA515E60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__INITTRAININGACTIONINFOS_OFFSET UNITYSDK_OFFSET(0xA514E20)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingActionManager_TypeDefinitionIndex = 61609;

	class SwordTrainingActionManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::SwordTraining::SwordTrainingActionData*>* _AllActionInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_E7C4009BCC22497A_78* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void ClearAllHighlightState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CLEARALLHIGHLIGHTSTATE_OFFSET))(this);
		}

		::Struct_2_2EC37637598BC283 GetActionDataEnumerator()
		{
			return ((::Struct_2_2EC37637598BC283(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATAENUMERATOR_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* GetActionData(::System::UInt32 actionID)
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_GETACTIONDATA_OFFSET))(this, actionID);
		}

		::System::Void ConfirmSelectedActions(::RPG::Client::SwordTraining::SwordTrainingActionSelection* selection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_CONFIRMSELECTEDACTIONS_OFFSET))(this, selection);
		}

		::System::Void UpdateInfoAfterServerConfirmSelectedActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER_UPDATEINFOAFTERSERVERCONFIRMSELECTEDACTIONS_OFFSET))(this);
		}

		::System::Void _InitTrainingActionInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGACTIONMANAGER__INITTRAININGACTIONINFOS_OFFSET))(this);
		}
	};
}
