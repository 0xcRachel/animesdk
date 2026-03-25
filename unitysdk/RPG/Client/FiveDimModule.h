#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_36.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FiveDimModule_OverridableVariable_1.h"
#include "unitysdk/RPG/Client/FiveDimTransitionStatus.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/GameCore/FiveDimAvatarMoveAbility.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/Struct_2_F2B3E6EDD02C9F11.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2325E4073E18D39D_2;
class Class_1_32044B0173B87B04_2;
class Class_1_3DE734113B1E313B_2;
class Class_1_43BD383C98B4C0C5_134;
class Class_1_F2A002E962740C85_2;
class Class_1_FA4F4A67B1C04320_310;
class Class_1_FA4F4A67B1C04320_311;
class Class_1_FA4F4A67B1C04320_312;
class Class_1_FA4F4A67B1C04320_314;
class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimJumpDisplayInfo; }
namespace RPG::Client { class FiveDimSkillDisplayInfo; }
namespace RPG::Client { class FiveDimTrainModeDisplayInfos; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class UIFrameCapture; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPlayerRankingListInfo; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyPuzzleData; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimFluteDataManager; }
namespace RPG::Client::LittleGame::FiveDim { class SidePuzzleTargetData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class FiveDimGameConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FIVEDIMMODULE_ADD_ONMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x96FDEA0)
#define RPG_CLIENT_FIVEDIMMODULE_APPLYFLUTE_OFFSET UNITYSDK_OFFSET(0x96FC210)
#define RPG_CLIENT_FIVEDIMMODULE_CHENLINGCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x96F8B70)
#define RPG_CLIENT_FIVEDIMMODULE_CLEARNETWORKDATA_OFFSET UNITYSDK_OFFSET(0x96FFD10)
#define RPG_CLIENT_FIVEDIMMODULE_CLOSETRANSITIONVIEW_OFFSET UNITYSDK_OFFSET(0x96F6E40)
#define RPG_CLIENT_FIVEDIMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9701F70)
#define RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FAE70)
#define RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x96FA160)
#define RPG_CLIENT_FIVEDIMMODULE_EXITCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FB320)
#define RPG_CLIENT_FIVEDIMMODULE_EXITFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x96F4950)
#define RPG_CLIENT_FIVEDIMMODULE_EXITTYPETONETWORKLEAVETYPE_OFFSET UNITYSDK_OFFSET(0x96FF590)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERJUMPDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9701E50)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSKILLDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x9701740)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x96FAC20)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHTRAINMODEDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x9701330)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x9702A20)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMMINIGAME_OFFSET UNITYSDK_OFFSET(0x96FCA80)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFLUTE_OFFSET UNITYSDK_OFFSET(0x96FC140)
#define RPG_CLIENT_FIVEDIMMODULE_GETCHENLINGGAMEBOYPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x96FA5F0)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x96FD1D0)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEID_OFFSET UNITYSDK_OFFSET(0x96FD5E0)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_1_OFFSET UNITYSDK_OFFSET(0x96FD9B0)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_OFFSET UNITYSDK_OFFSET(0x96FD900)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEPREVIEWREWARDS_OFFSET UNITYSDK_OFFSET(0x96FDB90)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMESCORETARGETS_OFFSET UNITYSDK_OFFSET(0x96FD730)
#define RPG_CLIENT_FIVEDIMMODULE_GETSETTLEMENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x96FBD50)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CANUSECAMERAOBSERVE_OFFSET UNITYSDK_OFFSET(0x9702BE0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CHENLINGGAMEBOYPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x96FABA0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9702BB0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x97011B0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET UNITYSDK_OFFSET(0x9703090)
#define RPG_CLIENT_FIVEDIMMODULE_GET_GAMEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9702C40)
#define RPG_CLIENT_FIVEDIMMODULE_GET_GAMELEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x9702CA0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INPUTJOYSTICKTYPE_OFFSET UNITYSDK_OFFSET(0x9702FE0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x96E5850)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INWALLREVERSEINPUTCD_OFFSET UNITYSDK_OFFSET(0x9702E90)
#define RPG_CLIENT_FIVEDIMMODULE_GET_ISINFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x96F4B40)
#define RPG_CLIENT_FIVEDIMMODULE_GET_ISMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x96FE9B0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MAXJUMPENERGY_OFFSET UNITYSDK_OFFSET(0x9702BD0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYITEMID_OFFSET UNITYSDK_OFFSET(0x96FE7D0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYNUM_OFFSET UNITYSDK_OFFSET(0x96FE8B0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYLIMIT_OFFSET UNITYSDK_OFFSET(0x96FE480)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYNUM_OFFSET UNITYSDK_OFFSET(0x96FE990)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x9702D60)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x9702DC0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTHORIZONTALANGLE_OFFSET UNITYSDK_OFFSET(0x9702F70)
#define RPG_CLIENT_FIVEDIMMODULE_GET_OUTWALLREVERSEINPUTCD_OFFSET UNITYSDK_OFFSET(0x9702F00)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x9701210)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER3DINFO_OFFSET UNITYSDK_OFFSET(0x97012D0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGSERVERPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x9701270)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PLAYERSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x9701A30)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x9701310)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SHOULDREVERSEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x9702E30)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SIDEPUZZLETARGETDATA_OFFSET UNITYSDK_OFFSET(0x9703060)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SKILLPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x97018A0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_USEDIRECTIONBTN_OFFSET UNITYSDK_OFFSET(0x9703050)
#define RPG_CLIENT_FIVEDIMMODULE_GET_USEPOLARCOORDINATES_OFFSET UNITYSDK_OFFSET(0x9703080)
#define RPG_CLIENT_FIVEDIMMODULE_GET__DEFAULTSKILLPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x9701950)
#define RPG_CLIENT_FIVEDIMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9701390)
#define RPG_CLIENT_FIVEDIMMODULE_INVOKEREACHMAXTIMELIMITSEQUENCE_OFFSET UNITYSDK_OFFSET(0x96FBA70)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEAPPLIED_OFFSET UNITYSDK_OFFSET(0x96FC500)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x96FC0F0)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEFINISHED_OFFSET UNITYSDK_OFFSET(0x96FC040)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEVALID_OFFSET UNITYSDK_OFFSET(0x96FBFD0)
#define RPG_CLIENT_FIVEDIMMODULE_LEAVECHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FB460)
#define RPG_CLIENT_FIVEDIMMODULE_NOTIFYDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x96FE640)
#define RPG_CLIENT_FIVEDIMMODULE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x96EFCF0)
#define RPG_CLIENT_FIVEDIMMODULE_ONEXITCHENLINGGAMEBOYGAMEENTRANCE_OFFSET UNITYSDK_OFFSET(0x96FB8C0)
#define RPG_CLIENT_FIVEDIMMODULE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x96F07D0)
#define RPG_CLIENT_FIVEDIMMODULE_OPENTRANSITIONVIEW_OFFSET UNITYSDK_OFFSET(0x96F6D00)
#define RPG_CLIENT_FIVEDIMMODULE_RECOVERMINIGAMEFCV_OFFSET UNITYSDK_OFFSET(0x96FDD60)
#define RPG_CLIENT_FIVEDIMMODULE_RELEASEFRAME_OFFSET UNITYSDK_OFFSET(0x96FBDA0)
#define RPG_CLIENT_FIVEDIMMODULE_REMOVE_ONMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x96FDF00)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTADDMONEY_OFFSET UNITYSDK_OFFSET(0x96FDF60)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTENTERGAME_OFFSET UNITYSDK_OFFSET(0x96FED40)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTGAMEDATA_OFFSET UNITYSDK_OFFSET(0x96FF4A0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTLEAVEGAME_OFFSET UNITYSDK_OFFSET(0x96F4F90)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTNETWORKFINISHCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x96FA860)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTTRANSFER_OFFSET UNITYSDK_OFFSET(0x96FF8C0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATEPLAYEREXTRAABILITY_OFFSET UNITYSDK_OFFSET(0x96E58B0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATETWODIMPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x96FF5F0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUIRECHENLINGGAMEBOYDATA_OFFSET UNITYSDK_OFFSET(0x96FA7D0)
#define RPG_CLIENT_FIVEDIMMODULE_RESETCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FB110)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATINPUTKEYREQ_OFFSET UNITYSDK_OFFSET(0x96FFBE0)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATMODEREQ_OFFSET UNITYSDK_OFFSET(0x96FFC70)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGGAMEBOYCHANGESETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0x96FF7B0)
#define RPG_CLIENT_FIVEDIMMODULE_SETCHENLINGGAMEBOYTIMEPAUSED_OFFSET UNITYSDK_OFFSET(0x96FB9A0)
#define RPG_CLIENT_FIVEDIMMODULE_SETCURRENTACTIVEFLUTEID_OFFSET UNITYSDK_OFFSET(0x96FC0A0)
#define RPG_CLIENT_FIVEDIMMODULE_SETMAXJUMPENERGY_OFFSET UNITYSDK_OFFSET(0x9700D20)
#define RPG_CLIENT_FIVEDIMMODULE_SETMOVEABILITYENABLED_OFFSET UNITYSDK_OFFSET(0x9701660)
#define RPG_CLIENT_FIVEDIMMODULE_SETPLAYERSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x97016E0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9702BC0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x97011E0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET UNITYSDK_OFFSET(0x97030A0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_INPUTJOYSTICKTYPE_OFFSET UNITYSDK_OFFSET(0x9702FF0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_ISMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x96FE9C0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_MONEYNUM_OFFSET UNITYSDK_OFFSET(0x96FE3D0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_MONEYWEEKLYNUM_OFFSET UNITYSDK_OFFSET(0x96FE9A0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x9701240)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER3DINFO_OFFSET UNITYSDK_OFFSET(0x97012F0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGSERVERPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x97012A0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x9701320)
#define RPG_CLIENT_FIVEDIMMODULE_SET_SIDEPUZZLETARGETDATA_OFFSET UNITYSDK_OFFSET(0x9703070)
#define RPG_CLIENT_FIVEDIMMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9701B50)
#define RPG_CLIENT_FIVEDIMMODULE__ADDMINIGAMEPACKEDHANDLERS_OFFSET UNITYSDK_OFFSET(0x96FCD50)
#define RPG_CLIENT_FIVEDIMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x97021E0)
#define RPG_CLIENT_FIVEDIMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x96FE9D0)
#define RPG_CLIENT_FIVEDIMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x9702010)
#define RPG_CLIENT_FIVEDIMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9703100)
#define RPG_CLIENT_FIVEDIMMODULE__EXECUTEENTERGAMESEQUENCE_OFFSET UNITYSDK_OFFSET(0x96FBE10)
#define RPG_CLIENT_FIVEDIMMODULE__EXECUTEEXITGAMESEQUENCE_OFFSET UNITYSDK_OFFSET(0x96FBEF0)
#define RPG_CLIENT_FIVEDIMMODULE__FROMNETWORKDATA_OFFSET UNITYSDK_OFFSET(0x9700260)
#define RPG_CLIENT_FIVEDIMMODULE__FROMPROTOPOSITION_OFFSET UNITYSDK_OFFSET(0x9701040)
#define RPG_CLIENT_FIVEDIMMODULE__FROMPROTOROTATION_OFFSET UNITYSDK_OFFSET(0x97010E0)
#define RPG_CLIENT_FIVEDIMMODULE__GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x96FBB50)
#define RPG_CLIENT_FIVEDIMMODULE__INITGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9701610)
#define RPG_CLIENT_FIVEDIMMODULE__LEAVECHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FB4B0)
#define RPG_CLIENT_FIVEDIMMODULE__LOADGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x9702870)
#define RPG_CLIENT_FIVEDIMMODULE__NOTIFYDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x96FE690)
#define RPG_CLIENT_FIVEDIMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x97026E0)
#define RPG_CLIENT_FIVEDIMMODULE__ONCHENLINGGAMEBOYGETFRIENDRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9700A20)
#define RPG_CLIENT_FIVEDIMMODULE__ONENTERFIVEDIMGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x96FFDA0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFINISHCHENLINGGAMEBOYSCRSP_OFFSET UNITYSDK_OFFSET(0x9700AE0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFINISHFIVEDIMMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x96FCE00)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMFLUTEDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x96FC930)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMEDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x96FFEC0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMETRANSFERSCRSP_OFFSET UNITYSDK_OFFSET(0x9700440)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMJUMPENERGYCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9700D70)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMMONEYCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x96FE560)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMONMAINPAGERETURNTOP_OFFSET UNITYSDK_OFFSET(0x9702730)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETCHENLINGGAMEBOYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9700960)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMFLUTEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x96FC7E0)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9700C80)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMINIGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x96FD310)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x96FE340)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYSCRSP_OFFSET UNITYSDK_OFFSET(0x96FE0D0)
#define RPG_CLIENT_FIVEDIMMODULE__ONHIDESIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x9702590)
#define RPG_CLIENT_FIVEDIMMODULE__ONLEAVEFIVEDIMGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x9700560)
#define RPG_CLIENT_FIVEDIMMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x9702780)
#define RPG_CLIENT_FIVEDIMMODULE__ONSHOWSIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x97024D0)
#define RPG_CLIENT_FIVEDIMMODULE__ONUPDATEFIVEDIMGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9700870)
#define RPG_CLIENT_FIVEDIMMODULE__ONUPDATESIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x97025E0)
#define RPG_CLIENT_FIVEDIMMODULE__REQUESTQUITCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x96FB3D0)
#define RPG_CLIENT_FIVEDIMMODULE__RESETCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x96FB290)
#define RPG_CLIENT_FIVEDIMMODULE__SENDMINIGAMEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x96FD260)
#define RPG_CLIENT_FIVEDIMMODULE__SENDMONEYINITREQUEST_OFFSET UNITYSDK_OFFSET(0x96FE020)
#define RPG_CLIENT_FIVEDIMMODULE__SETCAMERARECT_OFFSET UNITYSDK_OFFSET(0x96FBCD0)
#define RPG_CLIENT_FIVEDIMMODULE__SHOWDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x96FE150)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_1_OFFSET UNITYSDK_OFFSET(0x96FF060)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_2_OFFSET UNITYSDK_OFFSET(0x96FF0E0)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_3_OFFSET UNITYSDK_OFFSET(0x96FF1F0)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_4_OFFSET UNITYSDK_OFFSET(0x9700FB0)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_OFFSET UNITYSDK_OFFSET(0x9700E10)
#define RPG_CLIENT_FIVEDIMMODULE__TRYUPDATECLIENTPOSVERSION_OFFSET UNITYSDK_OFFSET(0x9700000)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9703380)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x97032F0)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9703390)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9703290)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule_TypeDefinitionIndex = 52124;

	class FiveDimModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 INVALID_FLUTE_ID = 0x0; // 0x0
		// static const ::System::UInt32 _EMPTY_REWARD_ID = 0x64; // 0x0
		// static const ::System::String* MiniGameSetResultDialogPath; // 0x0
		// static const ::System::UInt32 _FUNC_ENTRANCE_LIST_ID = 0x17; // 0x0
		::System::Action_1<::Class_1_FA4F4A67B1C04320_312*>* OnLeaveFiveDimGameScRsp; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*>* _ChenLingGameBoyPuzzleDataDir; // 0x18
		::System::Action_1<::Class_1_FA4F4A67B1C04320_311*>* OnEnterFiveDimGameScRsp; // 0x20
		::Class_3_5775A4FEC79026BC* _ReachMaxTimeLimitSequence; // 0x28
		::System::Action_1<::System::Boolean>* OnMoneyWeeklyLimitReached; // 0x30
		::RPG::Client::FiveDimGameInstance* _CurrentGameInstance_k__BackingField; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ValidTeleportFluteIDs; // 0x40
		::RPG::Client::Promises::Promise_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*>* _FetchFriendRankingInfoPromise; // 0x48
		::RPG::Client::UIFrameCapture* _FrameCapture; // 0x50
		::Class_3_5775A4FEC79026BC* _EnterChenLingGameSequence; // 0x58
		::Class_3_5775A4FEC79026BC* _ExitChenLingGameSequence; // 0x60
		::Class_3_5775A4FEC79026BC* _ExitSequence; // 0x68
		::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager* FluteDataManager; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MiniGameHighScores; // 0x78
		::Class_1_43BD383C98B4C0C5_134* _PuzzleData_k__BackingField; // 0x80
		::System::Action_1<::Class_1_FA4F4A67B1C04320_314*>* OnFiveDimGameTransferScRsp; // 0x88
		::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* _SidePuzzleTargetData_k__BackingField; // 0x90
		::UnityEngine::Texture* _SettlementTexture; // 0x98
		::RPG::GameCore::FiveDimGameConfig* _GameConfig; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FinishedFluteIDs; // 0xA8
		::System::String* GameSerialNumber; // 0xB0
		::System::UInt32 _InputJoyStickType; // 0xB8
		::System::UInt32 _RewardShowCount; // 0xBC
		::System::UInt32 _FiveDimInputID; // 0xC0
		::Struct_2_F01DF3CDCF3FD7AC _CurrentPlayer2DInfo_k__BackingField; // 0xC4
		::RPG::Client::FiveDimModule_OverridableVariable_1<::RPG::GameCore::FiveDimAvatarMoveAbility> _MoveAbility; // 0xF0
		::System::Int32 _TimerIndex; // 0xFC
		::System::UInt32 _MoneyWeeklyNum_k__BackingField; // 0x100
		::System::Boolean IncontrolUseDeadZoneValue; // 0x104
		::System::Boolean _IsMoneyWeeklyLimitReached_k__BackingField; // 0x105
		::System::Boolean _FiveDimJoyStickDebugShow; // 0x106
		::RPG::Client::FiveDimTransitionStatus TransitionStatus; // 0x108
		::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC> _PendingServerPlayer2DInfo_k__BackingField; // 0x10C
		::Struct_2_F01DF3CDCF3FD7AC _PendingPlayer2DInfo_k__BackingField; // 0x13C
		::System::Nullable_1<::Struct_2_FC595D1A561D8C6F> _PendingPlayer3DInfo_k__BackingField; // 0x168
		::System::UInt32 _MaxJumpEnergy; // 0x188
		::System::Single _CaptureFrameRadio; // 0x18C
		::System::UInt32 CurrentActiveFluteID; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EnterChenLingGameBoy(::System::UInt32 gameID, ::Class_3_5775A4FEC79026BC* exitSequence, ::Class_3_5775A4FEC79026BC* enterFiveDimSequence, ::Class_3_5775A4FEC79026BC* exitFiveDimSequence, ::Class_3_5775A4FEC79026BC* reachMaxTimeLimitSequence, ::RPG::GameCore::GameEntity* ownerEntity, ::UnityEngine::Transform* centerNode, ::UnityEngine::Transform* upperLeftNode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::Class_3_5775A4FEC79026BC*, ::Class_3_5775A4FEC79026BC*, ::Class_3_5775A4FEC79026BC*, ::Class_3_5775A4FEC79026BC*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOY_OFFSET))(this, gameID, exitSequence, enterFiveDimSequence, exitFiveDimSequence, reachMaxTimeLimitSequence, ownerEntity, centerNode, upperLeftNode);
		}

		::System::Void RequireChenLingGameBoyData(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUIRECHENLINGGAMEBOYDATA_OFFSET))(this, gameID);
		}

		::System::Void RequestNetworkFinishChenLingGameBoy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTNETWORKFINISHCHENLINGGAMEBOY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*>* FetchPlayersRankingInfo(::System::UInt32 gameID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSRANKINGINFO_OFFSET))(this, gameID);
		}

		::System::Void EnterChenLingGameBoyInstance(::System::Boolean isCheat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOYINSTANCE_OFFSET))(this, isCheat);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* GetChenLingGameBoyPuzzleData(::System::UInt32 gameID)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETCHENLINGGAMEBOYPUZZLEDATA_OFFSET))(this, gameID);
		}

		::System::Void ResetChenLingGameBoyInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_RESETCHENLINGGAMEBOYINSTANCE_OFFSET))(this);
		}

		::System::Void ExitChenLingGameBoyInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_EXITCHENLINGGAMEBOYINSTANCE_OFFSET))(this);
		}

		::System::Void LeaveChenLingGameBoyInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_LEAVECHENLINGGAMEBOYINSTANCE_OFFSET))(this);
		}

		::System::Void OnExitChenLingGameBoyGameEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ONEXITCHENLINGGAMEBOYGAMEENTRANCE_OFFSET))(this);
		}

		::System::Void SetChenLingGameBoyTimePaused(::System::Boolean isPaused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SETCHENLINGGAMEBOYTIMEPAUSED_OFFSET))(this, isPaused);
		}

		::System::Void InvokeReachMaxTimeLimitSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_INVOKEREACHMAXTIMELIMITSEQUENCE_OFFSET))(this);
		}

		::System::Void ChenLingCaptureFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_CHENLINGCAPTUREFRAME_OFFSET))(this);
		}

		::UnityEngine::Rect _GetScreenRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__GETSCREENRECT_OFFSET))(this);
		}

		::System::Void _SetCameraRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect newRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__SETCAMERARECT_OFFSET))(this, camera, newRect);
		}

		::UnityEngine::Texture* GetSettlementTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETSETTLEMENTTEXTURE_OFFSET))(this);
		}

		::System::Void ReleaseFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_RELEASEFRAME_OFFSET))(this);
		}

		::System::Void _LeaveChenLingGameBoyInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__LEAVECHENLINGGAMEBOYINSTANCE_OFFSET))(this);
		}

		::System::Void _RequestQuitChenLingGameBoy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__REQUESTQUITCHENLINGGAMEBOY_OFFSET))(this);
		}

		::System::Void _ResetChenLingGameBoyInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__RESETCHENLINGGAMEBOYINSTANCE_OFFSET))(this);
		}

		::System::Void _ExecuteEnterGameSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__EXECUTEENTERGAMESEQUENCE_OFFSET))(this);
		}

		::System::Void _ExecuteExitGameSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__EXECUTEEXITGAMESEQUENCE_OFFSET))(this);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData* get_ChenLingGameBoyPuzzleData()
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_CHENLINGGAMEBOYPUZZLEDATA_OFFSET))(this);
		}

		::System::Boolean IsFluteValid(::System::UInt32 fluteID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ISFLUTEVALID_OFFSET))(this, fluteID);
		}

		::System::Boolean IsFluteFinished(::System::UInt32 fluteID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ISFLUTEFINISHED_OFFSET))(this, fluteID);
		}

		::System::Void SetCurrentActiveFluteID(::System::UInt32 fluteID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SETCURRENTACTIVEFLUTEID_OFFSET))(this, fluteID);
		}

		::System::Boolean IsFluteButtonEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ISFLUTEBUTTONENABLE_OFFSET))(this);
		}

		::System::Void FinishFlute(::System::UInt32 fluteID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FINISHFLUTE_OFFSET))(this, fluteID);
		}

		::System::Void ApplyFlute(::System::UInt32 fluteID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_APPLYFLUTE_OFFSET))(this, fluteID);
		}

		::System::Boolean IsFluteApplied(::System::UInt32 fluteID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ISFLUTEAPPLIED_OFFSET))(this, fluteID);
		}

		::System::Void _OnGetFiveDimFluteDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMFLUTEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFiveDimFluteDataChangeNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMFLUTEDATACHANGENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void FinishFiveDimMiniGame(::System::UInt32 gameID, ::System::String* serialNumber, ::Struct_2_F2B3E6EDD02C9F11& miniGameRecordRuntime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Struct_2_F2B3E6EDD02C9F11&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMMINIGAME_OFFSET))(this, gameID, serialNumber, miniGameRecordRuntime);
		}

		::System::Void _AddMiniGamePackedHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ADDMINIGAMEPACKEDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishFiveDimMiniGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFINISHFIVEDIMMINIGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _SendMiniGameInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__SENDMINIGAMEINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnGetFiveDimMiniGameDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMINIGAMEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::UInt32 GetMiniGameID(::RPG::GameCore::FiveDimGameplayMode mode)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEID_OFFSET))(this, mode);
		}

		::System::UInt32 GetMiniGameHighScore(::System::UInt32 miniGameID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEHIGHSCORE_OFFSET))(this, miniGameID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetMiniGameScoreTargets(::System::UInt32 miniGameID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMESCORETARGETS_OFFSET))(this, miniGameID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMiniGameOneTimeRewards(::System::UInt32 miniGameID, ::System::UInt32 scoreLine)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_OFFSET))(this, miniGameID, scoreLine);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMiniGameOneTimeRewards_1(::System::UInt32 miniGameID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_1_OFFSET))(this, miniGameID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMiniGamePreviewRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEPREVIEWREWARDS_OFFSET))(this);
		}

		::System::Void RecoverMiniGameFCV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_RECOVERMINIGAMEFCV_OFFSET))(this);
		}

		::System::Void add_OnMoneyWeeklyLimitReached(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ADD_ONMONEYWEEKLYLIMITREACHED_OFFSET))(this, value);
		}

		::System::Void remove_OnMoneyWeeklyLimitReached(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REMOVE_ONMONEYWEEKLYLIMITREACHED_OFFSET))(this, value);
		}

		::System::Void RequestAddMoney(::System::UInt32 addNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTADDMONEY_OFFSET))(this, addNum);
		}

		::System::Void _SendMoneyInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__SENDMONEYINITREQUEST_OFFSET))(this);
		}

		::System::Void _OnGetFiveDimMoneyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetFiveDimMoneyDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFiveDimMoneyChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMMONEYCHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void NotifyDisplayRewards(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_NOTIFYDISPLAYREWARDS_OFFSET))(this, count);
		}

		::System::Void _ShowDisplayRewards(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__SHOWDISPLAYREWARDS_OFFSET))(this, count);
		}

		::System::Void _NotifyDisplayRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__NOTIFYDISPLAYREWARDS_OFFSET))(this);
		}

		::System::UInt32 get_MoneyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MONEYNUM_OFFSET))(this);
		}

		::System::Void set_MoneyNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_MONEYNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_MoneyWeeklyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYNUM_OFFSET))(this);
		}

		::System::Void set_MoneyWeeklyNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_MONEYWEEKLYNUM_OFFSET))(this, value);
		}

		::System::Boolean get_IsMoneyWeeklyLimitReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_ISMONEYWEEKLYLIMITREACHED_OFFSET))(this);
		}

		::System::Void set_IsMoneyWeeklyLimitReached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_ISMONEYWEEKLYLIMITREACHED_OFFSET))(this, value);
		}

		::System::UInt32 get_MoneyItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MONEYITEMID_OFFSET))(this);
		}

		::System::UInt32 get_MoneyWeeklyLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYLIMIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void RequestEnterGame(::Struct_2_F01DF3CDCF3FD7AC player2DInfo, ::Struct_2_FC595D1A561D8C6F player3DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTENTERGAME_OFFSET))(this, player2DInfo, player3DInfo);
		}

		::System::Void RequestGameData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTGAMEDATA_OFFSET))(this);
		}

		::System::Void RequestLeaveGame(::Struct_2_FC595D1A561D8C6F player3DInfo, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType exitType, ::System::UInt32 leaveEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTLEAVEGAME_OFFSET))(this, player3DInfo, exitType, leaveEntityID);
		}

		::Enum_3_0A3761FE34514D6C_36 ExitTypeToNetworkLeaveType(::RPG::Client::LittleGame::FiveDim::FiveDimExitType exitType)
		{
			return ((::Enum_3_0A3761FE34514D6C_36(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_EXITTYPETONETWORKLEAVETYPE_OFFSET))(this, exitType);
		}

		::System::Void RequestUpdateTwoDimPlayerInfo(::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATETWODIMPLAYERINFO_OFFSET))(this, player2DInfo);
		}

		::System::Void RequestUpdatePlayerExtraAbility(::System::Boolean skillUpgraded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATEPLAYEREXTRAABILITY_OFFSET))(this, skillUpgraded);
		}

		::System::Void SendChenLingGameBoyChangeSettingsCsReq(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGGAMEBOYCHANGESETTINGSCSREQ_OFFSET))(this, isHide);
		}

		::System::Void RequestTransfer(::Struct_2_F01DF3CDCF3FD7AC player2DInfo, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType exitType, ::System::UInt32 leaveEntityID)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC, ::RPG::Client::LittleGame::FiveDim::FiveDimExitType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTTRANSFER_OFFSET))(this, player2DInfo, exitType, leaveEntityID);
		}

		::System::Void SendChenLingCheatInputKeyReq(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATINPUTKEYREQ_OFFSET))(this, gameID);
		}

		::System::Void SendChenLingCheatModeReq(::System::UInt32 gameID, ::System::Boolean isCheat)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATMODEREQ_OFFSET))(this, gameID, isCheat);
		}

		::System::Void ClearNetworkData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_CLEARNETWORKDATA_OFFSET))(this);
		}

		::System::Void _OnEnterFiveDimGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONENTERFIVEDIMGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFiveDimGameDataUpdateScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMEDATAUPDATESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFiveDimGameTransferScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMETRANSFERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLeaveFiveDimGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONLEAVEFIVEDIMGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnUpdateFiveDimGameDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONUPDATEFIVEDIMGAMEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetChenLingGameBoyDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETCHENLINGGAMEBOYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChenLingGameBoyGetFriendRankingInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONCHENLINGGAMEBOYGETFRIENDRANKINGINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishChenLingGameBoyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFINISHCHENLINGGAMEBOYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnGetFiveDimGameDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMGAMEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFiveDimJumpEnergyChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMJUMPENERGYCHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _TryUpdateClientPosVersion(::System::UInt32 posVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TRYUPDATECLIENTPOSVERSION_OFFSET))(this, posVersion);
		}

		static ::System::Void _ToNetworkData(::Class_1_F2A002E962740C85_2* networkInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_F2A002E962740C85_2*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_OFFSET))(networkInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_1(::Class_1_FA4F4A67B1C04320_310* levelInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_FA4F4A67B1C04320_310*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_1_OFFSET))(levelInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_2(::Class_1_2325E4073E18D39D_2* posInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_2325E4073E18D39D_2*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_2_OFFSET))(posInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_3(::Class_1_3DE734113B1E313B_2* motionInfo, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Class_1_3DE734113B1E313B_2*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_3_OFFSET))(motionInfo, position, rotation);
		}

		static ::System::Void _ToNetworkData_4(::Class_1_32044B0173B87B04_2* protoVector, ::UnityEngine::Vector3 unityVector)
		{
			return ((::System::Void(*)(::Class_1_32044B0173B87B04_2*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_4_OFFSET))(protoVector, unityVector);
		}

		static ::Struct_2_F01DF3CDCF3FD7AC _FromNetworkData(::Class_1_F2A002E962740C85_2* networkInfo)
		{
			return ((::Struct_2_F01DF3CDCF3FD7AC(*)(::Class_1_F2A002E962740C85_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__FROMNETWORKDATA_OFFSET))(networkInfo);
		}

		static ::UnityEngine::Vector3 _FromProtoPosition(::Class_1_32044B0173B87B04_2* protoVector)
		{
			return ((::UnityEngine::Vector3(*)(::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__FROMPROTOPOSITION_OFFSET))(protoVector);
		}

		static ::UnityEngine::Quaternion _FromProtoRotation(::Class_1_32044B0173B87B04_2* protoVector)
		{
			return ((::UnityEngine::Quaternion(*)(::Class_1_32044B0173B87B04_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__FROMPROTOROTATION_OFFSET))(protoVector);
		}

		::Struct_2_F01DF3CDCF3FD7AC get_CurrentPlayer2DInfo()
		{
			return ((::Struct_2_F01DF3CDCF3FD7AC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTPLAYER2DINFO_OFFSET))(this);
		}

		::System::Void set_CurrentPlayer2DInfo(::Struct_2_F01DF3CDCF3FD7AC value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTPLAYER2DINFO_OFFSET))(this, value);
		}

		::Struct_2_F01DF3CDCF3FD7AC get_PendingPlayer2DInfo()
		{
			return ((::Struct_2_F01DF3CDCF3FD7AC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER2DINFO_OFFSET))(this);
		}

		::System::Void set_PendingPlayer2DInfo(::Struct_2_F01DF3CDCF3FD7AC value)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER2DINFO_OFFSET))(this, value);
		}

		::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC> get_PendingServerPlayer2DInfo()
		{
			return ((::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGSERVERPLAYER2DINFO_OFFSET))(this);
		}

		::System::Void set_PendingServerPlayer2DInfo(::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGSERVERPLAYER2DINFO_OFFSET))(this, value);
		}

		::System::Nullable_1<::Struct_2_FC595D1A561D8C6F> get_PendingPlayer3DInfo()
		{
			return ((::System::Nullable_1<::Struct_2_FC595D1A561D8C6F>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER3DINFO_OFFSET))(this);
		}

		::System::Void set_PendingPlayer3DInfo(::System::Nullable_1<::Struct_2_FC595D1A561D8C6F> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Struct_2_FC595D1A561D8C6F>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER3DINFO_OFFSET))(this, value);
		}

		::Class_1_43BD383C98B4C0C5_134* get_PuzzleData()
		{
			return ((::Class_1_43BD383C98B4C0C5_134*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_PUZZLEDATA_OFFSET))(this);
		}

		::System::Void set_PuzzleData(::Class_1_43BD383C98B4C0C5_134* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_134*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_PUZZLEDATA_OFFSET))(this, value);
		}

		::System::Void FetchTrainModeDisplayInfos(::RPG::Client::FiveDimTrainModeDisplayInfos* displayInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimTrainModeDisplayInfos*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FETCHTRAINMODEDISPLAYINFOS_OFFSET))(this, displayInfo);
		}

		::System::Void OpenTransitionView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_OPENTRANSITIONVIEW_OFFSET))(this);
		}

		::System::Void CloseTransitionView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_CLOSETRANSITIONVIEW_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetMoveAbilityEnabled(::RPG::GameCore::FiveDimAvatarMoveAbility mask, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimAvatarMoveAbility, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SETMOVEABILITYENABLED_OFFSET))(this, mask, enable);
		}

		::System::Void SetPlayerSkillUpgraded(::System::Boolean isUpgraded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SETPLAYERSKILLUPGRADED_OFFSET))(this, isUpgraded);
		}

		::System::Void SetMaxJumpEnergy(::System::UInt32 energy)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SETMAXJUMPENERGY_OFFSET))(this, energy);
		}

		::System::Void ExitFiveDimGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_EXITFIVEDIMGAME_OFFSET))(this);
		}

		::System::Void FetchPlayerSkillDisplayInfo(::RPG::Client::FiveDimSkillDisplayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimSkillDisplayInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSKILLDISPLAYINFO_OFFSET))(this, info);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void FetchPlayerJumpDisplayInfo(::RPG::Client::FiveDimJumpDisplayInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimJumpDisplayInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERJUMPDISPLAYINFO_OFFSET))(this, info);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnEnterGame(::RPG::Client::FiveDimGameInstance* gameInstance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ONENTERGAME_OFFSET))(this, gameInstance);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ONEXITGAME_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnShowSidePuzzleTarget(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONSHOWSIDEPUZZLETARGET_OFFSET))(this, param);
		}

		::System::Void _OnHideSidePuzzleTarget(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONHIDESIDEPUZZLETARGET_OFFSET))(this, param);
		}

		::System::Void _OnUpdateSidePuzzleTarget(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONUPDATESIDEPUZZLETARGET_OFFSET))(this, param);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, param);
		}

		::System::Void _OnFiveDimOnMainPageReturnTop(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMONMAINPAGERETURNTOP_OFFSET))(this, param);
		}

		::System::Void _OnMapCreated(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__ONMAPCREATED_OFFSET))(this, param);
		}

		::System::Void _InitGameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__INITGAMECONFIG_OFFSET))(this);
		}

		::System::Void _LoadGameConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__LOADGAMECONFIG_OFFSET))(this);
		}

		::RPG::Client::LittleWheelSelectConfig* _CreateLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Void FinishFiveDimAchievement(::System::UInt32 achievementID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMACHIEVEMENT_OFFSET))(this, achievementID);
		}

		::RPG::Client::FiveDimGameInstance* get_CurrentGameInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTGAMEINSTANCE_OFFSET))(this);
		}

		::System::Void set_CurrentGameInstance(::RPG::Client::FiveDimGameInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FiveDimGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTGAMEINSTANCE_OFFSET))(this, value);
		}

		::System::Boolean get_IsInFiveDimGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_ISINFIVEDIMGAME_OFFSET))(this);
		}

		::System::Boolean get_PlayerSkillUpgraded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_PLAYERSKILLUPGRADED_OFFSET))(this);
		}

		::System::UInt32 get_MaxJumpEnergy()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MAXJUMPENERGY_OFFSET))(this);
		}

		::System::Boolean get_CanUseCameraObserve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_CANUSECAMERAOBSERVE_OFFSET))(this);
		}

		::System::UInt32 get_GameDifficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_GAMEDIFFICULTY_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimLevelSettings* get_GameLevelConfig()
		{
			return ((::RPG::GameCore::FiveDimLevelSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_GAMELEVELCONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SkillPanelConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_SKILLPANELCONFIGID_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMoveConfig* get_MoveConfig()
		{
			return ((::RPG::GameCore::FiveDimMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MOVECONFIG_OFFSET))(this);
		}

		::System::Single get_MoveInputDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTDEADZONE_OFFSET))(this);
		}

		::System::Boolean get_ShouldReverseInputDeadZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_SHOULDREVERSEINPUTDEADZONE_OFFSET))(this);
		}

		::System::Single get_InWallReverseInputCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_INWALLREVERSEINPUTCD_OFFSET))(this);
		}

		::System::Single get_OutWallReverseInputCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_OUTWALLREVERSEINPUTCD_OFFSET))(this);
		}

		::System::Single get_MoveInputHorizontalAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTHORIZONTALANGLE_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimModule* get_Instance()
		{
			return ((::RPG::Client::FiveDimModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::UInt32 get__DefaultSkillPanelConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET__DEFAULTSKILLPANELCONFIGID_OFFSET))(this);
		}

		::System::UInt32 get_InputJoyStickType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_INPUTJOYSTICKTYPE_OFFSET))(this);
		}

		::System::Void set_InputJoyStickType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_INPUTJOYSTICKTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_UseDirectionBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_USEDIRECTIONBTN_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* get_SidePuzzleTargetData()
		{
			return ((::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_SIDEPUZZLETARGETDATA_OFFSET))(this);
		}

		::System::Void set_SidePuzzleTargetData(::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_SIDEPUZZLETARGETDATA_OFFSET))(this, value);
		}

		::System::Boolean get_UsePolarCoordinates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_USEPOLARCOORDINATES_OFFSET))(this);
		}

		::System::Boolean get_FiveDimJoyStickDebugShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_GET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET))(this);
		}

		::System::Void set_FiveDimJoyStickDebugShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_SET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
