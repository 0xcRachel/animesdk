#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGridMember.h"
#include "unitysdk/RPG/Client/GridFightGridMemberType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_610;
class Class_0_16E4307DCC419505_611;
class Class_1_BD3679861BD0C676;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightEquipComponent; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightRoleEffect; }
namespace RPG::Client { class GridFightRoleSkill; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightRole_GridFightRoleBuilder; }
namespace RPG::Client { class GridFightTraitComponent; }
namespace RPG::Client { class GridFightValueComponent; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x93DF2A0)
#define RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET UNITYSDK_OFFSET(0x93DEC50)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET UNITYSDK_OFFSET(0x93DDFA0)
#define RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET UNITYSDK_OFFSET(0x93DDDC0)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE430)
#define RPG_CLIENT_GRIDFIGHTROLE_GETBACKSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE870)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE310)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE550)
#define RPG_CLIENT_GRIDFIGHTROLE_GETFRONTSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE750)
#define RPG_CLIENT_GRIDFIGHTROLE_GETSECONDRECOMMENDEQUIP_OFFSET UNITYSDK_OFFSET(0x93DE990)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x93DF590)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x93DF660)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CANACTIVETRAIT_OFFSET UNITYSDK_OFFSET(0x93DF290)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_CURRENTRANK_OFFSET UNITYSDK_OFFSET(0x93DEAF0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0x93DF4E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x93DF600)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPS_OFFSET UNITYSDK_OFFSET(0x93DEFF0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x93DF360)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISBACKCONFIG_OFFSET UNITYSDK_OFFSET(0x93DEB50)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET UNITYSDK_OFFSET(0x93DF430)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISFRONTCONFIG_OFFSET UNITYSDK_OFFSET(0x93DE370)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISTRAILAVATAR_OFFSET UNITYSDK_OFFSET(0x93DEBF0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x93DEC20)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_MEMBERTYPE_OFFSET UNITYSDK_OFFSET(0x93DEAD0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x93DF420)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTIONID_OFFSET UNITYSDK_OFFSET(0x93DF010)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTION_OFFSET UNITYSDK_OFFSET(0x93DF080)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x93DF680)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x93DED30)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x93DF5A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x93DF6A0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x93DF640)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SELLPRICE_OFFSET UNITYSDK_OFFSET(0x93DEB60)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x93DF5E0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0x93DF5C0)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x93DF410)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x93DF620)
#define RPG_CLIENT_GRIDFIGHTROLE_GET_UID_OFFSET UNITYSDK_OFFSET(0x93DEAE0)
#define RPG_CLIENT_GRIDFIGHTROLE_ISUNRELEASEDOUTSIDE_OFFSET UNITYSDK_OFFSET(0x93DF140)
#define RPG_CLIENT_GRIDFIGHTROLE_REFRESHAVATARDATA_OFFSET UNITYSDK_OFFSET(0x93DE200)
#define RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x93DF300)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x93DE170)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x93DF670)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET UNITYSDK_OFFSET(0x93DF4F0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET UNITYSDK_OFFSET(0x93DF610)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET UNITYSDK_OFFSET(0x93DD740)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET UNITYSDK_OFFSET(0x93DF440)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x93DDCC0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET UNITYSDK_OFFSET(0x93DF690)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x93DF5B0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET UNITYSDK_OFFSET(0x93DF6B0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET UNITYSDK_OFFSET(0x93DF650)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET UNITYSDK_OFFSET(0x93DF5F0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET UNITYSDK_OFFSET(0x93DF5D0)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET UNITYSDK_OFFSET(0x93DD850)
#define RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x93DF630)
#define RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x93DE000)
#define RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET UNITYSDK_OFFSET(0x93DFA20)
#define RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET UNITYSDK_OFFSET(0x93DD9C0)
#define RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x93DD620)
#define RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET UNITYSDK_OFFSET(0x93DE670)
#define RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x93DDC70)
#define RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x93DF6C0)
#define RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x93DF960)
#define RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET UNITYSDK_OFFSET(0x93DF7C0)
#define RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0x93DFA70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRole_TypeDefinitionIndex = 51724;

	class GridFightRole : public ::RPG::Client::GridFightGridMember
	{
	public:
		::RPG::Client::GridFightValueComponent* _SavedValueMap_k__BackingField; // 0x20
		::RPG::Client::AvatarData* _AvatarData_k__BackingField; // 0x28
		::RPG::Client::GridFightRoleSkill* _Skill_k__BackingField; // 0x30
		::RPG::Client::GridFightRoleStarConfig* _StarConfig_k__BackingField; // 0x38
		::RPG::Client::GridFightRoleEffect* _RoleEffect_k__BackingField; // 0x40
		::RPG::Client::GridFightTraitComponent* _TraitComponent_k__BackingField; // 0x48
		::RPG::Client::GridFightRoleConfig* _RoleConfig_k__BackingField; // 0x50
		::Class_0_16E4307DCC419505_610* _PropertyProvider_k__BackingField; // 0x58
		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* _AdditionalProperties; // 0x60
		::RPG::Client::GridFightEquipComponent* _EquipComponent_k__BackingField; // 0x68
		::System::Action* OnActiveChanged; // 0x70
		::Class_0_16E4307DCC419505_611* _AvatarDataProvider; // 0x78
		::System::UInt32 _Star; // 0x80
		::System::UInt32 _ID; // 0x84
		::System::Boolean IsUnreleased; // 0x88
		::System::Boolean _IsDelay; // 0x89
		::System::UInt32 _DelayRound; // 0x8C

		::System::Void _ctor(::System::UInt32 id, ::System::UInt32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CTOR_OFFSET))(this, id, star);
		}

		static ::RPG::Client::GridFightRole* _Create(::RPG::Client::GridFightRole_GridFightRoleBuilder* builder)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightRole_GridFightRoleBuilder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CREATE_OFFSET))(builder);
		}

		static ::RPG::Client::GridFightRole* CreateDummy(::System::UInt32 id, ::System::UInt32 star, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* equipIDs)
		{
			return ((::RPG::Client::GridFightRole*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMY_OFFSET))(id, star, equipIDs);
		}

		static ::RPG::Client::GridFightRole* CreateDummyTeamRole(::Class_1_BD3679861BD0C676* protoRole)
		{
			return ((::RPG::Client::GridFightRole*(*)(::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CREATEDUMMYTEAMROLE_OFFSET))(protoRole);
		}

		::System::Void Update(::Class_1_BD3679861BD0C676* role)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_UPDATE_OFFSET))(this, role);
		}

		::System::Void RefreshAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_REFRESHAVATARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFrontFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFRONTFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBackFirstRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETBACKFIRSTRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetFrontSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETFRONTSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetBackSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETBACKSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSecondRecommendEquip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GETSECONDRECOMMENDEQUIP_OFFSET))(this);
		}

		::RPG::Client::GridFightGridMemberType get_MemberType()
		{
			return ((::RPG::Client::GridFightGridMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_MEMBERTYPE_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_CURRENTRANK_OFFSET))(this);
		}

		::System::Boolean get_IsFrontConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISFRONTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsBackConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISBACKCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SellPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SELLPRICE_OFFSET))(this);
		}

		::System::Boolean get_IsTrailAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISTRAILAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ContainsTrait(::System::Collections::Generic::List_1<::System::UInt32>* traits)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_CONTAINSTRAIT_OFFSET))(this, traits);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_REMARK_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>* get_Equips()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPS_OFFSET))(this);
		}

		::System::UInt32 get_ProjectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTIONID_OFFSET))(this);
		}

		::RPG::Client::GridFightProjection* get_Projection()
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROJECTION_OFFSET))(this);
		}

		::System::Boolean IsUnreleasedOutside()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_ISUNRELEASEDOUTSIDE_OFFSET))(this);
		}

		::System::Boolean get_CanActiveTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_CANACTIVETRAIT_OFFSET))(this);
		}

		::System::Void add_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_ADD_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnActiveChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_REMOVE_ONACTIVECHANGED_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STAR_OFFSET))(this);
		}

		::System::Void set_Star(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STAR_OFFSET))(this, value);
		}

		::System::UInt32 get_PosIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_POSINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_IsDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ISDELAY_OFFSET))(this);
		}

		::System::Void set_IsDelay(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ISDELAY_OFFSET))(this, value);
		}

		::System::UInt32 get_DelayRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_DELAYROUND_OFFSET))(this);
		}

		::System::Void set_DelayRound(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_DELAYROUND_OFFSET))(this, value);
		}

		::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* get_AdditionalProperties()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ADDITIONALPROPERTIES_OFFSET))(this);
		}

		::System::Void set_AdditionalProperties(::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ADDITIONALPROPERTIES_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::System::Void set_RoleConfig(::RPG::Client::GridFightRoleConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLECONFIG_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleStarConfig* get_StarConfig()
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_STARCONFIG_OFFSET))(this);
		}

		::System::Void set_StarConfig(::RPG::Client::GridFightRoleStarConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleStarConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_STARCONFIG_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleSkill* get_Skill()
		{
			return ((::RPG::Client::GridFightRoleSkill*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::GridFightRoleSkill* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkill*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SKILL_OFFSET))(this, value);
		}

		::RPG::Client::GridFightEquipComponent* get_EquipComponent()
		{
			return ((::RPG::Client::GridFightEquipComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_EQUIPCOMPONENT_OFFSET))(this);
		}

		::System::Void set_EquipComponent(::RPG::Client::GridFightEquipComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightEquipComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_EQUIPCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitComponent* get_TraitComponent()
		{
			return ((::RPG::Client::GridFightTraitComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_TRAITCOMPONENT_OFFSET))(this);
		}

		::System::Void set_TraitComponent(::RPG::Client::GridFightTraitComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_TRAITCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::GridFightValueComponent* get_SavedValueMap()
		{
			return ((::RPG::Client::GridFightValueComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_SAVEDVALUEMAP_OFFSET))(this);
		}

		::System::Void set_SavedValueMap(::RPG::Client::GridFightValueComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightValueComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_SAVEDVALUEMAP_OFFSET))(this, value);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::Client::AvatarData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_AVATARDATA_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_610* get_PropertyProvider()
		{
			return ((::Class_0_16E4307DCC419505_610*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_PROPERTYPROVIDER_OFFSET))(this);
		}

		::System::Void set_PropertyProvider(::Class_0_16E4307DCC419505_610* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_610*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_PROPERTYPROVIDER_OFFSET))(this, value);
		}

		::RPG::Client::GridFightRoleEffect* get_RoleEffect()
		{
			return ((::RPG::Client::GridFightRoleEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_GET_ROLEEFFECT_OFFSET))(this);
		}

		::System::Void set_RoleEffect(::RPG::Client::GridFightRoleEffect* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE_SET_ROLEEFFECT_OFFSET))(this, value);
		}

		::System::Void _InitAvatarDataProvider(::Class_0_16E4307DCC419505_611* avatarDataProvider)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_611*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__INITAVATARDATAPROVIDER_OFFSET))(this, avatarDataProvider);
		}

		::System::Void _OnEquipComponentCollectionChanged(::System::Object* sender, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONEQUIPCOMPONENTCOLLECTIONCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _OnRolePropertyChanged(::System::Object* sender, ::System::ComponentModel::PropertyChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__ONROLEPROPERTYCHANGED_OFFSET))(this, sender, e);
		}

		::System::Void _UpdateTraitIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__UPDATETRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetRecommendEquipListWithFrontBack(::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>* equipListSelector, ::System::Boolean isFront)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__GETRECOMMENDEQUIPLISTWITHFRONTBACK_OFFSET))(this, equipListSelector, isFront);
		}

		::System::Boolean _ContainsTrait_b__28_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE__CONTAINSTRAIT_B__28_0_OFFSET))(this, id);
		}

		::System::Void __iFixBaseProxy_set_PosIndex(::System::UInt32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLE___IFIXBASEPROXY_SET_POSINDEX_OFFSET))(this, P0);
		}
	};
}
