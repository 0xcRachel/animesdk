#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatAvailableDice.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatAvatarInfoType.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_15B3DD195FDC216E;
namespace RPG::Client::DiceCombat { class DiceCombatBattleAvatarInfo; }
namespace RPG::GameCore { class ActivityDiceCombatAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEBYAVATARID_OFFSET UNITYSDK_OFFSET(0x14211C60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEBYBATTLEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x1420FEB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEPRESETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0x142120E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATESTAGEENEMYAVATARINFO_OFFSET UNITYSDK_OFFSET(0x14211ED0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ATTACKDICENUM_OFFSET UNITYSDK_OFFSET(0x142124A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVAILABLEDICE_OFFSET UNITYSDK_OFFSET(0x17A1ED40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARHIGHLEVELBGIMGPATHUI3D_OFFSET UNITYSDK_OFFSET(0x14212570)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARHIGHLEVELBGIMGPATH_OFFSET UNITYSDK_OFFSET(0x14212540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x14212290)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARIMGPATHUI3D_OFFSET UNITYSDK_OFFSET(0x14212510)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARIMGPATH_OFFSET UNITYSDK_OFFSET(0x142124E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x14212470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x142122B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARRARITY_OFFSET UNITYSDK_OFFSET(0x14212450)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_COLORFULDICEAVAILABLECOUNT_OFFSET UNITYSDK_OFFSET(0x17A1E0B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DEFENSEDICENUM_OFFSET UNITYSDK_OFFSET(0x142124C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DICECOUNTPERRARE_OFFSET UNITYSDK_OFFSET(0x17A1ED60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DICEIDPERRARE_OFFSET UNITYSDK_OFFSET(0x17A1ED80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_FINALATTACKVOICE_OFFSET UNITYSDK_OFFSET(0x17A1E8E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0x17A1E240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ISCOLLECTION_OFFSET UNITYSDK_OFFSET(0x17A1E220)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ISSHOWASPLAYERCARD_OFFSET UNITYSDK_OFFSET(0x17A1E0D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x14212480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_PLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x17A1E180)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_RECOMMENDDICELIST_OFFSET UNITYSDK_OFFSET(0x17A1E090)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_SHOPICONPATH_OFFSET UNITYSDK_OFFSET(0x17A1E590)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0x17A1EC30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x14212280)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_AVAILABLEDICE_OFFSET UNITYSDK_OFFSET(0x17A1ED50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_DICECOUNTPERRARE_OFFSET UNITYSDK_OFFSET(0x17A1ED70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_DICEIDPERRARE_OFFSET UNITYSDK_OFFSET(0x17A1ED90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO__CREATE_OFFSET UNITYSDK_OFFSET(0x14211DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14212270)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatConfigAvatarInfo_TypeDefinitionIndex = 69834;

	class DiceCombatConfigAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DiceIDPerRare_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>* _AvailableDice_k__BackingField; // 0x18
		::RPG::GameCore::ActivityDiceCombatAvatarRow* _AvatarRow; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _DiceCountPerRare_k__BackingField; // 0x28
		::Class_1_15B3DD195FDC216E* _SkillRow; // 0x30
		::System::UInt32 _AvatarLevel; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* CreateByAvatarID(::System::UInt32 diceAvatarID, ::System::UInt32 targetAvatarLevel)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEBYAVATARID_OFFSET))(diceAvatarID, targetAvatarLevel);
		}

		static ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* CreateStageEnemyAvatarInfo(::System::UInt32 diceAvatarID, ::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATESTAGEENEMYAVATARINFO_OFFSET))(diceAvatarID, stageID);
		}

		static ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* CreatePresetPlayerAvatarInfo(::System::UInt32 diceAvatarID, ::System::UInt32 presetID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEPRESETPLAYERAVATARINFO_OFFSET))(diceAvatarID, presetID);
		}

		static ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* CreateByBattleAvatarInfo(::RPG::Client::DiceCombat::DiceCombatBattleAvatarInfo* battleAvatarInfo)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::RPG::Client::DiceCombat::DiceCombatBattleAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_CREATEBYBATTLEAVATARINFO_OFFSET))(battleAvatarInfo);
		}

		static ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* _Create(::System::UInt32 diceAvatarID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO__CREATE_OFFSET))(diceAvatarID);
		}

		::RPG::Client::DiceCombat::DiceCombatAvatarInfoType get_Type()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatAvatarInfoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_TYPE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::String* get_AvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARNAME_OFFSET))(this);
		}

		::System::UInt32 get_AvatarRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARRARITY_OFFSET))(this);
		}

		::System::UInt32 get_AvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_MAXHP_OFFSET))(this);
		}

		::System::UInt32 get_AttackDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ATTACKDICENUM_OFFSET))(this);
		}

		::System::UInt32 get_DefenseDiceNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DEFENSEDICENUM_OFFSET))(this);
		}

		::System::String* get_AvatarImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARIMGPATH_OFFSET))(this);
		}

		::System::String* get_AvatarImgPathUI3D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARIMGPATHUI3D_OFFSET))(this);
		}

		::System::String* get_AvatarHighLevelBgImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARHIGHLEVELBGIMGPATH_OFFSET))(this);
		}

		::System::String* get_AvatarHighLevelBgImgPathUI3D()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVATARHIGHLEVELBGIMGPATHUI3D_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendDiceList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_RECOMMENDDICELIST_OFFSET))(this);
		}

		::System::UInt32 get_ColorfulDiceAvailableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_COLORFULDICEAVAILABLECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsShowAsPlayerCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ISSHOWASPLAYERCARD_OFFSET))(this);
		}

		::RPG::GameCore::GenderType get_PlayerGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_PLAYERGENDER_OFFSET))(this);
		}

		::System::Boolean get_IsCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_ISCOLLECTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_ShopIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_SHOPICONPATH_OFFSET))(this);
		}

		::System::String* get_FinalAttackVoice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_FINALATTACKVOICE_OFFSET))(this);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>* get_AvailableDice()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_AVAILABLEDICE_OFFSET))(this);
		}

		::System::Void set_AvailableDice(::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatAvailableDice>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_AVAILABLEDICE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DiceCountPerRare()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DICECOUNTPERRARE_OFFSET))(this);
		}

		::System::Void set_DiceCountPerRare(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_DICECOUNTPERRARE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DiceIDPerRare()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_GET_DICEIDPERRARE_OFFSET))(this);
		}

		::System::Void set_DiceIDPerRare(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCONFIGAVATARINFO_SET_DICEIDPERRARE_OFFSET))(this, value);
		}
	};
}
