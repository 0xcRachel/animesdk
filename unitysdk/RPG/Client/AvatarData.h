#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/RPG/Client/AvatarRoleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/AvatarSpecialUltraType.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_1_03C16F0BFAD3A648;
class Class_1_19A9A4869232D3A4;
class Class_1_52AE8D741A62A8F4;
class Class_1_6E708EAB438EC183_5;
class Class_1_BB4B99DE4C2501EC_3;
class Class_1_BBF620797152C03F;
class Class_1_BBF620797152C03F_1;
class Class_1_F3CA30716D4FAF92_2;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_144;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace Proto { class PlayerAssistInfo; }
namespace RPG::Client { class AvatarGrowUpBeforeData; }
namespace RPG::Client { class AvatarOutfit; }
namespace RPG::Client { class AvatarPathData; }
namespace RPG::Client { class AvatarPropertyUIData; }
namespace RPG::Client { class AvatarServantData; }
namespace RPG::Client { class AvatarSkillData; }
namespace RPG::Client { class AvatarSkillTreeData; }
namespace RPG::Client { class CombatPowerData; }
namespace RPG::Client { class EquipmentItemData; }
namespace RPG::Client { class IAvatarSkinData; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class RelicSuitData; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class AdventureCharacterConfig; }
namespace RPG::GameCore { class AvatarBaseTypeRow; }
namespace RPG::GameCore { class AvatarRowData; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class AvatarSkillRowData; }
namespace RPG::GameCore { class AvatarSkinRow; }
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace RPG::GameCore { class CharacterCampConfigRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARDATA_APPLYAVATARDATA_OFFSET UNITYSDK_OFFSET(0x8CC27F0)
#define RPG_CLIENT_AVATARDATA_APPLYEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CC2290)
#define RPG_CLIENT_AVATARDATA_APPLYRELICSET_OFFSET UNITYSDK_OFFSET(0x8CC25F0)
#define RPG_CLIENT_AVATARDATA_APPLYSKILLTREE_OFFSET UNITYSDK_OFFSET(0x8CC2480)
#define RPG_CLIENT_AVATARDATA_CHANGEMULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x8CC5230)
#define RPG_CLIENT_AVATARDATA_CLEARLEVELUPBEFORDATA_OFFSET UNITYSDK_OFFSET(0x8CC5480)
#define RPG_CLIENT_AVATARDATA_CLEARPROMOTIONBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CC54D0)
#define RPG_CLIENT_AVATARDATA_CONVERTBASEIDTOREAL_OFFSET UNITYSDK_OFFSET(0x8CC1250)
#define RPG_CLIENT_AVATARDATA_CONVERTREALIDTOBASE_OFFSET UNITYSDK_OFFSET(0x8CC3FC0)
#define RPG_CLIENT_AVATARDATA_COPYBUILDDATA_OFFSET UNITYSDK_OFFSET(0x8CC2050)
#define RPG_CLIENT_AVATARDATA_CREATEAETHERDIVIDESPIRIT_OFFSET UNITYSDK_OFFSET(0x8CC40A0)
#define RPG_CLIENT_AVATARDATA_CREATEASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x8C99BF0)
#define RPG_CLIENT_AVATARDATA_CREATEBYADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x8CC1920)
#define RPG_CLIENT_AVATARDATA_CREATEBYREALID_OFFSET UNITYSDK_OFFSET(0x8CC1470)
#define RPG_CLIENT_AVATARDATA_CREATECHALLENGEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC35F0)
#define RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_1_OFFSET UNITYSDK_OFFSET(0x8CC1B50)
#define RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC3E10)
#define RPG_CLIENT_AVATARDATA_CREATEGACHADATABYREALID_OFFSET UNITYSDK_OFFSET(0x8CC1730)
#define RPG_CLIENT_AVATARDATA_CREATEMAXENHANCEDGACHADATA_OFFSET UNITYSDK_OFFSET(0x8CBFAC0)
#define RPG_CLIENT_AVATARDATA_CREATEMULTIPATHAVATARBYREALID_OFFSET UNITYSDK_OFFSET(0x8CC15D0)
#define RPG_CLIENT_AVATARDATA_CREATESPEICALAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC28D0)
#define RPG_CLIENT_AVATARDATA_CREATEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC3090)
#define RPG_CLIENT_AVATARDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x8CC12B0)
#define RPG_CLIENT_AVATARDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8CC1090)
#define RPG_CLIENT_AVATARDATA_GETALLPROPERTYVALUEWITHVIRTUALRELICSET_OFFSET UNITYSDK_OFFSET(0x8CC6BB0)
#define RPG_CLIENT_AVATARDATA_GETALLSKILLS_OFFSET UNITYSDK_OFFSET(0x8CC6020)
#define RPG_CLIENT_AVATARDATA_GETAVATARCOMBATPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x8CC8500)
#define RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_1_OFFSET UNITYSDK_OFFSET(0x8CC6480)
#define RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_OFFSET UNITYSDK_OFFSET(0x8CC6410)
#define RPG_CLIENT_AVATARDATA_GETCURRENTEXPPERCENT_OFFSET UNITYSDK_OFFSET(0x8CC71C0)
#define RPG_CLIENT_AVATARDATA_GETCURRENTLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x8CC7470)
#define RPG_CLIENT_AVATARDATA_GETCURRENTMAXLV_OFFSET UNITYSDK_OFFSET(0x8CC76B0)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET UNITYSDK_OFFSET(0x8CC6900)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET UNITYSDK_OFFSET(0x8CC6860)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x8CC7120)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLDATALIST_OFFSET UNITYSDK_OFFSET(0x8CC5520)
#define RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLROWLIST_OFFSET UNITYSDK_OFFSET(0x8CC5C80)
#define RPG_CLIENT_AVATARDATA_GETEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CC7DF0)
#define RPG_CLIENT_AVATARDATA_GETEXTRAADDITION_OFFSET UNITYSDK_OFFSET(0x8CC6A30)
#define RPG_CLIENT_AVATARDATA_GETFIRSTSKINTYPE_OFFSET UNITYSDK_OFFSET(0x8CC0180)
#define RPG_CLIENT_AVATARDATA_GETHPMAX_OFFSET UNITYSDK_OFFSET(0x8CC6F20)
#define RPG_CLIENT_AVATARDATA_GETLATESTPATHUNLOCKTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x8CC7EA0)
#define RPG_CLIENT_AVATARDATA_GETLVMAXEXP_OFFSET UNITYSDK_OFFSET(0x8CC7590)
#define RPG_CLIENT_AVATARDATA_GETMAXLV_OFFSET UNITYSDK_OFFSET(0x8CC77B0)
#define RPG_CLIENT_AVATARDATA_GETMODIFIEDADVENTURECHARACTERCONFIG_OFFSET UNITYSDK_OFFSET(0x8CC9560)
#define RPG_CLIENT_AVATARDATA_GETNEEDEXPTOLV_OFFSET UNITYSDK_OFFSET(0x8CC72F0)
#define RPG_CLIENT_AVATARDATA_GETNEWLEVELBYADDEXP_OFFSET UNITYSDK_OFFSET(0x8CC7A70)
#define RPG_CLIENT_AVATARDATA_GETNORMALSKINIDS_OFFSET UNITYSDK_OFFSET(0x8CC0360)
#define RPG_CLIENT_AVATARDATA_GETPROPERTYBYTYPE_OFFSET UNITYSDK_OFFSET(0x8CC7090)
#define RPG_CLIENT_AVATARDATA_GETPROPERTYUIDATA_OFFSET UNITYSDK_OFFSET(0x8CC6690)
#define RPG_CLIENT_AVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET UNITYSDK_OFFSET(0x8CC6AF0)
#define RPG_CLIENT_AVATARDATA_GETRELICLIST_OFFSET UNITYSDK_OFFSET(0x8CC8150)
#define RPG_CLIENT_AVATARDATA_GETSKINIDS_OFFSET UNITYSDK_OFFSET(0x8CC03B0)
#define RPG_CLIENT_AVATARDATA_GETSPMAX_OFFSET UNITYSDK_OFFSET(0x8CC6FA0)
#define RPG_CLIENT_AVATARDATA_GETSTELLARSKINIDS_OFFSET UNITYSDK_OFFSET(0x8CC0550)
#define RPG_CLIENT_AVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x8CC9810)
#define RPG_CLIENT_AVATARDATA_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x8CC91B0)
#define RPG_CLIENT_AVATARDATA_GET_AVATARJSONPATH_OFFSET UNITYSDK_OFFSET(0x8CC99B0)
#define RPG_CLIENT_AVATARDATA_GET_AVATARNAMEWITHPROFESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x8CC8DC0)
#define RPG_CLIENT_AVATARDATA_GET_AVATARNAME_OFFSET UNITYSDK_OFFSET(0x8CC5080)
#define RPG_CLIENT_AVATARDATA_GET_AVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC20)
#define RPG_CLIENT_AVATARDATA_GET_AVATARROWDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC90)
#define RPG_CLIENT_AVATARDATA_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x8CC8AF0)
#define RPG_CLIENT_AVATARDATA_GET_BASEID_OFFSET UNITYSDK_OFFSET(0x8CBFF00)
#define RPG_CLIENT_AVATARDATA_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x8CCA090)
#define RPG_CLIENT_AVATARDATA_GET_CAMPROW_OFFSET UNITYSDK_OFFSET(0x8CCA020)
#define RPG_CLIENT_AVATARDATA_GET_COMBATPOWERDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC40)
#define RPG_CLIENT_AVATARDATA_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x8CC9D50)
#define RPG_CLIENT_AVATARDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x8CC8B10)
#define RPG_CLIENT_AVATARDATA_GET_DEFAULTAVATARMODELPATH_OFFSET UNITYSDK_OFFSET(0x8CC9B90)
#define RPG_CLIENT_AVATARDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x8CBFF90)
#define RPG_CLIENT_AVATARDATA_GET_EQUIPMENTMODIFIER_OFFSET UNITYSDK_OFFSET(0x8CCAE90)
#define RPG_CLIENT_AVATARDATA_GET_EQUIPMENTUID_OFFSET UNITYSDK_OFFSET(0x8CC9D10)
#define RPG_CLIENT_AVATARDATA_GET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCA150)
#define RPG_CLIENT_AVATARDATA_GET_HASEQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CCAD00)
#define RPG_CLIENT_AVATARDATA_GET_HASSERVANT_OFFSET UNITYSDK_OFFSET(0x8CCAC80)
#define RPG_CLIENT_AVATARDATA_GET_HASSKIN_OFFSET UNITYSDK_OFFSET(0x8CC0080)
#define RPG_CLIENT_AVATARDATA_GET_HASTAKENPROMOTIONREWARDLIST_OFFSET UNITYSDK_OFFSET(0x8CCADC0)
#define RPG_CLIENT_AVATARDATA_GET_HEROGENDER_OFFSET UNITYSDK_OFFSET(0x8CC8A60)
#define RPG_CLIENT_AVATARDATA_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x8CBFD40)
#define RPG_CLIENT_AVATARDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8CC3F30)
#define RPG_CLIENT_AVATARDATA_GET_ISAETHERDIVIDE_OFFSET UNITYSDK_OFFSET(0x8CC9C60)
#define RPG_CLIENT_AVATARDATA_GET_ISASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC9C40)
#define RPG_CLIENT_AVATARDATA_GET_ISCUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x8CC91A0)
#define RPG_CLIENT_AVATARDATA_GET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x8CC9C90)
#define RPG_CLIENT_AVATARDATA_GET_ISFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC9C50)
#define RPG_CLIENT_AVATARDATA_GET_ISFORMALAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC9C70)
#define RPG_CLIENT_AVATARDATA_GET_ISHERO_OFFSET UNITYSDK_OFFSET(0x8CC88D0)
#define RPG_CLIENT_AVATARDATA_GET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x8CCADE0)
#define RPG_CLIENT_AVATARDATA_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x8CCADA0)
#define RPG_CLIENT_AVATARDATA_GET_ISPLOTTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x8CC9300)
#define RPG_CLIENT_AVATARDATA_GET_ISSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x8CC9480)
#define RPG_CLIENT_AVATARDATA_GET_ISSHOWSKILLPLOTTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x8CC9360)
#define RPG_CLIENT_AVATARDATA_GET_ISTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x8CC5020)
#define RPG_CLIENT_AVATARDATA_GET_ISUPGRADEAVAILABLETYPE_OFFSET UNITYSDK_OFFSET(0x8CC9C80)
#define RPG_CLIENT_AVATARDATA_GET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCABE0)
#define RPG_CLIENT_AVATARDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8CC9CB0)
#define RPG_CLIENT_AVATARDATA_GET_MAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x8CC78C0)
#define RPG_CLIENT_AVATARDATA_GET_MAXRANK_OFFSET UNITYSDK_OFFSET(0x8CC9D70)
#define RPG_CLIENT_AVATARDATA_GET_MULTIPATHAVATARTYPE_OFFSET UNITYSDK_OFFSET(0x8CC8AE0)
#define RPG_CLIENT_AVATARDATA_GET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x8CCAEE0)
#define RPG_CLIENT_AVATARDATA_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x8CC9400)
#define RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPENAME_OFFSET UNITYSDK_OFFSET(0x8CC8CF0)
#define RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPE_OFFSET UNITYSDK_OFFSET(0x8CC8C00)
#define RPG_CLIENT_AVATARDATA_GET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC00)
#define RPG_CLIENT_AVATARDATA_GET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x8CC9CD0)
#define RPG_CLIENT_AVATARDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x8CC9CF0)
#define RPG_CLIENT_AVATARDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0x8CBF850)
#define RPG_CLIENT_AVATARDATA_GET_RELICSDATA_OFFSET UNITYSDK_OFFSET(0x8CC9D30)
#define RPG_CLIENT_AVATARDATA_GET_RELICSUITMODIFIER_OFFSET UNITYSDK_OFFSET(0x8CCAEB0)
#define RPG_CLIENT_AVATARDATA_GET_ROLETYPE_OFFSET UNITYSDK_OFFSET(0x8CC8860)
#define RPG_CLIENT_AVATARDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8CC8820)
#define RPG_CLIENT_AVATARDATA_GET_SERVANTDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC60)
#define RPG_CLIENT_AVATARDATA_GET_SKILLTREEMODIFIER_OFFSET UNITYSDK_OFFSET(0x8CCAEA0)
#define RPG_CLIENT_AVATARDATA_GET_SKINDATA_OFFSET UNITYSDK_OFFSET(0x8CCAE70)
#define RPG_CLIENT_AVATARDATA_GET_SKINROW_OFFSET UNITYSDK_OFFSET(0x8CC9E60)
#define RPG_CLIENT_AVATARDATA_GET_SPECIALAVATARID_OFFSET UNITYSDK_OFFSET(0x8CBFEB0)
#define RPG_CLIENT_AVATARDATA_GET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0x8CC8840)
#define RPG_CLIENT_AVATARDATA_GET_SPECIFIEDGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x8CCAEC0)
#define RPG_CLIENT_AVATARDATA_GET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x8CC92B0)
#define RPG_CLIENT_AVATARDATA_GET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x8CCAE00)
#define RPG_CLIENT_AVATARDATA_GET_ULTRASKILLTYPE_OFFSET UNITYSDK_OFFSET(0x8CCAE20)
#define RPG_CLIENT_AVATARDATA_GET__PROFESSIONTYPEROW_OFFSET UNITYSDK_OFFSET(0x8CCAF00)
#define RPG_CLIENT_AVATARDATA_ISCURHERO_OFFSET UNITYSDK_OFFSET(0x8CC3E70)
#define RPG_CLIENT_AVATARDATA_ISHEROID_OFFSET UNITYSDK_OFFSET(0x8CBC480)
#define RPG_CLIENT_AVATARDATA_ISMAXPROMOTION_OFFSET UNITYSDK_OFFSET(0x8CC7A10)
#define RPG_CLIENT_AVATARDATA_ISPROMOTIONMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x8CC79B0)
#define RPG_CLIENT_AVATARDATA_ISPROMOTIONREWARDRECEIVED_OFFSET UNITYSDK_OFFSET(0x8CC8620)
#define RPG_CLIENT_AVATARDATA_ISSAMEGENDER_OFFSET UNITYSDK_OFFSET(0x8CC4020)
#define RPG_CLIENT_AVATARDATA_ISSERVANTSKILLID_OFFSET UNITYSDK_OFFSET(0x8CC6610)
#define RPG_CLIENT_AVATARDATA_REFRESHCHALLENGEUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC3800)
#define RPG_CLIENT_AVATARDATA_REFRESHUPGRADEDAVATAR_OFFSET UNITYSDK_OFFSET(0x8CC3210)
#define RPG_CLIENT_AVATARDATA_RESETEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x8CC7D90)
#define RPG_CLIENT_AVATARDATA_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET UNITYSDK_OFFSET(0x8CC9510)
#define RPG_CLIENT_AVATARDATA_SETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x8CC4FD0)
#define RPG_CLIENT_AVATARDATA_SETAVATARSKIN_OFFSET UNITYSDK_OFFSET(0x8CC07A0)
#define RPG_CLIENT_AVATARDATA_SETEXTRAPROPERTYADDITION_OFFSET UNITYSDK_OFFSET(0x8CC7CA0)
#define RPG_CLIENT_AVATARDATA_SETGACHAINITIALDATA_OFFSET UNITYSDK_OFFSET(0x8CC1890)
#define RPG_CLIENT_AVATARDATA_SETGACHAULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0x8CC83D0)
#define RPG_CLIENT_AVATARDATA_SETINITIALDATA_OFFSET UNITYSDK_OFFSET(0x8CC81A0)
#define RPG_CLIENT_AVATARDATA_SETMULTIPATHDRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x8CC05A0)
#define RPG_CLIENT_AVATARDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x8CC5430)
#define RPG_CLIENT_AVATARDATA_SETULTIMATEDATA_OFFSET UNITYSDK_OFFSET(0x8CC8210)
#define RPG_CLIENT_AVATARDATA_SET_AVATARPROPERTYDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC30)
#define RPG_CLIENT_AVATARDATA_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x8CC8B00)
#define RPG_CLIENT_AVATARDATA_SET_COMBATPOWERDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC50)
#define RPG_CLIENT_AVATARDATA_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0x8CC9D60)
#define RPG_CLIENT_AVATARDATA_SET_EQUIPMENTUID_OFFSET UNITYSDK_OFFSET(0x8CC9D20)
#define RPG_CLIENT_AVATARDATA_SET_GROWUPBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCABD0)
#define RPG_CLIENT_AVATARDATA_SET_HASTAKENPROMOTIONREWARDLIST_OFFSET UNITYSDK_OFFSET(0x8CCADD0)
#define RPG_CLIENT_AVATARDATA_SET_ISDISPLAYONLY_OFFSET UNITYSDK_OFFSET(0x8CC9CA0)
#define RPG_CLIENT_AVATARDATA_SET_ISMARKED_OFFSET UNITYSDK_OFFSET(0x8CCADF0)
#define RPG_CLIENT_AVATARDATA_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x8CCADB0)
#define RPG_CLIENT_AVATARDATA_SET_LEVELUPEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCABF0)
#define RPG_CLIENT_AVATARDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8CC9CC0)
#define RPG_CLIENT_AVATARDATA_SET_OUTFIT_OFFSET UNITYSDK_OFFSET(0x8CCAEF0)
#define RPG_CLIENT_AVATARDATA_SET_PROMOTEDBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC10)
#define RPG_CLIENT_AVATARDATA_SET_PROMOTION_OFFSET UNITYSDK_OFFSET(0x8CC9CE0)
#define RPG_CLIENT_AVATARDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x8CC9D00)
#define RPG_CLIENT_AVATARDATA_SET_RELICSDATA_OFFSET UNITYSDK_OFFSET(0x8CC9D40)
#define RPG_CLIENT_AVATARDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x8CC8830)
#define RPG_CLIENT_AVATARDATA_SET_SERVANTDATA_OFFSET UNITYSDK_OFFSET(0x8CCAC70)
#define RPG_CLIENT_AVATARDATA_SET_SKINDATA_OFFSET UNITYSDK_OFFSET(0x8CCAE80)
#define RPG_CLIENT_AVATARDATA_SET_SPECIALROW_OFFSET UNITYSDK_OFFSET(0x8CC8850)
#define RPG_CLIENT_AVATARDATA_SET_SPECIFIEDGENDERTYPE_OFFSET UNITYSDK_OFFSET(0x8CCAED0)
#define RPG_CLIENT_AVATARDATA_SET_ULTRASKILLCONFIG_OFFSET UNITYSDK_OFFSET(0x8CCAE10)
#define RPG_CLIENT_AVATARDATA_SWITCHENHANCEDID_OFFSET UNITYSDK_OFFSET(0x8CC4D40)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0x8CC4260)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATAWITHOUTEQUIPMENTANDRELIC_OFFSET UNITYSDK_OFFSET(0x8CC3CB0)
#define RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATA_OFFSET UNITYSDK_OFFSET(0x8CC4B20)
#define RPG_CLIENT_AVATARDATA__ADDSKIN_OFFSET UNITYSDK_OFFSET(0x8CC0BF0)
#define RPG_CLIENT_AVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET UNITYSDK_OFFSET(0x8CC3030)
#define RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATAREQUIPMENT_OFFSET UNITYSDK_OFFSET(0x8CC2C30)
#define RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATARRELIC_OFFSET UNITYSDK_OFFSET(0x8CC2D50)
#define RPG_CLIENT_AVATARDATA__CHECKHASSKIN_OFFSET UNITYSDK_OFFSET(0x8CC01F0)
#define RPG_CLIENT_AVATARDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8CC0DE0)
#define RPG_CLIENT_AVATARDATA__ENSUREHASINITIALIZED_OFFSET UNITYSDK_OFFSET(0x8CC0120)
#define RPG_CLIENT_AVATARDATA__INITSKINS_OFFSET UNITYSDK_OFFSET(0x8CC08C0)
#define RPG_CLIENT_AVATARDATA__RECORDDATA_OFFSET UNITYSDK_OFFSET(0x8CC8680)
#define RPG_CLIENT_AVATARDATA__REFRESHBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x8CC4800)
#define RPG_CLIENT_AVATARDATA__REFRESHSERVANTDATA_OFFSET UNITYSDK_OFFSET(0x8CC4A00)
#define RPG_CLIENT_AVATARDATA__SWITCHRELICSETDATA_OFFSET UNITYSDK_OFFSET(0x8CC6ED0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData_TypeDefinitionIndex = 49612;

	class AvatarData : public ::System::Object
	{
	public:
		::RPG::Client::AvatarOutfit* _Outfit_k__BackingField; // 0x10
		::RPG::GameCore::IAvatarCommonRowWrap* _Row_k__BackingField; // 0x18
		::RPG::Client::AvatarGrowUpBeforeData* _PromotedBeforeData_k__BackingField; // 0x20
		::RPG::Client::RelicSuitData* _RelicsData_k__BackingField; // 0x28
		::System::String* _AvatarCustomName; // 0x30
		::RPG::Client::AvatarServantData* _ServantData_k__BackingField; // 0x38
		::RPG::GameCore::SpecialAvatarRow* _SpecialRow_k__BackingField; // 0x40
		::RPG::Client::IAvatarSkinData* _SkinData_k__BackingField; // 0x48
		::Class_1_BBF620797152C03F* _SkillTreeModifier_k__BackingField; // 0x50
		::RPG::GameCore::AvatarUltraSkillConfigRow* _UltraSkillConfig_k__BackingField; // 0x58
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarSkillRowData*>* _SkillDataMap; // 0x60
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* _ExtraPropertyAddition; // 0x68
		::Class_1_03C16F0BFAD3A648* _AvatarPropertyData_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* _HasTakenPromotionRewardList_k__BackingField; // 0x78
		::RPG::Client::AvatarGrowUpBeforeData* _LevelUpedBeforeData_k__BackingField; // 0x80
		::RPG::Client::AvatarSkillTreeData* SkillTreeData; // 0x88
		::RPG::Client::AvatarGrowUpBeforeData* _GrowUpBeforeData_k__BackingField; // 0x90
		::RPG::Client::CombatPowerData* _CombatPowerData_k__BackingField; // 0x98
		::RPG::GameCore::AvatarRowData* _AvatarRowData; // 0xA0
		::Class_1_BBF620797152C03F_1* _EquipmentModifier_k__BackingField; // 0xA8
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarSkinType, ::System::Collections::Generic::List_1<::System::UInt32>*>* _SkinIDs; // 0xB0
		::RPG::Client::EquipmentItemData* _TrialEquipment; // 0xB8
		::Class_1_19A9A4869232D3A4* _RelicSuitModifier_k__BackingField; // 0xC0
		::System::UInt64 FirstMetTimeStamp; // 0xC8
		::System::UInt32 _Promotion_k__BackingField; // 0xD0
		::System::UInt32 _CurrentExp_k__BackingField; // 0xD4
		::System::UInt32 _Level_k__BackingField; // 0xD8
		::System::UInt32 _Rank_k__BackingField; // 0xDC
		::System::Boolean _IsMarked_k__BackingField; // 0xE0
		::System::Boolean _IsNew_k__BackingField; // 0xE1
		::System::Boolean _IsDisplayOnly_k__BackingField; // 0xE2
		::System::UInt32 _EquipmentUID_k__BackingField; // 0xE4
		::RPG::GameCore::GenderType _SpecifiedGenderType_k__BackingField; // 0xE8
		::Enum_3_A35B38E5F9115A76 _AvatarType_k__BackingField; // 0xEC
		::System::UInt32 _AdventurePlayerIDOverwrite; // 0xF0

		::System::Void _ctor(::RPG::GameCore::IAvatarCommonRowWrap* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__CTOR_OFFSET))(this, row);
		}

		::Struct_2_AAD4F4215611A944 get_Identifier()
		{
			return ((::Struct_2_AAD4F4215611A944(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Boolean get_HasSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASSKIN_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkinType GetFirstSkinType()
		{
			return ((::RPG::GameCore::AvatarSkinType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETFIRSTSKINTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNormalSkinIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNORMALSKINIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetStellarSkinIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSTELLARSKINIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSkinIDs(::RPG::GameCore::AvatarSkinType skinType)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSKINIDS_OFFSET))(this, skinType);
		}

		::System::Void SetMultiPathDressedSkinID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETMULTIPATHDRESSEDSKINID_OFFSET))(this);
		}

		::System::Boolean _CheckHasSkin(::RPG::GameCore::AvatarSkinType skinType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarSkinType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__CHECKHASSKIN_OFFSET))(this, skinType);
		}

		::System::Void _EnsureHasInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__ENSUREHASINITIALIZED_OFFSET))(this);
		}

		::System::Void _InitSkins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__INITSKINS_OFFSET))(this);
		}

		::System::Void _AddSkin(::RPG::GameCore::AvatarSkinRow* skinRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarSkinRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__ADDSKIN_OFFSET))(this, skinRow);
		}

		static ::RPG::Client::AvatarData* Create(::System::UInt32 baseID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATE_OFFSET))(baseID);
		}

		static ::RPG::Client::AvatarData* Create_1(::RPG::Client::AvatarRoleType roleType)
		{
			return ((::RPG::Client::AvatarData*(*)(::RPG::Client::AvatarRoleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATE_1_OFFSET))(roleType);
		}

		static ::RPG::Client::AvatarData* CreateByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEBYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateMultiPathAvatarByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEMULTIPATHAVATARBYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateGachaDataByRealID(::System::UInt32 realID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEGACHADATABYREALID_OFFSET))(realID, enhancedID);
		}

		static ::RPG::Client::AvatarData* CreateMaxEnhancedGachaData(::System::UInt32 realID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEMAXENHANCEDGACHADATA_OFFSET))(realID);
		}

		static ::RPG::Client::AvatarData* CreateByAdventurePlayerID(::System::UInt32 advPlayerID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEBYADVENTUREPLAYERID_OFFSET))(advPlayerID);
		}

		static ::RPG::Client::AvatarData* CreateAssistAvatar(::Proto::PlayerAssistInfo* info)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::PlayerAssistInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEASSISTAVATAR_OFFSET))(info);
		}

		static ::System::Void CopyBuildData(::RPG::Client::AvatarData* avatarData, ::RPG::Client::AvatarData* sourceAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_COPYBUILDDATA_OFFSET))(avatarData, sourceAvatarData);
		}

		static ::RPG::Client::AvatarData* CreateSpeicalAvatar(::System::UInt32 specialAvatarID, ::System::UInt32 worldLevel)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATESPEICALAVATAR_OFFSET))(specialAvatarID, worldLevel);
		}

		static ::RPG::Client::AvatarData* CreateUpgradedAvatar(::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::RPG::Client::AvatarData*(*)(::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEUPGRADEDAVATAR_OFFSET))(originAvatarData);
		}

		static ::System::Void RefreshUpgradedAvatar(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REFRESHUPGRADEDAVATAR_OFFSET))(pAvatarData, originAvatarData);
		}

		static ::RPG::Client::AvatarData* CreateChallengeUpgradedAvatar(::System::UInt32 avatarID, ::Class_1_FA4F4A67B1C04320_144* equipmentSnapShot, ::Class_1_52AE8D741A62A8F4* relicSnapShot)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32, ::Class_1_FA4F4A67B1C04320_144*, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATECHALLENGEUPGRADEDAVATAR_OFFSET))(avatarID, equipmentSnapShot, relicSnapShot);
		}

		static ::System::Void RefreshChallengeUpgradedAvatar(::RPG::Client::AvatarData*& pAvatarData, ::RPG::Client::AvatarData* originAvatarData, ::Class_1_FA4F4A67B1C04320_144* equipmentSnapShot, ::Class_1_52AE8D741A62A8F4* relicSnapShot)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::Client::AvatarData*, ::Class_1_FA4F4A67B1C04320_144*, ::Class_1_52AE8D741A62A8F4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REFRESHCHALLENGEUPGRADEDAVATAR_OFFSET))(pAvatarData, originAvatarData, equipmentSnapShot, relicSnapShot);
		}

		static ::RPG::Client::AvatarData* CreateDisplayAvatar(::Proto::DisplayAvatarDetailInfo* info, ::System::String* PlayerName)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::DisplayAvatarDetailInfo*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_OFFSET))(info, PlayerName);
		}

		static ::RPG::Client::AvatarData* CreateDisplayAvatar_1(::Proto::DisplayAvatarDetailInfo* info, ::System::String* PlayerName, ::Class_1_6E708EAB438EC183_5* playerOutfit)
		{
			return ((::RPG::Client::AvatarData*(*)(::Proto::DisplayAvatarDetailInfo*, ::System::String*, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEDISPLAYAVATAR_1_OFFSET))(info, PlayerName, playerOutfit);
		}

		static ::System::UInt32 ConvertBaseIDToReal(::System::UInt32 baseAvatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CONVERTBASEIDTOREAL_OFFSET))(baseAvatarID);
		}

		::System::Boolean IsCurHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISCURHERO_OFFSET))(this);
		}

		static ::System::UInt32 ConvertRealIDToBase(::System::UInt32 realAvatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CONVERTREALIDTOBASE_OFFSET))(realAvatarID);
		}

		static ::System::Boolean IsHeroID(::System::UInt32 realID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISHEROID_OFFSET))(realID);
		}

		static ::System::Boolean IsSameGender(::System::UInt32 heroID, ::RPG::GameCore::GenderType expectedType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISSAMEGENDER_OFFSET))(heroID, expectedType);
		}

		static ::RPG::Client::AvatarData* CreateAetherDivideSpirit(::System::UInt32 baseID)
		{
			return ((::RPG::Client::AvatarData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CREATEAETHERDIVIDESPIRIT_OFFSET))(baseID);
		}

		::System::Void SyncAvatarData(::Class_1_BB4B99DE4C2501EC_3* baseData, ::Class_1_F3CA30716D4FAF92_2* uniqueData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_3*, ::Class_1_F3CA30716D4FAF92_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARDATA_OFFSET))(this, baseData, uniqueData);
		}

		::System::Void SyncAvatarPathData(::RPG::Client::AvatarPathData* avatarPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATA_OFFSET))(this, avatarPathData);
		}

		::System::Void SyncAvatarPathDataWithoutEquipmentAndRelic(::RPG::Client::AvatarPathData* avatarPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SYNCAVATARPATHDATAWITHOUTEQUIPMENTANDRELIC_OFFSET))(this, avatarPathData);
		}

		::System::Void SwitchEnhancedID(::System::UInt32 enhancedID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SWITCHENHANCEDID_OFFSET))(this, enhancedID);
		}

		::System::Void SetAvatarLevel(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETAVATARLEVEL_OFFSET))(this, level);
		}

		::System::Void SetAvatarSkin(::System::UInt32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETAVATARSKIN_OFFSET))(this, skinID);
		}

		::System::Void ChangeMultiPathAvatarType(::System::UInt32 newAvatarID, ::System::UInt32 enhancedID, ::System::UInt32 nRank, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_11*>* pAvatarSkillTree, ::System::UInt32 skinID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_11*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CHANGEMULTIPATHAVATARTYPE_OFFSET))(this, newAvatarID, enhancedID, nRank, pAvatarSkillTree, skinID);
		}

		::System::Void SetRank(::System::UInt32 newRank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETRANK_OFFSET))(this, newRank);
		}

		::System::Void ClearLevelUpBeforData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CLEARLEVELUPBEFORDATA_OFFSET))(this);
		}

		::System::Void ClearPromotionBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_CLEARPROMOTIONBEFOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarSkillData*>* GetDisplaySkillDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* GetDisPlaySkillRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYSKILLROWLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* GetAllSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETALLSKILLS_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_OFFSET))(this, skillID);
		}

		::RPG::GameCore::ICharacterSkillRowData* GetCharacterSkillData_1(::System::UInt32 skillID, ::System::UInt32 skillLv)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCHARACTERSKILLDATA_1_OFFSET))(this, skillID, skillLv);
		}

		::System::Boolean IsServantSkillID(::System::UInt32 skillID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISSERVANTSKILLID_OFFSET))(this, skillID);
		}

		::RPG::Client::AvatarPropertyUIData* GetPropertyUIData(::RPG::GameCore::AvatarPropertyType propertyType)
		{
			return ((::RPG::Client::AvatarPropertyUIData*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETPROPERTYUIDATA_OFFSET))(this, propertyType);
		}

		::RPG::GameCore::FixPoint GetExtraAddition(::RPG::GameCore::BattleExtraPropertyAddition property)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETEXTRAADDITION_OFFSET))(this, property);
		}

		::System::UInt32 GetRankAfterExtraAddition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETRANKAFTEREXTRAADDITION_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>* GetAllPropertyValueWithVirtualRelicSet(::RPG::Client::RelicSuitData* virtualData)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETALLPROPERTYVALUEWITHVIRTUALRELICSET_OFFSET))(this, virtualData);
		}

		::RPG::GameCore::FixPoint GetHPMax(::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETHPMAX_OFFSET))(this, promotion, level, rank);
		}

		::RPG::GameCore::FixPoint GetSPMax()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETSPMAX_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyByType(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBYTYPE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatPropertyBaseValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATPROPERTYBASEVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::String* GetDisplayFormatAddValue(::RPG::GameCore::AvatarPropertyType propertyType, ::System::UInt32 promotion, ::System::UInt32 level, ::System::UInt32 rank)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETDISPLAYFORMATADDVALUE_OFFSET))(this, propertyType, promotion, level, rank);
		}

		::System::Single GetCurrentExpPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTEXPPERCENT_OFFSET))(this);
		}

		::System::UInt32 GetNeedExpToLv(::System::UInt32 toLevel)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNEEDEXPTOLV_OFFSET))(this, toLevel);
		}

		::System::UInt32 GetCurrentLvMaxExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTLVMAXEXP_OFFSET))(this);
		}

		::System::UInt32 GetLvMaxExp(::System::UInt32 level)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETLVMAXEXP_OFFSET))(this, level);
		}

		::System::UInt32 GetCurrentMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETCURRENTMAXLV_OFFSET))(this);
		}

		::System::UInt32 GetMaxLv()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETMAXLV_OFFSET))(this);
		}

		::System::Boolean IsPromotionMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISPROMOTIONMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean IsMaxPromotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISMAXPROMOTION_OFFSET))(this);
		}

		::System::UInt32 GetNewLevelByAddExp(::System::UInt32 addExp)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETNEWLEVELBYADDEXP_OFFSET))(this, addExp);
		}

		::System::Void SetExtraPropertyAddition(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* pAdditionDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETEXTRAPROPERTYADDITION_OFFSET))(this, pAdditionDict);
		}

		::System::Void ResetExtraPropertyAddition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_RESETEXTRAPROPERTYADDITION_OFFSET))(this);
		}

		::RPG::Client::EquipmentItemData* GetEquipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETEQUIPMENT_OFFSET))(this);
		}

		::System::UInt64 GetLatestPathUnlockTimestamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETLATESTPATHUNLOCKTIMESTAMP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* GetRelicList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETRELICLIST_OFFSET))(this);
		}

		::System::Void SetInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETINITIALDATA_OFFSET))(this);
		}

		::System::Void SetUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETULTIMATEDATA_OFFSET))(this);
		}

		::System::Void SetGachaInitialData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETGACHAINITIALDATA_OFFSET))(this);
		}

		::System::Void SetGachaUltimateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SETGACHAULTIMATEDATA_OFFSET))(this);
		}

		::System::Single GetAvatarCombatPowerValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETAVATARCOMBATPOWERVALUE_OFFSET))(this);
		}

		::System::Boolean IsPromotionRewardReceived(::System::UInt32 promotionLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_ISPROMOTIONREWARDRECEIVED_OFFSET))(this, promotionLevel);
		}

		::System::Void ApplyEquipment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYEQUIPMENT_OFFSET))(this);
		}

		::System::Void ApplySkillTree()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYSKILLTREE_OFFSET))(this);
		}

		::System::Void ApplyRelicSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYRELICSET_OFFSET))(this);
		}

		::System::Void ApplyAvatarData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_APPLYAVATARDATA_OFFSET))(this);
		}

		::System::Void _RefreshServantData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__REFRESHSERVANTDATA_OFFSET))(this);
		}

		::System::Void _RefreshBeforeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__REFRESHBEFOREDATA_OFFSET))(this);
		}

		::System::Void _RecordData(::RPG::Client::AvatarGrowUpBeforeData* growupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__RECORDDATA_OFFSET))(this, growupData);
		}

		static ::System::Void _BuildSkillTreesAndSkills(::RPG::Client::AvatarData*& pAvatarData)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSKILLTREESANDSKILLS_OFFSET))(pAvatarData);
		}

		static ::System::Void _BuildSpecialAvatarEquipment(::RPG::Client::AvatarData*& pAvatarData, ::RPG::GameCore::SpecialAvatarRow* configRow)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATAREQUIPMENT_OFFSET))(pAvatarData, configRow);
		}

		static ::System::Void _BuildSpecialAvatarRelic(::RPG::Client::AvatarData*& pAvatarData, ::RPG::GameCore::SpecialAvatarRow* configRow)
		{
			return ((::System::Void(*)(::RPG::Client::AvatarData*&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__BUILDSPECIALAVATARRELIC_OFFSET))(pAvatarData, configRow);
		}

		::System::Void _SwitchRelicSetData(::RPG::Client::RelicSuitData* newData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA__SWITCHRELICSETDATA_OFFSET))(this, newData);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_Row()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::IAvatarCommonRowWrap* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::GameCore::SpecialAvatarRow* get_SpecialRow()
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIALROW_OFFSET))(this);
		}

		::System::Void set_SpecialRow(::RPG::GameCore::SpecialAvatarRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SPECIALROW_OFFSET))(this, value);
		}

		::System::UInt32 get_BaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_BASEID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::AvatarRoleType get_RoleType()
		{
			return ((::RPG::Client::AvatarRoleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ROLETYPE_OFFSET))(this);
		}

		::System::UInt32 get_RealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_REALID_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Boolean get_IsHero()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISHERO_OFFSET))(this);
		}

		::RPG::GameCore::GenderType get_HeroGender()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HEROGENDER_OFFSET))(this);
		}

		::Enum_3_DFCB42601400F441 get_MultiPathAvatarType()
		{
			return ((::Enum_3_DFCB42601400F441(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MULTIPATHAVATARTYPE_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76 get_AvatarType()
		{
			return ((::Enum_3_A35B38E5F9115A76(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::Enum_3_A35B38E5F9115A76 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_AVATARTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::AttackDamageType get_DamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::RPG::GameCore::AvatarBaseType get_ProfessionType()
		{
			return ((::RPG::GameCore::AvatarBaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProfessionTypeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROFESSIONTYPENAME_OFFSET))(this);
		}

		::System::String* get_AvatarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARNAME_OFFSET))(this);
		}

		::System::String* get_AvatarNameWithProfessionType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARNAMEWITHPROFESSIONTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsCustomName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISCUSTOMNAME_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_SpecialAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIALAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TrialPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_TRIALPLAYERID_OFFSET))(this);
		}

		::System::Boolean get_IsTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPlotTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISPLOTTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsShowSkillPlotTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISSHOWSKILLPLOTTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_PrefsShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))(this);
		}

		::System::Boolean get_IsShowSimplifiedSkillDesc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISSHOWSIMPLIFIEDSKILLDESC_OFFSET))(this);
		}

		::System::Void RevertPrefsShowSimplifiedSkillDesc(::System::String* reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_REVERTPREFSSHOWSIMPLIFIEDSKILLDESC_OFFSET))(this, reason);
		}

		::RPG::GameCore::AdventureCharacterConfig* GetModifiedAdventureCharacterConfig()
		{
			return ((::RPG::GameCore::AdventureCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GETMODIFIEDADVENTURECHARACTERCONFIG_OFFSET))(this);
		}

		::System::String* get_AdventureJsonConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ADVENTUREJSONCONFIGPATH_OFFSET))(this);
		}

		::System::String* get_AvatarJsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARJSONPATH_OFFSET))(this);
		}

		::System::String* get_DefaultAvatarModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_DEFAULTAVATARMODELPATH_OFFSET))(this);
		}

		::System::Boolean get_IsAssistAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISASSISTAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsFixedPathAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISFIXEDPATHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAetherDivide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISAETHERDIVIDE_OFFSET))(this);
		}

		::System::Boolean get_IsFormalAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISFORMALAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvailableType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISUPGRADEAVAILABLETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDisplayOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISDISPLAYONLY_OFFSET))(this);
		}

		::System::Void set_IsDisplayOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISDISPLAYONLY_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Promotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROMOTION_OFFSET))(this);
		}

		::System::Void set_Promotion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_PROMOTION_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_EquipmentUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_EQUIPMENTUID_OFFSET))(this);
		}

		::System::Void set_EquipmentUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_EQUIPMENTUID_OFFSET))(this, value);
		}

		::RPG::Client::RelicSuitData* get_RelicsData()
		{
			return ((::RPG::Client::RelicSuitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RELICSDATA_OFFSET))(this);
		}

		::System::Void set_RelicsData(::RPG::Client::RelicSuitData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSuitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_RELICSDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CURRENTEXP_OFFSET))(this);
		}

		::System::Void set_CurrentExp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_CURRENTEXP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MAXRANK_OFFSET))(this);
		}

		::System::UInt32 get_MaxPromotion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_MAXPROMOTION_OFFSET))(this);
		}

		::RPG::GameCore::AvatarSkinRow* get_SkinRow()
		{
			return ((::RPG::GameCore::AvatarSkinRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SKINROW_OFFSET))(this);
		}

		::RPG::GameCore::CharacterCampConfigRow* get_CampRow()
		{
			return ((::RPG::GameCore::CharacterCampConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CAMPROW_OFFSET))(this);
		}

		::System::UInt32 get_CampID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_CAMPID_OFFSET))(this);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_GrowUpBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_GROWUPBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_GrowUpBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_GROWUPBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_LevelUpedBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_LEVELUPEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_LevelUpedBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_LEVELUPEDBEFOREDATA_OFFSET))(this, value);
		}

		::RPG::Client::AvatarGrowUpBeforeData* get_PromotedBeforeData()
		{
			return ((::RPG::Client::AvatarGrowUpBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_PROMOTEDBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_PromotedBeforeData(::RPG::Client::AvatarGrowUpBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarGrowUpBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_PROMOTEDBEFOREDATA_OFFSET))(this, value);
		}

		::Class_1_03C16F0BFAD3A648* get_AvatarPropertyData()
		{
			return ((::Class_1_03C16F0BFAD3A648*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARPROPERTYDATA_OFFSET))(this);
		}

		::System::Void set_AvatarPropertyData(::Class_1_03C16F0BFAD3A648* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_03C16F0BFAD3A648*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_AVATARPROPERTYDATA_OFFSET))(this, value);
		}

		::RPG::Client::CombatPowerData* get_CombatPowerData()
		{
			return ((::RPG::Client::CombatPowerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_COMBATPOWERDATA_OFFSET))(this);
		}

		::System::Void set_CombatPowerData(::RPG::Client::CombatPowerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CombatPowerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_COMBATPOWERDATA_OFFSET))(this, value);
		}

		::RPG::Client::AvatarServantData* get_ServantData()
		{
			return ((::RPG::Client::AvatarServantData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SERVANTDATA_OFFSET))(this);
		}

		::System::Void set_ServantData(::RPG::Client::AvatarServantData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarServantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SERVANTDATA_OFFSET))(this, value);
		}

		::System::Boolean get_HasServant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASSERVANT_OFFSET))(this);
		}

		::RPG::GameCore::AvatarRowData* get_AvatarRowData()
		{
			return ((::RPG::GameCore::AvatarRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_AVATARROWDATA_OFFSET))(this);
		}

		::System::Boolean get_HasEquipment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASEQUIPMENT_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_HasTakenPromotionRewardList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_HASTAKENPROMOTIONREWARDLIST_OFFSET))(this);
		}

		::System::Void set_HasTakenPromotionRewardList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_HASTAKENPROMOTIONREWARDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsMarked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ISMARKED_OFFSET))(this);
		}

		::System::Void set_IsMarked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ISMARKED_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarUltraSkillConfigRow* get_UltraSkillConfig()
		{
			return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ULTRASKILLCONFIG_OFFSET))(this);
		}

		::System::Void set_UltraSkillConfig(::RPG::GameCore::AvatarUltraSkillConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_ULTRASKILLCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarSpecialUltraType get_UltraSkillType()
		{
			return ((::RPG::GameCore::AvatarSpecialUltraType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_ULTRASKILLTYPE_OFFSET))(this);
		}

		::RPG::Client::IAvatarSkinData* get_SkinData()
		{
			return ((::RPG::Client::IAvatarSkinData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SKINDATA_OFFSET))(this);
		}

		::System::Void set_SkinData(::RPG::Client::IAvatarSkinData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarSkinData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SKINDATA_OFFSET))(this, value);
		}

		::Class_1_BBF620797152C03F_1* get_EquipmentModifier()
		{
			return ((::Class_1_BBF620797152C03F_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_EQUIPMENTMODIFIER_OFFSET))(this);
		}

		::Class_1_BBF620797152C03F* get_SkillTreeModifier()
		{
			return ((::Class_1_BBF620797152C03F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SKILLTREEMODIFIER_OFFSET))(this);
		}

		::Class_1_19A9A4869232D3A4* get_RelicSuitModifier()
		{
			return ((::Class_1_19A9A4869232D3A4*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_RELICSUITMODIFIER_OFFSET))(this);
		}

		::RPG::GameCore::GenderType get_SpecifiedGenderType()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_SPECIFIEDGENDERTYPE_OFFSET))(this);
		}

		::System::Void set_SpecifiedGenderType(::RPG::GameCore::GenderType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_SPECIFIEDGENDERTYPE_OFFSET))(this, value);
		}

		::RPG::Client::AvatarOutfit* get_Outfit()
		{
			return ((::RPG::Client::AvatarOutfit*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET_OUTFIT_OFFSET))(this);
		}

		::System::Void set_Outfit(::RPG::Client::AvatarOutfit* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarOutfit*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_SET_OUTFIT_OFFSET))(this, value);
		}

		::RPG::GameCore::AvatarBaseTypeRow* get__ProfessionTypeRow()
		{
			return ((::RPG::GameCore::AvatarBaseTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA_GET__PROFESSIONTYPEROW_OFFSET))(this);
		}
	};
}
