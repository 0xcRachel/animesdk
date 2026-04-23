#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightShopGood.h"
#include "unitysdk/RPG/Client/GridFightShopGoodType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"

class Class_1_B2AD6E32098E0994;
class Class_1_D17272E82AE804C2_364;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0x17B8C160)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET UNITYSDK_OFFSET(0x17B8CFC0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET UNITYSDK_OFFSET(0x17B8C1A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET UNITYSDK_OFFSET(0x17B8C5C0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x17B8C2B0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x17B8C310)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET UNITYSDK_OFFSET(0x17B8C460)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET UNITYSDK_OFFSET(0x17B8C620)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET UNITYSDK_OFFSET(0x17B8CA40)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET UNITYSDK_OFFSET(0x17B8CD40)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x17B8C240)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET UNITYSDK_OFFSET(0x17B8CE30)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x17B8C180)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x17B8CCE0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET UNITYSDK_OFFSET(0x17B8CDA0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET UNITYSDK_OFFSET(0x17B8C1F0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET UNITYSDK_OFFSET(0x17B8CE50)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET UNITYSDK_OFFSET(0x17B8C680)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET UNITYSDK_OFFSET(0x17B8C890)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET UNITYSDK_OFFSET(0x17B8C6E0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET UNITYSDK_OFFSET(0x17B8BE10)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x17B8C190)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17B8B7A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET UNITYSDK_OFFSET(0x17B8CFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole_TypeDefinitionIndex = 60063;

	class GridFightShopRole : public ::RPG::Client::GridFightShopGood
	{
	public:
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x20
		::Class_1_D17272E82AE804C2_364* _GoodsRole; // 0x28

		::System::Void _ctor(::Class_1_B2AD6E32098E0994* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B2AD6E32098E0994*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE__CTOR_OFFSET))(this, goods);
		}

		::System::Void RefreshRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_REFRESHROLE_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_AvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_AVATARDATA_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_SET_ROLE_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_Star()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_STAR_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_RARITY_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsReferenced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISREFERENCED_OFFSET))(this);
		}

		::System::Boolean get_IsTraitTracked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRAITTRACKED_OFFSET))(this);
		}

		::System::Boolean get_IsMultiRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISMULTIRECOMMEND_OFFSET))(this);
		}

		::System::Boolean get_IsTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ISTRIAL_OFFSET))(this);
		}

		::System::Boolean get_Upgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPGRADABLE_OFFSET))(this);
		}

		::System::Boolean get_WillLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_WILLLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_UpLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_UPLEVEL_OFFSET))(this);
		}

		::System::Boolean get_Owned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_OWNED_OFFSET))(this);
		}

		::System::String* get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPICON_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_PresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_PRESETTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ShopRoleName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_SHOPROLENAME_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleConfig* get_RoleConfig()
		{
			return ((::RPG::Client::GridFightRoleConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_ROLECONFIG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::GridFightTraitConfig*>* get_Traits()
		{
			return ((::Il2CppArray<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_TRAITS_OFFSET))(this);
		}

		::RPG::Client::GridFightShopGoodType get_GoodType()
		{
			return ((::RPG::Client::GridFightShopGoodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE_GET_GOODTYPE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ShopIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___IFIXBASEPROXY_GET_SHOPICON_OFFSET))(this);
		}
	};
}
