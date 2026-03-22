#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35B19D34B208E77E_28;
class Class_1_3C58D309C7A040F5_42;
class Class_1_5FEFAED860528596_102;
namespace RPG::Client::TrainParty { class TrainPartyBuildStepInfo; }
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_CLEARSTEPREDDOT_OFFSET UNITYSDK_OFFSET(0xA0D1F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GETSTEPINFOLIST_OFFSET UNITYSDK_OFFSET(0xA0D4040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_GOALID_OFFSET UNITYSDK_OFFSET(0xA0D4220)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA0D4240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_ISANYSTEPCANBUILD_OFFSET UNITYSDK_OFFSET(0xA0D3E80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_REMOVEALLFINISHSTEPINFO_OFFSET UNITYSDK_OFFSET(0xA0D4100)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SET_GOALID_OFFSET UNITYSDK_OFFSET(0xA0D4230)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xA0D2960)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET UNITYSDK_OFFSET(0xA0D3940)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0D1260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA0D2950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__GETSTEPINFOBYSTEPID_OFFSET UNITYSDK_OFFSET(0xA0D3B80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__ONSTEPSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xA0D3D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET UNITYSDK_OFFSET(0xA0D3450)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildGoalData_TypeDefinitionIndex = 59338;

	class TrainPartyBuildGoalData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>* _StepInfoList; // 0x10
		::System::UInt32 _GoalID_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Class_1_3C58D309C7A040F5_42* goalUnlockInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_42*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__CTOR_1_OFFSET))(this, goalUnlockInfo);
		}

		::System::Void Sync(::Class_1_5FEFAED860528596_102* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void UpdateStepList(::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_28*>* stepInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_28*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_UPDATESTEPLIST_OFFSET))(this, stepInfos);
		}

		::System::Boolean IsAnyStepCanBuild(::System::UInt32 coinNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_ISANYSTEPCANBUILD_OFFSET))(this, coinNum);
		}

		::System::Void ClearStepRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_CLEARSTEPREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>* GetStepInfoList(::System::Boolean bSort)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyBuildStepInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GETSTEPINFOLIST_OFFSET))(this, bSort);
		}

		::System::Void RemoveAllFinishStepInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_REMOVEALLFINISHSTEPINFO_OFFSET))(this);
		}

		::System::Void _SyncStepInfos(::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_28*>* serverStepInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_35B19D34B208E77E_28*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__SYNCSTEPINFOS_OFFSET))(this, serverStepInfos);
		}

		::RPG::Client::TrainParty::TrainPartyBuildStepInfo* _GetStepInfoByStepID(::System::UInt32 stepID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildStepInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__GETSTEPINFOBYSTEPID_OFFSET))(this, stepID);
		}

		::System::Void _OnStepStateChanged(::RPG::Client::TrainParty::TrainPartyBuildStepInfo* stepInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildStepInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA__ONSTEPSTATECHANGED_OFFSET))(this, stepInfo);
		}

		::System::UInt32 get_GoalID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_GOALID_OFFSET))(this);
		}

		::System::Void set_GoalID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_SET_GOALID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyAreaGoalConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyAreaGoalConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDGOALDATA_GET_ROW_OFFSET))(this);
		}
	};
}
