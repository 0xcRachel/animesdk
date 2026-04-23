#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_4BC858D7C27E10ED_32;
class Class_1_D17272E82AE804C2_423;
namespace RPG::Client { class GridFightPortalData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1810D3B0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1810D3D0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET UNITYSDK_OFFSET(0x1810D8B0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET UNITYSDK_OFFSET(0x1810D6E0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1810D3C0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET UNITYSDK_OFFSET(0x1810D3E0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x1810D690)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET UNITYSDK_OFFSET(0x1810D3F0)
#define RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1810DA70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalSelectAction_TypeDefinitionIndex = 59923;

	class GridFightPortalSelectAction : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* RandomPortalDataList; // 0x18
		::System::UInt32 _MaxRollTimes_k__BackingField; // 0x20
		::System::UInt32 _RollTimes_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MaxRollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_MAXROLLTIMES_OFFSET))(this);
		}

		::System::Void set_MaxRollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_MAXROLLTIMES_OFFSET))(this, value);
		}

		::System::UInt32 get_RollTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_GET_ROLLTIMES_OFFSET))(this);
		}

		::System::Void set_RollTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SET_ROLLTIMES_OFFSET))(this, value);
		}

		::System::Void Sync(::Class_1_4BC858D7C27E10ED_32* info, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_32*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNC_OFFSET))(this, info, actionID);
		}

		::System::Void SyncHandleRsp(::Class_1_D17272E82AE804C2_423* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_423*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void SelectPortalBuff(::System::UInt32 portalId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_SELECTPORTALBUFF_OFFSET))(this, portalId);
		}

		::System::Void Reroll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSELECTACTION_REROLL_OFFSET))(this);
		}
	};
}
