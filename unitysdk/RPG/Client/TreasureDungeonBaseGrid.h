#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_1005;
class Class_1_F3CA30716D4FAF92_18;
namespace RPG::Client { class TreasureDungeonGridBuff; }
namespace RPG::GameCore { class TreasureDungeonGridConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET UNITYSDK_OFFSET(0x16842D80)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET UNITYSDK_OFFSET(0x168424D0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0x16843020)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDBUFFS_OFFSET UNITYSDK_OFFSET(0x16843100)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0x16842F90)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDPARAM_OFFSET UNITYSDK_OFFSET(0x16842FB0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0x16842E20)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_HASTUTORIAL_OFFSET UNITYSDK_OFFSET(0x16843190)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x16843080)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16843000)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0x16842FC0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x16842FE0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ROW_OFFSET UNITYSDK_OFFSET(0x16842F20)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_TUTORIALTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0x16843110)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0x16842FA0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x16843010)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0x16842FD0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0x16842FF0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET UNITYSDK_OFFSET(0x16842660)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0x16842620)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET UNITYSDK_OFFSET(0x16842720)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonBaseGrid_TypeDefinitionIndex = 62867;

	class TreasureDungeonBaseGrid : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EMPTYGRIDCONFIGID = 0x0; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>* _GridBuffs; // 0x10
		::RPG::GameCore::TreasureDungeonGridConfigRow* _Row; // 0x18
		::System::UInt32 _GridConfigID; // 0x20
		::System::UInt32 _GridParam; // 0x24
		::System::Boolean _IsFlipped_k__BackingField; // 0x28
		::System::Boolean _CanInteract; // 0x29
		::System::Boolean _IsLocked_k__BackingField; // 0x2A
		::System::Boolean _IsEmpty_k__BackingField; // 0x2B
		::System::UInt32 _GridIndex_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureDungeonBaseGrid* CreateByServerGridData(::Class_1_F3CA30716D4FAF92_18* serverGrid)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET))(serverGrid);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_18* serverGrid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET))(this, serverGrid);
		}

		::System::Boolean CanSync(::Class_1_F3CA30716D4FAF92_18* serverGrid)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET))(this, serverGrid);
		}

		::System::Void _SyncBuff(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1005*>* serverGridBuffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1005*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET))(this, serverGridBuffs);
		}

		::RPG::GameCore::TreasureDungeonGridConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TreasureDungeonGridConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonGridType get_GridType()
		{
			return ((::RPG::GameCore::TreasureDungeonGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDINDEX_OFFSET))(this);
		}

		::System::Void set_GridIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_GRIDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_GridParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDPARAM_OFFSET))(this);
		}

		::System::Boolean get_IsFlipped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISFLIPPED_OFFSET))(this);
		}

		::System::Void set_IsFlipped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISFLIPPED_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISLOCKED_OFFSET))(this);
		}

		::System::Void set_IsLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void set_IsEmpty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISEMPTY_OFFSET))(this, value);
		}

		::System::Boolean get_CanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_CANINTERACT_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ICONPATH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>* get_GridBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDBUFFS_OFFSET))(this);
		}

		::System::String* get_TutorialTriggerKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_TUTORIALTRIGGERKEY_OFFSET))(this);
		}

		::System::Boolean get_HasTutorial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_HASTUTORIAL_OFFSET))(this);
		}
	};
}
