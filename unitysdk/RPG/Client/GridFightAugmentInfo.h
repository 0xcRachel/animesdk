#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_0_16E4307DCC419505_595;
class Class_1_C3C5C0E033C47270_7;
class Class_1_C3C5C0E033C47270_8;
class Class_1_E7C4009BCC22497A_31;
class Class_1_E7C4009BCC22497A_40;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightAugmentSelection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET UNITYSDK_OFFSET(0x931E3F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET UNITYSDK_OFFSET(0x931E900)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET UNITYSDK_OFFSET(0x931DE40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x931E110)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET UNITYSDK_OFFSET(0x931DE90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x931E0C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET UNITYSDK_OFFSET(0x931E790)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x931E1A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x931EC40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x931E4D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET UNITYSDK_OFFSET(0x931EFC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET UNITYSDK_OFFSET(0x931F3C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x931F1D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x931F5A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentInfo_TypeDefinitionIndex = 51148;

	class GridFightAugmentInfo : public ::Sofa::Core::ObservableObject
	{
	public:
		::RPG::Client::GridFightAugmentSelection* _Selection; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* _PlayerAugments; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_AugmentOwnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_AUGMENTOWNCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* get_PlayerAugmentsWithoutExtra()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_PLAYERAUGMENTSWITHOUTEXTRA_OFFSET))(this);
		}

		::RPG::Client::GridFightAugmentSelection* get_Selection()
		{
			return ((::RPG::Client::GridFightAugmentSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_SELECTION_OFFSET))(this);
		}

		::RPG::Client::GridFightAugment* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_595* collector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_595*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SETCOLLECTOR_OFFSET))(this, collector);
		}

		::RPG::Client::GridFightAugment* GetAugmentByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::GridFightAugment*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTBYID_OFFSET))(this, ID);
		}

		::System::Void Sync(::Class_1_E7C4009BCC22497A_31* augmentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_OFFSET))(this, augmentInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>* GetAugmentListCanAddDiff()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightAugment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_GETAUGMENTLISTCANADDDIFF_OFFSET))(this);
		}

		::System::Void Sync_1(::Class_1_E7C4009BCC22497A_40* selectionAction, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_40*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_SYNC_1_OFFSET))(this, selectionAction, actionID);
		}

		::System::Void UpdateAdd(::Class_1_C3C5C0E033C47270_7* augmentAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEADD_OFFSET))(this, augmentAdd);
		}

		::System::Void Update(::Class_1_C3C5C0E033C47270_8* augmentUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3C5C0E033C47270_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATE_OFFSET))(this, augmentUpdate);
		}

		::System::Void UpdateRemove(::System::UInt32 removeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_UPDATEREMOVE_OFFSET))(this, removeID);
		}

		::System::Void RemoveAllAugment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTINFO_REMOVEALLAUGMENT_OFFSET))(this);
		}
	};
}
