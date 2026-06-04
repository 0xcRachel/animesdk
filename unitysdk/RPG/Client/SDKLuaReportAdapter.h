#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_17.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/LineupRecommendationReportActionType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayingMusicItemsInfo; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client { class TeamData; }
namespace RPG::Client::ActivityIdleLive { class StoryLine; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176CF650)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKTAKEPHOTO_OFFSET UNITYSDK_OFFSET(0x176CF570)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYIDLELIVEAPPLYDUNGEONRECOMMENDTEAM_OFFSET UNITYSDK_OFFSET(0x176D19D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYPANELPANELSWITCH_OFFSET UNITYSDK_OFFSET(0x176CF4C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONBTNCLICK_OFFSET UNITYSDK_OFFSET(0x176D0EF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPAGEOPEN_OFFSET UNITYSDK_OFFSET(0x176D0DC0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPANELOPEN_OFFSET UNITYSDK_OFFSET(0x176D0E60)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAPPLYRELICPRESET_OFFSET UNITYSDK_OFFSET(0x176D15A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAUTOUSEMPITEMSWITCH_OFFSET UNITYSDK_OFFSET(0x176CE9C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAVATARNORMALTRIALOPEN_OFFSET UNITYSDK_OFFSET(0x176CFCE0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTBATTLERESULTGOODRELICOPTIONS_OFFSET UNITYSDK_OFFSET(0x176D0A80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMAPPLY_OFFSET UNITYSDK_OFFSET(0x176D0020)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMOPERATION_OFFSET UNITYSDK_OFFSET(0x176CFF70)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAAPPLYPRESET_OFFSET UNITYSDK_OFFSET(0x176D0540)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAEVALUATIONLIKE_OFFSET UNITYSDK_OFFSET(0x176D0490)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERALEAVETEAMEDIT_OFFSET UNITYSDK_OFFSET(0x176D05C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKENDMOSTCHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0x176CF8C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKMISSIONCHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0x176CF830)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLOSEDIFFICULTYADJUSTUI_OFFSET UNITYSDK_OFFSET(0x176D09E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTELFRESTAURANTSPEEDUP_OFFSET UNITYSDK_OFFSET(0x176D0660)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTENTERSELFONLINEPLAYERROOM_OFFSET UNITYSDK_OFFSET(0x176D1740)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOEQUIPPINGAVATAR_OFFSET UNITYSDK_OFFSET(0x176D1260)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOSUITABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x176D1310)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFIVEDIMMOBILEINPUTSETTINGCONFIRM_OFFSET UNITYSDK_OFFSET(0x176D0700)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGACHAAVATARTOASTDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x176D0CC0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGAMERANKPAGE_OFFSET UNITYSDK_OFFSET(0x176D01A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGOTOTRAINPARTYPREGUIDEMISSION_OFFSET UNITYSDK_OFFSET(0x176D1840)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEFORMATION_OFFSET UNITYSDK_OFFSET(0x176D10A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFFILTER_OFFSET UNITYSDK_OFFSET(0x176D1140)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFSORT_OFFSET UNITYSDK_OFFSET(0x176D11E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTUIBUTTON_OFFSET UNITYSDK_OFFSET(0x176D0F80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTHELIOBUSREADSNSPOST_OFFSET UNITYSDK_OFFSET(0x176CEA40)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTITEMDIALOGGOODRELIC_OFFSET UNITYSDK_OFFSET(0x176D0B90)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXOPERATE_OFFSET UNITYSDK_OFFSET(0x176CE5F0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXWHITENOISEOPERATE_OFFSET UNITYSDK_OFFSET(0x176CE680)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINARRANGEMENTPAGE_OFFSET UNITYSDK_OFFSET(0x176D07B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINPERFORMANCEPAGE_OFFSET UNITYSDK_OFFSET(0x176D0870)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONEBATCHRANKCONFIRM_OFFSET UNITYSDK_OFFSET(0x176D0400)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONELOCKSETTING_OFFSET UNITYSDK_OFFSET(0x176CF720)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONESORT_OFFSET UNITYSDK_OFFSET(0x176CF0D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMAZESKILLAUTOUSEMPITEM_OFFSET UNITYSDK_OFFSET(0x176CE940)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMISSIONCHRONICLEPATHGOTO_OFFSET UNITYSDK_OFFSET(0x176CF950)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMULTIPLAYERSHOWINVITEDIALOG_OFFSET UNITYSDK_OFFSET(0x176D0100)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTONLINEGUESTRECEPTIONRESULT_OFFSET UNITYSDK_OFFSET(0x176D17C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENMISSIONCHRONICLE_OFFSET UNITYSDK_OFFSET(0x176CF7A0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENPLAYERINFOPAGE_OFFSET UNITYSDK_OFFSET(0x176D1640)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPAMCHATBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176D1B30)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPAMCHATHUDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176D1BB0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYEROUTFITSHOWINPERFORMANCESETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0x176D1940)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYWITHPSNONLYSTATE_OFFSET UNITYSDK_OFFSET(0x176CE710)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKCHOOSEITEMSTATUS_OFFSET UNITYSDK_OFFSET(0x176CE8C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKUSEITEMSTATUS_OFFSET UNITYSDK_OFFSET(0x176CE830)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMMEMBEREDIT_OFFSET UNITYSDK_OFFSET(0x176D13C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x176D14B0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICDIRECTEDSYNTHESISADDRECOMMENDAVATAR_OFFSET UNITYSDK_OFFSET(0x176D0380)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERDIALOGSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x176CED80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERRECOMMENDUSE_OFFSET UNITYSDK_OFFSET(0x176CEF80)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICREPLACEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176CE560)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSELLQUICKSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x176CEBA0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTDISPOSALSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x176CEC20)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUIAPPLY_OFFSET UNITYSDK_OFFSET(0x176D02E0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUITOPEN_OFFSET UNITYSDK_OFFSET(0x176D0240)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSORT_OFFSET UNITYSDK_OFFSET(0x176CF040)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICUPGRADEMATERIALFILTERSELECTOPTIONS_OFFSET UNITYSDK_OFFSET(0x176CECE0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSHOWDIFFICULTYADJUSTUI_OFFSET UNITYSDK_OFFSET(0x176D0950)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSOCIALSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0x176CE790)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176CFDE0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWDIALOGOPEN_OFFSET UNITYSDK_OFFSET(0x176CFD60)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWPERFORMANCEEND_OFFSET UNITYSDK_OFFSET(0x176CFE70)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWTRANSFERCLICK_OFFSET UNITYSDK_OFFSET(0x176CFEF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSWITCHMAPONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x176D18C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMASSOCIATIONSELECTION_OFFSET UNITYSDK_OFFSET(0x176D0D40)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSELECTLINEUP_OFFSET UNITYSDK_OFFSET(0x176CFBD0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSWITCHLINEUP_OFFSET UNITYSDK_OFFSET(0x176CFA00)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRAVELBROCHUREPREVIEWPASTER_OFFSET UNITYSDK_OFFSET(0x176CEAF0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRYENTERPLAYERROOM_OFFSET UNITYSDK_OFFSET(0x176D16C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176CE3D0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUICLOSE_OFFSET UNITYSDK_OFFSET(0x176CE1C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIOPEN_OFFSET UNITYSDK_OFFSET(0x176CE100)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELLEAVE_OFFSET UNITYSDK_OFFSET(0x176CE310)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELSWITCH_OFFSET UNITYSDK_OFFSET(0x176CE270)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUISORTBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x176CE490)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_RECOMMEND_HIGH_LIGHT_OFFSET UNITYSDK_OFFSET(0x176CF240)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_SUIT_RECOMMEND_OFFSET UNITYSDK_OFFSET(0x176CF160)
#define RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_USE_RELIC_FILTER_PLAN_OFFSET UNITYSDK_OFFSET(0x176CF2C0)
#define RPG_CLIENT_SDKLUAREPORTADAPTER__AVATARIDENUMERATORBYTEAMDATA_OFFSET UNITYSDK_OFFSET(0x176CFB50)
#define RPG_CLIENT_SDKLUAREPORTADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D1C30)

namespace RPG::Client
{
	inline static constexpr unsigned int SDKLuaReportAdapter_TypeDefinitionIndex = 56097;

	class SDKLuaReportAdapter : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CachedUIFrom()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SDKLuaReportAdapter_TypeDefinitionIndex)->GetStaticField(0x3C8F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER__CTOR_OFFSET))(this);
		}

		static ::System::Void ReportUIOpen(::System::String* a1, ::System::String* a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIOPEN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportUIClose(::System::String* a1, ::System::Single a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUICLOSE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportUIPanelSwitch(::System::String* a1, ::System::String* a2, ::System::Guid a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELSWITCH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportUIPanelLeave(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Guid a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIPANELLEAVE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportUIButtonClick(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Guid a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUIBUTTONCLICK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportUISortButtonClick(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Guid a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTUISORTBUTTONCLICK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportRelicReplaceButtonClick(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICREPLACEBUTTONCLICK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportJukeboxOperate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXOPERATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportJukeboxWhiteNoiseOperate(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::PlayingMusicItemsInfo* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::RPG::Client::PlayingMusicItemsInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTJUKEBOXWHITENOISEOPERATE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportPlayWithPsnOnlyState(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYWITHPSNONLYSTATE_OFFSET))(a1);
		}

		static ::System::Void ReportSocialSettingChange(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSOCIALSETTINGCHANGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportQuickUseItemStatus(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKUSEITEMSTATUS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportQuickChooseItemStatus(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTQUICKCHOOSEITEMSTATUS_OFFSET))(a1);
		}

		static ::System::Void ReportMazeSkillAutoUseMPItem(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMAZESKILLAUTOUSEMPITEM_OFFSET))(a1, a2);
		}

		static ::System::Void ReportAutoUseMPItemSwitch(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAUTOUSEMPITEMSWITCH_OFFSET))(a1, a2);
		}

		static ::System::Void ReportHeliobusReadSNSPost(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTHELIOBUSREADSNSPOST_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportTravelBrochurePreviewPaster(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRAVELBROCHUREPREVIEWPASTER_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportRelicSellQuickSelectOptions(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSELLQUICKSELECTOPTIONS_OFFSET))(a1, a2);
		}

		static ::System::Void ReportRelicSmartDisposalSelectOptions(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTDISPOSALSELECTOPTIONS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ReportRelicUpgradeMaterialFilterSelectOptions(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICUPGRADEMATERIALFILTERSELECTOPTIONS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportRelicFilterDialogSelectOptions(::RPG::GameCore::RelicType a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::System::Collections::Generic::List_1<::System::UInt32>* a12, ::System::Collections::Generic::List_1<::System::UInt32>* a13, ::System::Int32 a14, ::System::Int32 a15, ::System::Int32 a16, ::System::Int32 a17)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicType, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERDIALOGSELECTOPTIONS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		static ::System::Void ReportRelicFilterRecommendUse(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICFILTERRECOMMENDUSE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ReportRelicSort(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSORT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportLightConeSort(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONESORT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Report_Suit_Recommend(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_SUIT_RECOMMEND_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void Report_Recommend_High_Light(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_RECOMMEND_HIGH_LIGHT_OFFSET))(a1);
		}

		static ::System::Void Report_Use_Relic_Filter_Plan(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::System::Collections::Generic::List_1<::System::UInt32>* a8, ::System::Collections::Generic::List_1<::System::UInt32>* a9, ::System::Collections::Generic::List_1<::System::UInt32>* a10, ::System::Collections::Generic::List_1<::System::UInt32>* a11, ::System::Collections::Generic::List_1<::System::UInt32>* a12, ::System::Collections::Generic::List_1<::System::UInt32>* a13, ::System::Int32 a14, ::System::Collections::Generic::List_1<::System::UInt32>* a15, ::System::Int32 a16, ::System::Int32 a17)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORT_USE_RELIC_FILTER_PLAN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		static ::System::Void ReportActivityPanelPanelSwitch(::System::String* a1, ::System::String* a2, ::System::Guid a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Guid, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYPANELPANELSWITCH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportActivityClockParkTakePhoto(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKTAKEPHOTO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportActivityClockParkButtonClick(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Guid a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYCLOCKPARKBUTTONCLICK_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportLightConeLockSetting(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONELOCKSETTING_OFFSET))(a1, a2);
		}

		static ::System::Void ReportOpenMissionChronicle(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENMISSIONCHRONICLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportClickMissionChroniclePath(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKMISSIONCHRONICLEPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportClickEndmostChroniclePath(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLICKENDMOSTCHRONICLEPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportMissionChroniclePathGoto(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMISSIONCHRONICLEPATHGOTO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportTeamEditSwitchLineup(::RPG::Client::TeamData* a1, ::RPG::Client::TeamData* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::TeamData*, ::RPG::Client::TeamData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSWITCHLINEUP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportTeamEditSelectLineup(::System::String* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMEDITSELECTLINEUP_OFFSET))(a1, a2);
		}

		static ::System::Void ReportAvatarNormalTrialOpen(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAVATARNORMALTRIALOPEN_OFFSET))(a1, a2);
		}

		static ::System::Void ReportStoryReviewDialogOpen(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWDIALOGOPEN_OFFSET))(a1, a2);
		}

		static ::System::Void ReportStoryReviewButtonClick(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWBUTTONCLICK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportStoryReviewPerformanceEnd(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWPERFORMANCEEND_OFFSET))(a1, a2);
		}

		static ::System::Void ReportStoryReviewTransferClick(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSTORYREVIEWTRANSFERCLICK_OFFSET))(a1, a2);
		}

		static ::System::Void ReportChallengeRecommendTeamOperation(::RPG::GameCore::ChallengeGroupType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::LineupRecommendationReportActionType a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LineupRecommendationReportActionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMOPERATION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportChallengeRecommendTeamApply(::RPG::GameCore::ChallengeGroupType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Collections::Generic::List_1<::System::UInt32>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHALLENGERECOMMENDTEAMAPPLY_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ReportMultiplayerShowInviteDialog(::System::Int32 a1, ::Enum_3_A35B38E5F9115A76_2 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::Int32, ::Enum_3_A35B38E5F9115A76_2, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTMULTIPLAYERSHOWINVITEDIALOG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportGameRankPage(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGAMERANKPAGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportRelicSmartSuitOpen(::System::UInt32 a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUITOPEN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportRelicSmartSuiApply(::System::UInt32 a1, ::System::Int32 a2, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a3, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICSMARTSUIAPPLY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportRelicDirectedSynthesisAddRecommendAvatar(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRELICDIRECTEDSYNTHESISADDRECOMMENDAVATAR_OFFSET))(a1, a2);
		}

		static ::System::Void ReportLightConeBatchRankConfirm(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLIGHTCONEBATCHRANKCONFIRM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportChimeraEvaluationLike(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAEVALUATIONLIKE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportChimeraApplyPreset(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERAAPPLYPRESET_OFFSET))(a1, a2);
		}

		static ::System::Void ReportChimeraLeaveTeamEdit(::System::UInt32 a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCHIMERALEAVETEAMEDIT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportElfRestaurantSpeedUp(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTELFRESTAURANTSPEEDUP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportFiveDimMobileInputSettingConfirm(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFIVEDIMMOBILEINPUTSETTINGCONFIRM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportLeaveSwordTrainArrangementPage(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINARRANGEMENTPAGE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ReportLeaveSwordTrainPerformancePage(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTLEAVESWORDTRAINPERFORMANCEPAGE_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void ReportShowDifficultyAdjustUI(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSHOWDIFFICULTYADJUSTUI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportCloseDifficultyAdjustUI(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTCLOSEDIFFICULTYADJUSTUI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportBattleResultGoodRelicOptions(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Collections::Generic::List_1<::System::String*>* a7, ::System::Collections::Generic::List_1<::System::String*>* a8, ::System::UInt32 a9)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTBATTLERESULTGOODRELICOPTIONS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void ReportItemDialogGoodRelic(::System::Boolean a1, ::System::Boolean a2, ::System::UInt32 a3, ::RPG::GameCore::RelicType a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7, ::System::UInt32 a8, ::RPG::GameCore::AvatarPropertyType a9, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>* a10)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::System::UInt32, ::RPG::GameCore::RelicType, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::AvatarPropertyType, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTITEMDIALOGGOODRELIC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void ReportGachaAvatarToastDialogOpen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGACHAAVATARTOASTDIALOGOPEN_OFFSET))(a1);
		}

		static ::System::Void ReportTeamAssociationSelection(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTEAMASSOCIATIONSELECTION_OFFSET))(a1, a2);
		}

		static ::System::Void ReportAnniversaryCollectionPageOpen(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPAGEOPEN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportAnniversaryCollectionPanelOpen(::System::String* a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONPANELOPEN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportAnniversaryCollectionBtnClick(::System::String* a1, ::System::String* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTANNIVERSARYCOLLECTIONBTNCLICK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportGridFightUIButton(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Guid a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::Guid, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTUIBUTTON_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void ReportGridFightGameFormation(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEFORMATION_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportGridFightGameRefFilter(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFFILTER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportGridFightGameRefSort(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGRIDFIGHTGAMEREFSORT_OFFSET))(a1, a2);
		}

		static ::System::Void ReportFastGotoEquippingAvatar(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOEQUIPPINGAVATAR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportFastGotoSuitableAvatar(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTFASTGOTOSUITABLEAVATAR_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ReportRecommendTeamMemberEdit(::System::String* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Guid a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMMEMBEREDIT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ReportRecommendTeamSave(::System::String* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5, ::System::Guid a6)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Guid))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTRECOMMENDTEAMSAVE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ReportApplyRelicPreset(::System::String* a1, ::Enum_3_71AA90D596A09AC8_17 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>* a4)
		{
			return ((::System::Void(*)(::System::String*, ::Enum_3_71AA90D596A09AC8_17, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::RelicItemData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTAPPLYRELICPRESET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ReportOpenPlayerInfoPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTOPENPLAYERINFOPAGE_OFFSET))(a1);
		}

		static ::System::Void ReportTryEnterPlayerRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTTRYENTERPLAYERROOM_OFFSET))(a1);
		}

		static ::System::Void ReportEnterSelfOnlinePlayerRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTENTERSELFONLINEPLAYERROOM_OFFSET))(a1);
		}

		static ::System::Void ReportOnlineGuestReceptionResult(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTONLINEGUESTRECEPTIONRESULT_OFFSET))(a1, a2);
		}

		static ::System::Void ReportGotoTrainPartyPreguideMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTGOTOTRAINPARTYPREGUIDEMISSION_OFFSET))(a1);
		}

		static ::System::Void ReportSwitchMapOnlineStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTSWITCHMAPONLINESTATUS_OFFSET))(a1);
		}

		static ::System::Void ReportPlayerOutfitShowInPerformanceSettingChange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPLAYEROUTFITSHOWINPERFORMANCESETTINGCHANGE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerator_1<::System::UInt32>* _AvatarIDEnumeratorByTeamData(::RPG::Client::TeamData* a1)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::UInt32>*(*)(::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER__AVATARIDENUMERATORBYTEAMDATA_OFFSET))(a1);
		}

		static ::System::Void ReportActivityIdleLiveApplyDungeonRecommendTeam(::RPG::Client::ActivityIdleLive::StoryLine* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityIdleLive::StoryLine*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTACTIVITYIDLELIVEAPPLYDUNGEONRECOMMENDTEAM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ReportPamChatButtonClick(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPAMCHATBUTTONCLICK_OFFSET))(a1, a2);
		}

		static ::System::Void ReportPamChatHUDButtonClick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SDKLUAREPORTADAPTER_REPORTPAMCHATHUDBUTTONCLICK_OFFSET))(a1);
		}
	};
}
