#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBackEquipmentConfig; }
namespace RPG::Client { class GridFightBackRankConfig; }
namespace RPG::Client { class GridFightCyreneModifyConfig; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class AvatarRow; }
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET UNITYSDK_OFFSET(0x1811D300)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1811D220)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET UNITYSDK_OFFSET(0x1811D140)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1811D3E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKSECTIONID_OFFSET UNITYSDK_OFFSET(0x1811D4B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET UNITYSDK_OFFSET(0x1811AB50)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x1811E420)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1811D540)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811E400)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET UNITYSDK_OFFSET(0x1811D5E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1811DEC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1810ED80)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET UNITYSDK_OFFSET(0x1811D760)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET UNITYSDK_OFFSET(0x1811D820)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET UNITYSDK_OFFSET(0x1811DB60)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET UNITYSDK_OFFSET(0x1811DCC0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET UNITYSDK_OFFSET(0x1811DA90)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET UNITYSDK_OFFSET(0x1811DC10)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET UNITYSDK_OFFSET(0x1811D470)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET UNITYSDK_OFFSET(0x1811D6A0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET UNITYSDK_OFFSET(0x1811D9B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET UNITYSDK_OFFSET(0x1811D9D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET UNITYSDK_OFFSET(0x1811DD70)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET UNITYSDK_OFFSET(0x1811D590)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1811DD90)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811E410)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET UNITYSDK_OFFSET(0x1811D560)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1811D9F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1811D490)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x1811A5F0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1811DFF0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROWPRESETTYPE_OFFSET UNITYSDK_OFFSET(0x1811A0B0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1811E110)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x1811E3E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1811E2C0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811DA80)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET UNITYSDK_OFFSET(0x18116AB0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1811C680)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET UNITYSDK_OFFSET(0x1811E430)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x1811DED0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1811DDA0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x1811E000)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x1811E120)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET UNITYSDK_OFFSET(0x1811E2D0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811CDE0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811CB30)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811CF90)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811C7E0)
#define RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0x1811C9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleConfig_TypeDefinitionIndex = 59944;

	class GridFightRoleConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* _BackRankConfigs; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* _TraitConfigs; // 0x18
		::RPG::GameCore::GridFightRoleConfigRow* _Row; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackEquipmentConfig*>* _BackEquipmentConfigs; // 0x28
		::RPG::GameCore::AvatarRow* _AvatarRow; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRoleStarConfig*>* _StarConfigs; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* _ModifyConfigs; // 0x40

		::System::Void _ctor(::RPG::GameCore::GridFightRoleConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__CTOR_OFFSET))(this, row);
		}

		::RPG::Client::GridFightRoleStarConfig* GetStarConfig(::System::UInt32 star)
		{
			return ((::RPG::Client::GridFightRoleStarConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETSTARCONFIG_OFFSET))(this, star);
		}

		::RPG::Client::GridFightBackRankConfig* GetBackRankConfig(::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKRANKCONFIG_OFFSET))(this, rank);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfig(::System::UInt32 equipmentID, ::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIG_OFFSET))(this, equipmentID, rank);
		}

		::RPG::Client::GridFightBackEquipmentConfig* GetBackEquipmentConfigByRank(::System::UInt32 rank)
		{
			return ((::RPG::Client::GridFightBackEquipmentConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETBACKEQUIPMENTCONFIGBYRANK_OFFSET))(this, rank);
		}

		::System::UInt32 GetExpertUnlockChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKCHAPTERID_OFFSET))(this);
		}

		::System::UInt32 GetExpertUnlockSectionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GETEXPERTUNLOCKSECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_AVATARID_OFFSET))(this);
		}

		::RPG::Client::TextID get_NameTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_NAMETEXTID_OFFSET))(this);
		}

		::System::UInt32 get_MaxStar()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSTAR_OFFSET))(this);
		}

		::System::Boolean get_IsExpert()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISEXPERT_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_FrontBackType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_FRONTBACKTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPreset get_RowPresetType()
		{
			return ((::RPG::GameCore::GridFightPreset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROWPRESETTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsFront()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISFRONT_OFFSET))(this);
		}

		::System::Boolean get_IsBack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBACK_OFFSET))(this);
		}

		::System::Boolean get_IsBoth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISBOTH_OFFSET))(this);
		}

		::System::Boolean get_IsHealer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISHEALER_OFFSET))(this);
		}

		::System::Boolean get_IsShield()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISSHIELD_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_RARITY_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_PRICE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* get_TraitConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TRAITCONFIGS_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySpeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSPEED_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByEnergyBar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYENERGYBAR_OFFSET))(this);
		}

		::System::Boolean get_IsChargeBySP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYSP_OFFSET))(this);
		}

		::System::Boolean get_IsChargeByHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ISCHARGEBYHP_OFFSET))(this);
		}

		::System::String* get_MaxSPIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MAXSPICON_OFFSET))(this);
		}

		::System::String* get_MiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_TeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_TEAMICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>* get_BackRankConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBackRankConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_BACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>* get_ModifyConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCyreneModifyConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_MODIFYCONFIGS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Remark()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_REMARK_OFFSET))(this);
		}

		::System::String* get_AllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG_GET_ALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::System::String* _GetMiniRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETMINIROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETHEADICONPATH_OFFSET))(this);
		}

		::System::String* _GetRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETROUNDICONPATH_OFFSET))(this);
		}

		::System::String* _GetShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETSHOPICONPATH_OFFSET))(this);
		}

		::System::String* _GetTeamIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETTEAMICONPATH_OFFSET))(this);
		}

		::System::String* _GetAllRankBackEquipmentDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__GETALLRANKBACKEQUIPMENTDESC_OFFSET))(this);
		}

		::System::Void _InitStarConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITSTARCONFIGS_OFFSET))(this);
		}

		::System::Void _InitTraitConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITTRAITCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackRankConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKRANKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitCyreneModifyConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITCYRENEMODIFYCONFIGS_OFFSET))(this);
		}

		::System::Void _InitBackEquipmentConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLECONFIG__INITBACKEQUIPMENTCONFIGS_OFFSET))(this);
		}
	};
}
