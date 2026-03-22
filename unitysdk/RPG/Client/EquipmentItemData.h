#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_EBB10EC01CCC4716_10;
class Class_1_FA4F4A67B1C04320_298;
namespace RPG::Client { class EquipmentGrowUpBeforeData; }
namespace RPG::Client { class EquipmentPropertyUIData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class EquipmentRow; }
namespace RPG::GameCore { class EquipmentSkillRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EQUIPMENTITEMDATA_CALCULATEPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x917FED0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARLEVELUPBEFORDATA_OFFSET UNITYSDK_OFFSET(0x9180830)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARPROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9180880)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLEARRANKUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91808D0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x917F920)
#define RPG_CLIENT_EQUIPMENTITEMDATA_CREATEDISPLAYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x917F310)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETALLPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x917FFD0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETATTACK_OFFSET UNITYSDK_OFFSET(0x917FCD0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0x917FE10)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEDEFENCE_OFFSET UNITYSDK_OFFSET(0x917FE70)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEHP_OFFSET UNITYSDK_OFFSET(0x917FDB0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x9180370)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTMAXLV_OFFSET UNITYSDK_OFFSET(0x9180480)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETDEFENCE_OFFSET UNITYSDK_OFFSET(0x917FD40)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETEQUIPMENTCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0x9180920)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETHP_OFFSET UNITYSDK_OFFSET(0x917FA30)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x91803F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETNEEDEXPTOLV_OFFSET UNITYSDK_OFFSET(0x9180270)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETNEWLEVELBYADDEXP_OFFSET UNITYSDK_OFFSET(0x9180500)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x917FAA0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GETPROVIDEEXP_OFFSET UNITYSDK_OFFSET(0x9180690)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_AVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x91809E0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANKSKILLROW_OFFSET UNITYSDK_OFFSET(0x9180D40)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANK_OFFSET UNITYSDK_OFFSET(0x9180DC0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x9181120)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGDISPLAYAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9181160)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_CARDBACKIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9180FE0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9181080)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x9180D20)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9181180)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9181100)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811A0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x91810A0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x91810C0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANKUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811E0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x91810E0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_SKILLROW_OFFSET UNITYSDK_OFFSET(0x9180F60)
#define RPG_CLIENT_EQUIPMENTITEMDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x9181140)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGAVATARID_OFFSET UNITYSDK_OFFSET(0x9181130)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGDISPLAYAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9181170)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x9181090)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_EQUIPMENTROW_OFFSET UNITYSDK_OFFSET(0x9180D30)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x9181190)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_ISPROTECTED_OFFSET UNITYSDK_OFFSET(0x9181110)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811B0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x91810B0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811D0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x91810D0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANKUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x91811F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x91810F0)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x9181150)
#define RPG_CLIENT_EQUIPMENTITEMDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x917F460)
#define RPG_CLIENT_EQUIPMENTITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x917F400)
#define RPG_CLIENT_EQUIPMENTITEMDATA__GETBELONGAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0x9180A00)
#define RPG_CLIENT_EQUIPMENTITEMDATA__INCREMENTVERSION_OFFSET UNITYSDK_OFFSET(0x917F620)
#define RPG_CLIENT_EQUIPMENTITEMDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x9180B80)
#define RPG_CLIENT_EQUIPMENTITEMDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x917F670)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentItemData_TypeDefinitionIndex = 52211;

	class EquipmentItemData : public ::RPG::Client::ItemData
	{
	public:
		// static const ::System::UInt32 RankMax = 0x5; // 0x0
		::RPG::Client::EquipmentGrowUpBeforeData* _PromotedBeforeData_k__BackingField; // 0x40
		::RPG::Client::EquipmentGrowUpBeforeData* _RankUpedBeforeData_k__BackingField; // 0x48
		::RPG::Client::IAvatarInfoProvider* _BelongDisplayAvatarData_k__BackingField; // 0x50
		::RPG::Client::EquipmentGrowUpBeforeData* _LevelUpedBeforeData_k__BackingField; // 0x58
		::RPG::Client::EquipmentGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x60
		::RPG::GameCore::EquipmentRow* _EquipmentRow_k__BackingField; // 0x68
		::System::UInt32 _Level_k__BackingField; // 0x70
		::System::UInt32 _Rank; // 0x74
		::System::Boolean _IsProtected_k__BackingField; // 0x78
		::System::UInt32 _Version_k__BackingField; // 0x7C
		::System::UInt32 _BelongAvatarID_k__BackingField; // 0x80
		::System::UInt32 _CurrentExp_k__BackingField; // 0x84
		::System::UInt32 _Promotion_k__BackingField; // 0x88

		::System::Void _ctor(::System::UInt32 configID, ::System::UInt32 uID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__CTOR_OFFSET))(this, configID, uID);
		}

		static ::RPG::Client::EquipmentItemData* CreateDisplayEquipment(::Class_1_FA4F4A67B1C04320_298* equipment, ::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::Class_1_FA4F4A67B1C04320_298*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CREATEDISPLAYEQUIPMENT_OFFSET))(equipment, avatarData);
		}

		::System::Void Sync(::Class_1_EBB10EC01CCC4716_10* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SYNC_OFFSET))(this, item);
		}

		static ::RPG::Client::EquipmentItemData* Clone(::RPG::Client::EquipmentItemData* equipmentItemData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLONE_OFFSET))(equipmentItemData);
		}

		::RPG::GameCore::FixPoint GetHP(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETHP_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetAttack(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETATTACK_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetDefence(::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETDEFENCE_OFFSET))(this, promotion, level);
		}

		::RPG::GameCore::FixPoint GetBattleHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleAttack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetBattleDefence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETBATTLEDEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 promotion, ::System::UInt32 level, ::System::Boolean calcAddition)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETPROPERTYVALUE_OFFSET))(this, type, promotion, level, calcAddition);
		}

		::RPG::GameCore::FixPoint CalculatePropertyValue(::RPG::GameCore::AvatarPropertyType type, ::System::UInt32 promotion, ::System::UInt32 level)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CALCULATEPROPERTYVALUE_OFFSET))(this, type, promotion, level);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EquipmentPropertyUIData*>* GetAllPropertyUIData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EquipmentPropertyUIData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETALLPROPERTYUIDATA_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToLv(::System::UInt32 toLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETNEEDEXPTOLV_OFFSET))(this, toLevel);
		}

		::System::UInt32 GetCurrentLvMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTLVMAXEXP_OFFSET))(this);
		}

		::System::UInt32 GetLvMaxExp(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETLVMAXEXP_OFFSET))(this, level);
		}

		::System::UInt32 GetCurrentMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETCURRENTMAXLV_OFFSET))(this);
		}

		::System::UInt32 GetNewLevelByAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETNEWLEVELBYADDEXP_OFFSET))(this, addExp);
		}

		::System::UInt32 GetProvideExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETPROVIDEEXP_OFFSET))(this);
		}

		::System::Void ClearLevelUpBeforData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARLEVELUPBEFORDATA_OFFSET))(this);
		}

		::System::Void ClearPromotionBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARPROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Void ClearRankUpBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_CLEARRANKUPBEFOREDATA_OFFSET))(this);
		}

		::System::Single GetEquipmentCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GETEQUIPMENTCOMBATPOWER_OFFSET))(this);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::System::Void _RecordData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__RECORDDATA_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType _GetBelongAvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__GETBELONGAVATARBASETYPE_OFFSET))(this);
		}

		::System::Void _IncrementVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA__INCREMENTVERSION_OFFSET))(this);
		}

		::RPG::GameCore::EquipmentRow* get_EquipmentRow()
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_EQUIPMENTROW_OFFSET))(this);
		}

		::System::Void set_EquipmentRow(::RPG::GameCore::EquipmentRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_EQUIPMENTROW_OFFSET))(this, value);
		}

		::RPG::GameCore::EquipmentSkillRow* get_BattleRankSkillRow()
		{
			return ((::RPG::GameCore::EquipmentSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANKSKILLROW_OFFSET))(this);
		}

		::RPG::GameCore::EquipmentSkillRow* get_SkillRow()
		{
			return ((::RPG::GameCore::EquipmentSkillRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_SKILLROW_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_AvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_AVATARBASETYPE_OFFSET))(this);
		}

		::System::String* get_CardBackImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_CARDBACKIMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BATTLERANK_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::Boolean get_IsProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_ISPROTECTED_OFFSET))(this);
		}

		::System::Void set_IsProtected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_ISPROTECTED_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGAVATARID_OFFSET))(this);
		}

		::System::Void set_BelongAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_VERSION_OFFSET))(this, value);
		}

		::RPG::Client::IAvatarInfoProvider* get_BelongDisplayAvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_BELONGDISPLAYAVATARDATA_OFFSET))(this);
		}

		::System::Void set_BelongDisplayAvatarData(::RPG::Client::IAvatarInfoProvider* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_BELONGDISPLAYAVATARDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_LevelUpedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_LEVELUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_LEVELUPEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_PromotedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_PROMOTEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_PROMOTEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::EquipmentGrowUpBeforeData* get_RankUpedBeforeData()
		{
			return ((::RPG::Client::EquipmentGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_GET_RANKUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_RankUpedBeforeData(::RPG::Client::EquipmentGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTITEMDATA_SET_RANKUPEDBEFOREDATA_OFFSET))(this, value);
		}
	};
}
