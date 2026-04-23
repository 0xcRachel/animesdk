#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_717;
class Class_1_F9EFCB63E481ADB7_1;
class Class_1_FE6CD7C4A65B646F_4;
namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177BE5D0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x177BE720)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x177BE640)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x177BE6C0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x177BE920)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x177BE860)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x177BEFE0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x177BEFC0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET UNITYSDK_OFFSET(0x177BE780)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x177BE530)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x177BEA60)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET UNITYSDK_OFFSET(0x177BE9E0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x177BEFF0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET UNITYSDK_OFFSET(0x177BEFD0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET UNITYSDK_OFFSET(0x177BEEF0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x177BEE70)
#define RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x177BEDF0)
#define RPG_CLIENT_GRIDFIGHTITEMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x177BE520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightItemInfo_TypeDefinitionIndex = 59842;

	class GridFightItemInfo : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* _EquipInfo_k__BackingField; // 0x10
		::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_INIT_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETEQUIPSBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GETCONSUMABLEBYID_OFFSET))(this, id);
		}

		::System::Boolean get_HasIdleItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_HASIDLEITEM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::System::Void SetCollector(::Class_0_16E4307DCC419505_717* equipCollector, ::Class_0_16E4307DCC419505_717* consumableCollector)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_717*, ::Class_0_16E4307DCC419505_717*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SETCOLLECTOR_OFFSET))(this, equipCollector, consumableCollector);
		}

		::System::Void OnMembersChangedEventHandler(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_ONMEMBERSCHANGEDEVENTHANDLER_OFFSET))(this, sender, e);
		}

		::System::Void Sync(::Class_1_F9EFCB63E481ADB7_1* fightComponentItemInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F9EFCB63E481ADB7_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNC_OFFSET))(this, fightComponentItemInfo);
		}

		::System::Void SyncUpdate(::Class_1_FE6CD7C4A65B646F_4* itemUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCUPDATE_OFFSET))(this, itemUpdate);
		}

		::System::Void SyncRemove(::Class_1_FE6CD7C4A65B646F_4* itemUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE6CD7C4A65B646F_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SYNCREMOVE_OFFSET))(this, itemUpdate);
		}

		::RPG::Client::GridFightEquipInfo* get_EquipInfo()
		{
			return ((::RPG::Client::GridFightEquipInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_EQUIPINFO_OFFSET))(this);
		}

		::System::Void set_EquipInfo(::RPG::Client::GridFightEquipInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_EQUIPINFO_OFFSET))(this, value);
		}

		::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
		{
			return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_GET_CONSUMABLEINFO_OFFSET))(this);
		}

		::System::Void set_ConsumableInfo(::RPG::Client::GridFightConsumableInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTITEMINFO_SET_CONSUMABLEINFO_OFFSET))(this, value);
		}
	};
}
