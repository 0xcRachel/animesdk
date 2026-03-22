#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimBaseEventActionService_1.h"
#include "unitysdk/Struct_2_300255A4917C4300.h"

class Class_2_9DD8A46984F1AFFD;
class Class_2_F47F7A3F5E97970D;
class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG::GameCore { class FiveDimAddDynamicColliderDetectAction; }
namespace RPG::GameCore { class FiveDimAddGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimAddMoneyAction; }
namespace RPG::GameCore { class FiveDimAddRTPCAction; }
namespace RPG::GameCore { class FiveDimApplyPlayerInteractAction; }
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimAudioSetStateAction; }
namespace RPG::GameCore { class FiveDimBaseScrollGameEndAction; }
namespace RPG::GameCore { class FiveDimBeatBackPlayerAction; }
namespace RPG::GameCore { class FiveDimBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimCameraShakeAction; }
namespace RPG::GameCore { class FiveDimChenLingCaptureFrameAction; }
namespace RPG::GameCore { class FiveDimChenLingEmotionAudioPostEventAction; }
namespace RPG::GameCore { class FiveDimClearPlayerVelocityAction; }
namespace RPG::GameCore { class FiveDimClientFinishMissionAction; }
namespace RPG::GameCore { class FiveDimConditionAllOf; }
namespace RPG::GameCore { class FiveDimConditionAnyOf; }
namespace RPG::GameCore { class FiveDimConditionNoneOf; }
namespace RPG::GameCore { class FiveDimCreateMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimCreatePhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimCrystalChangeHPAction; }
namespace RPG::GameCore { class FiveDimDebugLogEventAction; }
namespace RPG::GameCore { class FiveDimDestroyMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimDestroyPhantomPlayerAction; }
namespace RPG::GameCore { class FiveDimEnableIntervalSpawnAction; }
namespace RPG::GameCore { class FiveDimEnterHiddenAreaAction; }
namespace RPG::GameCore { class FiveDimFinishChenLingGameBoyAction; }
namespace RPG::GameCore { class FiveDimFireAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimFireEffectAction; }
namespace RPG::GameCore { class FiveDimForceResetPlayerAction; }
namespace RPG::GameCore { class FiveDimGarbageBinFinishMoveAction; }
namespace RPG::GameCore { class FiveDimJumpToSplinePointAction; }
namespace RPG::GameCore { class FiveDimKillAvatarEffectAction; }
namespace RPG::GameCore { class FiveDimMiniGameCoinCollectedAction; }
namespace RPG::GameCore { class FiveDimMinionDestroyByPresetNameAction; }
namespace RPG::GameCore { class FiveDimMinionDestroySelfAction; }
namespace RPG::GameCore { class FiveDimMissionTalkAction; }
namespace RPG::GameCore { class FiveDimMoveToMascotFakePlayerAction; }
namespace RPG::GameCore { class FiveDimMoveToNextSplinePointAction; }
namespace RPG::GameCore { class FiveDimMutePlayerInputAction; }
namespace RPG::GameCore { class FiveDimMuteUIInputAction; }
namespace RPG::GameCore { class FiveDimOverrideSimpleGameLevelTipAction; }
namespace RPG::GameCore { class FiveDimPauseMusicAction; }
namespace RPG::GameCore { class FiveDimPlayShootArrowAnimAction; }
namespace RPG::GameCore { class FiveDimPlayUsePropAnimAction; }
namespace RPG::GameCore { class FiveDimPlayerSkillArrowCondition; }
namespace RPG::GameCore { class FiveDimRIStateEmissionAction; }
namespace RPG::GameCore { class FiveDimRandomBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimRefillPlayerJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimRemoveGlobalTimeScaleAction; }
namespace RPG::GameCore { class FiveDimResetBillboardAction; }
namespace RPG::GameCore { class FiveDimResumeMusicAction; }
namespace RPG::GameCore { class FiveDimReverseGeckoMoveAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByDoorKeyCountAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetAnimParamByRawLevelVarAction; }
namespace RPG::GameCore { class FiveDimSetArrowCollectCoinAction; }
namespace RPG::GameCore { class FiveDimSetBillboardAction; }
namespace RPG::GameCore { class FiveDimSetCameraActiveAction; }
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetDynamicAttachAction; }
namespace RPG::GameCore { class FiveDimSetEntityVisibleAction; }
namespace RPG::GameCore { class FiveDimSetJumpEnergyVisibleAction; }
namespace RPG::GameCore { class FiveDimSetLevelVarShortAction; }
namespace RPG::GameCore { class FiveDimSetLocalAvatarJumpEnergyAction; }
namespace RPG::GameCore { class FiveDimSetPlayerInteractEnableAction; }
namespace RPG::GameCore { class FiveDimSetPlayerResetModeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillMoveAction; }
namespace RPG::GameCore { class FiveDimSetPlayerSkillUpgradeAction; }
namespace RPG::GameCore { class FiveDimSetPlayerToMusicFallAction; }
namespace RPG::GameCore { class FiveDimSetPropSpawnerEnableAction; }
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace RPG::GameCore { class FiveDimSetRenderingItemStateAction; }
namespace RPG::GameCore { class FiveDimSetResetPointAction; }
namespace RPG::GameCore { class FiveDimSetSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimSetSplineTraceEffectVisibleAction; }
namespace RPG::GameCore { class FiveDimSetTriggerEnableAction; }
namespace RPG::GameCore { class FiveDimSpawnArrowAction; }
namespace RPG::GameCore { class FiveDimSpawnPropAction; }
namespace RPG::GameCore { class FiveDimStartChenLingGameBoyCountDownAction; }
namespace RPG::GameCore { class FiveDimStartLimaoDropMoveAction; }
namespace RPG::GameCore { class FiveDimStartMusicAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStartSplineMoveWithParamAction; }
namespace RPG::GameCore { class FiveDimStartWindowStageAction; }
namespace RPG::GameCore { class FiveDimStopBubbleTalkAction; }
namespace RPG::GameCore { class FiveDimStopMusicAction; }
namespace RPG::GameCore { class FiveDimStopSplineMoveAction; }
namespace RPG::GameCore { class FiveDimStopWindowStageAction; }
namespace RPG::GameCore { class FiveDimSwitchSplineMoveDirectionAction; }
namespace RPG::GameCore { class FiveDimTeleportAction; }
namespace RPG::GameCore { class FiveDimTriggerGameLoadingViewAction; }
namespace RPG::GameCore { class FiveDimTriggerSelfEventAction; }
namespace RPG::GameCore { class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_72CCF66056B00746_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x103A3640)
#define CLASS_2_72CCF66056B00746__CHECKCONDITION_1_OFFSET UNITYSDK_OFFSET(0x103A3270)
#define CLASS_2_72CCF66056B00746__CHECKCONDITION_2_OFFSET UNITYSDK_OFFSET(0x103A3340)
#define CLASS_2_72CCF66056B00746__CHECKCONDITION_3_OFFSET UNITYSDK_OFFSET(0x103A3400)
#define CLASS_2_72CCF66056B00746__CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x103A31B0)
#define CLASS_2_72CCF66056B00746__CTOR_OFFSET UNITYSDK_OFFSET(0x103987E0)
#define CLASS_2_72CCF66056B00746__DISPOSE_OFFSET UNITYSDK_OFFSET(0x103988B0)
#define CLASS_2_72CCF66056B00746__DOACTION_10_OFFSET UNITYSDK_OFFSET(0x1039A540)
#define CLASS_2_72CCF66056B00746__DOACTION_11_OFFSET UNITYSDK_OFFSET(0x1039A880)
#define CLASS_2_72CCF66056B00746__DOACTION_12_OFFSET UNITYSDK_OFFSET(0x1039ABC0)
#define CLASS_2_72CCF66056B00746__DOACTION_13_OFFSET UNITYSDK_OFFSET(0x1039AF20)
#define CLASS_2_72CCF66056B00746__DOACTION_14_OFFSET UNITYSDK_OFFSET(0x1039B270)
#define CLASS_2_72CCF66056B00746__DOACTION_15_OFFSET UNITYSDK_OFFSET(0x1039B7E0)
#define CLASS_2_72CCF66056B00746__DOACTION_16_OFFSET UNITYSDK_OFFSET(0x1039BC90)
#define CLASS_2_72CCF66056B00746__DOACTION_17_OFFSET UNITYSDK_OFFSET(0x1039BE00)
#define CLASS_2_72CCF66056B00746__DOACTION_18_OFFSET UNITYSDK_OFFSET(0x1039C0B0)
#define CLASS_2_72CCF66056B00746__DOACTION_19_OFFSET UNITYSDK_OFFSET(0x1039C120)
#define CLASS_2_72CCF66056B00746__DOACTION_1_OFFSET UNITYSDK_OFFSET(0x10398EB0)
#define CLASS_2_72CCF66056B00746__DOACTION_20_OFFSET UNITYSDK_OFFSET(0x1039C1A0)
#define CLASS_2_72CCF66056B00746__DOACTION_21_OFFSET UNITYSDK_OFFSET(0x1039C430)
#define CLASS_2_72CCF66056B00746__DOACTION_22_OFFSET UNITYSDK_OFFSET(0x1039C5B0)
#define CLASS_2_72CCF66056B00746__DOACTION_23_OFFSET UNITYSDK_OFFSET(0x1039C8A0)
#define CLASS_2_72CCF66056B00746__DOACTION_24_OFFSET UNITYSDK_OFFSET(0x1039C900)
#define CLASS_2_72CCF66056B00746__DOACTION_25_OFFSET UNITYSDK_OFFSET(0x1039CAF0)
#define CLASS_2_72CCF66056B00746__DOACTION_26_OFFSET UNITYSDK_OFFSET(0x1039CBF0)
#define CLASS_2_72CCF66056B00746__DOACTION_27_OFFSET UNITYSDK_OFFSET(0x1039CC80)
#define CLASS_2_72CCF66056B00746__DOACTION_28_OFFSET UNITYSDK_OFFSET(0x1039CE40)
#define CLASS_2_72CCF66056B00746__DOACTION_29_OFFSET UNITYSDK_OFFSET(0x1039CEC0)
#define CLASS_2_72CCF66056B00746__DOACTION_2_OFFSET UNITYSDK_OFFSET(0x10399410)
#define CLASS_2_72CCF66056B00746__DOACTION_30_OFFSET UNITYSDK_OFFSET(0x1039D010)
#define CLASS_2_72CCF66056B00746__DOACTION_31_OFFSET UNITYSDK_OFFSET(0x1039D070)
#define CLASS_2_72CCF66056B00746__DOACTION_32_OFFSET UNITYSDK_OFFSET(0x1039D4D0)
#define CLASS_2_72CCF66056B00746__DOACTION_33_OFFSET UNITYSDK_OFFSET(0x1039DBE0)
#define CLASS_2_72CCF66056B00746__DOACTION_34_OFFSET UNITYSDK_OFFSET(0x1039DDD0)
#define CLASS_2_72CCF66056B00746__DOACTION_35_OFFSET UNITYSDK_OFFSET(0x1039DF10)
#define CLASS_2_72CCF66056B00746__DOACTION_36_OFFSET UNITYSDK_OFFSET(0x1039E050)
#define CLASS_2_72CCF66056B00746__DOACTION_37_OFFSET UNITYSDK_OFFSET(0x1039E190)
#define CLASS_2_72CCF66056B00746__DOACTION_38_OFFSET UNITYSDK_OFFSET(0x1039E2D0)
#define CLASS_2_72CCF66056B00746__DOACTION_39_OFFSET UNITYSDK_OFFSET(0x1039E350)
#define CLASS_2_72CCF66056B00746__DOACTION_3_OFFSET UNITYSDK_OFFSET(0x10399490)
#define CLASS_2_72CCF66056B00746__DOACTION_40_OFFSET UNITYSDK_OFFSET(0x1039E650)
#define CLASS_2_72CCF66056B00746__DOACTION_41_OFFSET UNITYSDK_OFFSET(0x1039E9A0)
#define CLASS_2_72CCF66056B00746__DOACTION_42_OFFSET UNITYSDK_OFFSET(0x1039ED60)
#define CLASS_2_72CCF66056B00746__DOACTION_43_OFFSET UNITYSDK_OFFSET(0x1039F220)
#define CLASS_2_72CCF66056B00746__DOACTION_44_OFFSET UNITYSDK_OFFSET(0x1039F420)
#define CLASS_2_72CCF66056B00746__DOACTION_45_OFFSET UNITYSDK_OFFSET(0x1039F810)
#define CLASS_2_72CCF66056B00746__DOACTION_46_OFFSET UNITYSDK_OFFSET(0x1039F890)
#define CLASS_2_72CCF66056B00746__DOACTION_47_OFFSET UNITYSDK_OFFSET(0x1039FA40)
#define CLASS_2_72CCF66056B00746__DOACTION_48_OFFSET UNITYSDK_OFFSET(0x1039FBA0)
#define CLASS_2_72CCF66056B00746__DOACTION_49_OFFSET UNITYSDK_OFFSET(0x1039FD60)
#define CLASS_2_72CCF66056B00746__DOACTION_4_OFFSET UNITYSDK_OFFSET(0x103996E0)
#define CLASS_2_72CCF66056B00746__DOACTION_50_OFFSET UNITYSDK_OFFSET(0x1039FF20)
#define CLASS_2_72CCF66056B00746__DOACTION_51_OFFSET UNITYSDK_OFFSET(0x103A02E0)
#define CLASS_2_72CCF66056B00746__DOACTION_52_OFFSET UNITYSDK_OFFSET(0x103A04A0)
#define CLASS_2_72CCF66056B00746__DOACTION_53_OFFSET UNITYSDK_OFFSET(0x103A0580)
#define CLASS_2_72CCF66056B00746__DOACTION_54_OFFSET UNITYSDK_OFFSET(0x103A0600)
#define CLASS_2_72CCF66056B00746__DOACTION_55_OFFSET UNITYSDK_OFFSET(0x103A06E0)
#define CLASS_2_72CCF66056B00746__DOACTION_56_OFFSET UNITYSDK_OFFSET(0x103A07C0)
#define CLASS_2_72CCF66056B00746__DOACTION_57_OFFSET UNITYSDK_OFFSET(0x103A0850)
#define CLASS_2_72CCF66056B00746__DOACTION_58_OFFSET UNITYSDK_OFFSET(0x103A09B0)
#define CLASS_2_72CCF66056B00746__DOACTION_59_OFFSET UNITYSDK_OFFSET(0x103A0A40)
#define CLASS_2_72CCF66056B00746__DOACTION_5_OFFSET UNITYSDK_OFFSET(0x103997C0)
#define CLASS_2_72CCF66056B00746__DOACTION_60_OFFSET UNITYSDK_OFFSET(0x103A0AE0)
#define CLASS_2_72CCF66056B00746__DOACTION_61_OFFSET UNITYSDK_OFFSET(0x103A0B50)
#define CLASS_2_72CCF66056B00746__DOACTION_62_OFFSET UNITYSDK_OFFSET(0x103A11C0)
#define CLASS_2_72CCF66056B00746__DOACTION_63_OFFSET UNITYSDK_OFFSET(0x103A1360)
#define CLASS_2_72CCF66056B00746__DOACTION_64_OFFSET UNITYSDK_OFFSET(0x103A1550)
#define CLASS_2_72CCF66056B00746__DOACTION_65_OFFSET UNITYSDK_OFFSET(0x103A16E0)
#define CLASS_2_72CCF66056B00746__DOACTION_66_OFFSET UNITYSDK_OFFSET(0x103A1840)
#define CLASS_2_72CCF66056B00746__DOACTION_67_OFFSET UNITYSDK_OFFSET(0x103A19D0)
#define CLASS_2_72CCF66056B00746__DOACTION_68_OFFSET UNITYSDK_OFFSET(0x103A1A60)
#define CLASS_2_72CCF66056B00746__DOACTION_69_OFFSET UNITYSDK_OFFSET(0x103A1DD0)
#define CLASS_2_72CCF66056B00746__DOACTION_6_OFFSET UNITYSDK_OFFSET(0x10399D20)
#define CLASS_2_72CCF66056B00746__DOACTION_70_OFFSET UNITYSDK_OFFSET(0x103A1E70)
#define CLASS_2_72CCF66056B00746__DOACTION_71_OFFSET UNITYSDK_OFFSET(0x103A1FA0)
#define CLASS_2_72CCF66056B00746__DOACTION_72_OFFSET UNITYSDK_OFFSET(0x103A20B0)
#define CLASS_2_72CCF66056B00746__DOACTION_73_OFFSET UNITYSDK_OFFSET(0x103A2130)
#define CLASS_2_72CCF66056B00746__DOACTION_74_OFFSET UNITYSDK_OFFSET(0x103A2200)
#define CLASS_2_72CCF66056B00746__DOACTION_75_OFFSET UNITYSDK_OFFSET(0x103A22C0)
#define CLASS_2_72CCF66056B00746__DOACTION_76_OFFSET UNITYSDK_OFFSET(0x103A2340)
#define CLASS_2_72CCF66056B00746__DOACTION_77_OFFSET UNITYSDK_OFFSET(0x103A2640)
#define CLASS_2_72CCF66056B00746__DOACTION_78_OFFSET UNITYSDK_OFFSET(0x103A26B0)
#define CLASS_2_72CCF66056B00746__DOACTION_79_OFFSET UNITYSDK_OFFSET(0x103A2730)
#define CLASS_2_72CCF66056B00746__DOACTION_7_OFFSET UNITYSDK_OFFSET(0x10399E20)
#define CLASS_2_72CCF66056B00746__DOACTION_80_OFFSET UNITYSDK_OFFSET(0x103A2930)
#define CLASS_2_72CCF66056B00746__DOACTION_81_OFFSET UNITYSDK_OFFSET(0x103A2AD0)
#define CLASS_2_72CCF66056B00746__DOACTION_82_OFFSET UNITYSDK_OFFSET(0x103A2C00)
#define CLASS_2_72CCF66056B00746__DOACTION_83_OFFSET UNITYSDK_OFFSET(0x103A2C80)
#define CLASS_2_72CCF66056B00746__DOACTION_84_OFFSET UNITYSDK_OFFSET(0x103A2D00)
#define CLASS_2_72CCF66056B00746__DOACTION_85_OFFSET UNITYSDK_OFFSET(0x103A2DD0)
#define CLASS_2_72CCF66056B00746__DOACTION_86_OFFSET UNITYSDK_OFFSET(0x103A2E50)
#define CLASS_2_72CCF66056B00746__DOACTION_87_OFFSET UNITYSDK_OFFSET(0x103A2EE0)
#define CLASS_2_72CCF66056B00746__DOACTION_88_OFFSET UNITYSDK_OFFSET(0x103A3100)
#define CLASS_2_72CCF66056B00746__DOACTION_89_OFFSET UNITYSDK_OFFSET(0x103A3560)
#define CLASS_2_72CCF66056B00746__DOACTION_8_OFFSET UNITYSDK_OFFSET(0x1039A130)
#define CLASS_2_72CCF66056B00746__DOACTION_9_OFFSET UNITYSDK_OFFSET(0x1039A1F0)
#define CLASS_2_72CCF66056B00746__DOACTION_OFFSET UNITYSDK_OFFSET(0x10398960)
#define CLASS_2_72CCF66056B00746__LOGERROR_OFFSET UNITYSDK_OFFSET(0x10398900)
#define CLASS_2_72CCF66056B00746___IFIXBASEPROXY_GET__TASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x103A37D0)
#define CLASS_2_72CCF66056B00746___IFIXBASEPROXY__DOACTION_OFFSET UNITYSDK_OFFSET(0x103A3750)
#define CLASS_2_72CCF66056B00746___IFIXBASEPROXY__LOGERROR_OFFSET UNITYSDK_OFFSET(0x103A36D0)

inline static constexpr unsigned int Class_2_72CCF66056B00746_TypeDefinitionIndex = 60599;

class Class_2_72CCF66056B00746 : public ::RPG::Client::LittleGame::FiveDim::FiveDimBaseEventActionService_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolHashSet_1<::System::String*>*>* Field_2_2; // 0x58
	::Class_2_F47F7A3F5E97970D* Field_2_0; // 0x60
	::System::Int32 Field_2_3; // 0x68

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DISPOSE_OFFSET))(this);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__LOGERROR_OFFSET))(this, a1);
	}

	::System::Void _DoAction(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByRawLevelVarAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_1_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_2(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMuteUIInputAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMuteUIInputAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_2_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_3(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_4(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimOverrideSimpleGameLevelTipAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_4_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_5(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_5_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_6(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnterHiddenAreaAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnterHiddenAreaAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_6_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_7(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetLevelVarShortAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetLevelVarShortAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_7_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_8(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDebugLogEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDebugLogEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_8_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_9(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartSplineMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartSplineMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_9_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_10(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopSplineMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopSplineMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_10_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_11(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSwitchSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_11_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_12(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetSplineMoveDirectionAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_12_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_13(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMoveToNextSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_13_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_14(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_14_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_15(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_15_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_16(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartChenLingGameBoyCountDownAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_16_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_17(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFinishChenLingGameBoyAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_17_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_18(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSpawnPropAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSpawnPropAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_18_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_19(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPropSpawnerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_19_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_20(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddDynamicColliderDetectAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_20_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_21(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimEnableIntervalSpawnAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_21_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_22(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCreateMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_22_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_23(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDestroyMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_23_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_24(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_24_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_25(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_25_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_26(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetEntityVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetEntityVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_26_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_27(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetJumpEnergyVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_27_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_28(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_28_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_29(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBeatBackPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBeatBackPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_29_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_30(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimForceResetPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimForceResetPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_30_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_31(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMoveToMascotFakePlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_31_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_32(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartLimaoDropMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_32_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_33(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimGarbageBinFinishMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_33_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_34(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_34_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_35(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_35_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_36(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPauseMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPauseMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_36_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_37(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimResumeMusicAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimResumeMusicAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_37_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_38(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetLocalAvatarJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_38_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_39(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_39_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_40(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddRTPCAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddRTPCAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_40_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_41(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2, ::Struct_2_300255A4917C4300 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAudioPostEventAction*, ::Struct_2_300255A4917C4300))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_41_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_42(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimChenLingEmotionAudioPostEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_42_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_43(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAudioSetStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAudioSetStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_43_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_44(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStartWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStartWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_44_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_45(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopWindowStageAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopWindowStageAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_45_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_46(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddMoneyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddMoneyAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_46_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_47(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRefillPlayerJumpEnergyAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_47_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_48(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayShootArrowAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_48_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_49(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayUsePropAnimAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayUsePropAnimAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_49_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_50(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSpawnArrowAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSpawnArrowAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_50_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_51(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimReverseGeckoMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimReverseGeckoMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_51_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_52(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerResetModeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerResetModeAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_52_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_53(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetCameraActiveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetCameraActiveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_53_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_54(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFireEffectAction* a2, ::Struct_2_300255A4917C4300 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFireEffectAction*, ::Struct_2_300255A4917C4300))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_54_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_55(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimFireAvatarEffectAction* a2, ::Struct_2_300255A4917C4300 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimFireAvatarEffectAction*, ::Struct_2_300255A4917C4300))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_55_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _DoAction_56(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimKillAvatarEffectAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimKillAvatarEffectAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_56_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_57(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_57_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_58(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerSkillUpgradeAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_58_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_59(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetRenderingItemStateAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetRenderingItemStateAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_59_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_60(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRIStateEmissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRIStateEmissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_60_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_61(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerSelfEventAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerSelfEventAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_61_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_62(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetSplineTraceEffectVisibleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_62_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_63(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMissionTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMissionTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_63_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_64(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetResetPointAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetResetPointAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_64_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_65(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerSkillMoveAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_65_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_66(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_66_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_67(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBaseScrollGameEndAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBaseScrollGameEndAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_67_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_68(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_68_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_69(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTeleportAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTeleportAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_69_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_70(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimClearPlayerVelocityAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimClearPlayerVelocityAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_70_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_71(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimApplyPlayerInteractAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimApplyPlayerInteractAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_71_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_72(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetPlayerInteractEnableAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_72_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_73(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMinionDestroyByPresetNameAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_73_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_74(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_74_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_75(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_75_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_76(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimAddGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_76_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_77(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRemoveGlobalTimeScaleAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_77_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_78(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimCrystalChangeHPAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimCrystalChangeHPAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_78_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_79(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_79_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_80(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimRandomBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimRandomBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_80_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_81(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimStopBubbleTalkAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimStopBubbleTalkAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_81_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_82(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_82_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_83(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimResetBillboardAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimResetBillboardAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_83_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_84(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimClientFinishMissionAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimClientFinishMissionAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_84_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_85(::RPG::GameCore::FiveDimCameraShakeAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_85_OFFSET))(this, a1);
	}

	::System::Void _DoAction_86(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimTriggerGameLoadingViewAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_86_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_87(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimSetArrowCollectCoinAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_87_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_88(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimChenLingCaptureFrameAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_88_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionAllOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionAllOf*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__CHECKCONDITION_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_1(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionAnyOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionAnyOf*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__CHECKCONDITION_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_2(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimConditionNoneOf* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimConditionNoneOf*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__CHECKCONDITION_2_OFFSET))(this, a1, a2);
	}

	::System::Boolean _CheckCondition_3(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimPlayerSkillArrowCondition*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__CHECKCONDITION_3_OFFSET))(this, a1, a2);
	}

	::System::Void _DoAction_89(::Class_2_9DD8A46984F1AFFD* a1, ::RPG::GameCore::FiveDimMutePlayerInputAction* a2, ::Struct_2_300255A4917C4300 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::RPG::GameCore::FiveDimMutePlayerInputAction*, ::Struct_2_300255A4917C4300))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746__DOACTION_89_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::TaskContext* get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746_GET__TASKCONTEXT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__LogError(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746___IFIXBASEPROXY__LOGERROR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__DoAction(::RPG::GameCore::FiveDimCameraShakeAction* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746___IFIXBASEPROXY__DOACTION_OFFSET))(this, P0);
	}

	::RPG::GameCore::TaskContext* __iFixBaseProxy_get__TaskContext()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72CCF66056B00746___IFIXBASEPROXY_GET__TASKCONTEXT_OFFSET))(this);
	}
};
