#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/FiveDimModule_OverridableVariable_1.h"
#include "unitysdk/RPG/Client/FiveDimTransitionStatus.h"
#include "unitysdk/RPG/GameCore/FiveDimAvatarMoveAbility.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/Struct_2_F01DF3CDCF3FD7AC.h"
#include "unitysdk/Struct_2_F2B3E6EDD02C9F11.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_32044B0173B87B04_2;
class Class_1_3DE734113B1E313B_1;
class Class_1_43BD383C98B4C0C5_134;
class Class_1_B139B98AF2D803D6_5;
class Class_1_FA4F4A67B1C04320_287;
class Class_1_FA4F4A67B1C04320_288;
class Class_1_FA4F4A67B1C04320_289;
class Class_1_FA4F4A67B1C04320_291;
class Class_1_FFE64310E4DB1CD6_2;
class Class_3_BCCE950C2E8DF1F0;
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

#define RPG_CLIENT_FIVEDIMMODULE_ADD_ONMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x92877C0)
#define RPG_CLIENT_FIVEDIMMODULE_APPLYFLUTE_OFFSET UNITYSDK_OFFSET(0x9285AE0)
#define RPG_CLIENT_FIVEDIMMODULE_CHENLINGCAPTUREFRAME_OFFSET UNITYSDK_OFFSET(0x92821E0)
#define RPG_CLIENT_FIVEDIMMODULE_CLEARNETWORKDATA_OFFSET UNITYSDK_OFFSET(0x9289560)
#define RPG_CLIENT_FIVEDIMMODULE_CLOSETRANSITIONVIEW_OFFSET UNITYSDK_OFFSET(0x92805F0)
#define RPG_CLIENT_FIVEDIMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x928B350)
#define RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284880)
#define RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x9283AC0)
#define RPG_CLIENT_FIVEDIMMODULE_EXITCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284C60)
#define RPG_CLIENT_FIVEDIMMODULE_EXITFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x927E2C0)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERJUMPDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x928B230)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSKILLDISPLAYINFO_OFFSET UNITYSDK_OFFSET(0x928ADD0)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHPLAYERSRANKINGINFO_OFFSET UNITYSDK_OFFSET(0x9284630)
#define RPG_CLIENT_FIVEDIMMODULE_FETCHTRAINMODEDISPLAYINFOS_OFFSET UNITYSDK_OFFSET(0x928A9C0)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMACHIEVEMENT_OFFSET UNITYSDK_OFFSET(0x928BE90)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFIVEDIMMINIGAME_OFFSET UNITYSDK_OFFSET(0x9286400)
#define RPG_CLIENT_FIVEDIMMODULE_FINISHFLUTE_OFFSET UNITYSDK_OFFSET(0x9285A10)
#define RPG_CLIENT_FIVEDIMMODULE_GETCHENLINGGAMEBOYPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x9284020)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEHIGHSCORE_OFFSET UNITYSDK_OFFSET(0x9286B30)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEID_OFFSET UNITYSDK_OFFSET(0x9286F50)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_1_OFFSET UNITYSDK_OFFSET(0x9287320)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEONETIMEREWARDS_OFFSET UNITYSDK_OFFSET(0x9287270)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMEPREVIEWREWARDS_OFFSET UNITYSDK_OFFSET(0x9287500)
#define RPG_CLIENT_FIVEDIMMODULE_GETMINIGAMESCORETARGETS_OFFSET UNITYSDK_OFFSET(0x92870A0)
#define RPG_CLIENT_FIVEDIMMODULE_GETSETTLEMENTTEXTURE_OFFSET UNITYSDK_OFFSET(0x9285620)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CANUSECAMERAOBSERVE_OFFSET UNITYSDK_OFFSET(0x928C050)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CHENLINGGAMEBOYPUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x92845C0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x928C020)
#define RPG_CLIENT_FIVEDIMMODULE_GET_CURRENTPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A840)
#define RPG_CLIENT_FIVEDIMMODULE_GET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET UNITYSDK_OFFSET(0x928C500)
#define RPG_CLIENT_FIVEDIMMODULE_GET_GAMEDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x928C0B0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_GAMELEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x928C110)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INPUTJOYSTICKTYPE_OFFSET UNITYSDK_OFFSET(0x928C450)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9271820)
#define RPG_CLIENT_FIVEDIMMODULE_GET_INWALLREVERSEINPUTCD_OFFSET UNITYSDK_OFFSET(0x928C300)
#define RPG_CLIENT_FIVEDIMMODULE_GET_ISINFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x927E4B0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_ISMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x92882F0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MAXJUMPENERGY_OFFSET UNITYSDK_OFFSET(0x928C040)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYITEMID_OFFSET UNITYSDK_OFFSET(0x9288110)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYNUM_OFFSET UNITYSDK_OFFSET(0x92881F0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYLIMIT_OFFSET UNITYSDK_OFFSET(0x9287DC0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MONEYWEEKLYNUM_OFFSET UNITYSDK_OFFSET(0x92882D0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVECONFIG_OFFSET UNITYSDK_OFFSET(0x928C1D0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x928C230)
#define RPG_CLIENT_FIVEDIMMODULE_GET_MOVEINPUTHORIZONTALANGLE_OFFSET UNITYSDK_OFFSET(0x928C3E0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_OUTWALLREVERSEINPUTCD_OFFSET UNITYSDK_OFFSET(0x928C370)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A8A0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGPLAYER3DINFO_OFFSET UNITYSDK_OFFSET(0x928A960)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PENDINGSERVERPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A900)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PLAYERSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x928B090)
#define RPG_CLIENT_FIVEDIMMODULE_GET_PUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x928A9A0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SHOULDREVERSEINPUTDEADZONE_OFFSET UNITYSDK_OFFSET(0x928C2A0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SIDEPUZZLETARGETDATA_OFFSET UNITYSDK_OFFSET(0x928C4D0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_SKILLPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x928AF00)
#define RPG_CLIENT_FIVEDIMMODULE_GET_USEDIRECTIONBTN_OFFSET UNITYSDK_OFFSET(0x928C4C0)
#define RPG_CLIENT_FIVEDIMMODULE_GET_USEPOLARCOORDINATES_OFFSET UNITYSDK_OFFSET(0x928C4F0)
#define RPG_CLIENT_FIVEDIMMODULE_GET__DEFAULTSKILLPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x928AFB0)
#define RPG_CLIENT_FIVEDIMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x928AA20)
#define RPG_CLIENT_FIVEDIMMODULE_INVOKEREACHMAXTIMELIMITSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9285340)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEAPPLIED_OFFSET UNITYSDK_OFFSET(0x9285E30)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x92859C0)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEFINISHED_OFFSET UNITYSDK_OFFSET(0x9285910)
#define RPG_CLIENT_FIVEDIMMODULE_ISFLUTEVALID_OFFSET UNITYSDK_OFFSET(0x92858A0)
#define RPG_CLIENT_FIVEDIMMODULE_LEAVECHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284D40)
#define RPG_CLIENT_FIVEDIMMODULE_NOTIFYDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x9287F80)
#define RPG_CLIENT_FIVEDIMMODULE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0x927A740)
#define RPG_CLIENT_FIVEDIMMODULE_ONEXITCHENLINGGAMEBOYGAMEENTRANCE_OFFSET UNITYSDK_OFFSET(0x9285190)
#define RPG_CLIENT_FIVEDIMMODULE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x927B220)
#define RPG_CLIENT_FIVEDIMMODULE_OPENTRANSITIONVIEW_OFFSET UNITYSDK_OFFSET(0x92804B0)
#define RPG_CLIENT_FIVEDIMMODULE_RECOVERMINIGAMEFCV_OFFSET UNITYSDK_OFFSET(0x92876D0)
#define RPG_CLIENT_FIVEDIMMODULE_RELEASEFRAME_OFFSET UNITYSDK_OFFSET(0x9285670)
#define RPG_CLIENT_FIVEDIMMODULE_REMOVE_ONMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x9287830)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTADDMONEY_OFFSET UNITYSDK_OFFSET(0x92878A0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTENTERGAME_OFFSET UNITYSDK_OFFSET(0x9288680)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTGAMEDATA_OFFSET UNITYSDK_OFFSET(0x9288DE0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTLEAVEGAME_OFFSET UNITYSDK_OFFSET(0x927EA10)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTNETWORKFINISHCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x9284290)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTTRANSFER_OFFSET UNITYSDK_OFFSET(0x92891A0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATEPLAYEREXTRAABILITY_OFFSET UNITYSDK_OFFSET(0x9271880)
#define RPG_CLIENT_FIVEDIMMODULE_REQUESTUPDATETWODIMPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x9288ED0)
#define RPG_CLIENT_FIVEDIMMODULE_REQUIRECHENLINGGAMEBOYDATA_OFFSET UNITYSDK_OFFSET(0x9284200)
#define RPG_CLIENT_FIVEDIMMODULE_RESETCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284B00)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATINPUTKEYREQ_OFFSET UNITYSDK_OFFSET(0x9289430)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGCHEATMODEREQ_OFFSET UNITYSDK_OFFSET(0x92894C0)
#define RPG_CLIENT_FIVEDIMMODULE_SENDCHENLINGGAMEBOYCHANGESETTINGSCSREQ_OFFSET UNITYSDK_OFFSET(0x9289090)
#define RPG_CLIENT_FIVEDIMMODULE_SETCHENLINGGAMEBOYTIMEPAUSED_OFFSET UNITYSDK_OFFSET(0x9285270)
#define RPG_CLIENT_FIVEDIMMODULE_SETCURRENTACTIVEFLUTEID_OFFSET UNITYSDK_OFFSET(0x9285970)
#define RPG_CLIENT_FIVEDIMMODULE_SETMAXJUMPENERGY_OFFSET UNITYSDK_OFFSET(0x928A3D0)
#define RPG_CLIENT_FIVEDIMMODULE_SETMOVEABILITYENABLED_OFFSET UNITYSDK_OFFSET(0x928ACF0)
#define RPG_CLIENT_FIVEDIMMODULE_SETPLAYERSKILLUPGRADED_OFFSET UNITYSDK_OFFSET(0x928AD70)
#define RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x928C030)
#define RPG_CLIENT_FIVEDIMMODULE_SET_CURRENTPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A870)
#define RPG_CLIENT_FIVEDIMMODULE_SET_FIVEDIMJOYSTICKDEBUGSHOW_OFFSET UNITYSDK_OFFSET(0x928C510)
#define RPG_CLIENT_FIVEDIMMODULE_SET_INPUTJOYSTICKTYPE_OFFSET UNITYSDK_OFFSET(0x928C460)
#define RPG_CLIENT_FIVEDIMMODULE_SET_ISMONEYWEEKLYLIMITREACHED_OFFSET UNITYSDK_OFFSET(0x9288300)
#define RPG_CLIENT_FIVEDIMMODULE_SET_MONEYNUM_OFFSET UNITYSDK_OFFSET(0x9287D10)
#define RPG_CLIENT_FIVEDIMMODULE_SET_MONEYWEEKLYNUM_OFFSET UNITYSDK_OFFSET(0x92882E0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A8D0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGPLAYER3DINFO_OFFSET UNITYSDK_OFFSET(0x928A980)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PENDINGSERVERPLAYER2DINFO_OFFSET UNITYSDK_OFFSET(0x928A930)
#define RPG_CLIENT_FIVEDIMMODULE_SET_PUZZLEDATA_OFFSET UNITYSDK_OFFSET(0x928A9B0)
#define RPG_CLIENT_FIVEDIMMODULE_SET_SIDEPUZZLETARGETDATA_OFFSET UNITYSDK_OFFSET(0x928C4E0)
#define RPG_CLIENT_FIVEDIMMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x928B1B0)
#define RPG_CLIENT_FIVEDIMMODULE__ADDMINIGAMEPACKEDHANDLERS_OFFSET UNITYSDK_OFFSET(0x92866B0)
#define RPG_CLIENT_FIVEDIMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x928B5C0)
#define RPG_CLIENT_FIVEDIMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9288310)
#define RPG_CLIENT_FIVEDIMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x928B3F0)
#define RPG_CLIENT_FIVEDIMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x928C570)
#define RPG_CLIENT_FIVEDIMMODULE__EXECUTEENTERGAMESEQUENCE_OFFSET UNITYSDK_OFFSET(0x92856E0)
#define RPG_CLIENT_FIVEDIMMODULE__EXECUTEEXITGAMESEQUENCE_OFFSET UNITYSDK_OFFSET(0x92857C0)
#define RPG_CLIENT_FIVEDIMMODULE__FROMNETWORKDATA_OFFSET UNITYSDK_OFFSET(0x9289A40)
#define RPG_CLIENT_FIVEDIMMODULE__FROMPROTOPOSITION_OFFSET UNITYSDK_OFFSET(0x928A6F0)
#define RPG_CLIENT_FIVEDIMMODULE__FROMPROTOROTATION_OFFSET UNITYSDK_OFFSET(0x928A780)
#define RPG_CLIENT_FIVEDIMMODULE__GETSCREENRECT_OFFSET UNITYSDK_OFFSET(0x9285420)
#define RPG_CLIENT_FIVEDIMMODULE__INITGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x928ACA0)
#define RPG_CLIENT_FIVEDIMMODULE__LEAVECHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284D90)
#define RPG_CLIENT_FIVEDIMMODULE__LOADGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x928BCE0)
#define RPG_CLIENT_FIVEDIMMODULE__NOTIFYDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x9287FD0)
#define RPG_CLIENT_FIVEDIMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x928BB50)
#define RPG_CLIENT_FIVEDIMMODULE__ONCHENLINGGAMEBOYGETFRIENDRANKINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x928A0D0)
#define RPG_CLIENT_FIVEDIMMODULE__ONENTERFIVEDIMGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x92895F0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFINISHCHENLINGGAMEBOYSCRSP_OFFSET UNITYSDK_OFFSET(0x928A190)
#define RPG_CLIENT_FIVEDIMMODULE__ONFINISHFIVEDIMMINIGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x9286760)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMFLUTEDATACHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x92862B0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMEDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x92896A0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMGAMETRANSFERSCRSP_OFFSET UNITYSDK_OFFSET(0x9289C10)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMJUMPENERGYCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x928A420)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMMONEYCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9287EA0)
#define RPG_CLIENT_FIVEDIMMODULE__ONFIVEDIMONMAINPAGERETURNTOP_OFFSET UNITYSDK_OFFSET(0x928BBA0)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETCHENLINGGAMEBOYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x928A010)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMFLUTEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9286160)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x928A330)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMINIGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9286C80)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9287C80)
#define RPG_CLIENT_FIVEDIMMODULE__ONGETFIVEDIMMONEYSCRSP_OFFSET UNITYSDK_OFFSET(0x9287A10)
#define RPG_CLIENT_FIVEDIMMODULE__ONHIDESIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x928BA00)
#define RPG_CLIENT_FIVEDIMMODULE__ONLEAVEFIVEDIMGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x9289CC0)
#define RPG_CLIENT_FIVEDIMMODULE__ONMAPCREATED_OFFSET UNITYSDK_OFFSET(0x928BBF0)
#define RPG_CLIENT_FIVEDIMMODULE__ONSHOWSIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x928B8E0)
#define RPG_CLIENT_FIVEDIMMODULE__ONUPDATEFIVEDIMGAMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9289F70)
#define RPG_CLIENT_FIVEDIMMODULE__ONUPDATESIDEPUZZLETARGET_OFFSET UNITYSDK_OFFSET(0x928BA50)
#define RPG_CLIENT_FIVEDIMMODULE__REQUESTQUITCHENLINGGAMEBOY_OFFSET UNITYSDK_OFFSET(0x9284CB0)
#define RPG_CLIENT_FIVEDIMMODULE__RESETCHENLINGGAMEBOYINSTANCE_OFFSET UNITYSDK_OFFSET(0x9284BD0)
#define RPG_CLIENT_FIVEDIMMODULE__SENDMINIGAMEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9286BD0)
#define RPG_CLIENT_FIVEDIMMODULE__SENDMONEYINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9287960)
#define RPG_CLIENT_FIVEDIMMODULE__SETCAMERARECT_OFFSET UNITYSDK_OFFSET(0x92855A0)
#define RPG_CLIENT_FIVEDIMMODULE__SHOWDISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x9287A90)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_1_OFFSET UNITYSDK_OFFSET(0x92889A0)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_2_OFFSET UNITYSDK_OFFSET(0x9288A20)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_3_OFFSET UNITYSDK_OFFSET(0x9288B30)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_4_OFFSET UNITYSDK_OFFSET(0x928A660)
#define RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_OFFSET UNITYSDK_OFFSET(0x928A4C0)
#define RPG_CLIENT_FIVEDIMMODULE__TRYUPDATECLIENTPOSVERSION_OFFSET UNITYSDK_OFFSET(0x92897E0)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x928C8B0)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x928C820)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x928C8C0)
#define RPG_CLIENT_FIVEDIMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x928C7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimModule_TypeDefinitionIndex = 50989;

	class FiveDimModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 INVALID_FLUTE_ID = 0x0; // 0x0
		// static const ::System::UInt32 _EMPTY_REWARD_ID = 0x64; // 0x0
		// static const ::System::String* MiniGameSetResultDialogPath; // 0x0
		// static const ::System::UInt32 _FUNC_ENTRANCE_LIST_ID = 0x17; // 0x0
		::Class_3_BCCE950C2E8DF1F0* _EnterChenLingGameSequence; // 0x10
		::RPG::Client::Promises::Promise_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPlayerRankingListInfo*>* _FetchFriendRankingInfoPromise; // 0x18
		::Class_3_BCCE950C2E8DF1F0* _ReachMaxTimeLimitSequence; // 0x20
		::Class_1_43BD383C98B4C0C5_134* _PuzzleData_k__BackingField; // 0x28
		::System::String* GameSerialNumber; // 0x30
		::RPG::GameCore::FiveDimGameConfig* _GameConfig; // 0x38
		::Class_3_BCCE950C2E8DF1F0* _ExitSequence; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingGameBoy::ChenLingGameBoyPuzzleData*>* _ChenLingGameBoyPuzzleDataDir; // 0x48
		::Class_3_BCCE950C2E8DF1F0* _ExitChenLingGameSequence; // 0x50
		::System::Collections::Generic::HashSet_1<::System::UInt32>* ValidTeleportFluteIDs; // 0x58
		::System::Action_1<::Class_1_FA4F4A67B1C04320_291*>* OnFiveDimGameTransferScRsp; // 0x60
		::RPG::Client::UIFrameCapture* _FrameCapture; // 0x68
		::RPG::Client::FiveDimGameInstance* _CurrentGameInstance_k__BackingField; // 0x70
		::RPG::Client::LittleGame::FiveDim::FiveDimFluteDataManager* FluteDataManager; // 0x78
		::RPG::Client::LittleGame::FiveDim::SidePuzzleTargetData* _SidePuzzleTargetData_k__BackingField; // 0x80
		::System::Action_1<::Class_1_FA4F4A67B1C04320_288*>* OnEnterFiveDimGameScRsp; // 0x88
		::System::Collections::Generic::HashSet_1<::System::UInt32>* FinishedFluteIDs; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _MiniGameHighScores; // 0x98
		::System::Action_1<::System::Boolean>* OnMoneyWeeklyLimitReached; // 0xA0
		::System::Action_1<::Class_1_FA4F4A67B1C04320_289*>* OnLeaveFiveDimGameScRsp; // 0xA8
		::UnityEngine::Texture* _SettlementTexture; // 0xB0
		::Struct_2_F01DF3CDCF3FD7AC _CurrentPlayer2DInfo_k__BackingField; // 0xB8
		::System::Single _CaptureFrameRadio; // 0xE4
		::System::UInt32 _InputJoyStickType; // 0xE8
		::System::UInt32 _FiveDimInputID; // 0xEC
		::System::Int32 _TimerIndex; // 0xF0
		::System::UInt32 _MaxJumpEnergy; // 0xF4
		::System::Boolean _FiveDimJoyStickDebugShow; // 0xF8
		::System::Boolean IncontrolUseDeadZoneValue; // 0xF9
		::System::Boolean _IsMoneyWeeklyLimitReached_k__BackingField; // 0xFA
		::System::Nullable_1<::Struct_2_F01DF3CDCF3FD7AC> _PendingServerPlayer2DInfo_k__BackingField; // 0xFC
		::System::UInt32 CurrentActiveFluteID; // 0x12C
		::System::UInt32 _RewardShowCount; // 0x130
		::System::Nullable_1<::Struct_2_FC595D1A561D8C6F> _PendingPlayer3DInfo_k__BackingField; // 0x134
		::RPG::Client::FiveDimTransitionStatus TransitionStatus; // 0x154
		::System::UInt32 _MoneyWeeklyNum_k__BackingField; // 0x158
		::RPG::Client::FiveDimModule_OverridableVariable_1<::RPG::GameCore::FiveDimAvatarMoveAbility> _MoveAbility; // 0x15C
		::Struct_2_F01DF3CDCF3FD7AC _PendingPlayer2DInfo_k__BackingField; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EnterChenLingGameBoy(::System::UInt32 gameID, ::Class_3_BCCE950C2E8DF1F0* exitSequence, ::Class_3_BCCE950C2E8DF1F0* enterFiveDimSequence, ::Class_3_BCCE950C2E8DF1F0* exitFiveDimSequence, ::Class_3_BCCE950C2E8DF1F0* reachMaxTimeLimitSequence, ::RPG::GameCore::GameEntity* ownerEntity, ::UnityEngine::Transform* centerNode, ::UnityEngine::Transform* upperLeftNode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::Class_3_BCCE950C2E8DF1F0*, ::Class_3_BCCE950C2E8DF1F0*, ::Class_3_BCCE950C2E8DF1F0*, ::Class_3_BCCE950C2E8DF1F0*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_ENTERCHENLINGGAMEBOY_OFFSET))(this, gameID, exitSequence, enterFiveDimSequence, exitFiveDimSequence, reachMaxTimeLimitSequence, ownerEntity, centerNode, upperLeftNode);
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

		::System::Void RequestLeaveGame(::Struct_2_FC595D1A561D8C6F player3DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTLEAVEGAME_OFFSET))(this, player3DInfo);
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

		::System::Void RequestTransfer(::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE_REQUESTTRANSFER_OFFSET))(this, player2DInfo);
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

		static ::System::Void _ToNetworkData(::Class_1_B139B98AF2D803D6_5* networkInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_B139B98AF2D803D6_5*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_OFFSET))(networkInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_1(::Class_1_FA4F4A67B1C04320_287* levelInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_FA4F4A67B1C04320_287*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_1_OFFSET))(levelInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_2(::Class_1_FFE64310E4DB1CD6_2* posInfo, ::Struct_2_F01DF3CDCF3FD7AC player2DInfo)
		{
			return ((::System::Void(*)(::Class_1_FFE64310E4DB1CD6_2*, ::Struct_2_F01DF3CDCF3FD7AC))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_2_OFFSET))(posInfo, player2DInfo);
		}

		static ::System::Void _ToNetworkData_3(::Class_1_3DE734113B1E313B_1* motionInfo, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::Class_1_3DE734113B1E313B_1*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_3_OFFSET))(motionInfo, position, rotation);
		}

		static ::System::Void _ToNetworkData_4(::Class_1_32044B0173B87B04_2* protoVector, ::UnityEngine::Vector3 unityVector)
		{
			return ((::System::Void(*)(::Class_1_32044B0173B87B04_2*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__TONETWORKDATA_4_OFFSET))(protoVector, unityVector);
		}

		static ::Struct_2_F01DF3CDCF3FD7AC _FromNetworkData(::Class_1_B139B98AF2D803D6_5* networkInfo)
		{
			return ((::Struct_2_F01DF3CDCF3FD7AC(*)(::Class_1_B139B98AF2D803D6_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMMODULE__FROMNETWORKDATA_OFFSET))(networkInfo);
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
