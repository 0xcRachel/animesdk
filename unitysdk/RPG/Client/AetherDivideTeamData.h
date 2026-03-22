#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_735612C94F558EAE_4;
namespace RPG::Client { class AetherDivideLineUpData; }
namespace RPG::Client { class AetherDivideTrainerData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_AETHERDIVIDETEAMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C33570)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GETALLLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8C36D40)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GETLINEUPDATABYSLOT_OFFSET UNITYSDK_OFFSET(0x8C36C90)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_AETHERDIVIDETRAINERDATA_OFFSET UNITYSDK_OFFSET(0x8C36EC0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8C36D90)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURSLOT_OFFSET UNITYSDK_OFFSET(0x8C36D80)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_MAXELITESELECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x8C36E00)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SETCURSLOT_OFFSET UNITYSDK_OFFSET(0x8C368D0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SET_CURSLOT_OFFSET UNITYSDK_OFFSET(0x8C36BC0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCALL_OFFSET UNITYSDK_OFFSET(0x8C350E0)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0x8C36780)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C32970)
#define RPG_CLIENT_AETHERDIVIDETEAMDATA__ISVALIDSLOT_OFFSET UNITYSDK_OFFSET(0x8C36C40)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideTeamData_TypeDefinitionIndex = 49413;

	class AetherDivideTeamData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MAX_SLOT_COUNT = 0x6; // 0x0
		::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>* _AllLineUpDatas; // 0x10
		::System::UInt32 _CurSlot; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA__CTOR_OFFSET))(this);
		}

		::System::Void SyncAll(::System::Collections::Generic::IList_1<::Class_1_735612C94F558EAE_4*>* serverLineUpList, ::System::UInt32 curSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_735612C94F558EAE_4*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCALL_OFFSET))(this, serverLineUpList, curSlot);
		}

		::System::Void SyncLineUp(::Class_1_735612C94F558EAE_4* serverLineUp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SYNCLINEUP_OFFSET))(this, serverLineUp);
		}

		::System::Void SetCurSlot(::System::UInt32 slot)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SETCURSLOT_OFFSET))(this, slot);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>* GetAllLineUpData()
		{
			return ((::Il2CppArray<::RPG::Client::AetherDivideLineUpData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GETALLLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::AetherDivideLineUpData* GetLineUpdataBySlot(::System::UInt32 slot)
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GETLINEUPDATABYSLOT_OFFSET))(this, slot);
		}

		::System::Boolean _IsValidSlot(::System::UInt32 slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA__ISVALIDSLOT_OFFSET))(this, slot);
		}

		::System::UInt32 get_CurSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURSLOT_OFFSET))(this);
		}

		::System::Void set_CurSlot(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_SET_CURSLOT_OFFSET))(this, value);
		}

		::RPG::Client::AetherDivideLineUpData* get_CurLineUpData()
		{
			return ((::RPG::Client::AetherDivideLineUpData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_CURLINEUPDATA_OFFSET))(this);
		}

		::System::UInt32 get_MaxEliteSelectionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_MAXELITESELECTIONCOUNT_OFFSET))(this);
		}

		::RPG::Client::AetherDivideTrainerData* get_AetherDivideTrainerData()
		{
			return ((::RPG::Client::AetherDivideTrainerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDETEAMDATA_GET_AETHERDIVIDETRAINERDATA_OFFSET))(this);
		}
	};
}
