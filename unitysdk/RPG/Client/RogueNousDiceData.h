#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_105C447813563BDD;
class Class_1_69F06BA11FF28429_1;
class Class_1_FA4F4A67B1C04320_177;
namespace RPG::Client { class RogueNousDiceBranchDataItem; }
namespace RPG::Client { class RogueNousDiceSurfaceDataItem; }
namespace RPG::GameCore { class RogueNousDiceBranchTagRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E36980)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET UNITYSDK_OFFSET(0x9E37940)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET UNITYSDK_OFFSET(0x9E37830)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET UNITYSDK_OFFSET(0x9E37F70)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET UNITYSDK_OFFSET(0x9E37C80)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET UNITYSDK_OFFSET(0x9E376B0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET UNITYSDK_OFFSET(0x9E37BC0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET UNITYSDK_OFFSET(0x9E379F0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET UNITYSDK_OFFSET(0x9E38010)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET UNITYSDK_OFFSET(0x9E38160)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0x9E38180)
#define RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET UNITYSDK_OFFSET(0x9E38170)
#define RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9E365B0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET UNITYSDK_OFFSET(0x9E38190)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET UNITYSDK_OFFSET(0x9E375C0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E37AB0)
#define RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E36E60)
#define RPG_CLIENT_ROGUENOUSDICEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E381A0)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET UNITYSDK_OFFSET(0x9E367D0)
#define RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET UNITYSDK_OFFSET(0x9E36600)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousDiceData_TypeDefinitionIndex = 53330;

	class RogueNousDiceData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _SurfaceDict; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* _ItemIDToSurfaceDict_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* _BranchDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_105C447813563BDD* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_105C447813563BDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void SyncSingleBranch(::Class_1_69F06BA11FF28429_1* branchInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69F06BA11FF28429_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSINGLEBRANCH_OFFSET))(this, branchInfo);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>* GetRogueNousDiceBranchTags()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueNousDiceBranchTagRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETROGUENOUSDICEBRANCHTAGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchesByGenre(::RPG::GameCore::RogueNousDiceBranchTagRow* row)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueNousDiceBranchTagRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHESBYGENRE_OFFSET))(this, row);
		}

		::RPG::Client::RogueNousDiceBranchDataItem* GetBranchByID(::System::UInt32 branchID)
		{
			return ((::RPG::Client::RogueNousDiceBranchDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHBYID_OFFSET))(this, branchID);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataItem(::System::UInt32 surfaceID)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATAITEM_OFFSET))(this, surfaceID);
		}

		::System::Void SyncSurfaceUnlocked(::Class_1_FA4F4A67B1C04320_177* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_177*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SYNCSURFACEUNLOCKED_OFFSET))(this, ntf);
		}

		::RPG::Client::RogueNousDiceSurfaceDataItem* GetSurfaceDataByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::RogueNousDiceSurfaceDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACEDATABYITEMID_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetCanEquippedSurfacesByBranch(::System::UInt32 branchID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETCANEQUIPPEDSURFACESBYBRANCH_OFFSET))(this, branchID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>* GetBranchList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETBRANCHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>* GetSurfaceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GETSURFACELIST_OFFSET))(this);
		}

		::System::Void _InitRogueNousDiceSurfaces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSDICESURFACES_OFFSET))(this);
		}

		::System::Void _InitRogueNousBranches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA__INITROGUENOUSBRANCHES_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>* get_BranchDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceBranchDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_BRANCHDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_SurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_SURFACEDICT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* get_ItemIDToSurfaceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_GET_ITEMIDTOSURFACEDICT_OFFSET))(this);
		}

		::System::Void set_ItemIDToSurfaceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousDiceSurfaceDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSDICEDATA_SET_ITEMIDTOSURFACEDICT_OFFSET))(this, value);
		}
	};
}
