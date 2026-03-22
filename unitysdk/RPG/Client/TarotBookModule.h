#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/TarotBookVersion.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_3460B95D5C29AF5F;
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class TarotBookBooklet; }
namespace RPG::Client { class TarotBookCard; }
namespace RPG::Client { class TarotBookCharacter; }
namespace RPG::Client { class TarotBookClue; }
namespace RPG::Client { class TarotBookDeleteData; }
namespace RPG::Client { class TarotBookExperimentContext; }
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookMailManager; }
namespace RPG::Client { class TarotBookProcessContext; }
namespace RPG::Client { class TarotBookReadReward; }
namespace RPG::Client { class TarotBookStory; }
namespace RPG::Client { class TarotBookWikiManager; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKMODULE_ADDRECONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA042670)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKALLEIDOLONSHASGOT_OFFSET UNITYSDK_OFFSET(0xA03E7F0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKECOLLECTREWARD_OFFSET UNITYSDK_OFFSET(0xA03D880)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREADREWARD_OFFSET UNITYSDK_OFFSET(0xA03D700)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREWARD_OFFSET UNITYSDK_OFFSET(0xA03D6A0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKCHARACTERHASUNLOCK_OFFSET UNITYSDK_OFFSET(0xA040FD0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALPACKHASOPENED_OFFSET UNITYSDK_OFFSET(0xA0422A0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALSTORYHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA042300)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALVERSIONHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA042750)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDCOLLECTREWARD_OFFSET UNITYSDK_OFFSET(0xA03DF00)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDREADREWARD_OFFSET UNITYSDK_OFFSET(0xA03D990)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKINTERACTIONHASFINISHED_OFFSET UNITYSDK_OFFSET(0xA041310)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISCURRENTSTORYLINECANUNLOCK_OFFSET UNITYSDK_OFFSET(0xA03EFB0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISENTRANCESHOW_OFFSET UNITYSDK_OFFSET(0xA03EDB0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0xA03F390)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKISSPECIALCOLLECTQUEST_OFFSET UNITYSDK_OFFSET(0xA03EA80)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASFINISHED_OFFSET UNITYSDK_OFFSET(0xA0410E0)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA041080)
#define RPG_CLIENT_TAROTBOOKMODULE_CHECKUPDATEDVERSIONHASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA042800)
#define RPG_CLIENT_TAROTBOOKMODULE_FILLINTERACTIONSTO_OFFSET UNITYSDK_OFFSET(0xA041140)
#define RPG_CLIENT_TAROTBOOKMODULE_FILLNEWSTORYIDSTO_OFFSET UNITYSDK_OFFSET(0xA03F8E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA03CC70)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLREADREWARD_OFFSET UNITYSDK_OFFSET(0xA03E3B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETALLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xA03F830)
#define RPG_CLIENT_TAROTBOOKMODULE_GETBOOKLET_OFFSET UNITYSDK_OFFSET(0xA03FEB0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCARDPACKHINT_OFFSET UNITYSDK_OFFSET(0xA042070)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCARD_OFFSET UNITYSDK_OFFSET(0xA03D190)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCHARACTER_OFFSET UNITYSDK_OFFSET(0xA033B00)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCLUESLISTBYCARD_OFFSET UNITYSDK_OFFSET(0xA0406A0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCLUE_OFFSET UNITYSDK_OFFSET(0xA03F880)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCOLLECTQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xA03E8B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCARDS_OFFSET UNITYSDK_OFFSET(0xA03CD40)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCLUES_OFFSET UNITYSDK_OFFSET(0xA03D250)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTMAILMANAGER_OFFSET UNITYSDK_OFFSET(0xA042030)
#define RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTWIKIMANAGER_OFFSET UNITYSDK_OFFSET(0xA041FF0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETDELETEDATALIST_OFFSET UNITYSDK_OFFSET(0xA0424D0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETENERGY_OFFSET UNITYSDK_OFFSET(0xA03FF20)
#define RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA03E060)
#define RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDREADREWARDIDS_OFFSET UNITYSDK_OFFSET(0xA03DB40)
#define RPG_CLIENT_TAROTBOOKMODULE_GETINTERACTION_OFFSET UNITYSDK_OFFSET(0xA041250)
#define RPG_CLIENT_TAROTBOOKMODULE_GETLASTCARDPACKHINT_OFFSET UNITYSDK_OFFSET(0xA0421E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETNEWSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xA03F750)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEEXPERIMENTCONTEXT_OFFSET UNITYSDK_OFFSET(0xA041B10)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEMAILMANAGER_OFFSET UNITYSDK_OFFSET(0xA041BE0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXTWITHVERSION_OFFSET UNITYSDK_OFFSET(0xA0417B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0xA0413F0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEWIKIMANAGER_OFFSET UNITYSDK_OFFSET(0xA041CD0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0xA035D70)
#define RPG_CLIENT_TAROTBOOKMODULE_GETRELATIVEAVATARID_OFFSET UNITYSDK_OFFSET(0xA042370)
#define RPG_CLIENT_TAROTBOOKMODULE_GETSTARPANELLOCKEDIMGBYPOSITION_OFFSET UNITYSDK_OFFSET(0xA03FF70)
#define RPG_CLIENT_TAROTBOOKMODULE_GETSTORY_OFFSET UNITYSDK_OFFSET(0xA034F20)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNIQUECARDCOUNT_OFFSET UNITYSDK_OFFSET(0xA03D1F0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNTBYCHARACTER_OFFSET UNITYSDK_OFFSET(0xA03F6F0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0xA03F7B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKSTORYBYCARD_OFFSET UNITYSDK_OFFSET(0xA040090)
#define RPG_CLIENT_TAROTBOOKMODULE_GETVERSION_OFFSET UNITYSDK_OFFSET(0xA03CA40)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_ALLEIDOLONSHASGOTQUESTID_OFFSET UNITYSDK_OFFSET(0xA03BA60)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_CHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA03BE20)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_CRYSTALGUIDELINETIME_OFFSET UNITYSDK_OFFSET(0xA03B410)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_EPILOGUEUNLOCKID_OFFSET UNITYSDK_OFFSET(0xA033D00)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FEMALESPECIALCOLLECTQUESTID_OFFSET UNITYSDK_OFFSET(0xA03B980)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALPACKID_OFFSET UNITYSDK_OFFSET(0xA03C7C0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALSTORYID_OFFSET UNITYSDK_OFFSET(0xA03C8D0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_FINALVERSIONSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA03BC30)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_GOODBYEINTERACTIONID_OFFSET UNITYSDK_OFFSET(0xA03B710)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASCARD_OFFSET UNITYSDK_OFFSET(0xA03AE80)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASENERGY_OFFSET UNITYSDK_OFFSET(0xA03AF80)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWREWARD_OFFSET UNITYSDK_OFFSET(0xA03BE70)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWSTORY_OFFSET UNITYSDK_OFFSET(0xA03AFB0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA03C000)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDNAME_OFFSET UNITYSDK_OFFSET(0xA03BE80)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDPREFABPATH_OFFSET UNITYSDK_OFFSET(0xA03C300)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDSUBDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA03C180)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_INTERACTIONUNLOCKMAXATTEMPTTIMES_OFFSET UNITYSDK_OFFSET(0xA03BB40)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_ISUPDATEDVERSION_OFFSET UNITYSDK_OFFSET(0xA03C9E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_MALESPECIALCOLLECTQUESTID_OFFSET UNITYSDK_OFFSET(0xA03B8A0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_MARKSECTIONHASREADDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0xA03B610)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKMASKCHARACTER_OFFSET UNITYSDK_OFFSET(0xA03C4A0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKPERFORMANCEID_OFFSET UNITYSDK_OFFSET(0xA03C6B0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEFILLSECONDS_OFFSET UNITYSDK_OFFSET(0xA03BCE0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEHINTHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0xA03B510)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xA03B0E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTEXTSPEED_OFFSET UNITYSDK_OFFSET(0xA03B1E0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTRIGGERCD_OFFSET UNITYSDK_OFFSET(0xA03B310)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_UNLOCKEDCHARACTERCOUNT_OFFSET UNITYSDK_OFFSET(0xA03BCF0)
#define RPG_CLIENT_TAROTBOOKMODULE_GET_UPDATEDVERSIONSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xA03B7F0)
#define RPG_CLIENT_TAROTBOOKMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA0428B0)
#define RPG_CLIENT_TAROTBOOKMODULE_ISTAROTBOOKFILTERAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA03F240)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKALLCOLLECTREWARDSHAVESHOWN_OFFSET UNITYSDK_OFFSET(0xA03E220)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKALLREADREWARDSHAVESHOWN_OFFSET UNITYSDK_OFFSET(0xA03DD40)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKEXPERIMENTSEEN_OFFSET UNITYSDK_OFFSET(0xA03F5F0)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKINTERACTIONSUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA0411F0)
#define RPG_CLIENT_TAROTBOOKMODULE_MARKNEWVERSIONREVEALED_OFFSET UNITYSDK_OFFSET(0xA03F4F0)
#define RPG_CLIENT_TAROTBOOKMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA043D50)
#define RPG_CLIENT_TAROTBOOKMODULE_OPENPACK_OFFSET UNITYSDK_OFFSET(0xA03FFD0)
#define RPG_CLIENT_TAROTBOOKMODULE_QUICKUNLOCKALLSTORIES_OFFSET UNITYSDK_OFFSET(0xA040030)
#define RPG_CLIENT_TAROTBOOKMODULE_REMOVERECONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA0426E0)
#define RPG_CLIENT_TAROTBOOKMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA03CAA0)
#define RPG_CLIENT_TAROTBOOKMODULE_SETISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0xA03F440)
#define RPG_CLIENT_TAROTBOOKMODULE_TAKEALLCOLLECTREWARDS_OFFSET UNITYSDK_OFFSET(0xA03EB00)
#define RPG_CLIENT_TAROTBOOKMODULE_TAKEALLREADREWARDS_OFFSET UNITYSDK_OFFSET(0xA03E440)
#define RPG_CLIENT_TAROTBOOKMODULE_TRYCONSUMEUNLOCKHINTFLAG_OFFSET UNITYSDK_OFFSET(0xA035950)
#define RPG_CLIENT_TAROTBOOKMODULE_TRYDESTROYPROCESSCONTEXT_OFFSET UNITYSDK_OFFSET(0xA0418A0)
#define RPG_CLIENT_TAROTBOOKMODULE_UNLOCKSTORY_OFFSET UNITYSDK_OFFSET(0xA040DE0)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDELEMENTTOLISTMAP_OFFSET UNITYSDK_OFFSET(0xA0452A0)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA043CA0)
#define RPG_CLIENT_TAROTBOOKMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA043A80)
#define RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA044FB0)
#define RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNREADREWARDIDS_OFFSET UNITYSDK_OFFSET(0xA044D80)
#define RPG_CLIENT_TAROTBOOKMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA045470)
#define RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCARDSTO_OFFSET UNITYSDK_OFFSET(0xA03CDD0)
#define RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCLUESTO_OFFSET UNITYSDK_OFFSET(0xA03D2E0)
#define RPG_CLIENT_TAROTBOOKMODULE__HANDLEPOOLEXHAUSTED_OFFSET UNITYSDK_OFFSET(0xA044530)
#define RPG_CLIENT_TAROTBOOKMODULE__INITCHARACTERS_OFFSET UNITYSDK_OFFSET(0xA043240)
#define RPG_CLIENT_TAROTBOOKMODULE__INITCOLLECTQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA0438B0)
#define RPG_CLIENT_TAROTBOOKMODULE__INITINTERACTIONS_OFFSET UNITYSDK_OFFSET(0xA043400)
#define RPG_CLIENT_TAROTBOOKMODULE__INITREADREWARDS_OFFSET UNITYSDK_OFFSET(0xA043700)
#define RPG_CLIENT_TAROTBOOKMODULE__ONSERVERPREFREFRESH_OFFSET UNITYSDK_OFFSET(0xA044D20)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHINTERACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xA044A30)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xA044830)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA043ED0)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMODIFYENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA044980)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMULTIOPENPACKANDUNLOCKSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xA044C80)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKOPENPACKSCRSP_OFFSET UNITYSDK_OFFSET(0xA044030)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKSYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA043F90)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKINTERACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xA044B20)
#define RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKSTORYSCRSP_OFFSET UNITYSDK_OFFSET(0xA044130)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPARERELATIVESUBMISSIONS_OFFSET UNITYSDK_OFFSET(0xA03CB00)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSPOOLS_OFFSET UNITYSDK_OFFSET(0xA0429A0)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTARPANELIMG_OFFSET UNITYSDK_OFFSET(0xA043040)
#define RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTORIES_OFFSET UNITYSDK_OFFSET(0xA042CC0)
#define RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA045630)
#define RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA045780)
#define RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA045720)
#define RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA0456C0)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookModule_TypeDefinitionIndex = 54006;

	class TarotBookModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::Action*>* _ReconnectCallbacks; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* _Interactions; // 0x18
		::RPG::Client::TarotBookProcessContext* _CurrentProcessContext; // 0x20
		::RPG::Client::TarotBookWikiManager* _WikiManager; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>* _Characters; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _CollectQuestIDs; // 0x38
		::RPG::Client::TarotBookMailManager* _MailManager; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _CardToStoriesMap; // 0x48
		::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>* _Stories; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _StoryToPoolMap; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _PoolToStoriesMap; // 0x60
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockStoryHintFlags; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _StarPanelLockedImgMap; // 0x70
		::RPG::Client::TarotBookExperimentContext* _ExperimentContext; // 0x78
		::Class_1_3460B95D5C29AF5F* _ServerAgent; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>* _ReadRewards; // 0x88
		::System::Nullable_1<::System::UInt32> _EpilogueUnlockID; // 0x90
		::System::Nullable_1<::System::UInt32> _NousTalkPerformanceID; // 0x98
		::System::Nullable_1<::System::UInt32> _FinalPackID; // 0xA0
		::System::Nullable_1<::System::UInt32> _FinalStoryID; // 0xA8
		::System::Nullable_1<::System::Char> _NousReplaceCharacter; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasCard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASCARD_OFFSET))(this);
		}

		::System::Boolean get_HasEnergy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASENERGY_OFFSET))(this);
		}

		::System::Boolean get_HasNewStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWSTORY_OFFSET))(this);
		}

		::System::Single get_TalkProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKPROTECTTIME_OFFSET))(this);
		}

		::System::Single get_TalkTextSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTEXTSPEED_OFFSET))(this);
		}

		::System::Single get_TalkTriggerCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_TALKTRIGGERCD_OFFSET))(this);
		}

		::System::Single get_CrystalGuideLineTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_CRYSTALGUIDELINETIME_OFFSET))(this);
		}

		::System::Single get_StarPageHintHoldSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEHINTHOLDSECONDS_OFFSET))(this);
		}

		::System::Single get_MarkSectionHasReadDelaySeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_MARKSECTIONHASREADDELAYSECONDS_OFFSET))(this);
		}

		::System::UInt32 get_GoodbyeInteractionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_GOODBYEINTERACTIONID_OFFSET))(this);
		}

		::System::UInt32 get_UpdatedVersionSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_UPDATEDVERSIONSUBMISSIONID_OFFSET))(this);
		}

		::System::UInt32 get_MaleSpecialCollectQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_MALESPECIALCOLLECTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_FemaleSpecialCollectQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FEMALESPECIALCOLLECTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_AllEidolonsHasGotQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_ALLEIDOLONSHASGOTQUESTID_OFFSET))(this);
		}

		::System::UInt32 get_InteractionUnlockMaxAttemptTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_INTERACTIONUNLOCKMAXATTEMPTTIMES_OFFSET))(this);
		}

		::System::UInt32 get_FinalVersionSubmissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALVERSIONSUBMISSIONID_OFFSET))(this);
		}

		::System::Single get_StarPageFillSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_STARPAGEFILLSECONDS_OFFSET))(this);
		}

		::System::Int32 get_UnlockedCharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_UNLOCKEDCHARACTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CharacterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_CHARACTERCOUNT_OFFSET))(this);
		}

		::System::Boolean get_HasNewReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HASNEWREWARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDDESCRIPTION_OFFSET))(this);
		}

		::RPG::Client::TextID get_HeroCardSubDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDSUBDESCRIPTION_OFFSET))(this);
		}

		::System::String* get_HeroCardPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_HEROCARDPREFABPATH_OFFSET))(this);
		}

		::System::UInt32 get_EpilogueUnlockID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_EPILOGUEUNLOCKID_OFFSET))(this);
		}

		::System::Char get_NousTalkMaskCharacter()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKMASKCHARACTER_OFFSET))(this);
		}

		::System::UInt32 get_NousTalkPerformanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_NOUSTALKPERFORMANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FinalPackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALPACKID_OFFSET))(this);
		}

		::System::UInt32 get_FinalStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_FINALSTORYID_OFFSET))(this);
		}

		::System::Boolean get_IsUpdatedVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GET_ISUPDATEDVERSION_OFFSET))(this);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::TarotBookCharacter* GetCharacter(::System::UInt32 id)
		{
			return ((::RPG::Client::TarotBookCharacter*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCHARACTER_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>* GetAllCharacters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookCharacter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLCHARACTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>* GetCurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCARDS_OFFSET))(this);
		}

		::RPG::Client::TarotBookCard* GetCard(::System::UInt32 id)
		{
			return ((::RPG::Client::TarotBookCard*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCARD_OFFSET))(this, id);
		}

		::System::UInt32 GetUniqueCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNIQUECARDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* GetCurrentClues()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTCLUES_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasExtendReadReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDREADREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtendReadRewardIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDREADREWARDIDS_OFFSET))(this);
		}

		::System::Void MarkAllReadRewardsHaveShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKALLREADREWARDSHAVESHOWN_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeReadReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKEREADREWARD_OFFSET))(this);
		}

		::System::Boolean CheckHasExtendCollectReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKHASEXTENDCOLLECTREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetExtendCollectQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETEXTENDCOLLECTQUESTIDS_OFFSET))(this);
		}

		::System::Void MarkAllCollectRewardsHaveShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKALLCOLLECTREWARDSHAVESHOWN_OFFSET))(this);
		}

		::System::Boolean CheckCanTakeCollectReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCANTAKECOLLECTREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>* GetAllReadReward()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookReadReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLREADREWARD_OFFSET))(this);
		}

		::System::Void TakeAllReadRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TAKEALLREADREWARDS_OFFSET))(this);
		}

		::System::Boolean CheckAllEidolonsHasGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKALLEIDOLONSHASGOT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetCollectQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCOLLECTQUESTDATALIST_OFFSET))(this);
		}

		::System::Boolean CheckIsSpecialCollectQuest(::RPG::Client::QuestData* quest)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISSPECIALCOLLECTQUEST_OFFSET))(this, quest);
		}

		::System::Void TakeAllCollectRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TAKEALLCOLLECTREWARDS_OFFSET))(this);
		}

		::System::Boolean CheckIsEntranceShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISENTRANCESHOW_OFFSET))(this);
		}

		::System::Boolean CheckIsCurrentStoryLineCanUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISCURRENTSTORYLINECANUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsTarotBookFilterAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ISTAROTBOOKFILTERAVAILABLE_OFFSET))(this);
		}

		::System::Boolean CheckIsFirstEnterBookletFromEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET))(this);
		}

		::System::Void SetIsFirstEnterBookletFromEntrance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_SETISFIRSTENTERBOOKLETFROMENTRANCE_OFFSET))(this, value);
		}

		::System::Void MarkNewVersionRevealed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKNEWVERSIONREVEALED_OFFSET))(this);
		}

		::System::Void MarkExperimentSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKEXPERIMENTSEEN_OFFSET))(this);
		}

		::System::Int32 GetUnlockedStoryCountByCharacter(::System::UInt32 characterID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNTBYCHARACTER_OFFSET))(this, characterID);
		}

		::System::UInt32 GetNewStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETNEWSTORYCOUNT_OFFSET))(this);
		}

		::System::Int32 GetUnlockedStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKEDSTORYCOUNT_OFFSET))(this);
		}

		::System::Int32 GetAllStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETALLSTORYCOUNT_OFFSET))(this);
		}

		::RPG::Client::TarotBookClue* GetClue(::System::UInt32 id)
		{
			return ((::RPG::Client::TarotBookClue*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCLUE_OFFSET))(this, id);
		}

		::RPG::Client::TarotBookStory* GetStory(::System::UInt32 id)
		{
			return ((::RPG::Client::TarotBookStory*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETSTORY_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FillNewStoryIDsTo(::System::Collections::Generic::List_1<::System::UInt32>* buffer)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_FILLNEWSTORYIDSTO_OFFSET))(this, buffer);
		}

		::RPG::Client::TarotBookBooklet* GetBooklet()
		{
			return ((::RPG::Client::TarotBookBooklet*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETBOOKLET_OFFSET))(this);
		}

		::System::UInt32 GetEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETENERGY_OFFSET))(this);
		}

		::System::String* GetStarPanelLockedImgByPosition(::System::UInt32 position)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETSTARPANELLOCKEDIMGBYPOSITION_OFFSET))(this, position);
		}

		::System::Void OpenPack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_OPENPACK_OFFSET))(this);
		}

		::System::Void QuickUnlockAllStories()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_QUICKUNLOCKALLSTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* GetUnlockStoryByCard(::System::UInt32 CardID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETUNLOCKSTORYBYCARD_OFFSET))(this, CardID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* GetCluesListByCard(::System::UInt32 cardID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCLUESLISTBYCARD_OFFSET))(this, cardID);
		}

		::System::Void UnlockStory(::System::UInt32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_UNLOCKSTORY_OFFSET))(this, cardID);
		}

		::System::Boolean CheckCharacterHasUnlock(::System::UInt32 characterID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKCHARACTERHASUNLOCK_OFFSET))(this, characterID);
		}

		::System::Boolean CheckStoryHasUnlocked(::System::UInt32 storyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASUNLOCKED_OFFSET))(this, storyID);
		}

		::System::Boolean CheckStoryHasFinished(::System::UInt32 storyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKSTORYHASFINISHED_OFFSET))(this, storyID);
		}

		::System::Void FillInteractionsTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_FILLINTERACTIONSTO_OFFSET))(this, buffer);
		}

		::System::Void MarkInteractionsUnlocked(::System::Collections::Generic::List_1<::System::UInt32>* interactionIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_MARKINTERACTIONSUNLOCKED_OFFSET))(this, interactionIDs);
		}

		::RPG::Client::TarotBookInteraction* GetInteraction(::System::UInt32 id)
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETINTERACTION_OFFSET))(this, id);
		}

		::System::Boolean CheckInteractionHasFinished(::System::UInt32 interactionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKINTERACTIONHASFINISHED_OFFSET))(this, interactionID);
		}

		::RPG::Client::TarotBookProcessContext* GetProcessContext()
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookProcessContext* GetOrCreateProcessContext()
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookProcessContext* GetOrCreateProcessContextWithVersion(::RPG::Client::TarotBookVersion version)
		{
			return ((::RPG::Client::TarotBookProcessContext*(*)(::PVOID, ::RPG::Client::TarotBookVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEPROCESSCONTEXTWITHVERSION_OFFSET))(this, version);
		}

		::System::Boolean TryDestroyProcessContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TRYDESTROYPROCESSCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookExperimentContext* GetOrCreateExperimentContext()
		{
			return ((::RPG::Client::TarotBookExperimentContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEEXPERIMENTCONTEXT_OFFSET))(this);
		}

		::RPG::Client::TarotBookMailManager* GetOrCreateMailManager()
		{
			return ((::RPG::Client::TarotBookMailManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEMAILMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookWikiManager* GetOrCreateWikiManager()
		{
			return ((::RPG::Client::TarotBookWikiManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETORCREATEWIKIMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookWikiManager* GetCurrentWikiManager()
		{
			return ((::RPG::Client::TarotBookWikiManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTWIKIMANAGER_OFFSET))(this);
		}

		::RPG::Client::TarotBookMailManager* GetCurrentMailManager()
		{
			return ((::RPG::Client::TarotBookMailManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCURRENTMAILMANAGER_OFFSET))(this);
		}

		::RPG::Client::TextID GetCardPackHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETCARDPACKHINT_OFFSET))(this);
		}

		::RPG::Client::TextID GetLastCardPackHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETLASTCARDPACKHINT_OFFSET))(this);
		}

		::System::Boolean CheckFinalPackHasOpened()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALPACKHASOPENED_OFFSET))(this);
		}

		::System::Boolean CheckFinalStoryHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALSTORYHASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean TryConsumeUnlockHintFlag(::System::UInt32 storyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_TRYCONSUMEUNLOCKHINTFLAG_OFFSET))(this, storyID);
		}

		::System::UInt32 GetRelativeAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETRELATIVEAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookDeleteData*>* GetDeleteDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookDeleteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETDELETEDATALIST_OFFSET))(this);
		}

		::System::Void AddReconnectCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ADDRECONNECTCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveReconnectCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_REMOVERECONNECTCALLBACK_OFFSET))(this, callback);
		}

		::RPG::Client::TarotBookVersion GetVersion()
		{
			return ((::RPG::Client::TarotBookVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_GETVERSION_OFFSET))(this);
		}

		::System::Boolean CheckUpdatedVersionHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKUPDATEDVERSIONHASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean CheckFinalVersionHasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_CHECKFINALVERSIONHASUNLOCKED_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _OnTarotBookGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookSyncDataScNotify(::System::UInt16 cmd, ::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKSYNCDATASCNOTIFY_OFFSET))(this, cmd, protoObject);
		}

		::System::Void _OnTarotBookOpenPackScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKOPENPACKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookUnlockStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookFinishStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookModifyEnergyScNotify(::System::UInt16 cmd, ::System::Object* protoObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMODIFYENERGYSCNOTIFY_OFFSET))(this, cmd, protoObject);
		}

		::System::Void _OnTarotBookFinishInteractionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKFINISHINTERACTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookUnlockInteractionScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKUNLOCKINTERACTIONSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTarotBookMultiOpenPackAndUnlockStoryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONTAROTBOOKMULTIOPENPACKANDUNLOCKSTORYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnServerPrefRefresh(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ONSERVERPREFREFRESH_OFFSET))(this, arg);
		}

		::System::Void _InitCharacters(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* characterToStories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITCHARACTERS_OFFSET))(this, characterToStories);
		}

		::System::Void _InitInteractions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITINTERACTIONS_OFFSET))(this);
		}

		::System::Void _FillCurrentCardsTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCARDSTO_OFFSET))(this, buffer);
		}

		::System::Void _FillCurrentCluesTo(::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookClue*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__FILLCURRENTCLUESTO_OFFSET))(this, buffer);
		}

		::System::Void _HandlePoolExhausted(::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* unlockedStories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__HANDLEPOOLEXHAUSTED_OFFSET))(this, unlockedStories);
		}

		static ::System::Void _PreprocessPools(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*& storyToPool, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& poolToStories)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSPOOLS_OFFSET))(storyToPool, poolToStories);
		}

		::System::Void _PreprocessStories(::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>*& stories, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& characterToStories, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*& cardToStories)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::Client::TarotBookStory*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTORIES_OFFSET))(this, stories, characterToStories, cardToStories);
		}

		::System::Void _InitReadRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITREADREWARDS_OFFSET))(this);
		}

		::System::Void _InitCollectQuestIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__INITCOLLECTQUESTIDS_OFFSET))(this);
		}

		::System::Void _PrepareRelativeSubmissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPARERELATIVESUBMISSIONS_OFFSET))(this);
		}

		::System::Void _AutoFillDefaultShownReadRewardIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNREADREWARDIDS_OFFSET))(this);
		}

		::System::Void _AutoFillDefaultShownCollectQuestIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__AUTOFILLDEFAULTSHOWNCOLLECTQUESTIDS_OFFSET))(this);
		}

		static ::System::Void _PreprocessStarPanelImg(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*& starPanelLockedImgMap)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__PREPROCESSSTARPANELIMG_OFFSET))(starPanelLockedImgMap);
		}

		static ::System::Void _AddElementToListMap(::System::UInt32 key, ::System::UInt32 value, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* map)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE__ADDELEMENTTOLISTMAP_OFFSET))(key, value, map);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
