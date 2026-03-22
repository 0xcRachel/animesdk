#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookItemStatus.h"
#include "unitysdk/RPG/GameCore/GridFightHandBookType.h"
#include "unitysdk/System/Object.h"

class Class_1_2CCC2AA1393FA2C4;
class Class_1_6D96BFF51520C4AF_2;
class Class_1_6E708EAB438EC183_38;
class Class_1_735612C94F558EAE_30;
class Class_1_735612C94F558EAE_31;
class Class_1_735612C94F558EAE_32;
class Class_1_735612C94F558EAE_33;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightConsumableItemConfig; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightItemConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET UNITYSDK_OFFSET(0x93A1D00)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET UNITYSDK_OFFSET(0x93A1E20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET UNITYSDK_OFFSET(0x93A1EA0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET UNITYSDK_OFFSET(0x93A1F00)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET UNITYSDK_OFFSET(0x93A1F60)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET UNITYSDK_OFFSET(0x93A1FD0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET UNITYSDK_OFFSET(0x93A2040)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET UNITYSDK_OFFSET(0x93A1C20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET UNITYSDK_OFFSET(0x93A1BA0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET UNITYSDK_OFFSET(0x93A26E0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x93A20C0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2670)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2CC0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET UNITYSDK_OFFSET(0x93A1260)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET UNITYSDK_OFFSET(0x93A0E20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x93A35F0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x93A2110)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET UNITYSDK_OFFSET(0x93A3230)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET UNITYSDK_OFFSET(0x93A3390)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET UNITYSDK_OFFSET(0x93A3040)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET UNITYSDK_OFFSET(0x93A1180)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET UNITYSDK_OFFSET(0x93A11F0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET UNITYSDK_OFFSET(0x93A1500)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET UNITYSDK_OFFSET(0x93A10A0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET UNITYSDK_OFFSET(0x93A1110)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET UNITYSDK_OFFSET(0x93A1030)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandBookStatus_TypeDefinitionIndex = 51555;

	class GridFightHandBookStatus : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _CompletedItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _SeenItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_2CCC2AA1393FA2C4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CCC2AA1393FA2C4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_OFFSET))(this, info);
		}

		::System::Void Sync_1(::Class_1_6D96BFF51520C4AF_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6D96BFF51520C4AF_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_SYNC_1_OFFSET))(this, notify);
		}

		::System::Void _HandleHandBookData(::RPG::GameCore::GridFightHandBookType type, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* seenIds, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* completedIds)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEHANDBOOKDATA_OFFSET))(this, type, seenIds, completedIds);
		}

		::System::Void _HandleRole(::Class_1_735612C94F558EAE_30* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_30*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEROLE_OFFSET))(this, role);
		}

		::System::Void _HandleEquip(::Class_1_735612C94F558EAE_31* equip)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_31*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEEQUIP_OFFSET))(this, equip);
		}

		::System::Void _HandlePortal(::Class_1_735612C94F558EAE_33* portal)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEPORTAL_OFFSET))(this, portal);
		}

		::System::Void _HandleAugment(::Class_1_735612C94F558EAE_32* augment)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_32*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEAUGMENT_OFFSET))(this, augment);
		}

		::System::Void _HandleMonster(::Class_1_6E708EAB438EC183_38* monster)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__HANDLEMONSTER_OFFSET))(this, monster);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem(::RPG::Client::GridFightRole* role)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_OFFSET))(this, role);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_1(::RPG::Client::GridFightHandbookRole* role)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_1_OFFSET))(this, role);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_2(::RPG::Client::GridFightAugment* augment)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_2_OFFSET))(this, augment);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_3(::RPG::Client::GridFightMonsterCampConfig* config)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_3_OFFSET))(this, config);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_4(::RPG::Client::GridFightItemConfig* itemConfig)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_4_OFFSET))(this, itemConfig);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_5(::RPG::Client::GridFightEquipItemConfig* equipItem)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_5_OFFSET))(this, equipItem);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_6(::RPG::Client::GridFightConsumableItemConfig* consumableItem)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightConsumableItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_6_OFFSET))(this, consumableItem);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_7(::RPG::Client::GridFightPortalData* portalBuff)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_7_OFFSET))(this, portalBuff);
		}

		::RPG::Client::GridFightHandBookItemStatus CheckItem_8(::System::UInt32 id, ::RPG::GameCore::GridFightHandBookType type)
		{
			return ((::RPG::Client::GridFightHandBookItemStatus(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_CHECKITEM_8_OFFSET))(this, id, type);
		}

		::System::Int32 GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOMPLETEDITEMCOUNT_OFFSET))(this, type);
		}

		::System::Int32 GetSeenItemCount(::RPG::GameCore::GridFightHandBookType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETSEENITEMCOUNT_OFFSET))(this, type);
		}

		::System::Int32 GetCollectedProgress()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETCOLLECTEDPROGRESS_OFFSET))(this);
		}

		::System::Int32 GetTotalItemCount(::RPG::GameCore::GridFightHandBookType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS_GETTOTALITEMCOUNT_OFFSET))(this, type);
		}

		::System::Int32 _GetPortalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETPORTALCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetCompletedItemCount(::RPG::GameCore::GridFightHandBookType type)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GridFightHandBookType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETCOMPLETEDITEMCOUNT_OFFSET))(this, type);
		}

		::System::Int32 _GetMonsterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETMONSTERCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetRoleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKSTATUS__GETROLECOUNT_OFFSET))(this);
		}
	};
}
