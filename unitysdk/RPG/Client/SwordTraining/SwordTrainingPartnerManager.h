#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_863;
namespace RPG::Client { class SwordTrainingPartnerData; }
namespace RPG::Client::SwordTraining { class SwordTrainingCandidatePartnerAbilityData; }
namespace RPG::GameCore { class SwordTrainingPartnerAbilityRow; }
namespace RPG::GameCore { class SwordTrainingPartnerRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_CLEARSELECTEDPARTERABILITYDATA_OFFSET UNITYSDK_OFFSET(0x9FF3420)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9FF5170)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETABILITYROW_OFFSET UNITYSDK_OFFSET(0x9FF5C80)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETCANSELECTABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0x9FF5B90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERABILITYIDLIST_OFFSET UNITYSDK_OFFSET(0x9FF3220)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYABILITYID_OFFSET UNITYSDK_OFFSET(0x9FF4B30)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYPARTNERID_OFFSET UNITYSDK_OFFSET(0x9FF5BD0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATALIST_OFFSET UNITYSDK_OFFSET(0x9FF5B10)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETSELECTEDPARTNERABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0x9FF2DE0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CANSELECTABILITYCOUNT_OFFSET UNITYSDK_OFFSET(0x9FF5D20)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURASSISTPARTNERDATA_OFFSET UNITYSDK_OFFSET(0x9FF5FE0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERABILITYID_OFFSET UNITYSDK_OFFSET(0x9FF5E90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERICONPATH_OFFSET UNITYSDK_OFFSET(0x9FF6130)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURSELECTABILITYDATA_OFFSET UNITYSDK_OFFSET(0x9FF5F60)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_NEEDSELECTPARTNERABILITY_OFFSET UNITYSDK_OFFSET(0x9FF6030)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9FF4D90)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATALIST_OFFSET UNITYSDK_OFFSET(0x9FF59A0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATA_OFFSET UNITYSDK_OFFSET(0x9FF5880)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SYNCAVAILABLEABILITYLIST_OFFSET UNITYSDK_OFFSET(0x9FF5250)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CREATEPARNERDATA_OFFSET UNITYSDK_OFFSET(0x9FF50B0)
#define RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FF61D0)

namespace RPG::Client::SwordTraining
{
	inline static constexpr unsigned int SwordTrainingPartnerManager_TypeDefinitionIndex = 59856;

	class SwordTrainingPartnerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>* _AllPartners; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* _SelectedPartnerAbilityDataList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* _AvailablePartnerAbilityList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AbilityToPartnerIDMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAvailableAbilityList(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_863*>* candidateAbilityIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_863*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SYNCAVAILABLEABILITYLIST_OFFSET))(this, candidateAbilityIDList);
		}

		::System::Void SetSelectedParterAbilityData(::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATA_OFFSET))(this, data);
		}

		::System::Void SetSelectedParterAbilityDataList(::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* abilityDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_SETSELECTEDPARTERABILITYDATALIST_OFFSET))(this, abilityDataList);
		}

		::System::Void ClearSelectedParterAbilityData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_CLEARSELECTEDPARTERABILITYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>* GetPartnerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPartnerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* GetCanSelectAbilityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETCANSELECTABILITYDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>* GetSelectedPartnerAbilityDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETSELECTEDPARTNERABILITYDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetPartnerAbilityIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERABILITYIDLIST_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPartnerData* GetPartnerDataByAbilityID(::System::UInt32 abilityID)
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYABILITYID_OFFSET))(this, abilityID);
		}

		::RPG::Client::SwordTrainingPartnerData* GetPartnerDataByPartnerID(::System::UInt32 partnerID)
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETPARTNERDATABYPARTNERID_OFFSET))(this, partnerID);
		}

		::RPG::GameCore::SwordTrainingPartnerAbilityRow* GetAbilityRow(::System::UInt32 abilityID)
		{
			return ((::RPG::GameCore::SwordTrainingPartnerAbilityRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GETABILITYROW_OFFSET))(this, abilityID);
		}

		::System::Void _CreateParnerData(::RPG::GameCore::SwordTrainingPartnerRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwordTrainingPartnerRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER__CREATEPARNERDATA_OFFSET))(this, row);
		}

		::System::UInt32 get_CanSelectAbilityCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CANSELECTABILITYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_CurPartnerAbilityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERABILITYID_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPartnerData* get_CurAssistPartnerData()
		{
			return ((::RPG::Client::SwordTrainingPartnerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURASSISTPARTNERDATA_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData* get_CurSelectAbilityData()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingCandidatePartnerAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURSELECTABILITYDATA_OFFSET))(this);
		}

		::System::Boolean get_NeedSelectPartnerAbility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_NEEDSELECTPARTNERABILITY_OFFSET))(this);
		}

		::System::String* get_CurPartnerIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAINING_SWORDTRAININGPARTNERMANAGER_GET_CURPARTNERICONPATH_OFFSET))(this);
		}
	};
}
