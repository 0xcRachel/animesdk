#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_FA4F4A67B1C04320_373;
class Class_1_FA4F4A67B1C04320_384;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x9347AE0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x9347B00)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET UNITYSDK_OFFSET(0x9347CF0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET UNITYSDK_OFFSET(0x9347D40)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET UNITYSDK_OFFSET(0x9347C30)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x9347AF0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET UNITYSDK_OFFSET(0x9347B10)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x9347BC0)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x9347B20)
#define RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9347F00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEliteBranchSelectAction_TypeDefinitionIndex = 51684;

	class GridFightEliteBranchSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OptionIDList; // 0x18
		::System::UInt32 _RefreshTimes_k__BackingField; // 0x20
		::System::UInt32 _MaxRefreshTimes_k__BackingField; // 0x24
		::System::UInt32 PendingOptionPos; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_MAXREFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_MAXREFRESHTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RefreshTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_GET_REFRESHTIMES_OFFSET))(this);
		}

		::System::Void set_RefreshTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SET_REFRESHTIMES_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_FA4F4A67B1C04320_373* info, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_373*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNC_OFFSET))(this, info, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_384* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void SelectBranch(::System::UInt32 optionPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_SELECTBRANCH_OFFSET))(this, optionPos);
		}

		::System::Void PendingBranch(::System::UInt32 optionPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_PENDINGBRANCH_OFFSET))(this, optionPos);
		}

		::System::Void RefreshBranch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTELITEBRANCHSELECTACTION_REFRESHBRANCH_OFFSET))(this);
		}
	};
}
