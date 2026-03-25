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
class Class_1_47AACC0D1B9F3610;
class Class_1_78B03B04E15725BC;
class Class_1_9F6A7BD216A5C0E3;
class Class_1_AA5627556691B674;
class Class_1_C0FA7ACF6234A735;
class Class_1_CDAD1C4D78702C93;
class Class_1_D27BF54F25500E5F;
class Class_1_E34FF29EE1CCACD4;
class Class_1_F064940CC10176D1;
class Class_2_2D85C3C5517A2A08_TransitionShotData;
class Class_2_DACB2D3D3C70FB8C;
class Class_3_5775A4FEC79026BC;
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

#define RPG_CLIENT_CAMERADATAANDFLAGS_ACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9263B10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYCAMERANOISECHANGECONFIG_OFFSET UNITYSDK_OFFSET(0x925EEA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_APPLYINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x925EB40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CALCCAMERALOOKATANGLE_OFFSET UNITYSDK_OFFSET(0x9262CD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_CONSUMESHOTTEMPLATEDATA_OFFSET UNITYSDK_OFFSET(0x9263C00)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DEACTIVESHOTTEMPLATE_OFFSET UNITYSDK_OFFSET(0x9263B90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x925EC70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x925E9E0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENABLENOISE_OFFSET UNITYSDK_OFFSET(0x925F330)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERAFREELOOK3RDCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9262600)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUECAMERALOOKATCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x9263980)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEDEFERREDCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x92639F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERACLOSEUPTASK_OFFSET UNITYSDK_OFFSET(0x9262750)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHAKETASK_OFFSET UNITYSDK_OFFSET(0x9263A80)
#define RPG_CLIENT_CAMERADATAANDFLAGS_ENQUEUEVCAMERASHOTANIMTASK_OFFSET UNITYSDK_OFFSET(0x92626C0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETADJOINATKTARGETAVERAGEPOS_OFFSET UNITYSDK_OFFSET(0x925E480)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETBATTLEMONSTERCAMERAOFFSETHEIGHT_OFFSET UNITYSDK_OFFSET(0x925E0F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x9260710)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCAMERASHAKEDISTANCEATTENUATIONTARGET_OFFSET UNITYSDK_OFFSET(0x92634D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETCHARACTERSOMATO_OFFSET UNITYSDK_OFFSET(0x925E160)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x925DE70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x925DC30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETDARKTEAMMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x925DD30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETINHERITPARAMS_OFFSET UNITYSDK_OFFSET(0x925EAA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0x925DF20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFACEDIR_OFFSET UNITYSDK_OFFSET(0x925E1D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOSFROMBOUNDBOX_OFFSET UNITYSDK_OFFSET(0x925E380)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x925E2F0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x925DBC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLEFT_OFFSET UNITYSDK_OFFSET(0x925DCA0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMLOCKTARGETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x925E060)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETLIGHTTEAMROTATION_OFFSET UNITYSDK_OFFSET(0x925DFE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMALIVEENTITIESCENTERWORLDPOS_OFFSET UNITYSDK_OFFSET(0x925E240)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTEAMFORMATIONWIDTH_OFFSET UNITYSDK_OFFSET(0x925DB40)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x925DA30)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GETTRANSFORMCOMPONENTYAWANGLE_OFFSET UNITYSDK_OFFSET(0x925E410)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x925EBC0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x925F910)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_DISABLEPROTECTFLAG_OFFSET UNITYSDK_OFFSET(0x925EBE0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x925F930)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_KEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x925EE90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_GET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x925F950)
#define RPG_CLIENT_CAMERADATAANDFLAGS_PAUSECAMERAUPDATE_OFFSET UNITYSDK_OFFSET(0x9263C70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_QUERYCHARACTERSINTEAM_OFFSET UNITYSDK_OFFSET(0x925DA90)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RECOVERNORMALCONFIGCAMERA_OFFSET UNITYSDK_OFFSET(0x9263110)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REFRESH_OFFSET UNITYSDK_OFFSET(0x925F970)
#define RPG_CLIENT_CAMERADATAANDFLAGS_REGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x925F0D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_RESETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x92635B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETACTIVEENTITYREF_OFFSET UNITYSDK_OFFSET(0x92604A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETBLENDCONFIG_OFFSET UNITYSDK_OFFSET(0x92628A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x92606A0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETKEEPORTHOGRAPHICONRESET_OFFSET UNITYSDK_OFFSET(0x925EE20)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETUSINGULTRADISTANCEGLOBALDYNAMICOFFSETFLAG_OFFSET UNITYSDK_OFFSET(0x9263600)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x9260760)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAGLOBALDYNAMICOFFSET_OFFSET UNITYSDK_OFFSET(0x9263390)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SETVCAMERAHIDEENTITY_OFFSET UNITYSDK_OFFSET(0x9263050)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_BLOCKAIMDAMPUNTILLOOKATTARGETMOVED_OFFSET UNITYSDK_OFFSET(0x925EBD0)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_CINEMACHINEBRAINREF_OFFSET UNITYSDK_OFFSET(0x925F920)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_GAMECOREDATA_OFFSET UNITYSDK_OFFSET(0x925F940)
#define RPG_CLIENT_CAMERADATAANDFLAGS_SET_LOCKRELATEDTARGET_OFFSET UNITYSDK_OFFSET(0x925F960)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGRELEASEENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x925ED70)
#define RPG_CLIENT_CAMERADATAANDFLAGS_THIRDROAMINGSETENABLECAMERAPROTECT_OFFSET UNITYSDK_OFFSET(0x925ED10)
#define RPG_CLIENT_CAMERADATAANDFLAGS_TICKNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x925F480)
#define RPG_CLIENT_CAMERADATAANDFLAGS_UNREGISTERNOISETRANSITION_OFFSET UNITYSDK_OFFSET(0x925F2B0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CHECKPRIORITY_OFFSET UNITYSDK_OFFSET(0x9261970)
#define RPG_CLIENT_CAMERADATAANDFLAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x925E570)
#define RPG_CLIENT_CAMERADATAANDFLAGS__ONTEAMLEADERENTITYCHANGED_OFFSET UNITYSDK_OFFSET(0x925F540)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHBATTLEPHASENEWDATA_OFFSET UNITYSDK_OFFSET(0x925F7D0)
#define RPG_CLIENT_CAMERADATAANDFLAGS__REFRESHLOCALPLAYERDEF_OFFSET UNITYSDK_OFFSET(0x925F590)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_TypeDefinitionIndex = 56846;

	class CameraDataAndFlags : public ::System::Object
	{
	public:
		::System::String* ProjectionBlendInCurve; // 0x10
		::System::Collections::Generic::Queue_1<::CameraShakeTask*>* VCameraShakeTaskQueue; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HideEntityList; // 0x20
		::Cinemachine::CinemachineBrain* _CinemachineBrainRef_k__BackingField; // 0x28
		::RPG::Client::CameraResultData CurrentResult; // 0x30
		::RPG::GameCore::GameEntity* ConfigCaster; // 0xC0
		::RPG::GameCore::GameEntity* VCameraFollowTarget; // 0xC8
		::System::String* TrackCameraAreaName; // 0xD0
		::RPG::GameCore::GameEntity* Freelook3rdCameraLookAtTarget; // 0xD8
		::RPG::GameCore::VCameraBlend* HoldenBlendForCastAnimation; // 0xE0
		::Class_1_78B03B04E15725BC* CurrentBaseChangeParam; // 0xE8
		::Class_2_DACB2D3D3C70FB8C* DisableProtectPriorityQueue; // 0xF0
		::RPG::Client::CameraNormalConfigData* NextCameraNormalConfigData; // 0xF8
		::Class_1_CDAD1C4D78702C93* Freelook3rdControllerRef; // 0x100
		::System::String* ProjectionBlendOutCurve; // 0x108
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* TopViewLookAtEntities; // 0x110
		::RPG::Client::CameraNormalConfigData* CurrentCameraNormalConfigData; // 0x118
		::RPG::GameCore::GameEntity* CurrentPlayerEntity; // 0x120
		::Class_3_5775A4FEC79026BC* TrackCameraExitFromStartSeq; // 0x128
		::System::Collections::Generic::Queue_1<::Class_1_47AACC0D1B9F3610*>* CameraCloseupShotTaskQueue; // 0x130
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* ForceHiddenEntityList; // 0x138
		::Class_1_9F6A7BD216A5C0E3* GlobalNamedDynamicOffsetData; // 0x140
		::Class_3_5775A4FEC79026BC* TrackCameraOnOutOfRange; // 0x148
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* GlobalDynamicOffsetIgnoreEntityList; // 0x150
		::RPG::Client::GameCoreCameraData* _GameCoreData_k__BackingField; // 0x158
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* AimTargetFocusEntityList; // 0x160
		::UnityEngine::Transform* ShotTemplateFollow; // 0x168
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraLookAtConfigData*>* CameraLookAtConfigDataQueue; // 0x170
		::System::Collections::Generic::Queue_1<::RPG::Client::CameraFreelook3rdConfigData*>* CameraFreelook3rdConfigDataQueue; // 0x178
		::System::String* IsometricCurvePath; // 0x180
		::Cinemachine::CinemachineVirtualCameraBase* LittleGameDirectCamera; // 0x188
		::Class_2_2D85C3C5517A2A08_TransitionShotData* CustomShotData; // 0x190
		::System::Collections::Generic::Queue_1<::Class_1_F064940CC10176D1*>* VCameraShotAnimTaskQueue; // 0x198
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VCameraState, ::RPG::Client::CameraNormalConfigData*>* StateAdditiveNormalConfigMap; // 0x1A0
		::UnityEngine::Transform* ShotTemplateLookAt; // 0x1A8
		::Class_1_E34FF29EE1CCACD4* RoamingVCameraControllerRef; // 0x1B0
		::Class_3_5775A4FEC79026BC* TrackCameraExitFromEndSeq; // 0x1B8
		::Class_1_C0FA7ACF6234A735* CameraConfigRecoverData; // 0x1C0
		::RPGTools::Timeline::CameraData* PlayingCameraTimelineData; // 0x1C8
		::System::Collections::Generic::Queue_1<::Class_1_AA5627556691B674*>* DeferredCameraAfterCloseupShot; // 0x1D0
		::RPG::Client::CameraFreelook3rdConfigData* CurrentFreelook3rdChangeParam; // 0x1D8
		::Class_1_CDAD1C4D78702C93* RoamingFreelook3rdControllerRef; // 0x1E0
		::UnityEngine::Transform* OverrideFreelook3rdTarget; // 0x1E8
		::Class_1_D27BF54F25500E5F* NoiseTransition; // 0x1F0
		::Class_1_E34FF29EE1CCACD4* CurActiveCameraController; // 0x1F8
		::RPG::Client::CameraResultData LastResult; // 0x200
		::System::String* TrackCameraName; // 0x290
		::RPG::Client::ShotTemplateRuntime* ShotTemplate; // 0x298
		::System::Single FreeLookMaxDistance; // 0x2A0
		::System::Boolean KeepInputCameraDirection; // 0x2A4
		::System::Boolean UseLookAtChangeOffset; // 0x2A5
		::System::Single CameraZoomDistance; // 0x2A8
		::System::UInt32 ConfigVersion; // 0x2AC
		::Struct_2_A725E4562D03EA4E_3 CurrentFrameResult; // 0x2B0
		::System::Single TopViewDepressionAngle; // 0x2B8
		::System::Single TrackRoamingSpeedDamp; // 0x2BC
		::System::Single OverrideAimOffsetLerpRatio; // 0x2C0
		::System::Single CameraZoomVelocityAdditiveRatio; // 0x2C4
		::System::Single OrthographicSize; // 0x2C8
		::System::Single ProjectionBlendOutTime; // 0x2CC
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamFollowDamping; // 0x2D0
		::System::Boolean BlendOutImmediately; // 0x2E0
		::System::Boolean CameraRotating; // 0x2E1
		::System::Boolean IsForceHugeMonsterHalfDither; // 0x2E2
		::System::Boolean DisableDitherClose; // 0x2E3
		::System::Single FirstPersonHeightOverride; // 0x2E4
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputX; // 0x2E8
		::System::Single FOVSmoothDampTime; // 0x2EC
		::UnityEngine::Vector2 refAnchorAngularVelocity; // 0x2F0
		::System::Single CameraAimOffsetDelta; // 0x2F8
		::System::Single TrackRoamingAngleRecoverDamp; // 0x2FC
		::System::Boolean VCameraDitherNPCOn; // 0x300
		::System::Boolean LockRecenterY; // 0x301
		::System::Boolean IsometricUseCurve; // 0x302
		::System::Boolean ChangeDOF; // 0x303
		::System::Single TargetAutoAdsorbAxisY; // 0x304
		::System::Single DialogModeBlendingWeight; // 0x308
		::System::Single FreeLookMinDistance; // 0x30C
		::System::Single CameraZoomRatio; // 0x310
		::System::Boolean MazeBattleTransitionOpen; // 0x314
		::System::Boolean NoiseTransitionFinishNeedApply; // 0x315
		::System::Boolean LookAtLockAxisInput; // 0x316
		::System::Boolean StartIsometricSizeBlend; // 0x317
		::System::Boolean CloseupShotPureTimelineAnimFlag; // 0x318
		::System::Boolean DisableFreelook3rdCameraInput; // 0x319
		::System::Boolean CloseupPendingTimelineUpdate; // 0x31A
		::System::Boolean CameraZoomEnable; // 0x31B
		::System::Single ProjectionBlendInTime; // 0x31C
		::System::Boolean ForbidCameraShake; // 0x320
		::System::Boolean IsScreenPointerDown; // 0x321
		::System::Boolean DoProjectionBlendToOrthographic; // 0x322
		::System::Boolean IsPlayerDitherByDistance; // 0x323
		::System::Single OpticalIllusionSize; // 0x324
		::System::Boolean ResetToFaceDir; // 0x328
		::System::Boolean TrackCameraMappingInput; // 0x329
		::System::Boolean IsNeedBlend; // 0x32A
		::System::Boolean EnableFreelookCameraDragMode; // 0x32B
		::System::Boolean HasProtectDistance; // 0x32C
		::System::Boolean ForbidCameraZoomChange; // 0x32D
		::System::Boolean CloseupShotExitFlag; // 0x32E
		::System::Boolean IsInBattleDataViewMode; // 0x32F
		::UnityEngine::Vector3 TopViewDefaultLookAtPos; // 0x330
		::System::Boolean EnableProtectAfterBlend; // 0x33C
		::System::Boolean NoiseIgnoreActionWaitOrder; // 0x33D
		::System::Boolean ShotAnimClear; // 0x33E
		::System::Boolean TrackCameraEnable; // 0x33F
		::System::Boolean MazePrepareTriggerBattle; // 0x340
		::System::Boolean DisableCameraRecenter; // 0x341
		::System::Boolean ForbidRoamingPosUpdate; // 0x342
		::System::Boolean _LockRelatedTarget_k__BackingField; // 0x343
		::System::Single TopViewCameraDist; // 0x344
		::RPG::Client::CameraDataAndFlags_MazeBattleShotDataType ShotDataType; // 0x348
		::UnityEngine::Matrix4x4 ProjectionBlendCameraOriMatrix; // 0x34C
		::RPG::Client::CameraDataAndFlags_TrackCameraTrackType TrackCameraUseTrackType; // 0x38C
		::UnityEngine::Vector3 TopViewLookAtPos; // 0x390
		::System::Boolean LookAtUnlockAxisInputAfterRecover; // 0x39C
		::System::Boolean ForceHiddenEntityReset; // 0x39D
		::System::Boolean DofNeedReset; // 0x39E
		::System::Boolean ResetZoomKeepCameraBlend; // 0x39F
		::System::Boolean NeedDefaultBlendCurveFlag; // 0x3A0
		::System::Boolean IsAutoAdsorbOn; // 0x3A1
		::System::Boolean ForbidRoamingZoomChange; // 0x3A2
		::System::Boolean ResetTeamRootPos; // 0x3A3
		::System::Single RoamingZoomValue; // 0x3A4
		::System::Single IsometricOrthographicSize; // 0x3A8
		::System::Single ScreenPointDownTimer; // 0x3AC
		::System::UInt32 PauseLateUpdateCount; // 0x3B0
		::System::Single DialogModeBlendingRatio; // 0x3B4
		::UnityEngine::Vector3 ForwardDir; // 0x3B8
		::System::Single RoamingInitFov; // 0x3C4
		::RPG::Client::CameraDataAndFlags_RoamingStyle CurRoamingStyle; // 0x3C8
		::Struct_2_2CBB9F488B837A11 UltraDistanceGlobalDynamicOffsetData; // 0x3CC
		::System::Single TrackRoamingAngleRotationFactorMax; // 0x3EC
		::Struct_2_2D71E0AE8D880088 DisableFreelook3rdCameraInputY; // 0x3F0
		::Class_2_2D85C3C5517A2A08_TransitionMode MazeBattleTransitionMode; // 0x3F4
		::System::Single TrackRoamingXAnglePercentage; // 0x3F8
		::UnityEngine::Matrix4x4 PresetOrthographicProjectionMatrix; // 0x3FC
		::System::Single TrackRoamingAngleDeadZoneLimitY; // 0x43C
		::RPG::GameCore::VCameraState CurVCameraState; // 0x440
		::System::Single ScreenPointUpTimer; // 0x444
		::System::Single TrackRoamingAngleLimitY; // 0x448
		::UnityEngine::Vector3 OpticalIllusionPosition; // 0x44C
		::UnityEngine::Vector3 RoamingInitForward; // 0x458
		::System::Nullable_1<::UnityEngine::Vector3> Freelook3rdChangeParamLookAtDamping; // 0x464
		::System::Single VCameraDitherNPCMaxDistance; // 0x474
		::System::Single TrackRoamingStandardSpeed; // 0x478
		::System::Single TrackRoamingAngleLimitX; // 0x47C
		::UnityEngine::Vector2 LookAtMouseSpeedRatio; // 0x480
		::RPG::GameCore::TeamFormationType DarkTeamRefreshTypeWhenSetVCameraConfig; // 0x488
		::System::Nullable_1<::System::Single> DialogModeZoomDistance; // 0x48C
		::System::Boolean IsForceClearDitherOnce; // 0x494
		::System::Boolean DialogModeBlending; // 0x495
		::System::Boolean IsRecovering; // 0x496
		::System::Boolean DoIsometricSizeBlend; // 0x497
		::System::Boolean IsShowEntityListIgnoreDither; // 0x498
		::System::Boolean DisableElevationDither; // 0x499
		::System::Boolean _BlockAimDampUntilLookAtTargetMoved_k__BackingField; // 0x49A
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x49B
		::System::Boolean DoOpticalIllusionSet; // 0x49C
		::System::Boolean RoamingUseInitLookAtPos; // 0x49D
		::System::Boolean ForbidAimOffsetLerpFlag; // 0x49E
		::UnityEngine::Vector3 FreeLookAtPos; // 0x4A0
		::System::Int32 TrackCameraStartBlendOutIndex; // 0x4AC
		::UnityEngine::Vector3 CameraAimOffsetResult; // 0x4B0
		::System::Single TrackRoamingAngleRotationFactorMin; // 0x4BC
		::UnityEngine::Vector3 ShotAnimOffset; // 0x4C0
		::System::Boolean ResetToFightNormalModeFlag; // 0x4CC
		::System::Boolean CameraDampSmoothReset; // 0x4CD
		::System::Boolean ForbidCameraZoomInput; // 0x4CE
		::System::Boolean DofGetNewConfig; // 0x4CF
		::System::Single RoamingCurFovRatio; // 0x4D0
		::System::Single MoveControlDistance; // 0x4D4
		::UnityEngine::Vector3 RoamingInitLookAtPos; // 0x4D8
		::System::Single TrackCameraPathWayDetectWidth; // 0x4E4
		::System::Single NearClippingPlane; // 0x4E8
		::System::Int32 TrackCameraEndBlendInIndex; // 0x4EC
		::UnityEngine::Vector3 TopViewLookAtOffset; // 0x4F0
		::System::Single TrackRoamingRotationFactor; // 0x4FC
		::System::Single TopViewLookAngleBias; // 0x500
		::RPG::Client::CameraDataAndFlags_TrackRoamingCameraRotationMode TrackRoamingRotationMode; // 0x504
		::System::Single MazeBattleTransitionOverrideInitBlendTime; // 0x508
		::System::Int32 ConfigPriority; // 0x50C
		::System::UInt32 TrackPathWayID; // 0x510
		::UnityEngine::Vector3 TopViewForwardDir; // 0x514
		::System::Single OverrideRayHitDietherCheckInterval; // 0x520
		::System::UInt32 TrackPathWayGroupID; // 0x524
		::System::Single VCameraDitherAlphaNPCMin; // 0x528
		::UnityEngine::Vector3 ShotAimCenterPos; // 0x52C
		::System::Single TrackRoamingStandardScreenDis; // 0x538
		::UnityEngine::Vector3 CameraShakePosOffset; // 0x53C
		::UnityEngine::Vector3 CameraShakeRotOffset; // 0x548
		::System::Single TrackRoamingAngleDeadZoneLimitX; // 0x554
		::System::Single TopViewSmoothTime; // 0x558
		::Struct_2_A725E4562D03EA4E_3 LastFrameResult; // 0x55C
		::System::Single FOVAdaptionRatio; // 0x564
		::System::Single TargetAutoAdsorbFaceDir; // 0x568
		::UnityEngine::Vector3 ShotInitCenterPos; // 0x56C
		::UnityEngine::Vector3 LastSelectDarkTeamEntityAim; // 0x578
		::Struct_2_CB7D37A2987B484B DofConfig; // 0x584
		::System::Boolean ResetCinemachineZoomFlag; // 0x598
		::System::Boolean ForbidRoamingInput; // 0x599
		::System::Boolean ClearHidingEntityFlag; // 0x59A
		::System::Boolean IsCloseFightDitherDarkRight; // 0x59B
		::System::Nullable_1<::UnityEngine::Vector3> DialogModeTargetPos; // 0x59C
		::System::Single MazeBattleTransitionSpeed; // 0x5AC
		::System::Single CameraZoomDistanceDelta; // 0x5B0
		::System::Single MoveControlDir; // 0x5B4
		::System::Boolean IsFreeLookAt; // 0x5B8
		::System::Boolean TopViewReset; // 0x5B9
		::System::Boolean ShotTemplateDirty; // 0x5BA
		::System::Boolean RoamingVCameraControllerDragMode; // 0x5BB
		::UnityEngine::Vector2 ShotAimScreenOffset; // 0x5BC
		::RPG::GameCore::CameraMode CurrentMode; // 0x5C4
		::System::Single CameraZoomAddValue; // 0x5C8
		::System::Boolean IsNoiseOpen; // 0x5CC
		::System::Boolean IsCameraBlendCut; // 0x5CD
		::System::Boolean DoProjectionBlendRecoverToProjection; // 0x5CE
		::System::Boolean ResetCinemachineZoomImmFlag; // 0x5CF
		::UnityEngine::Vector3 OffsetPos; // 0x5D0
		::System::Nullable_1<::System::Single> EraLightFollowModeZoomDistanceLimit; // 0x5DC
		::RPG::GameCore::TeamFormationType LightTeamRefreshTypeWhenSetVCameraConfig; // 0x5E4
		::RPG::GameCore::ActiveTrackCameraMode TrackCameraPlayMode; // 0x5E8
		::RPG::GameCore::AdventureCameraOrthographicResetMode OrthographicMatrixResetMode; // 0x5EC
		::RPG::Client::CameraDataAndFlags_KeepOrthographicOnResetReason KeepOrthographicOnResetCounter; // 0x5F0
		::RPG::GameCore::VCameraState NextVCameraState; // 0x5F4
		::System::UInt32 _DisableProtectCount; // 0x5F8
		::System::Single BlockDitherTime; // 0x5FC
		::UnityEngine::Quaternion OpticalIllusionRotation; // 0x600

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
