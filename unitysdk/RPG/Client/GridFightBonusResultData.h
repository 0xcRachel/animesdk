#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_36;
class Class_1_443A92A86A85B606_2;
class Class_1_99BD961747420BEB_28;
class Class_1_BD3679861BD0C676;
class Class_1_D2C0A39018B2EAE4;
class Class_1_DF43B7EB585E1585;
class Class_1_ECA6A21F0048224D;
class Class_1_FA4F4A67B1C04320_350;
namespace RPG::Client { class GridFightBonusConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightOrbEntityData; }
namespace RPG::Client { class GridFightPresentEntity; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET UNITYSDK_OFFSET(0x93331D0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET UNITYSDK_OFFSET(0x9333A50)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET UNITYSDK_OFFSET(0x9332870)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET UNITYSDK_OFFSET(0x9332930)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET UNITYSDK_OFFSET(0x9332A30)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET UNITYSDK_OFFSET(0x9333140)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x9331A90)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET UNITYSDK_OFFSET(0x9332E60)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET UNITYSDK_OFFSET(0x9332FB0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET UNITYSDK_OFFSET(0x9332A80)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET UNITYSDK_OFFSET(0x9331A30)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET UNITYSDK_OFFSET(0x9332D90)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET UNITYSDK_OFFSET(0x93338C0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET UNITYSDK_OFFSET(0x9333580)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9331530)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET UNITYSDK_OFFSET(0x93337C0)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x931DC10)
#define RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x9331800)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusResultData_TypeDefinitionIndex = 51192;

	class GridFightBonusResultData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPresentEntity*>* PresentList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedExpertRoleIDList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* EquipItemList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* RoleItemList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* NonExpertRoleList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* UnlockExpertRoleList; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusConsumableItemData*>* ConsumableItemList; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightForgeItemData*>* ForgeItemList; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* AddEquipItemList; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbEntityData*>* OrbList; // 0x58
		::System::Int32 Coin; // 0x60
		::System::UInt32 Exp; // 0x64
		::System::Int32 FreeRefresh; // 0x68
		::System::Int32 LevelAdd; // 0x6C
		::System::Int32 ExpAdd; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_443A92A86A85B606_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_443A92A86A85B606_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_SYNC_OFFSET))(this, notify);
		}

		::System::Void HandleUnlockExpert(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUNLOCKEXPERT_OFFSET))(this, id);
		}

		::System::Void HandleItemUpdate(::Class_1_ECA6A21F0048224D* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ECA6A21F0048224D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEITEMUPDATE_OFFSET))(this, update);
		}

		::System::Void HandleCoinUpdate(::System::UInt32 coin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLECOINUPDATE_OFFSET))(this, coin);
		}

		::System::Void HandleExpAndLevelUpdate(::System::UInt32 level, ::System::UInt32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPANDLEVELUPDATE_OFFSET))(this, level, exp);
		}

		::System::Void HandleExpUpdate(::System::UInt32 exp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEEXPUPDATE_OFFSET))(this, exp);
		}

		::System::Void HandleRoleUpdate(::Class_1_BD3679861BD0C676* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEROLEUPDATE_OFFSET))(this, role);
		}

		::System::Void HandleUpdateShop(::Class_1_DF43B7EB585E1585* shopUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF43B7EB585E1585*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEUPDATESHOP_OFFSET))(this, shopUpdate);
		}

		::System::Void HandleOrbUpdate(::Class_1_FA4F4A67B1C04320_350* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_350*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEORBUPDATE_OFFSET))(this, update);
		}

		::System::Void HandlePresentUpdate(::Class_1_120319518E6F6581_36* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_36*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEPRESENTUPDATE_OFFSET))(this, update);
		}

		::System::Void HandleForgeAdd(::Class_1_99BD961747420BEB_28* forgeAdd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_HANDLEFORGEADD_OFFSET))(this, forgeAdd);
		}

		::System::Void CopyFrom(::RPG::Client::GridFightBonusResultData* other)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_COPYFROM_OFFSET))(this, other);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_RESET_OFFSET))(this);
		}

		::System::Boolean _CheckHasBounus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__CHECKHASBOUNUS_OFFSET))(this);
		}

		::System::Void _HandleUpdate(::Class_1_D2C0A39018B2EAE4* update)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D2C0A39018B2EAE4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA__HANDLEUPDATE_OFFSET))(this, update);
		}

		::RPG::Client::GridFightRole* PopupExpertRole()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_POPUPEXPERTROLE_OFFSET))(this);
		}

		::System::Boolean get_HasBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSRESULTDATA_GET_HASBONUS_OFFSET))(this);
		}
	};
}
