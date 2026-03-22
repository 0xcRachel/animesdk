#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/Enum_3_84F790F6B4BFF34E_1.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_137AB23E3A00ECA1.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"

class Class_1_15951C7ACBFF8B93;
class Class_1_41DBE96B21EF1572;
class Class_1_52AE8D741A62A8F4;
class Class_1_6E708EAB438EC183_5;
class Class_1_BB4B99DE4C2501EC_3;
class Class_1_D7C2741BD4C51006;
class Class_1_F3CA30716D4FAF92_2;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_144;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class AvatarEnhancedHint; }
namespace RPG::Client { class AvatarOutfit; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::Client::OpenWorld { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARMODULE_ADDAVATARSKINDATACACHE_OFFSET UNITYSDK_OFFSET(0x8CF9C10)
#define RPG_CLIENT_AVATARMODULE_ADDTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x8CFD980)
#define RPG_CLIENT_AVATARMODULE_BUILDCHALLENGEUPGRADEDAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x8CF76E0)
#define RPG_CLIENT_AVATARMODULE_BUILDSKILLTREESANDSKILLS_OFFSET UNITYSDK_OFFSET(0x8CFC4D0)
#define RPG_CLIENT_AVATARMODULE_BUILDUPGRADEDAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x8CFB850)
#define RPG_CLIENT_AVATARMODULE_CHANGEMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x8CFD1A0)
#define RPG_CLIENT_AVATARMODULE_CHECKPLAYERHASAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFE530)
#define RPG_CLIENT_AVATARMODULE_CLEARENHANCEREDDOT_OFFSET UNITYSDK_OFFSET(0x8CF83C0)
#define RPG_CLIENT_AVATARMODULE_CREATEPLAYERAVATARCLONEBYREALID_OFFSET UNITYSDK_OFFSET(0x8CF8CF0)
#define RPG_CLIENT_AVATARMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CFED10)
#define RPG_CLIENT_AVATARMODULE_FORMATDISPLAYDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8CE79C0)
#define RPG_CLIENT_AVATARMODULE_GETALLAVATARSKINSENUMURATOR_OFFSET UNITYSDK_OFFSET(0x8CF9E90)
#define RPG_CLIENT_AVATARMODULE_GETALLAVATARS_OFFSET UNITYSDK_OFFSET(0x8CFE920)
#define RPG_CLIENT_AVATARMODULE_GETASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFD330)
#define RPG_CLIENT_AVATARMODULE_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x8CFD6E0)
#define RPG_CLIENT_AVATARMODULE_GETAVATAR_1_OFFSET UNITYSDK_OFFSET(0x8CFD0A0)
#define RPG_CLIENT_AVATARMODULE_GETAVATAR_OFFSET UNITYSDK_OFFSET(0x8CD51F0)
#define RPG_CLIENT_AVATARMODULE_GETCHALLENGEUPGRADEDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CF7650)
#define RPG_CLIENT_AVATARMODULE_GETCOMMONUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x8CF9F30)
#define RPG_CLIENT_AVATARMODULE_GETCURRENTRANK_OFFSET UNITYSDK_OFFSET(0x8CFE6E0)
#define RPG_CLIENT_AVATARMODULE_GETDEFAULTUPGRADEAVATARSET2ID_OFFSET UNITYSDK_OFFSET(0x8CCD1C0)
#define RPG_CLIENT_AVATARMODULE_GETDEFAULTUPGRADEAVATARSET4ID_OFFSET UNITYSDK_OFFSET(0x8CCCD90)
#define RPG_CLIENT_AVATARMODULE_GETMAXPOWERAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFDD40)
#define RPG_CLIENT_AVATARMODULE_GETMAXRANK_OFFSET UNITYSDK_OFFSET(0x8CFE620)
#define RPG_CLIENT_AVATARMODULE_GETMULTIPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFA800)
#define RPG_CLIENT_AVATARMODULE_GETMULTIPATHPLAYERAVATAR_OFFSET UNITYSDK_OFFSET(0x8CF8A70)
#define RPG_CLIENT_AVATARMODULE_GETRANKITEMID_OFFSET UNITYSDK_OFFSET(0x8CFE4A0)
#define RPG_CLIENT_AVATARMODULE_GETRECOMMENDRELICAVATARPROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x8CCCF70)
#define RPG_CLIENT_AVATARMODULE_GETTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFD620)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFA440)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEAVATARSUBRELICROW_OFFSET UNITYSDK_OFFSET(0x8CCD0F0)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEDAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8CFB070)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEDAVATARPROMOTION_OFFSET UNITYSDK_OFFSET(0x8CFB170)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEDEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CFB280)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADEDRANK_OFFSET UNITYSDK_OFFSET(0x8CFC9D0)
#define RPG_CLIENT_AVATARMODULE_GETUPGRADERELICID_OFFSET UNITYSDK_OFFSET(0x8CCCE90)
#define RPG_CLIENT_AVATARMODULE_GET_ALLAVATARSKINS_OFFSET UNITYSDK_OFFSET(0x8CF9E70)
#define RPG_CLIENT_AVATARMODULE_GET_ALLAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02820)
#define RPG_CLIENT_AVATARMODULE_GET_ALLMULTIPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02860)
#define RPG_CLIENT_AVATARMODULE_GET_ALLSPECIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02840)
#define RPG_CLIENT_AVATARMODULE_GET_ENHANCEREDDOTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8CF8000)
#define RPG_CLIENT_AVATARMODULE_GET_ENHANCEREDDOTTRIALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x8CF8430)
#define RPG_CLIENT_AVATARMODULE_GET_GROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0x8D02880)
#define RPG_CLIENT_AVATARMODULE_GET_GROWTHTARGETINCLUDEALLSKILLTREE_OFFSET UNITYSDK_OFFSET(0x8D028A0)
#define RPG_CLIENT_AVATARMODULE_GET_ISSHOWENHANCECHANGESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x8CF89B0)
#define RPG_CLIENT_AVATARMODULE_GET_LASTSEENENHANCESEASON_OFFSET UNITYSDK_OFFSET(0x8CF7D20)
#define RPG_CLIENT_AVATARMODULE_GET_MAXENHANCEDSEASON_OFFSET UNITYSDK_OFFSET(0x8CF7E90)
#define RPG_CLIENT_AVATARMODULE_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x8D02920)
#define RPG_CLIENT_AVATARMODULE_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x8CFDB90)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATARBYID_OFFSET UNITYSDK_OFFSET(0x8CFA5E0)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8CFA980)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFA8C0)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CFAA80)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERANK_OFFSET UNITYSDK_OFFSET(0x8CFAEB0)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELICSET2_OFFSET UNITYSDK_OFFSET(0x8CFB700)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELICSET4_OFFSET UNITYSDK_OFFSET(0x8CFB550)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELIC_OFFSET UNITYSDK_OFFSET(0x8CFABA0)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADESKILLPOINT_OFFSET UNITYSDK_OFFSET(0x8CFC3B0)
#define RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADESKILLTREE_OFFSET UNITYSDK_OFFSET(0x8CFAC00)
#define RPG_CLIENT_AVATARMODULE_ISOWNSKIN_OFFSET UNITYSDK_OFFSET(0x8CF99E0)
#define RPG_CLIENT_AVATARMODULE_ISSKINNEW_OFFSET UNITYSDK_OFFSET(0x8CF9A50)
#define RPG_CLIENT_AVATARMODULE_NEEDSHOWUPGRADEINLINEUP_OFFSET UNITYSDK_OFFSET(0x8CFA3E0)
#define RPG_CLIENT_AVATARMODULE_REFRESHENHANCEREDDOT_OFFSET UNITYSDK_OFFSET(0x8CF8020)
#define RPG_CLIENT_AVATARMODULE_REFRESHENHANCETRIALSTAGEREDDOT_OFFSET UNITYSDK_OFFSET(0x8CF8440)
#define RPG_CLIENT_AVATARMODULE_REMOVEENHANCEREDDOT_OFFSET UNITYSDK_OFFSET(0x8CF8330)
#define RPG_CLIENT_AVATARMODULE_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x8CFDBE0)
#define RPG_CLIENT_AVATARMODULE_SETGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x8CFE2C0)
#define RPG_CLIENT_AVATARMODULE_SETTEMPADVENTUREAVATARS_OFFSET UNITYSDK_OFFSET(0x8CFD3E0)
#define RPG_CLIENT_AVATARMODULE_SET_ALLAVATARSKINS_OFFSET UNITYSDK_OFFSET(0x8CF9E80)
#define RPG_CLIENT_AVATARMODULE_SET_ALLAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02830)
#define RPG_CLIENT_AVATARMODULE_SET_ALLMULTIPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02870)
#define RPG_CLIENT_AVATARMODULE_SET_ALLSPECIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8D02850)
#define RPG_CLIENT_AVATARMODULE_SET_ENHANCEREDDOTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8CF8010)
#define RPG_CLIENT_AVATARMODULE_SET_GROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0x8D02890)
#define RPG_CLIENT_AVATARMODULE_SET_ISSHOWENHANCECHANGESIMPLEDESC_OFFSET UNITYSDK_OFFSET(0x8CF8A10)
#define RPG_CLIENT_AVATARMODULE_SET_LASTSEENENHANCESEASON_OFFSET UNITYSDK_OFFSET(0x8CF7DD0)
#define RPG_CLIENT_AVATARMODULE_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x8CFE7E0)
#define RPG_CLIENT_AVATARMODULE_TRYGETAVATARSKINDATACACHE_OFFSET UNITYSDK_OFFSET(0x8CF9B80)
#define RPG_CLIENT_AVATARMODULE_TRYGETTRIALAVATARSBYIDS_OFFSET UNITYSDK_OFFSET(0x8CFE030)
#define RPG_CLIENT_AVATARMODULE_UPDATEAVATAREQUIP_OFFSET UNITYSDK_OFFSET(0x8CFDF30)
#define RPG_CLIENT_AVATARMODULE_UPDATERELICSET_OFFSET UNITYSDK_OFFSET(0x8CFDFA0)
#define RPG_CLIENT_AVATARMODULE_UPDATESKINNEW_OFFSET UNITYSDK_OFFSET(0x8CF9AE0)
#define RPG_CLIENT_AVATARMODULE_UPGRADESKILL_1_OFFSET UNITYSDK_OFFSET(0x8CF9540)
#define RPG_CLIENT_AVATARMODULE_UPGRADESKILL_OFFSET UNITYSDK_OFFSET(0x8CF9240)
#define RPG_CLIENT_AVATARMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8CFF270)
#define RPG_CLIENT_AVATARMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8CFEDD0)
#define RPG_CLIENT_AVATARMODULE__CREATEPLAYERAVATARBYREALID_OFFSET UNITYSDK_OFFSET(0x8CF8C00)
#define RPG_CLIENT_AVATARMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8CFCAE0)
#define RPG_CLIENT_AVATARMODULE__DISPOSEUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFA340)
#define RPG_CLIENT_AVATARMODULE__HASPATHSERVERDATA_OFFSET UNITYSDK_OFFSET(0x8CF8D40)
#define RPG_CLIENT_AVATARMODULE__HASROLESERVERDATA_OFFSET UNITYSDK_OFFSET(0x8D02570)
#define RPG_CLIENT_AVATARMODULE__NOTIFYADDNEWAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D01050)
#define RPG_CLIENT_AVATARMODULE__ONAVATARSYNCDATA_OFFSET UNITYSDK_OFFSET(0x8D024B0)
#define RPG_CLIENT_AVATARMODULE__ONCMDADDAVATARSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8D00DE0)
#define RPG_CLIENT_AVATARMODULE__ONCMDAVATAREXPUPSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01C20)
#define RPG_CLIENT_AVATARMODULE__ONCMDAVATARSPECIALSKILLTREEUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8D021B0)
#define RPG_CLIENT_AVATARMODULE__ONCMDDRESSAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01F50)
#define RPG_CLIENT_AVATARMODULE__ONCMDDRESSAVATARSKINSCRSP_OFFSET UNITYSDK_OFFSET(0x8CF9CA0)
#define RPG_CLIENT_AVATARMODULE__ONCMDDRESSRELICAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D02070)
#define RPG_CLIENT_AVATARMODULE__ONCMDGETAVATARDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8CFF390)
#define RPG_CLIENT_AVATARMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8D00BB0)
#define RPG_CLIENT_AVATARMODULE__ONCMDPROMOTEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01E20)
#define RPG_CLIENT_AVATARMODULE__ONCMDRANKUPAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D02010)
#define RPG_CLIENT_AVATARMODULE__ONCMDSETAVATARENHANCEDIDSCRSP_OFFSET UNITYSDK_OFFSET(0x8CF7C70)
#define RPG_CLIENT_AVATARMODULE__ONCMDSETPLAYEROUTFITSCRSP_OFFSET UNITYSDK_OFFSET(0x8D02240)
#define RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFAVATARSKINSCRSP_OFFSET UNITYSDK_OFFSET(0x8CF9D30)
#define RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFEQUIPMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01FB0)
#define RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFRELICSCRSP_OFFSET UNITYSDK_OFFSET(0x8D020D0)
#define RPG_CLIENT_AVATARMODULE__ONCMDTAKEPROMOTIONREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x8D02130)
#define RPG_CLIENT_AVATARMODULE__ONCMDUNLOCKAVATARSKINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8CF9DC0)
#define RPG_CLIENT_AVATARMODULE__ONCMDUNLOCKSKILLTREESCRSP_OFFSET UNITYSDK_OFFSET(0x8D01E80)
#define RPG_CLIENT_AVATARMODULE__ONGROWTHTARGETAVATARCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8D01910)
#define RPG_CLIENT_AVATARMODULE__ONMARKAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01190)
#define RPG_CLIENT_AVATARMODULE__ONSETGROWTHTARGETAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x8D01220)
#define RPG_CLIENT_AVATARMODULE__ONWORLDLEVELUP_OFFSET UNITYSDK_OFFSET(0x8D022E0)
#define RPG_CLIENT_AVATARMODULE__REFRESHUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x8CFA1D0)
#define RPG_CLIENT_AVATARMODULE__SENDAVATARSYNCDATA_OFFSET UNITYSDK_OFFSET(0x8D02510)
#define RPG_CLIENT_AVATARMODULE__SETPLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x8D02630)
#define RPG_CLIENT_AVATARMODULE__SYNCALLAVATARS_OFFSET UNITYSDK_OFFSET(0x8D000D0)
#define RPG_CLIENT_AVATARMODULE__SYNCAVATAR_OFFSET UNITYSDK_OFFSET(0x8CF8DD0)
#define RPG_CLIENT_AVATARMODULE__SYNCFORMALMULTIPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x8CF9000)
#define RPG_CLIENT_AVATARMODULE__SYNCMULTIPATHAVATARS_OFFSET UNITYSDK_OFFSET(0x8D00640)
#define RPG_CLIENT_AVATARMODULE__UPDATEAVATARPATHSERVERDATACACHE_OFFSET UNITYSDK_OFFSET(0x8CFFD60)
#define RPG_CLIENT_AVATARMODULE__UPDATEAVATARROLESERVERDATACACHE_OFFSET UNITYSDK_OFFSET(0x8CFF9F0)
#define RPG_CLIENT_AVATARMODULE__UPDATENEWAVATARREDDOT_OFFSET UNITYSDK_OFFSET(0x8D00FE0)
#define RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D02930)
#define RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D029A0)
#define RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8D02940)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarModule_TypeDefinitionIndex = 49618;

	class AvatarModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* _AllUpgradedAvatars; // 0x10
		::RPG::Client::AvatarOutfit* _PlayerOutfit_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _AvatarRankItemIDs; // 0x20
		::System::Collections::Generic::List_1<::Enum_3_84F790F6B4BFF34E_1>* _GrowthTargetFuncTypeList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _AllAvatarSkins_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* _AllSpecialAvatars_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceRedDotAvatarIDs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* _AllAvatars_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BB4B99DE4C2501EC_3*>* _AvatarRoleServerDataCache; // 0x50
		::Class_1_15951C7ACBFF8B93* _PlayerOutfitServerAgent; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_F3CA30716D4FAF92_2*>* _AvatarPathServerDataCache; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* _AllMultiPathAvatars_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* _AllNoSyncPlayerMultiPathAvatars; // 0x70
		::RPG::GameCore::GameEntity* AvatarUI3DPageShowingAvatar; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _EnhanceRedDotTrialStageIDs_k__BackingField; // 0x80
		::RPG::Client::OpenWorld::LRUCache_2<::Struct_2_137AB23E3A00ECA1, ::RPG::Client::IAvatarSkinData*>* _AvatarSkinDataCache; // 0x88
		::System::UInt32 _GrowthTargetAvatarID_k__BackingField; // 0x90
		::System::UInt32 _MaxEnhancedSeason; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EquipmentItemData* GetChallengeUpgradedEquipment(::RPG::Client::AvatarData* originAvatarData, ::Class_1_FA4F4A67B1C04320_144* equipmentSnapShot)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::Client::AvatarData*, ::Class_1_FA4F4A67B1C04320_144*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETCHALLENGEUPGRADEDEQUIPMENT_OFFSET))(originAvatarData, equipmentSnapShot);
		}

		static ::System::Void BuildChallengeUpgradedAvatarRelic(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData, ::Class_1_52AE8D741A62A8F4* relicSnapShot)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_BUILDCHALLENGEUPGRADEDAVATARRELIC_OFFSET))(pAvatarData, originAvatarData, relicSnapShot);
		}

		::System::Void _OnCmdSetAvatarEnhancedIdScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDSETAVATARENHANCEDIDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 get_LastSeenEnhanceSeason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_LASTSEENENHANCESEASON_OFFSET))(this);
		}

		::System::Void set_LastSeenEnhanceSeason(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_LASTSEENENHANCESEASON_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxEnhancedSeason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_MAXENHANCEDSEASON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhanceRedDotAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ENHANCEREDDOTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_EnhanceRedDotAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ENHANCEREDDOTAVATARIDS_OFFSET))(this, value);
		}

		::System::Void RefreshEnhanceRedDot(::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarEnhancedHint*>* hints)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::AvatarEnhancedHint*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_REFRESHENHANCEREDDOT_OFFSET))(this, hints);
		}

		::System::Boolean RemoveEnhanceRedDot(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_REMOVEENHANCEREDDOT_OFFSET))(this, avatarID);
		}

		::System::Void ClearEnhanceRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_CLEARENHANCEREDDOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnhanceRedDotTrialStageIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ENHANCEREDDOTTRIALSTAGEIDS_OFFSET))(this);
		}

		::System::Void RefreshEnhanceTrialStageRedDot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_REFRESHENHANCETRIALSTAGEREDDOT_OFFSET))(this);
		}

		::System::Boolean get_IsShowEnhanceChangeSimpleDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ISSHOWENHANCECHANGESIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_IsShowEnhanceChangeSimpleDesc(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ISSHOWENHANCECHANGESIMPLEDESC_OFFSET))(this, value);
		}

		::RPG::Client::AvatarData* GetMultiPathPlayerAvatar(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETMULTIPATHPLAYERAVATAR_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::AvatarData* CreatePlayerAvatarCloneByRealID(::System::UInt32 avatarRealID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_CREATEPLAYERAVATARCLONEBYREALID_OFFSET))(this, avatarRealID);
		}

		::RPG::Client::AvatarData* _CreatePlayerAvatarByRealID(::System::UInt32 realID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__CREATEPLAYERAVATARBYREALID_OFFSET))(this, realID);
		}

		::System::Void _SyncFormalMultiPathAvatars(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataList, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>* avatarUniqueDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SYNCFORMALMULTIPATHAVATARS_OFFSET))(this, avatarBaseDataList, avatarUniqueDataList);
		}

		::System::Void UpgradeSkill(::System::UInt32 pointID, ::System::UInt32 currentLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_UPGRADESKILL_OFFSET))(this, pointID, currentLevel);
		}

		::System::Void UpgradeSkill_1(::System::UInt32 pointID, ::System::UInt32 currentLevel, ::System::UInt32 additionalMaterialID, ::System::UInt32 additionalMaterialNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_UPGRADESKILL_1_OFFSET))(this, pointID, currentLevel, additionalMaterialID, additionalMaterialNum);
		}

		::System::Boolean IsOwnSkin(::System::UInt32 skinID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISOWNSKIN_OFFSET))(this, skinID);
		}

		::System::Boolean IsSkinNew(::System::UInt32 skinID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISSKINNEW_OFFSET))(this, skinID);
		}

		::System::Void UpdateSkinNew(::System::UInt32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_UPDATESKINNEW_OFFSET))(this, skinID);
		}

		::System::Boolean TryGetAvatarSkinDataCache(::Struct_2_137AB23E3A00ECA1& skinDataRefKey, ::RPG::Client::IAvatarSkinData*& avatarSkinData)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1&, ::RPG::Client::IAvatarSkinData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_TRYGETAVATARSKINDATACACHE_OFFSET))(this, skinDataRefKey, avatarSkinData);
		}

		::System::Void AddAvatarSkinDataCache(::Struct_2_137AB23E3A00ECA1& skinDataRefKey, ::RPG::Client::IAvatarSkinData* avatarSkinData)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_137AB23E3A00ECA1&, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ADDAVATARSKINDATACACHE_OFFSET))(this, skinDataRefKey, avatarSkinData);
		}

		::System::Void _OnCmdDressAvatarSkinScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDDRESSAVATARSKINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeOffAvatarSkinScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFAVATARSKINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUnlockAvatarSkinScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDUNLOCKAVATARSKINSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* get_AllAvatarSkins()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ALLAVATARSKINS_OFFSET))(this);
		}

		::System::Void set_AllAvatarSkins(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ALLAVATARSKINS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::System::Boolean> GetAllAvatarSkinsEnumurator()
		{
			return ((::System::Collections::Generic::Dictionary_2_Enumerator<::System::UInt32, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETALLAVATARSKINSENUMURATOR_OFFSET))(this);
		}

		::RPG::Client::AvatarData* GetCommonUpgradeAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETCOMMONUPGRADEAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void _RefreshUpgradeAvatar(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__REFRESHUPGRADEAVATAR_OFFSET))(this, param);
		}

		::System::Void _DisposeUpgradeAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__DISPOSEUPGRADEAVATAR_OFFSET))(this);
		}

		static ::System::Boolean NeedShowUpgradeInLineup(::Enum_3_63C076C405BE0674_2 lineupType)
		{
			return ((::System::Boolean(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_NEEDSHOWUPGRADEINLINEUP_OFFSET))(lineupType);
		}

		static ::RPG::Client::AvatarData* GetUpgradeAvailableAvatar(::Enum_3_63C076C405BE0674_2 lineupType, ::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::Enum_3_63C076C405BE0674_2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEAVAILABLEAVATAR_OFFSET))(lineupType, avatarID);
		}

		static ::System::Boolean IsNeedUpgradeAvatarByID(::System::UInt32 originAvatarRealID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATARBYID_OFFSET))(originAvatarRealID);
		}

		static ::System::Boolean IsNeedUpgradeAvatar(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATAR_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEAVATARLEVEL_OFFSET))(originAvatarData);
		}

		static ::System::UInt32 GetUpgradedAvatarLevel(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEDAVATARLEVEL_OFFSET))(originAvatarData);
		}

		static ::System::UInt32 GetUpgradedAvatarPromotion(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEDAVATARPROMOTION_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADEEQUIPMENT_OFFSET))(originAvatarData);
		}

		static ::RPG::Client::EquipmentItemData* GetUpgradedEquipment(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEDEQUIPMENT_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeRelic(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELIC_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeRelicSet4(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELICSET4_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeRelicSet2(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERELICSET2_OFFSET))(avatarData);
		}

		static ::System::Void BuildUpgradedAvatarRelic(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_BUILDUPGRADEDAVATARRELIC_OFFSET))(pAvatarData, originAvatarData);
		}

		static ::RPG::GameCore::AvatarPropertyType GetRecommendRelicAvatarPropertyType(::RPG::GameCore::RelicType relicType, ::RPG::GameCore::AvatarRelicRecommendRow* recommendRow)
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::RPG::GameCore::RelicType, ::RPG::GameCore::AvatarRelicRecommendRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETRECOMMENDRELICAVATARPROPERTYTYPE_OFFSET))(relicType, recommendRow);
		}

		static ::System::UInt32 GetUpgradeRelicID(::System::UInt32 relicSetID, ::RPG::GameCore::RelicType relicType, ::RPG::GameCore::CombatPowerRelicRarityType rarityType)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::RelicType, ::RPG::GameCore::CombatPowerRelicRarityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADERELICID_OFFSET))(relicSetID, relicType, rarityType);
		}

		static ::System::UInt32 GetDefaultUpgradeAvatarSet4ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETDEFAULTUPGRADEAVATARSET4ID_OFFSET))();
		}

		static ::System::UInt32 GetDefaultUpgradeAvatarSet2ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETDEFAULTUPGRADEAVATARSET2ID_OFFSET))();
		}

		static ::Class_1_41DBE96B21EF1572* GetUpgradeAvatarSubRelicRow(::System::UInt32 avatarID, ::RPG::GameCore::CombatPowerRelicRarityType relicRarityType, ::System::UInt32 relicLevel, ::RPG::GameCore::RelicType relicType)
		{
			return ((::Class_1_41DBE96B21EF1572*(*)(::System::UInt32, ::RPG::GameCore::CombatPowerRelicRarityType, ::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEAVATARSUBRELICROW_OFFSET))(avatarID, relicRarityType, relicLevel, relicType);
		}

		static ::System::Boolean IsNeedUpgradeSkillTree(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADESKILLTREE_OFFSET))(originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeSkillPoint(::RPG::Client::AvatarData* avatarData, ::System::UInt32 skillTreePointID)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADESKILLPOINT_OFFSET))(avatarData, skillTreePointID);
		}

		static ::System::Void BuildSkillTreesAndSkills(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_BUILDSKILLTREESANDSKILLS_OFFSET))(pAvatarData, originAvatarData);
		}

		static ::System::Boolean IsNeedUpgradeRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Boolean(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ISNEEDUPGRADERANK_OFFSET))(originAvatarData);
		}

		static ::System::UInt32 GetUpgradedRank(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::UInt32(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETUPGRADEDRANK_OFFSET))(originAvatarData);
		}

		::RPG::Client::AvatarData* GetAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETAVATAR_OFFSET))(this, avatarID);
		}

		::RPG::Client::AvatarData* GetMultiPathAvatar(::System::UInt32 realID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETMULTIPATHAVATAR_OFFSET))(this, realID);
		}

		::RPG::Client::AvatarData* GetAvatar_1(::RPG::Client::AvatarRoleType roleType)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETAVATAR_1_OFFSET))(this, roleType);
		}

		::RPG::Client::AvatarData* ChangeMultiPathAvatarType(::System::UInt32 newAvatarID, ::System::UInt32 enhancedID, ::System::UInt32 nRank, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_11*>* pAvatarSkillTree, ::System::UInt32 skinID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_11*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_CHANGEMULTIPATHAVATARTYPE_OFFSET))(this, newAvatarID, enhancedID, nRank, pAvatarSkillTree, skinID);
		}

		::RPG::Client::AvatarData* GetAssistAvatar(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETASSISTAVATAR_OFFSET))(this, avatarID);
		}

		::System::Void SetTempAdventureAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SETTEMPADVENTUREAVATARS_OFFSET))(this);
		}

		::RPG::Client::AvatarData* GetTrialAvatar(::System::UInt32 trialAdvPlayerId)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETTRIALAVATAR_OFFSET))(this, trialAdvPlayerId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAvatarDataList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETAVATARDATALIST_OFFSET))(this, avatarIDs);
		}

		static ::System::String* FormatDisplayDataByType(::RPG::GameCore::AvatarPropertyType propertyType, ::RPG::GameCore::FixPoint dataValue)
		{
			return ((::System::String*(*)(::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_FORMATDISPLAYDATABYTYPE_OFFSET))(propertyType, dataValue);
		}

		static ::System::Boolean get_PrefsShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))();
		}

		static ::System::Void RevertPrefsShowSimplifiedSkillDesc(::System::String* reason)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))(reason);
		}

		::RPG::Client::AvatarData* GetMaxPowerAvatar(::System::Collections::Generic::List_1<::System::UInt32>* excludedAvatars)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETMAXPOWERAVATAR_OFFSET))(this, excludedAvatars);
		}

		::System::Void UpdateAvatarEquip(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_UPDATEAVATAREQUIP_OFFSET))(this, avatarID);
		}

		::System::Void UpdateRelicSet(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_UPDATERELICSET_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* TryGetTrialAvatarsByIDs(::System::Collections::Generic::List_1<::System::UInt32>* trialAvatarIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_TRYGETTRIALAVATARSBYIDS_OFFSET))(this, trialAvatarIDs);
		}

		::System::Void SetGrowthTarget(::System::UInt32 avatarID, ::System::Boolean includeAllSkillTree, ::System::UInt32 setSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SETGROWTHTARGET_OFFSET))(this, avatarID, includeAllSkillTree, setSource);
		}

		::System::UInt32 GetRankItemID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETRANKITEMID_OFFSET))(this, avatarID);
		}

		::System::Boolean CheckPlayerHasAvatar(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_CHECKPLAYERHASAVATAR_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetMaxRank(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETMAXRANK_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetCurrentRank(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETCURRENTRANK_OFFSET))(this, avatarID);
		}

		::System::Void SwitchTeamAssociationShowState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SWITCHTEAMASSOCIATIONSHOWSTATE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAllAvatars(::System::Boolean includeNotObtained)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GETALLAVATARS_OFFSET))(this, includeNotObtained);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void AddTrialPlayer(::System::UInt32 trialPlayerId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_ADDTRIALPLAYER_OFFSET))(this, trialPlayerId);
		}

		::System::Void _OnCmdGetAvatarDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDGETAVATARDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPlayerSyncScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDPLAYERSYNCSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAddAvatarScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDADDAVATARSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _UpdateNewAvatarRedDot(::System::UInt32 baseAvatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__UPDATENEWAVATARREDDOT_OFFSET))(this, baseAvatarID);
		}

		::System::Void _NotifyAddNewAvatarInfo(::Class_1_D7C2741BD4C51006* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D7C2741BD4C51006*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__NOTIFYADDNEWAVATARINFO_OFFSET))(this, rsp);
		}

		::System::Void _OnMarkAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONMARKAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSetGrowthTargetAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONSETGROWTHTARGETAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGrowthTargetAvatarChangedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONGROWTHTARGETAVATARCHANGEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAvatarExpUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDAVATAREXPUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdPromoteAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDPROMOTEAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdUnlockSkilltreeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDUNLOCKSKILLTREESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDressAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDDRESSAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeOffEquipmentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFEQUIPMENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdRankUpAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDRANKUPAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdDressRelicAvatarScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDDRESSRELICAVATARSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakeOffRelicScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDTAKEOFFRELICSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdTakePromotionRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDTAKEPROMOTIONREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdAvatarSpecialSkilltreeUnlockScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDAVATARSPECIALSKILLTREEUNLOCKSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdSetPlayerOutfitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONCMDSETPLAYEROUTFITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnWorldLevelUp(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONWORLDLEVELUP_OFFSET))(this, arg);
		}

		::System::Void _OnAvatarSyncData(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__ONAVATARSYNCDATA_OFFSET))(this, arg);
		}

		::System::Void _SyncAllAvatars(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataList, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>* avatarUniqueDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SYNCALLAVATARS_OFFSET))(this, avatarBaseDataList, avatarUniqueDataList);
		}

		::System::Boolean _HasRoleServerData(::System::UInt32 baseID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__HASROLESERVERDATA_OFFSET))(this, baseID);
		}

		::System::Boolean _HasPathServerData(::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__HASPATHSERVERDATA_OFFSET))(this, realID);
		}

		::System::Void _SyncAvatar(::RPG::Client::AvatarData* avatarData, ::System::Boolean useCurrentPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SYNCAVATAR_OFFSET))(this, avatarData, useCurrentPath);
		}

		::System::Void _SyncMultiPathAvatars(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataList, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>* avatarUniqueDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_BB4B99DE4C2501EC_3*>*, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SYNCMULTIPATHAVATARS_OFFSET))(this, avatarBaseDataList, avatarUniqueDataList);
		}

		::System::Void _SendAvatarSyncData(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SENDAVATARSYNCDATA_OFFSET))(this, avatarData);
		}

		::System::Void _SetPlayerOutfit(::Class_1_6E708EAB438EC183_5* playerOutfitData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__SETPLAYEROUTFIT_OFFSET))(this, playerOutfitData);
		}

		::System::Void _UpdateAvatarRoleServerDataCache(::System::Collections::Generic::IEnumerable_1<::Class_1_BB4B99DE4C2501EC_3*>* avatarBaseDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_BB4B99DE4C2501EC_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__UPDATEAVATARROLESERVERDATACACHE_OFFSET))(this, avatarBaseDataList);
		}

		::System::Void _UpdateAvatarPathServerDataCache(::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>* avatarUniqueDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F3CA30716D4FAF92_2*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE__UPDATEAVATARPATHSERVERDATACACHE_OFFSET))(this, avatarUniqueDataList);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* get_AllAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ALLAVATARS_OFFSET))(this);
		}

		::System::Void set_AllAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ALLAVATARS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* get_AllSpecialAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ALLSPECIALAVATARS_OFFSET))(this);
		}

		::System::Void set_AllSpecialAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ALLSPECIALAVATARS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* get_AllMultiPathAvatars()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_ALLMULTIPATHAVATARS_OFFSET))(this);
		}

		::System::Void set_AllMultiPathAvatars(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_ALLMULTIPATHAVATARS_OFFSET))(this, value);
		}

		::System::UInt32 get_GrowthTargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_GROWTHTARGETAVATARID_OFFSET))(this);
		}

		::System::Void set_GrowthTargetAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_SET_GROWTHTARGETAVATARID_OFFSET))(this, value);
		}

		::System::Boolean get_GrowthTargetIncludeAllSkillTree()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_GROWTHTARGETINCLUDEALLSKILLTREE_OFFSET))(this);
		}

		::RPG::Client::AvatarOutfit* get_PlayerOutfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
