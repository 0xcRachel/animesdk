#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
class Class_0_16E4307DCC419505_596;
class Class_0_16E4307DCC419505_597;
class Class_0_16E4307DCC419505_598;
class Class_1_6EA152E8ED858D74;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9324520)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETCONSUMABLEBYID_OFFSET UNITYSDK_OFFSET(0x9324E10)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETEQUIPBYUID_OFFSET UNITYSDK_OFFSET(0x9324B80)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETEQUIPSBYID_OFFSET UNITYSDK_OFFSET(0x9324D30)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETFORGEBYUID_OFFSET UNITYSDK_OFFSET(0x93257E0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETGAMEENTITYBYROLEID_OFFSET UNITYSDK_OFFSET(0x93249B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMANAGER_OFFSET UNITYSDK_OFFSET(0x9324B10)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMEMBERBYPOS_OFFSET UNITYSDK_OFFSET(0x9325100)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMEMBERSBYTRAITID_OFFSET UNITYSDK_OFFSET(0x9325020)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETNPCBYUID_OFFSET UNITYSDK_OFFSET(0x9325730)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETONBOARDROLEBYID_OFFSET UNITYSDK_OFFSET(0x9325570)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETPROJBYID_OFFSET UNITYSDK_OFFSET(0x9325890)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETPROJBYUID_OFFSET UNITYSDK_OFFSET(0x9325840)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLEBYUID_OFFSET UNITYSDK_OFFSET(0x93252C0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLESBYID_OFFSET UNITYSDK_OFFSET(0x9325470)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLESBYTRAIT_OFFSET UNITYSDK_OFFSET(0x93258E0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETTRAITBYID_OFFSET UNITYSDK_OFFSET(0x9324ED0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLCONSUMABLES_OFFSET UNITYSDK_OFFSET(0x9324E70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLEQUIPS_OFFSET UNITYSDK_OFFSET(0x9324E60)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLFORGES_OFFSET UNITYSDK_OFFSET(0x9325780)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x9325010)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLNPCS_OFFSET UNITYSDK_OFFSET(0x9325720)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLPROJECTIONS_OFFSET UNITYSDK_OFFSET(0x9325830)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLROLES_OFFSET UNITYSDK_OFFSET(0x93252B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLTRAITS_OFFSET UNITYSDK_OFFSET(0x9325000)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x9325C20)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9321260)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ITEMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9324B60)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_NPCS_OFFSET UNITYSDK_OFFSET(0x9325C70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x9325C90)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ROLES_OFFSET UNITYSDK_OFFSET(0x9325C60)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TEAMREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9324B50)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TRAITREPOSITORY_OFFSET UNITYSDK_OFFSET(0x9324B70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x9325C40)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x9325550)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x9325C30)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_NPCS_OFFSET UNITYSDK_OFFSET(0x9325C80)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_PROJECTIONS_OFFSET UNITYSDK_OFFSET(0x9325CA0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_TRAITS_OFFSET UNITYSDK_OFFSET(0x9325C50)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_UNLOCKEDEXPERTIDS_OFFSET UNITYSDK_OFFSET(0x9325560)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x9324140)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEEQUIPS_OFFSET UNITYSDK_OFFSET(0x93215A0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATENPCS_OFFSET UNITYSDK_OFFSET(0x9323400)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEPROJS_OFFSET UNITYSDK_OFFSET(0x9323670)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEROLES_OFFSET UNITYSDK_OFFSET(0x9323020)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATETRAITS_OFFSET UNITYSDK_OFFSET(0x9322640)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9321300)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9325CB0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__GETBATTLEAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9325B70)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__GETBATTLENPCDATAS_OFFSET UNITYSDK_OFFSET(0x9325BC0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONBATTLECREATEBATTLEEVENT_OFFSET UNITYSDK_OFFSET(0x93276B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONBATTLECREATECHARACTER_OFFSET UNITYSDK_OFFSET(0x93278C0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONGRIDFIGHTBATTLEADDEQUIP_OFFSET UNITYSDK_OFFSET(0x9327970)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x93245D0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATEROLEAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9323D30)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATEROLESKILLDESCOVERRIDE_OFFSET UNITYSDK_OFFSET(0x9323E80)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x9323B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext_TypeDefinitionIndex = 51165;

	class GridFightBattleGameContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGridMember*>* _AllMembers; // 0x10
		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _UnlockedExpertIDs_k__BackingField; // 0x18
		::RPG::GameCore::GridFightManager* _Manager; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* _Equips_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _Roles_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* _Traits_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* _Projections_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::Class_1_6EA152E8ED858D74*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* _NPCEquips; // 0x48
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleGridFightAvatarData*, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*>* _RoleEquips; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* _NPCs_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _GameEntityLUT; // 0x60

		::System::Void _ctor(::RPG::GameCore::GridFightManager* gridFightManager)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CTOR_OFFSET))(this, gridFightManager);
		}

		static ::RPG::Client::GridFightBattleGameContext* get_Instance()
		{
			return ((::RPG::Client::GridFightBattleGameContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_INSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetGameEntityByRoleID(::System::UInt32 roleID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETGAMEENTITYBYROLEID_OFFSET))(this, roleID);
		}

		::RPG::GameCore::GridFightManager* GetManager()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMANAGER_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_596* get_TeamRepository()
		{
			return ((::Class_0_16E4307DCC419505_596*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TEAMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_597* get_ItemRepository()
		{
			return ((::Class_0_16E4307DCC419505_597*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ITEMREPOSITORY_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_598* get_TraitRepository()
		{
			return ((::Class_0_16E4307DCC419505_598*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TRAITREPOSITORY_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipItemData* GetEquipByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETEQUIPBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* GetEquipsByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETEQUIPSBYID_OFFSET))(this, id);
		}

		::RPG::Client::GridFightConsumableItemData* GetConsumableByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightConsumableItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETCONSUMABLEBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>* get_AllEquips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLEQUIPS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>* get_AllConsumables()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightConsumableItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLCONSUMABLES_OFFSET))(this);
		}

		::RPG::Client::GridFightTrait* GetTraitByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightTrait*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETTRAITBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>* get_AllTraits()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLTRAITS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* get_AllMembers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>* GetMembersByTraitID(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightGridMember*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMEMBERSBYTRAITID_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightGridMember* GetMemberByPos(::System::UInt32 pos)
		{
			return ((::RPG::Client::GridFightGridMember*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETMEMBERBYPOS_OFFSET))(this, pos);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* get_AllRoles()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLROLES_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* GetRoleByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByID(::System::UInt32 id)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLESBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* get_UnlockedExpertIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_UNLOCKEDEXPERTIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedExpertIDs(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_UNLOCKEDEXPERTIDS_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRole* GetOnBoardRoleByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETONBOARDROLEBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>* get_AllNPCs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLNPCS_OFFSET))(this);
		}

		::RPG::Client::GridFightNPC* GetNPCByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETNPCBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>* get_AllForges()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightForgeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLFORGES_OFFSET))(this);
		}

		::RPG::Client::GridFightForgeItemData* GetForgeByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETFORGEBYUID_OFFSET))(this, uid);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>* get_AllProjections()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ALLPROJECTIONS_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* GetProjByUID(::System::UInt32 uid)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETPROJBYUID_OFFSET))(this, uid);
		}

		::RPG::Client::GridFightProjection* GetProjByID(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETPROJBYID_OFFSET))(this, id);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* GetRolesByTrait(::System::UInt32 traitID)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GETROLESBYTRAIT_OFFSET))(this, traitID);
		}

		::System::Void _CreateEquips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEEQUIPS_OFFSET))(this);
		}

		::System::Void _CreateTraits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATETRAITS_OFFSET))(this);
		}

		::System::Void _CreateRoles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEROLES_OFFSET))(this);
		}

		::System::Void _CreateNPCs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATENPCS_OFFSET))(this);
		}

		::System::Void _CreateProjs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__CREATEPROJS_OFFSET))(this);
		}

		::System::Void _UpdateTraits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATETRAITS_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>* _GetBattleAvatarDatas()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::BattleGridFightAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__GETBATTLEAVATARDATAS_OFFSET))(this);
		}

		::RPG::PoolList_1<::Class_1_6EA152E8ED858D74*>* _GetBattleNPCDatas()
		{
			return ((::RPG::PoolList_1<::Class_1_6EA152E8ED858D74*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__GETBATTLENPCDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_EQUIPS_OFFSET))(this);
		}

		::System::Void set_Equips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_EQUIPS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* get_Traits()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_TRAITS_OFFSET))(this);
		}

		::System::Void set_Traits(::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightTrait*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_TRAITS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* get_Roles()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_ROLES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* get_NPCs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_NPCS_OFFSET))(this);
		}

		::System::Void set_NPCs(::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightNPC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_NPCS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* get_Projections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_GET_PROJECTIONS_OFFSET))(this);
		}

		::System::Void set_Projections(::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightProjection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT_SET_PROJECTIONS_OFFSET))(this, value);
		}

		::System::Void _AddNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ADDNOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__REMOVENOTIFYHANDLER_OFFSET))(this);
		}

		::System::Void _DisposeInternal(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__DISPOSEINTERNAL_OFFSET))(this, _);
		}

		::System::Void _UpdateRoleAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATEROLEAVATARDATA_OFFSET))(this);
		}

		::System::Void _UpdateRoleSkillDescOverride()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__UPDATEROLESKILLDESCOVERRIDE_OFFSET))(this);
		}

		::System::Void _OnBattleCreateBattleEvent(::Class_0_16E4307DCC419505_347* evet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONBATTLECREATEBATTLEEVENT_OFFSET))(this, evet);
		}

		::System::Void _OnBattleCreateCharacter(::Class_0_16E4307DCC419505_347* evet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONBATTLECREATECHARACTER_OFFSET))(this, evet);
		}

		::System::Void _OnGridFightBattleAddEquip(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT__ONGRIDFIGHTBATTLEADDEQUIP_OFFSET))(this, obj);
		}
	};
}
