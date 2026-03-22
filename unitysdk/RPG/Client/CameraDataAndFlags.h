#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2D85C3C5517A2A08_TransitionMode.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_DisableCameraProtectReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_KeepOrthographicOnResetReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_MazeBattleShotDataType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_PauseMainCameraUpdateReason.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_RoamingStyle.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackCameraTrackType.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_TrackRoamingCameraRotationMode.h"
#include "unitysdk/RPG/Client/CameraResultData.h"
#include "unitysdk/RPG/GameCore/ActiveTrackCameraMode.h"
#include "unitysdk/RPG/GameCore/AdventureCameraOrthographicResetMode.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/CameraMode.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/TeamFormationType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_2CBB9F488B837A11.h"
#include "unitysdk/Struct_2_2D71E0AE8D880088.h"
#include "unitysdk/Struct_2_87411F35FE812768.h"
#include "unitysdk/Struct_2_A725E4562D03EA4E_3.h"
#include "unitysdk/Struct_2_CB7D37A2987B484B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CameraShakeTask;
class Class_1_2C62E4CDE21F302D;
class Class_1_47AACC0D1B9F3610;
class Class_1_9F6A7BD216A5C0E3;
class Class_1_AA5627556691B674;
class Class_1_C0FA7ACF6234A735;
class Class_1_CDAD1C4D78702C93;
class Class_1_D27BF54F25500E5F;
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
class Class_2_DACB2D3D3C70FB8C;
class Class_3_BCCE950C2E8DF1F0;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraFreelook3rdConfigData; }
namespace RPG::Client { class CameraLookAtConfigData; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class CameraNormalConfigData; }
namespace RPG::Client { class GameCoreCameraData; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::Client { class ShotTemplateRuntime; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPG::GameCore { class VCameraConfig; }
namespace RPG::GameCore { class VCameraFreelook3rdConfig; }
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace RPGTools::Timeline { class CameraData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8E59D60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0x8E55140)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x8E54DE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0x8E58F10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x8E59E40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x8E59DD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x8E54F10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E54C90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0x8E555B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x8E58860)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x8E59BD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x8E59C40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0x8E58990)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0x8E59CD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0x8E58920)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0x8E54740)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0x8E543B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x8E569B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0x8E59700)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0x8E54420)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x8E54140)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x8E53F00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x8E54000)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x8E54D40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x8E541F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0x8E54490)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x8E54640)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x8E545B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x8E53E90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0x8E53F70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8E54320)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0x8E542A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x8E54500)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x8E53E10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x8E53D00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0x8E546D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x8E54E60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x8E55B80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0x8E54E80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x8E55BA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x8E55130)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x8E55BC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x8E59EB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x8E53D60)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0x8E59350)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0x8E55BE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x8E55360)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x8E597E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0x8E56730)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x8E58AE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x8E56940)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x8E550C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0x8E59830)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x8E56A00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x8E595D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0x8E59290)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x8E54E70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x8E55B90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x8E55BB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x8E55BD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x8E55010)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x8E54FB0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x8E556F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x8E55530)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0x8E57BD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x8E54830)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x8E557B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHBATTLEPHASENEWDATA_OFFSET UNITYSDK_OFFSET(0x8E55A40)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0x8E55800)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 55281;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::Class_3_BCCE950C2E8DF1F0* TrackCameraOnOutOfRange; // 0x10
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x18
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0x20
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0x28
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x30
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x38
		::System::String* TrackCameraAreaName; // 0x40
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GlobalDynamicOffsetIgnoreEntityList; // 0x50
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0x58
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0x60
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0x68
		::Class_3_BCCE950C2E8DF1F0* TrackCameraExitFromStartSeq; // 0x70
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x78
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x80
		::System::String* IsometricCurvePath; // 0x88
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x98
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CustomShotData; // 0xA0
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0xA8
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0xB0
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0xB8
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0xC0
		::System::String* ProjectionBlendOutCurve; // 0xC8
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0xD0
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0xD8
		::Class_3_BCCE950C2E8DF1F0* TrackCameraExitFromEndSeq; // 0xE0
		::Class_2_DACB2D3D3C70FB8C* DisableProtectPriorityQueue; // 0xE8
		::Class_1_2C62E4CDE21F302D* CurrentBaseChangeParam; // 0xF0
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0xF8
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x100
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0x108
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x118
		::System::String* TrackCameraName; // 0x120
		::RPG::Client::CameraResultData CurrentResult; // 0x128
		::System::String* ProjectionBlendInCurve; // 0x1B8
		::RPG::Client::CameraResultData LastResult; // 0x1C0
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0x250
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TopViewLookAtEntities; // 0x258
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x260
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0x268
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0x270
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x278
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0x280
		::UnityEngine::Transform* ShotTemplateFollow; // 0x288
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0x290
		::RPG::GameCore::GameEntity* ConfigCaster; // 0x298
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x2A0
		::System::Single TrackRoamingAngleRecoverDamp; // 0x2A4
		::Struct_2_A725E4562D03EA4E_3 LastFrameResult; // 0x2A8
		::System::Single TrackRoamingAngleLimitX; // 0x2B0
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x2B4
		::System::Single ProjectionBlendOutTime; // 0x2B8
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x2BC
		::System::Single TargetAutoAdsorbAxisY; // 0x2C0
		::System::Boolean UseLookAtChangeOffset; // 0x2C4
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x2C5
		::System::Boolean RoamingVCameraControllerDragMode; // 0x2C6
		::System::Boolean TrackCameraEnable; // 0x2C7
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x2C8
		::System::Boolean EnableProtectAfterBlend; // 0x2D4
		::System::Boolean ShotTemplateDirty; // 0x2D5
		::System::Boolean TrackCameraMappingInput; // 0x2D6
		::System::Boolean ForbidRoamingZoomChange; // 0x2D7
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x2D8
		::System::Single MoveControlDir; // 0x2DC
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x2E0
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x2E4
		::RPG::GameCore::VCameraState CurVCameraState; // 0x2F4
		::System::Single FreeLookMaxDistance; // 0x2F8
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x2FC
		::System::Single FirstPersonHeightOverride; // 0x308
		::System::Single CameraZoomRatio; // 0x30C
		::UnityEngine::Vector3 RoamingInitForward; // 0x310
		::System::Single OrthographicSize; // 0x31C
		::System::Single NearClippingPlane; // 0x320
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x324
		::System::Single TrackRoamingRotationFactor; // 0x328
		::System::Single ProjectionBlendInTime; // 0x32C
		::RPG::GameCore::VCameraState NextVCameraState; // 0x330
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x334
		::System::Single FOVSmoothDampTime; // 0x374
		::System::Single DialogModeBlendingWeight; // 0x378
		::System::Single TrackRoamingStandardScreenDis; // 0x37C
		::System::Boolean DisableCameraRecenter; // 0x380
		::System::Boolean ForbidCameraShake; // 0x381
		::System::Boolean DoProjectionBlendToOrthographic; // 0x382
		::System::Boolean ForbidRoamingPosUpdate; // 0x383
		::System::Boolean VCameraDitherNPCOn; // 0x384
		::System::Boolean ShotAnimClear; // 0x385
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x386
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x387
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x388
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x394
		::System::Int32 TrackCameraEndBlendInIndex; // 0x398
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x39C
		::System::Single FOVAdaptionRatio; // 0x3AC
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x3B0
		::System::Single CameraZoomDistanceDelta; // 0x3C4
		::System::Boolean ResetToFaceDir; // 0x3C8
		::System::Boolean CameraRotating; // 0x3C9
		::System::Boolean ResetTeamRootPos; // 0x3CA
		::System::Boolean RoamingUseInitLookAtPos; // 0x3CB
		::System::UInt32 PauseLateUpdateCount; // 0x3CC
		::UnityEngine::Vector3 FreeLookAtPos; // 0x3D0
		::System::UInt32 _DisableProtectCount; // 0x3DC
		::System::Boolean ResetZoomKeepCameraBlend; // 0x3E0
		::System::Boolean StartIsometricSizeBlend; // 0x3E1
		::System::UInt32 ConfigVersion; // 0x3E4
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x3E8
		::System::Single BlockDitherTime; // 0x3F8
		::System::Single DialogModeBlendingRatio; // 0x3FC
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x400
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x420
		::System::Single VCameraDitherNPCMaxDistance; // 0x424
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x428
		::System::Single VCameraDitherAlphaNPCMin; // 0x42C
		::System::Boolean CameraZoomEnable; // 0x430
		::System::Boolean ClearHidingEntityFlag; // 0x431
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x432
		::System::Int32 ConfigPriority; // 0x434
		::System::Single TopViewLookAngleBias; // 0x438
		::UnityEngine::Vector3 ShotAnimOffset; // 0x43C
		::System::Single TrackRoamingSpeedDamp; // 0x448
		::System::Single OverrideAimOffsetLerpRatio; // 0x44C
		::System::Single OpticalIllusionSize; // 0x450
		::System::Single TrackRoamingAngleLimitY; // 0x454
		::System::Single TopViewSmoothTime; // 0x458
		::System::Boolean DisableElevationDither; // 0x45C
		::System::Boolean IsFreeLookAt; // 0x45D
		::System::Boolean DisableDitherClose; // 0x45E
		::System::Boolean DofGetNewConfig; // 0x45F
		::System::Single CameraZoomDistance; // 0x460
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x464
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x470
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x474
		::System::Boolean IsCloseFightDitherDarkRight; // 0x478
		::System::Boolean MazePrepareTriggerBattle; // 0x479
		::System::Boolean DofNeedReset; // 0x47A
		::System::Boolean IsInBattleDataViewMode; // 0x47B
		::System::Single MoveControlDistance; // 0x47C
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x480
		::System::Single TrackRoamingXAnglePercentage; // 0x484
		::System::Boolean CameraDampSmoothReset; // 0x488
		::System::Boolean DisableFreelook3rdCameraInput; // 0x489
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x48A
		::System::Boolean EnableFreelookCameraDragMode; // 0x48B
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x48C
		::System::Single TargetAutoAdsorbFaceDir; // 0x494
		::System::Boolean ForceHiddenEntityReset; // 0x498
		::System::Boolean IsPlayerDitherByDistance; // 0x499
		::System::Boolean IsScreenPointerDown; // 0x49A
		::System::Boolean LookAtLockAxisInput; // 0x49B
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x49C
		::System::Single FreeLookMinDistance; // 0x4A0
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x4A4
		::RPG::GameCore::CameraMode CurrentMode; // 0x4AC
		::System::Boolean LockRecenterY; // 0x4B0
		::System::Boolean IsNeedBlend; // 0x4B1
		::System::Boolean BlendOutImmediately; // 0x4B2
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x4B3
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x4B4
		::UnityEngine::Vector3 OffsetPos; // 0x4BC
		::System::Single CameraZoomAddValue; // 0x4C8
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x4CC
		::System::Single RoamingZoomValue; // 0x4D0
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x4D4
		::System::Single CameraAimOffsetDelta; // 0x4E0
		::System::Boolean IsForceClearDitherOnce; // 0x4E4
		::System::Boolean ForbidCameraZoomChange; // 0x4E5
		::System::Boolean ForbidRoamingInput; // 0x4E6
		::System::Boolean ResetCinemachineZoomFlag; // 0x4E7
		::System::Single RoamingInitFov; // 0x4E8
		::System::Boolean KeepInputCameraDirection; // 0x4EC
		::System::Boolean CloseupPendingTimelineUpdate; // 0x4ED
		::System::Boolean TopViewReset; // 0x4EE
		::System::Boolean IsShowEntityListIgnoreDither; // 0x4EF
		::System::Single TopViewCameraDist; // 0x4F0
		::System::UInt32 TrackPathWayID; // 0x4F4
		::System::Single TrackRoamingStandardSpeed; // 0x4F8
		::Struct_2_A725E4562D03EA4E_3 CurrentFrameResult; // 0x4FC
		::UnityEngine::Vector3 TopViewLookAtPos; // 0x504
		::System::Single ScreenPointUpTimer; // 0x510
		::UnityEngine::Vector3 TopViewLookAtOffset; // 0x514
		::UnityEngine::Vector3 ForwardDir; // 0x520
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x52C
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x534
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x535
		::System::Boolean IsRecovering; // 0x536
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x537
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x538
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x544
		::System::Boolean IsAutoAdsorbOn; // 0x545
		::System::Boolean CloseupShotExitFlag; // 0x546
		::System::Boolean IsCameraBlendCut; // 0x547
		::UnityEngine::Vector3 TopViewForwardDir; // 0x548
		::System::Single RoamingCurFovRatio; // 0x554
		::System::Single TopViewDepressionAngle; // 0x558
		::UnityEngine::Vector3 TopViewDefaultLookAtPos; // 0x55C
		::System::Single OverrideRayHitDietherCheckInterval; // 0x568
		::Class_2_2D85C3C5517A2A08_TransitionMode MazeBattleTransitionMode; // 0x56C
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x570
		::System::Boolean IsometricUseCurve; // 0x571
		::System::Boolean DoOpticalIllusionSet; // 0x572
		::System::Boolean DoIsometricSizeBlend; // 0x573
		::System::Single IsometricOrthographicSize; // 0x574
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x578
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x57C
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x588
		::System::Single ScreenPointDownTimer; // 0x598
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x59C
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x5DC
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x5E0
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x5E4
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x5F0
		::System::Single MazeBattleTransitionSpeed; // 0x5F8
		::System::UInt32 TrackPathWayGroupID; // 0x5FC
		::System::Boolean ForbidCameraZoomInput; // 0x600
		::System::Boolean HasProtectDistance; // 0x601
		::System::Boolean DialogModeBlending; // 0x602
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x603
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x604
		::System::Boolean ChangeDOF; // 0x608
		::System::Boolean ResetToFightNormalModeFlag; // 0x609
		::System::Boolean MazeBattleTransitionOpen; // 0x60A
		::System::Boolean IsNoiseOpen; // 0x60B
		::System::Single TrackCameraPathWayDetectWidth; // 0x60C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET))(this);
		}

		::System::Single GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* QueryCharactersInTeam(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET))(this, teamTypeMask, aliveStateMask);
		}

		::System::Single GetTeamFormationWidth(::RPG::GameCore::TeamType eTeam)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET))(this, eTeam);
		}

		::System::Single GetLightTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::System::Single GetDarkTeamFormationWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamLeft()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET))(this);
		}

		::System::Single GetDarkTeamMaxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::MQuaternion GetLightTeamRotation()
		{
			return ((::RPG::MQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightTeamLockTargetTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET))(this);
		}

		::System::Single GetBattleMonsterCameraOffsetHeight(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET))(this, Entity);
		}

		::RPG::GameCore::CharacterSomatoType GetCharacterSomato(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::RPG::GameCore::CharacterSomatoType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET))(this, Entity);
		}

		::System::Single GetLightTeamFaceDir()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET))(this);
		}

		::RPG::MVector3 GetTeamAliveEntitiesCenterWorldPos(::RPG::GameCore::TeamType TeamMask)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET))(this, TeamMask);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET))(this);
		}

		::RPG::MVector3 GetLightTeamFormationCenterWorldPosFromBoundBox()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET))(this);
		}

		::System::Single GetTransformComponentYawAngle(::RPG::GameCore::GameEntity* Entity)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET))(this, Entity);
		}

		::UnityEngine::Vector3 GetAdjoinAtkTargetAveragePos(::RPG::GameCore::GameEntity* targetEntity, ::RPG::GameCore::SkillCharacterComponent* skillChara, ::UnityEngine::Vector3 centerPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillCharacterComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET))(this, targetEntity, skillChara, centerPos);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET))(this);
		}

		::Struct_2_87411F35FE812768 GetInheritParams()
		{
			return ((::Struct_2_87411F35FE812768(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET))(this);
		}

		::System::Void ApplyInheritParams(::Struct_2_87411F35FE812768& inheritParams)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_87411F35FE812768&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET))(this, inheritParams);
		}

		::System::Boolean get_BlockAimDampUntilLookAtTargetMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this);
		}

		::System::Void set_BlockAimDampUntilLookAtTargetMoved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET))(this, value);
		}

		::System::Boolean get_DisableProtectFlag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET))(this);
		}

		::System::Void DisableCameraProtect(::System::Boolean disable, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_DisableCameraProtectReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET))(this, disable, reason);
		}

		::System::Void ThirdRoamingSetEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Void ThirdRoamingReleaseEnableCameraProtect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET))(this);
		}

		::System::Void SetKeepOrthographicOnReset(::System::Boolean set, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET))(this, set, reason);
		}

		::System::Boolean get_KeepOrthographicOnReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET))(this);
		}

		::System::Void ApplyCameraNoiseChangeConfig(::RPG::GameCore::VCameraNoiseChange* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET))(this, config);
		}

		::System::Void EnableNoise(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET))(this, enable);
		}

		::System::Void RegisterNoiseTransition(::System::Single targetAmplitudeGain, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET))(this, targetAmplitudeGain, duration);
		}

		::System::Void UnregisterNoiseTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET))(this);
		}

		::System::Void TickNoiseTransition(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET))(this, deltaTime);
		}

		::System::Void _OnTeamLeaderEntityChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET))(this, arg);
		}

		::System::Void _RefreshLocalPlayerDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET))(this);
		}

		::System::Void _RefreshBattlePhaseNewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHBATTLEPHASENEWDATA_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* get_CinemachineBrainRef()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET))(this);
		}

		::System::Void set_CinemachineBrainRef(::Cinemachine::CinemachineBrain* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET))(this, value);
		}

		::RPG::Client::GameCoreCameraData* get_GameCoreData()
		{
			return ((::RPG::Client::GameCoreCameraData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET))(this);
		}

		::System::Void set_GameCoreData(::RPG::Client::GameCoreCameraData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GameCoreCameraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET))(this, value);
		}

		::System::Boolean get_LockRelatedTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET))(this);
		}

		::System::Void set_LockRelatedTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET))(this, value);
		}

		::System::Void Refresh(::RPG::Client::PipelineCameraEngine* engine, ::RPG::Client::PipelineCameraGlobalConfig* globalConfig, ::RPG::Client::CameraModuleConfigCollection* moduleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraModuleConfigCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET))(this, engine, globalConfig, moduleConfig);
		}

		::System::Void SetActiveEntityRef(::RPG::GameCore::GameEntity* pActiveEntityRef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET))(this, pActiveEntityRef);
		}

		::System::Void SetCameraMode(::RPG::GameCore::CameraMode newMode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CameraMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET))(this, newMode);
		}

		::RPG::GameCore::CameraMode GetCameraMode()
		{
			return ((::RPG::GameCore::CameraMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET))(this);
		}

		::System::Void SetVCameraConfig(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraConfig* configAll, ::System::Nullable_1<::RPG::MVector3> anchorTargetPos, ::System::Nullable_1<::RPG::MVector3> aimTargetPos, ::System::Nullable_1<::RPG::MQuaternion> closeupShotInitRot, ::RPG::GameCore::TeamType anchorTargetTeam, ::System::Action* closeupShotFinishCB, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* aimTargetEntityList, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* anchorTargetEntityList, ::RPG::GameCore::GameEntity* anchorTargetEntity, ::RPG::GameCore::GameEntity* aimTargetEntity, ::RPG::GameCore::TargetEvaluator* anchorTargettype, ::RPG::GameCore::TargetEvaluator* aimTargettype, ::System::Boolean bShotCutAlwaysFlag, ::RPG::GameCore::GameEntity* configCaster, ::RPG::GameCore::GameEntity* shakeAttenuationEntity, ::System::Single timelineStartTime, ::System::Single timelineFinishTime, ::System::Boolean useFreelook3rdConfig, ::System::Boolean isFromPrepareAbility)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MVector3>, ::System::Nullable_1<::RPG::MQuaternion>, ::RPG::GameCore::TeamType, ::System::Action*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TargetEvaluator*, ::RPG::GameCore::TargetEvaluator*, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET))(this, Engine, configAll, anchorTargetPos, aimTargetPos, closeupShotInitRot, anchorTargetTeam, closeupShotFinishCB, aimTargetEntityList, anchorTargetEntityList, anchorTargetEntity, aimTargetEntity, anchorTargettype, aimTargettype, bShotCutAlwaysFlag, configCaster, shakeAttenuationEntity, timelineStartTime, timelineFinishTime, useFreelook3rdConfig, isFromPrepareAbility);
		}

		::System::Single CalcCameraLookAtAngle(::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET))(this, targetPos);
		}

		::System::Void SetVCameraHideEntity(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* pHideEntityList, ::RPG::GameCore::VCameraConfig* source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET))(this, pHideEntityList, source);
		}

		::System::Void SetBlendConfig(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraBlend* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraBlend*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET))(this, Engine, config);
		}

		::System::Void RecoverNormalConfigCamera(::RPG::Client::PipelineCameraEngine* pCameraEngine)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET))(this, pCameraEngine);
		}

		::System::Void SetVCameraGlobalDynamicOffset(::RPG::Client::PipelineCameraEngine* engine, ::System::String* dynamicOffsetConfigName, ::RPG::GameCore::GameEntity* pIgnoreEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this, engine, dynamicOffsetConfigName, pIgnoreEntity);
		}

		::RPG::GameCore::TargetEvaluator* GetCameraShakeDistanceAttenuationTarget(::RPG::GameCore::VCameraConfig* configAll)
		{
			return ((::RPG::GameCore::TargetEvaluator*(*)(::PVOID, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET))(this, configAll);
		}

		::System::Void ResetVCameraGlobalDynamicOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET))(this);
		}

		::System::Void SetUsingUltraDistanceGlobalDynamicOffsetFlag(::System::Boolean isUsing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET))(this, isUsing);
		}

		::RPG::Client::CameraFreelook3rdConfigData* EnqueueCameraFreelook3rdConfigData(::RPG::GameCore::VCameraFreelook3rdConfig* pCameraFreelook3rdConfigData, ::UnityEngine::Vector3 offsetForward, ::System::UInt32 priority)
		{
			return ((::RPG::Client::CameraFreelook3rdConfigData*(*)(::PVOID, ::RPG::GameCore::VCameraFreelook3rdConfig*, ::UnityEngine::Vector3, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET))(this, pCameraFreelook3rdConfigData, offsetForward, priority);
		}

		::System::Void EnqueueCameraLookAtConfigData(::RPG::Client::CameraLookAtConfigData* pCameraLookAtConfigData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraLookAtConfigData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET))(this, pCameraLookAtConfigData);
		}

		::System::Void EnqueueDeferredCameraConfig(::Class_1_AA5627556691B674* camera)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AA5627556691B674*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET))(this, camera);
		}

		::System::Void EnqueueVCameraCloseupTask(::Class_1_47AACC0D1B9F3610* shotTask, ::System::Boolean bClearTaskQueue)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_47AACC0D1B9F3610*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET))(this, shotTask, bClearTaskQueue);
		}

		::System::Void EnqueueVCameraShakeTask(::CameraShakeTask* ShakeTask)
		{
			return ((::System::Void(*)(::PVOID, ::CameraShakeTask*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET))(this, ShakeTask);
		}

		::System::Void EnqueueVCameraShotAnimTask(::Class_1_F064940CC10176D1* ShotAnimTask)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F064940CC10176D1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET))(this, ShotAnimTask);
		}

		::System::Void ActiveShotTemplate(::RPG::Client::ShotTemplateRuntime* template_, ::UnityEngine::Transform* follow, ::UnityEngine::Transform* lookAt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShotTemplateRuntime*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET))(this, template_, follow, lookAt);
		}

		::System::Void DeactiveShotTemplate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET))(this);
		}

		::System::Void ConsumeShotTemplateData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET))(this);
		}

		::System::Void PauseCameraUpdate(::System::Boolean pause, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::CameraDataAndFlags_PauseMainCameraUpdateReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET))(this, pause, reason);
		}

		::System::Boolean _CheckPriority(::RPG::Client::PipelineCameraEngine* Engine, ::RPG::GameCore::VCameraConfig* configAll)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::GameCore::VCameraConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET))(this, Engine, configAll);
		}
	};
}
