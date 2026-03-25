#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarRowWrapperDeriveType.h"
#include "unitysdk/RPG/GameCore/AvatarSkillTreePointTriggerKey.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/Struct_2_2D4CFA76DB950A9A.h"
#include "unitysdk/Struct_2_88A74A9E9AE5BA51.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
class Class_1_139779B4AD4540D7;
class Class_1_4AAB34DEAFC894B3;
class Class_1_7AB88D713F5121B3_38;
class Class_2_9D2DEA765AF5C2B0;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class AvatarSkillTreeRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class CharacterConfig; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class IAvatarPromotionCommonRowWrap; }
namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class ServantRowData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET UNITYSDK_OFFSET(0xA882230)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xA87D840)
#define RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET UNITYSDK_OFFSET(0xA87D270)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET UNITYSDK_OFFSET(0xA8827B0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET UNITYSDK_OFFSET(0xA882760)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET UNITYSDK_OFFSET(0xA8826D0)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET UNITYSDK_OFFSET(0xA882800)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET UNITYSDK_OFFSET(0xA880F10)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET UNITYSDK_OFFSET(0xA87DC50)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET UNITYSDK_OFFSET(0xA87D690)
#define RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET UNITYSDK_OFFSET(0xA87D220)
#define RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET UNITYSDK_OFFSET(0xA881A80)
#define RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET UNITYSDK_OFFSET(0xA881250)
#define RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET UNITYSDK_OFFSET(0xA879B80)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xA87D2B0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xA8824A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET UNITYSDK_OFFSET(0xA881C60)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0xA880FF0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET UNITYSDK_OFFSET(0xA881BA0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET UNITYSDK_OFFSET(0xA8823A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xA87B9D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0xA881570)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET UNITYSDK_OFFSET(0xA881450)
#define RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET UNITYSDK_OFFSET(0xA881460)
#define RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xA8817C0)
#define RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xA881070)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0xA87ACC0)
#define RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0xA87AF40)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET UNITYSDK_OFFSET(0xA881F80)
#define RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA881E80)
#define RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET UNITYSDK_OFFSET(0xA87A140)
#define RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xA881030)
#define RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET UNITYSDK_OFFSET(0xA881060)
#define RPG_GAMECORE_AVATARROWDATA_GET_EXTRAAVATARBASETYPE_OFFSET UNITYSDK_OFFSET(0xA8821D0)
#define RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET UNITYSDK_OFFSET(0xA882170)
#define RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA8819C0)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET UNITYSDK_OFFSET(0xA881720)
#define RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET UNITYSDK_OFFSET(0xA881470)
#define RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET UNITYSDK_OFFSET(0xA881900)
#define RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET UNITYSDK_OFFSET(0xA882490)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0xA881150)
#define RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET UNITYSDK_OFFSET(0xA881000)
#define RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA881340)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xA8795C0)
#define RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET UNITYSDK_OFFSET(0xA881660)
#define RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0xA881480)
#define RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0xA881770)
#define RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET UNITYSDK_OFFSET(0xA881D90)
#define RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET UNITYSDK_OFFSET(0xA8824F0)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET UNITYSDK_OFFSET(0xA881020)
#define RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0xA881050)
#define RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0xA881040)
#define RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA881350)
#define RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET UNITYSDK_OFFSET(0xA8816A0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xA881A20)
#define RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA880FB0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA881AE0)
#define RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET UNITYSDK_OFFSET(0xA881430)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0xA881010)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA87A700)
#define RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET UNITYSDK_OFFSET(0xA882070)
#define RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET UNITYSDK_OFFSET(0xA8816E0)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0xA881440)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA881C00)
#define RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0xA8773B0)
#define RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xA881B40)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA87F3B0)
#define RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET UNITYSDK_OFFSET(0xA876C50)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET UNITYSDK_OFFSET(0xA8804C0)
#define RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET UNITYSDK_OFFSET(0xA881CB0)
#define RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xA880FC0)
#define RPG_GAMECORE_AVATARROWDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA883090)
#define RPG_GAMECORE_AVATARROWDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA87F3A0)
#define RPG_GAMECORE_AVATARROWDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA876C40)
#define RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET UNITYSDK_OFFSET(0xA87FA90)
#define RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET UNITYSDK_OFFSET(0xA882A00)
#define RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA880620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRowData_TypeDefinitionIndex = 45808;

	class AvatarRowData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRowData_TypeDefinitionIndex)->GetStaticField(0x46230);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>** StaticGet__TmpSkillRowList()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::IAvatarSkillCommonRowWrap*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarRowData_TypeDefinitionIndex)->GetStaticField(0x46238);
		}
		::RPG::GameCore::SpecialAvatarRow* _SpecialRow; // 0x10
		::RPG::GameCore::CharacterConfig* _Json; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* _SkillRowDatas; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* _SkillTreePropertyMap; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* _RankConfigTriggerKeMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _SkillTreeSkillLevelMap; // 0x38
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* _SkillTreeDataList; // 0x40
		::RPG::GameCore::IAvatarCommonRowWrap* _Row; // 0x48
		::RPG::GameCore::ServantRowData* _PreviewServantRowData; // 0x50
		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* _BattleEquipmentList; // 0x58
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig; // 0x60
		::Class_1_139779B4AD4540D7* _BattleRelicItemModule; // 0x68
		::Struct_2_88A74A9E9AE5BA51 _OverrideDisplay; // 0x70
		::RPG::Client::IAvatarInfoProvider* _Avatar; // 0xD0
		::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* _ChangedSkillTreeDataList; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* _SkillTreeTriggerKeyMap; // 0xE0
		::RPG::GameCore::IAvatarPromotionCommonRowWrap* _PromotionRow; // 0xE8
		::Struct_2_2D4CFA76DB950A9A _OverrideData; // 0xF0
		::System::UInt32 _EquipExtraRank; // 0x118
		::System::UInt32 _EnhancedID; // 0x11C
		::System::Boolean _IsAssistantAvatar; // 0x120
		::RPG::GameCore::AvatarBaseType _ExtraAvatarBaseType; // 0x124
		::System::UInt32 _Promotion; // 0x128
		::System::UInt32 _Level; // 0x12C
		::System::UInt32 _Rank; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::IAvatarInfoProvider* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CTOR_1_OFFSET))(this, avatarData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__CCTOR_OFFSET))();
		}

		::System::Void InitFromAvatarData(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMAVATARDATA_OFFSET))(this, avatar);
		}

		::System::Void InitFromCreateParams(::Class_2_9D2DEA765AF5C2B0* createParams)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_9D2DEA765AF5C2B0*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_INITFROMCREATEPARAMS_OFFSET))(this, createParams);
		}

		::System::Void _InitData(::System::UInt32 characterID, ::RPG::GameCore::CharacterConfig* jsonConfig, ::System::UInt32 rank, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 specialAvatarID, ::System::UInt32 enhancedID, ::System::UInt32 worldLevel, ::System::Boolean isAssistantAvatar, ::RPG::GameCore::AvatarRowWrapperDeriveType avatarDeriveType, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* skillTreeDataList, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>* changedSkillTreeDataList, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* battleEquipmentList, ::Class_1_139779B4AD4540D7* battleRelicItemModule, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* battleExtraPropertyAdditionDict, ::RPG::GameCore::BattleGridFightAvatarData* battleGridAvatarData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::CharacterConfig*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::AvatarRowWrapperDeriveType, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>*, ::System::Collections::Generic::List_1<::Class_1_7AB88D713F5121B3_38*>*, ::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*, ::Class_1_139779B4AD4540D7*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__INITDATA_OFFSET))(this, characterID, jsonConfig, rank, promotion, level, specialAvatarID, enhancedID, worldLevel, isAssistantAvatar, avatarDeriveType, skillTreeDataList, changedSkillTreeDataList, battleEquipmentList, battleRelicItemModule, battleExtraPropertyAdditionDict, battleGridAvatarData);
		}

		::System::UInt32 GetSkillTreePointLevel(::System::UInt32 skillTreePointID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPOINTLEVEL_OFFSET))(this, skillTreePointID);
		}

		::System::Object* get_Row()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_AvatarRow()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterConfig* get_Json()
		{
			return ((::RPG::GameCore::CharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSON_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* get_SpecialRow()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPECIALROW_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_13* get_PromotionRow()
		{
			return ((::Class_0_16E4307DCC419505_13*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTIONROW_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RANK_OFFSET))(this);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::UInt32 get_EquipExtraRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_EQUIPEXTRARANK_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_JSONPATH_OFFSET))(this);
		}

		::System::String* get_AIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AIPATH_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_LEVEL_OFFSET))(this);
		}

		::RPG::GameCore::CombatPowerAvatarRarityType get_Rarity()
		{
			return ((::RPG::GameCore::CombatPowerAvatarRarityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RARITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* get_SkillRowDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SKILLROWDATAS_OFFSET))(this);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>* get_BattleEquipmentList()
		{
			return ((::Il2CppArray<::Class_1_4AAB34DEAFC894B3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLEEQUIPMENTLIST_OFFSET))(this);
		}

		::Class_1_139779B4AD4540D7* get_BattleRelicItemModule()
		{
			return ((::Class_1_139779B4AD4540D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BATTLERELICITEMMODULE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Attack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ATTACK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Defence()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DEFENCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Speed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPEED_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_BASEAGGRO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_MaxStance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MAXSTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Resistance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_RESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_StatusProbability()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_STATUSPROBABILITY_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_InitActionDelayRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INITACTIONDELAYRATIO_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_MODELPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_CharacterName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_CHARACTERNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Introduction()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_INTRODUCTION_OFFSET))(this);
		}

		::System::String* get_HeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HEADICONPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_ActionIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ACTIONICONPATH_OFFSET))(this);
		}

		::System::String* get_SideAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SIDEAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarSideIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARSIDEICONPATH_OFFSET))(this);
		}

		::System::String* get_UltraSkillCutInPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ULTRASKILLCUTINPREFABPATH_OFFSET))(this);
		}

		::System::String* get_AvatarMiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARMINIICONPATH_OFFSET))(this);
		}

		::System::Void OverrideDisplay(::Struct_2_88A74A9E9AE5BA51 overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_88A74A9E9AE5BA51))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDISPLAY_OFFSET))(this, overrideData);
		}

		::System::UInt32 get_NatureID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_NATUREID_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* get_DamageTypeResistance()
		{
			return ((::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_DAMAGETYPERESISTANCE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_SPNeed()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_SPNEED_OFFSET))(this);
		}

		::System::Boolean get_HaveActionDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_HAVEACTIONDELAY_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_AvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_ExtraAvatarBaseType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_EXTRAAVATARBASETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseTypeMask GetAvatarBaseTypeMask(::RPG::GameCore::AvatarBaseTypeKind kind)
		{
			return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::PVOID, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETAVATARBASETYPEMASK_OFFSET))(this, kind);
		}

		::System::String* get_AvatarVOTag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARVOTAG_OFFSET))(this);
		}

		::System::Boolean get_IsAssistantAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_ISASSISTANTAVATAR_OFFSET))(this);
		}

		::System::Void OverrideData(::Struct_2_2D4CFA76DB950A9A overrideData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_2D4CFA76DB950A9A))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_OVERRIDEDATA_OFFSET))(this, overrideData);
		}

		::RPG::Client::AvatarData* get_AvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATARDATA_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* get_Avatar()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_AVATAR_OFFSET))(this);
		}

		::RPG::GameCore::ServantRowData* get_PreviewServantRowData()
		{
			return ((::RPG::GameCore::ServantRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GET_PREVIEWSERVANTROWDATA_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowData(::System::Int32 nSkillIndex)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATA_OFFSET))(this, nSkillIndex);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByName(::System::String* skillName)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYNAME_OFFSET))(this, skillName);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetSkillRowDataByID(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLROWDATABYID_OFFSET))(this, skillID);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>* GetSkillTreeRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::AvatarSkillTreeRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>* GetRankRowMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::AvatarRankConfigRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKROWMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetSkillTreePropertyMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEPROPERTYMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* GetSkillTreeLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREELEVELMAP_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkillTreeRow* GetSkillTreeRowByTriggerKey(::RPG::GameCore::AvatarSkillTreePointTriggerKey pTriggerKey)
		{
			return ((::RPG::GameCore::AvatarSkillTreeRow*(*)(::PVOID, ::RPG::GameCore::AvatarSkillTreePointTriggerKey))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETSKILLTREEROWBYTRIGGERKEY_OFFSET))(this, pTriggerKey);
		}

		::RPG::GameCore::AvatarRankConfigRow* GetRankConfigRowByTriggerKey(::RPG::GameCore::StringHash pTriggerKey)
		{
			return ((::RPG::GameCore::AvatarRankConfigRow*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA_GETRANKCONFIGROWBYTRIGGERKEY_OFFSET))(this, pTriggerKey);
		}

		::System::Void _SetupSkillList(::Il2CppArray<::System::UInt32>* SkillIdList, ::Il2CppArray<::System::UInt32>* inheritedSkillList)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__SETUPSKILLLIST_OFFSET))(this, SkillIdList, inheritedSkillList);
		}

		::System::Void _OverrideSkillHideInUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROWDATA__OVERRIDESKILLHIDEINUI_OFFSET))(this);
		}
	};
}
