#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPendingSelectableBaseAction.h"

class Class_1_6E708EAB438EC183_35;
class Class_1_FA4F4A67B1C04320_384;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x93DB2A0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET UNITYSDK_OFFSET(0x93DB630)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET UNITYSDK_OFFSET(0x93DB5C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x93DB4C0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x93DB420)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET UNITYSDK_OFFSET(0x93DB330)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x93DB6D0)
#define RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x93DB6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecommendEquipSelection_TypeDefinitionIndex = 51626;

	class GridFightRecommendEquipSelection : public ::RPG::Client::GridFightPendingSelectableBaseAction
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* Selections; // 0x18
		::System::Int32 PendingSelectID; // 0x20

		::System::Void _ctor(::Class_1_6E708EAB438EC183_35* selection, ::System::UInt32 actionID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_35*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__CTOR_OFFSET))(this, selection, actionID);
		}

		::RPG::Client::GridFightEquipItemData* get_Item(::System::Int32 index)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_GET_ITEM_OFFSET))(this, index);
		}

		::RPG::Client::GridFightEquipItemData* _MakeSelection(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__MAKESELECTION_OFFSET))(this, equipId);
		}

		::System::Void Update(::Class_1_6E708EAB438EC183_35* selection)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_35*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_UPDATE_OFFSET))(this, selection);
		}

		::System::Void SyncHandleRsp(::Class_1_FA4F4A67B1C04320_384* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_384*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SYNCHANDLERSP_OFFSET))(this, rsp);
		}

		::System::Void Select(::System::UInt32 equipID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION_SELECT_OFFSET))(this, equipID);
		}

		::RPG::Client::GridFightEquipItemData* __ctor_b__5_0(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION___CTOR_B__5_0_OFFSET))(this, equipId);
		}

		::RPG::Client::GridFightEquipItemData* _Update_b__6_0(::System::UInt32 equipId)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECOMMENDEQUIPSELECTION__UPDATE_B__6_0_OFFSET))(this, equipId);
		}
	};
}
