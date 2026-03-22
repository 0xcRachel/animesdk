#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_F3CA30716D4FAF92_9;
class Class_1_FA4F4A67B1C04320_934;
namespace RPG::Client { class TreasureDungeonGridBuff; }
namespace RPG::GameCore { class TreasureDungeonGridConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET UNITYSDK_OFFSET(0xA1145F0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET UNITYSDK_OFFSET(0xA113D40)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_CANINTERACT_OFFSET UNITYSDK_OFFSET(0xA114890)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDBUFFS_OFFSET UNITYSDK_OFFSET(0xA114970)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA114800)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDPARAM_OFFSET UNITYSDK_OFFSET(0xA114820)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_GRIDTYPE_OFFSET UNITYSDK_OFFSET(0xA114690)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_HASTUTORIAL_OFFSET UNITYSDK_OFFSET(0xA114A00)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA1148F0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA114870)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0xA114830)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA114850)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA114790)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_GET_TUTORIALTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xA114980)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_GRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA114810)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0xA114880)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISFLIPPED_OFFSET UNITYSDK_OFFSET(0xA114840)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SET_ISLOCKED_OFFSET UNITYSDK_OFFSET(0xA114860)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET UNITYSDK_OFFSET(0xA113ED0)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xA113E90)
#define RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET UNITYSDK_OFFSET(0xA113F90)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonBaseGrid_TypeDefinitionIndex = 54106;

	class TreasureDungeonBaseGrid : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _EMPTYGRIDCONFIGID = 0x0; // 0x0
		::RPG::GameCore::TreasureDungeonGridConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonGridBuff*>* _GridBuffs; // 0x18
		::System::UInt32 _GridParam; // 0x20
		::System::UInt32 _GridIndex_k__BackingField; // 0x24
		::System::Boolean _IsEmpty_k__BackingField; // 0x28
		::System::Boolean _IsLocked_k__BackingField; // 0x29
		::System::Boolean _IsFlipped_k__BackingField; // 0x2A
		::System::Boolean _CanInteract; // 0x2B
		::System::UInt32 _GridConfigID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureDungeonBaseGrid* CreateByServerGridData(::Class_1_F3CA30716D4FAF92_9* serverGrid)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CREATEBYSERVERGRIDDATA_OFFSET))(serverGrid);
		}

		::System::Void Sync(::Class_1_F3CA30716D4FAF92_9* serverGrid)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_SYNC_OFFSET))(this, serverGrid);
		}

		::System::Boolean CanSync(::Class_1_F3CA30716D4FAF92_9* serverGrid)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID_CANSYNC_OFFSET))(this, serverGrid);
		}

		::System::Void _SyncBuff(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_934*>* serverGridBuffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_934*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBASEGRID__SYNCBUFF_OFFSET))(this, serverGridBuffs);
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
