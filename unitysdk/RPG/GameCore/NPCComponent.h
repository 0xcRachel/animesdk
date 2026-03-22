#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AlertMode.h"
#include "unitysdk/RPG/GameCore/ForbidAdvCableReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/PauseAlertValueDecreaseReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_17122106D616A42B;
class Class_1_8444A7CEAF30C901;
class Class_2_469A56953483CA0D;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class AdventureCharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_NPCCOMPONENT_APPLYMODELPRESET_OFFSET UNITYSDK_OFFSET(0xA4C48E0)
#define RPG_GAMECORE_NPCCOMPONENT_CHANGEALERTVALUETOMAX_OFFSET UNITYSDK_OFFSET(0xA4C89D0)
#define RPG_GAMECORE_NPCCOMPONENT_DISABLEBYERAFLIP_OFFSET UNITYSDK_OFFSET(0xA4C5D60)
#define RPG_GAMECORE_NPCCOMPONENT_DISABLE_OFFSET UNITYSDK_OFFSET(0xA4C5CE0)
#define RPG_GAMECORE_NPCCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4C57B0)
#define RPG_GAMECORE_NPCCOMPONENT_ENABLEBYERAFLIP_OFFSET UNITYSDK_OFFSET(0xA4C5F10)
#define RPG_GAMECORE_NPCCOMPONENT_ENABLE_OFFSET UNITYSDK_OFFSET(0xA4C5C90)
#define RPG_GAMECORE_NPCCOMPONENT_ENTERPHANTOMFROZENSTATE_OFFSET UNITYSDK_OFFSET(0xA4C3970)
#define RPG_GAMECORE_NPCCOMPONENT_EXITPHANTOMFROZENSTATE_OFFSET UNITYSDK_OFFSET(0xA4C4410)
#define RPG_GAMECORE_NPCCOMPONENT_FEATURECHANGEALERTVALUECLAMP_OFFSET UNITYSDK_OFFSET(0xA4C76D0)
#define RPG_GAMECORE_NPCCOMPONENT_GETAIPATH_OFFSET UNITYSDK_OFFSET(0xA4C84E0)
#define RPG_GAMECORE_NPCCOMPONENT_GETENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA4C8980)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCID_OFFSET UNITYSDK_OFFSET(0xA4C7D40)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0xA4C6AB0)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERWARNINGPERCENTFLOAT_OFFSET UNITYSDK_OFFSET(0xA4C86A0)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCNAME_OFFSET UNITYSDK_OFFSET(0xA4C7DB0)
#define RPG_GAMECORE_NPCCOMPONENT_GETNPCTITLE_OFFSET UNITYSDK_OFFSET(0xA4C8150)
#define RPG_GAMECORE_NPCCOMPONENT_GETSTAGEID_OFFSET UNITYSDK_OFFSET(0xA4C7900)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTSYSTEMENABLE_OFFSET UNITYSDK_OFFSET(0xA4C93A0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTUISHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA4C95D0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xA4C96B0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINESPEED_OFFSET UNITYSDK_OFFSET(0xA4C95F0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C9450)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMINLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C9510)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C92A0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMINLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C91E0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUENORMALIZE_OFFSET UNITYSDK_OFFSET(0xA4C9770)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUE_OFFSET UNITYSDK_OFFSET(0xA4C9190)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ALERT_OFFSET UNITYSDK_OFFSET(0xA4C9180)
#define RPG_GAMECORE_NPCCOMPONENT_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0xA4C9160)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ATTACKCDTIMER_OFFSET UNITYSDK_OFFSET(0xA4C9880)
#define RPG_GAMECORE_NPCCOMPONENT_GET_FORBIDADVCABLE_OFFSET UNITYSDK_OFFSET(0xA4C8DC0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0xA4C9950)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ISDANGERMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C98C0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_ISMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C9860)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMAXTIME_OFFSET UNITYSDK_OFFSET(0xA4CA740)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMINTIME_OFFSET UNITYSDK_OFFSET(0xA4CA760)
#define RPG_GAMECORE_NPCCOMPONENT_GET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET UNITYSDK_OFFSET(0xA4CA720)
#define RPG_GAMECORE_NPCCOMPONENT_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xA4C9820)
#define RPG_GAMECORE_NPCCOMPONENT_GET_NPCCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA4C8D80)
#define RPG_GAMECORE_NPCCOMPONENT_GET_NPCMONSTERCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA4C8DA0)
#define RPG_GAMECORE_NPCCOMPONENT_GET_SKIPEVENTID_OFFSET UNITYSDK_OFFSET(0xA4C6A20)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA4C9840)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STATICNPC_OFFSET UNITYSDK_OFFSET(0xA4C6260)
#define RPG_GAMECORE_NPCCOMPONENT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA4C9040)
#define RPG_GAMECORE_NPCCOMPONENT_GET_USEMAZESKILLTIMER_OFFSET UNITYSDK_OFFSET(0xA4C98A0)
#define RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C63D0)
#define RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFNPC_OFFSET UNITYSDK_OFFSET(0xA4C62F0)
#define RPG_GAMECORE_NPCCOMPONENT_INITPHANTOMSTATUS_OFFSET UNITYSDK_OFFSET(0xA4C3780)
#define RPG_GAMECORE_NPCCOMPONENT_INTERNALINITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA4C6070)
#define RPG_GAMECORE_NPCCOMPONENT_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0xA4C9100)
#define RPG_GAMECORE_NPCCOMPONENT_ISPHANTOMFROZEN_OFFSET UNITYSDK_OFFSET(0xA4C45D0)
#define RPG_GAMECORE_NPCCOMPONENT_ONBEHIT_OFFSET UNITYSDK_OFFSET(0xA4C8AB0)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA4C72F0)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA4C7730)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0xA4C6DF0)
#define RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA4C7260)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDFOLLOWPLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xA4C8E40)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDGOBACKPOSITION_OFFSET UNITYSDK_OFFSET(0xA4C8DD0)
#define RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0xA4C8EC0)
#define RPG_GAMECORE_NPCCOMPONENT_PAUSEALERTVALUEDECREASE_OFFSET UNITYSDK_OFFSET(0xA4C8A20)
#define RPG_GAMECORE_NPCCOMPONENT_PREINITCOMPONENTOFMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C6370)
#define RPG_GAMECORE_NPCCOMPONENT_RESETALERTMODE_OFFSET UNITYSDK_OFFSET(0xA4CA330)
#define RPG_GAMECORE_NPCCOMPONENT_RESETALERTVALUEDECLINEPROTECTTIMER_OFFSET UNITYSDK_OFFSET(0xA4CA6D0)
#define RPG_GAMECORE_NPCCOMPONENT_RESETENTITYPOSITION_OFFSET UNITYSDK_OFFSET(0xA4C3BD0)
#define RPG_GAMECORE_NPCCOMPONENT_RESETMONSTERTOPOS_OFFSET UNITYSDK_OFFSET(0xA4C5010)
#define RPG_GAMECORE_NPCCOMPONENT_RESETPHANTOMANIMATION_OFFSET UNITYSDK_OFFSET(0xA4C3FD0)
#define RPG_GAMECORE_NPCCOMPONENT_RESETSTATEONAIDISABLE_OFFSET UNITYSDK_OFFSET(0xA4C98D0)
#define RPG_GAMECORE_NPCCOMPONENT_RESTOREMONSTERSTATES_OFFSET UNITYSDK_OFFSET(0xA4CA500)
#define RPG_GAMECORE_NPCCOMPONENT_SETALERTMODE_OFFSET UNITYSDK_OFFSET(0xA4CA2E0)
#define RPG_GAMECORE_NPCCOMPONENT_SETFORBIDADVENTURECABLE_OFFSET UNITYSDK_OFFSET(0xA4C8D20)
#define RPG_GAMECORE_NPCCOMPONENT_SETMONSTERMINIMAPICONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA4C41C0)
#define RPG_GAMECORE_NPCCOMPONENT_SETSTAGEID_OFFSET UNITYSDK_OFFSET(0xA4C7CF0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTSYSTEMENABLE_OFFSET UNITYSDK_OFFSET(0xA4C93F0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTUISHOWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA4C95E0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xA4C9700)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINESPEED_OFFSET UNITYSDK_OFFSET(0xA4C9640)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C94A0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMINLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C9560)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMAXLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C9330)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMINLIMIT_OFFSET UNITYSDK_OFFSET(0xA4C9230)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVSIONSHOWINMINIMAPSTATE_OFFSET UNITYSDK_OFFSET(0xA4C99F0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_AREANAME_OFFSET UNITYSDK_OFFSET(0xA4C9170)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ATTACKCDTIMER_OFFSET UNITYSDK_OFFSET(0xA4C9890)
#define RPG_GAMECORE_NPCCOMPONENT_SET_ISMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C9870)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMAXTIME_OFFSET UNITYSDK_OFFSET(0xA4CA750)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMINTIME_OFFSET UNITYSDK_OFFSET(0xA4CA770)
#define RPG_GAMECORE_NPCCOMPONENT_SET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET UNITYSDK_OFFSET(0xA4CA730)
#define RPG_GAMECORE_NPCCOMPONENT_SET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0xA4C9830)
#define RPG_GAMECORE_NPCCOMPONENT_SET_NPCCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA4C8D90)
#define RPG_GAMECORE_NPCCOMPONENT_SET_NPCMONSTERCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA4C8DB0)
#define RPG_GAMECORE_NPCCOMPONENT_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA4C9850)
#define RPG_GAMECORE_NPCCOMPONENT_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xA4C9050)
#define RPG_GAMECORE_NPCCOMPONENT_SET_USEMAZESKILLTIMER_OFFSET UNITYSDK_OFFSET(0xA4C98B0)
#define RPG_GAMECORE_NPCCOMPONENT_TICKALERTVALUE_OFFSET UNITYSDK_OFFSET(0xA4CA380)
#define RPG_GAMECORE_NPCCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xA4C7770)
#define RPG_GAMECORE_NPCCOMPONENT__BEGINFADEIN_OFFSET UNITYSDK_OFFSET(0xA4C7510)
#define RPG_GAMECORE_NPCCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4CA780)
#define RPG_GAMECORE_NPCCOMPONENT__CLAMPALERTVALUE_OFFSET UNITYSDK_OFFSET(0xA4C9CF0)
#define RPG_GAMECORE_NPCCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C5720)
#define RPG_GAMECORE_NPCCOMPONENT__DISPOSEMONSTERRESETCOROUTINE_OFFSET UNITYSDK_OFFSET(0xA4C56D0)
#define RPG_GAMECORE_NPCCOMPONENT__GETENTITYALERTINCCOEFF_OFFSET UNITYSDK_OFFSET(0xA4CA100)
#define RPG_GAMECORE_NPCCOMPONENT__INITFADEHIDDEN_OFFSET UNITYSDK_OFFSET(0xA4C7460)
#define RPG_GAMECORE_NPCCOMPONENT__ONPAMCURRENTSKINCHANGE_OFFSET UNITYSDK_OFFSET(0xA4C4720)
#define RPG_GAMECORE_NPCCOMPONENT__ONSWITCHCURRENTTEAM_OFFSET UNITYSDK_OFFSET(0xA4C6CA0)
#define RPG_GAMECORE_NPCCOMPONENT__REGISTERSKINNOTIFIES_OFFSET UNITYSDK_OFFSET(0xA4C4610)
#define RPG_GAMECORE_NPCCOMPONENT__RESETMONSTERSTEP2_OFFSET UNITYSDK_OFFSET(0xA4C5410)
#define RPG_GAMECORE_NPCCOMPONENT__SETUPCOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0xA4C6F40)
#define RPG_GAMECORE_NPCCOMPONENT__TICKRESETMONSTER_OFFSET UNITYSDK_OFFSET(0xA4C5390)
#define RPG_GAMECORE_NPCCOMPONENT__TRYREDUCEALERTVALUE_OFFSET UNITYSDK_OFFSET(0xA4C9F80)
#define RPG_GAMECORE_NPCCOMPONENT__UNREGISTERSKINNOTIFIES_OFFSET UNITYSDK_OFFSET(0xA4C46B0)
#define RPG_GAMECORE_NPCCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA4CA7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCComponent_TypeDefinitionIndex = 44916;

	class NPCComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		static ::System::Single* StaticGet_HIT_BOX_UPDATE_INTERVAL()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCComponent_TypeDefinitionIndex)->GetStaticField(0xFD10);
		}
		static ::System::Single* StaticGet__MONSTER_WARNING_TICK_CD()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCComponent_TypeDefinitionIndex)->GetStaticField(0xFD14);
		}
		// static const ::System::String* _EffectScaleAttachPointName; // 0x0
		::RPG::GameCore::NPCMonsterDataRow* _NPCMonsterConfigRef_k__BackingField; // 0x18
		::RPG::GameCore::AdventureAbilityComponent* _AbilityCmpt; // 0x20
		::Class_2_469A56953483CA0D* _NPCMemoryCmpt; // 0x28
		::RPG::Client::MapNpcDef* _MapNpcDef_k__BackingField; // 0x30
		::RPG::GameCore::AdventureCharacterDataComponent* _AdvCharDataCmpt; // 0x38
		::RPG::GameCore::AdventureCharacterController* _AdvCharCtrlCmpt; // 0x40
		::System::String* _AreaName_k__BackingField; // 0x48
		::System::Action* _ResetMonsterFinishCallback; // 0x50
		::Class_1_17122106D616A42B* _AlertMod; // 0x58
		::RPG::GameCore::NPCDataRow* _NPCConfigRef_k__BackingField; // 0x60
		::System::Single _ResetMonsterStep2Timer; // 0x68
		::System::UInt32 _StageID_k__BackingField; // 0x6C
		::System::UInt32 _ForbidAdvCableCount; // 0x70
		::System::Single _CurrentTeamCombatPower; // 0x74
		::System::Boolean _AlertVsionShowInMinimapState; // 0x78
		::System::Boolean _IsMonster_k__BackingField; // 0x79
		::System::Boolean _PhantomFrozenState; // 0x7A
		::System::Single _LastTriggerTrackedSearchTime; // 0x7C
		::System::Single _MonsterWarningTickCD; // 0x80
		::System::Single _UseMazeSkillTimer_k__BackingField; // 0x84
		::UnityEngine::Quaternion _ResetMonsterRot; // 0x88
		::System::Single _AlertUIShowDistance; // 0x98
		::RPG::GameCore::NPCStatus _Status; // 0x9C
		::UnityEngine::Vector3 _ResetMonsterPos; // 0xA0
		::System::Nullable_1<::System::UInt32> CustomWorldLevel; // 0xAC
		::System::UInt64 _LastGuardMaxTime_k__BackingField; // 0xB8
		::System::Single _AlertValueDeclineProtectTimer; // 0xC0
		::System::Single _AttackCDTimer_k__BackingField; // 0xC4
		::System::UInt32 _AlertVsionNotShowIconID; // 0xC8
		::System::Single _AlertnessIncreaseRatio; // 0xCC
		::System::Boolean HideAlertUI; // 0xD0
		::System::Boolean _NeedTickDangerMonsterWarning; // 0xD1
		::System::Boolean HasBeenFrozen; // 0xD2
		::System::Boolean _Enable; // 0xD3
		::System::Single _MonsterCombatPower; // 0xD4
		::System::UInt64 _LastGuardMinTime_k__BackingField; // 0xD8
		::RPG::GameCore::AlertMode _AlertMode; // 0xE0
		::System::Single _HitBoxUpdateTimer; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void InitPhantomStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITPHANTOMSTATUS_OFFSET))(this);
		}

		::System::Void ResetPhantomAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETPHANTOMANIMATION_OFFSET))(this);
		}

		::System::Void ResetEntityPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETENTITYPOSITION_OFFSET))(this);
		}

		::System::Void EnterPhantomFrozenState(::System::Boolean affectCollider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENTERPHANTOMFROZENSTATE_OFFSET))(this, affectCollider);
		}

		::System::Void ExitPhantomFrozenState(::System::Boolean affectCollider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_EXITPHANTOMFROZENSTATE_OFFSET))(this, affectCollider);
		}

		::System::Boolean IsPhantomFrozen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ISPHANTOMFROZEN_OFFSET))(this);
		}

		::System::Void _RegisterSkinNotifies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__REGISTERSKINNOTIFIES_OFFSET))(this);
		}

		::System::Void _UnregisterSkinNotifies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__UNREGISTERSKINNOTIFIES_OFFSET))(this);
		}

		::System::Void _OnPamCurrentSkinChange(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__ONPAMCURRENTSKINCHANGE_OFFSET))(this, arg);
		}

		::System::Void ApplyModelPreset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_APPLYMODELPRESET_OFFSET))(this);
		}

		::System::Void ResetMonsterToPos(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETMONSTERTOPOS_OFFSET))(this, position, rotation, callback);
		}

		::System::Void _TickResetMonster(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__TICKRESETMONSTER_OFFSET))(this, deltaTime);
		}

		::System::Void _ResetMonsterStep2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__RESETMONSTERSTEP2_OFFSET))(this);
		}

		::System::Void _DisposeMonsterResetCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__DISPOSEMONSTERRESETCOROUTINE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISABLE_OFFSET))(this);
		}

		::System::Void DisableByEraFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_DISABLEBYERAFLIP_OFFSET))(this);
		}

		::System::Void EnableByEraFlip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ENABLEBYERAFLIP_OFFSET))(this);
		}

		::System::Void InternalInitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INTERNALINITCOMPONENT_OFFSET))(this);
		}

		::System::Void InitComponentOfNPC(::RPG::GameCore::NPCDataRow* npcRow, ::RPG::Client::MapNpcDef* mapDef, ::RPG::GameCore::AdventureCharacterController* pCharacterAnimController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*, ::RPG::Client::MapNpcDef*, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFNPC_OFFSET))(this, npcRow, mapDef, pCharacterAnimController);
		}

		::System::Void PreInitComponentOfMonster(::RPG::GameCore::NPCMonsterDataRow* npcMonsterRow, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_PREINITCOMPONENTOFMONSTER_OFFSET))(this, npcMonsterRow, npcDef);
		}

		::System::Void InitComponentOfMonster(::RPG::GameCore::NPCMonsterDataRow* npcMonsterRow, ::RPG::Client::MapNpcDef* npcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_INITCOMPONENTOFMONSTER_OFFSET))(this, npcMonsterRow, npcDef);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void _SetupColliderTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__SETUPCOLLIDERTRIGGER_OFFSET))(this);
		}

		::System::Void _InitFadeHidden()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__INITFADEHIDDEN_OFFSET))(this);
		}

		::System::Void _BeginFadein()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__BEGINFADEIN_OFFSET))(this);
		}

		::System::Void FeatureChangeAlertValueClamp(::RPG::GameCore::AdventureBehaviorClampAlertLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureBehaviorClampAlertLevel))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_FEATURECHANGEALERTVALUECLAMP_OFFSET))(this, level);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::UInt32 GetStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETSTAGEID_OFFSET))(this);
		}

		::System::Void SetStageID(::System::UInt32 stageID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETSTAGEID_OFFSET))(this, stageID);
		}

		::System::UInt32 GetNPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCID_OFFSET))(this);
		}

		::RPG::Client::TextID GetNPCName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCNAME_OFFSET))(this);
		}

		::RPG::Client::TextID GetNPCTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCTITLE_OFFSET))(this);
		}

		::System::String* GetAIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETAIPATH_OFFSET))(this);
		}

		::System::Single GetNPCMonsterWarningPercentFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERWARNINGPERCENTFLOAT_OFFSET))(this);
		}

		::System::Single GetNPCMonsterCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETNPCMONSTERCOMBATPOWER_OFFSET))(this);
		}

		::System::UInt32 GetEntityRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GETENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Void ChangeAlertValueToMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_CHANGEALERTVALUETOMAX_OFFSET))(this);
		}

		::System::Void PauseAlertValueDecrease(::System::Boolean pause, ::RPG::GameCore::PauseAlertValueDecreaseReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::PauseAlertValueDecreaseReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_PAUSEALERTVALUEDECREASE_OFFSET))(this, pause, reason);
		}

		::System::Void OnBeHit(::RPG::GameCore::GameEntity* attacker)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONBEHIT_OFFSET))(this, attacker);
		}

		::System::Void SetForbidAdventureCable(::System::Boolean forbid, ::RPG::GameCore::ForbidAdvCableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::ForbidAdvCableReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETFORBIDADVENTURECABLE_OFFSET))(this, forbid, reason);
		}

		::RPG::GameCore::NPCDataRow* get_NPCConfigRef()
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_NPCCONFIGREF_OFFSET))(this);
		}

		::System::Void set_NPCConfigRef(::RPG::GameCore::NPCDataRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_NPCCONFIGREF_OFFSET))(this, value);
		}

		::RPG::GameCore::NPCMonsterDataRow* get_NPCMonsterConfigRef()
		{
			return ((::RPG::GameCore::NPCMonsterDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_NPCMONSTERCONFIGREF_OFFSET))(this);
		}

		::System::Void set_NPCMonsterConfigRef(::RPG::GameCore::NPCMonsterDataRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_NPCMONSTERCONFIGREF_OFFSET))(this, value);
		}

		::System::Boolean get_ForbidAdvCable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_FORBIDADVCABLE_OFFSET))(this);
		}

		::System::Void OnNpcStatusChangeRecordGobackPosition(::RPG::GameCore::NPCStatus before, ::RPG::GameCore::NPCStatus after)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDGOBACKPOSITION_OFFSET))(this, before, after);
		}

		::System::Void OnNpcStatusChangeRecordFollowPlayerState(::RPG::GameCore::NPCStatus before, ::RPG::GameCore::NPCStatus after)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGERECORDFOLLOWPLAYERSTATE_OFFSET))(this, before, after);
		}

		::System::Void OnNpcStatusChange(::RPG::GameCore::NPCStatus before, ::RPG::GameCore::NPCStatus after)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ONNPCSTATUSCHANGE_OFFSET))(this, before, after);
		}

		::RPG::GameCore::NPCStatus get_Status()
		{
			return ((::RPG::GameCore::NPCStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::GameCore::NPCStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCStatus))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean IsPerceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_ISPERCEIVED_OFFSET))(this);
		}

		::System::String* get_AreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_AREANAME_OFFSET))(this);
		}

		::System::Void set_AreaName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_AREANAME_OFFSET))(this, value);
		}

		::Class_1_17122106D616A42B* get_Alert()
		{
			return ((::Class_1_17122106D616A42B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERT_OFFSET))(this);
		}

		::System::Single get_AlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUE_OFFSET))(this);
		}

		::System::Single get_AlertValueMinLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMINLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueMinLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMINLIMIT_OFFSET))(this, value);
		}

		::System::Single get_AlertValueMaxLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEMAXLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueMaxLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEMAXLIMIT_OFFSET))(this, value);
		}

		::System::Boolean get_AlertSystemEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTSYSTEMENABLE_OFFSET))(this);
		}

		::System::Void set_AlertSystemEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTSYSTEMENABLE_OFFSET))(this, value);
		}

		::System::Single get_AlertValueGuardMaxLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMAXLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueGuardMaxLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMAXLIMIT_OFFSET))(this, value);
		}

		::System::Single get_AlertValueGuardMinLimit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEGUARDMINLIMIT_OFFSET))(this);
		}

		::System::Void set_AlertValueGuardMinLimit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEGUARDMINLIMIT_OFFSET))(this, value);
		}

		::System::Single get_AlertUIShowDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTUISHOWDISTANCE_OFFSET))(this);
		}

		::System::Void set_AlertUIShowDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTUISHOWDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_AlertValueDeclineSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINESPEED_OFFSET))(this);
		}

		::System::Void set_AlertValueDeclineSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINESPEED_OFFSET))(this, value);
		}

		::System::Single get_AlertValueDeclineProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUEDECLINEPROTECTTIME_OFFSET))(this);
		}

		::System::Void set_AlertValueDeclineProtectTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVALUEDECLINEPROTECTTIME_OFFSET))(this, value);
		}

		::System::Single get_AlertValueNormalize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ALERTVALUENORMALIZE_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Void set_MapNpcDef(::RPG::Client::MapNpcDef* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_MAPNPCDEF_OFFSET))(this, value);
		}

		::System::Boolean get_SkipEventID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_SKIPEVENTID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_STAGEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ISMONSTER_OFFSET))(this);
		}

		::System::Void set_IsMonster(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ISMONSTER_OFFSET))(this, value);
		}

		::System::Single get_AttackCDTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ATTACKCDTIMER_OFFSET))(this);
		}

		::System::Void set_AttackCDTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ATTACKCDTIMER_OFFSET))(this, value);
		}

		::System::Single get_UseMazeSkillTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_USEMAZESKILLTIMER_OFFSET))(this);
		}

		::System::Void set_UseMazeSkillTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_USEMAZESKILLTIMER_OFFSET))(this, value);
		}

		::System::Boolean get_StaticNPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_STATICNPC_OFFSET))(this);
		}

		::System::Boolean get_IsDangerMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_ISDANGERMONSTER_OFFSET))(this);
		}

		::System::Void ResetStateOnAIDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETSTATEONAIDISABLE_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_InteractIconType()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_INTERACTICONTYPE_OFFSET))(this);
		}

		::System::Void set_AlertVsionShowInMinimapState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_ALERTVSIONSHOWINMINIMAPSTATE_OFFSET))(this, value);
		}

		::System::Single _ClampAlertValue(::System::Single origin)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__CLAMPALERTVALUE_OFFSET))(this, origin);
		}

		::System::Void _TryReduceAlertValue(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__TRYREDUCEALERTVALUE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnSwitchCurrentTeam(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__ONSWITCHCURRENTTEAM_OFFSET))(this, param);
		}

		::System::Single _GetEntityAlertIncCoeff(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT__GETENTITYALERTINCCOEFF_OFFSET))(this, target);
		}

		::System::Void SetAlertMode(::RPG::GameCore::AlertMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AlertMode))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETALERTMODE_OFFSET))(this, mode);
		}

		::System::Void ResetAlertMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETALERTMODE_OFFSET))(this);
		}

		::System::Void TickAlertValue(::System::Single fElapsedTimeInSec, ::RPG::GameCore::GameEntity* target, ::Class_1_8444A7CEAF30C901* detail)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::GameEntity*, ::Class_1_8444A7CEAF30C901*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_TICKALERTVALUE_OFFSET))(this, fElapsedTimeInSec, target, detail);
		}

		::System::Void SetMonsterMinimapIconVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SETMONSTERMINIMAPICONVISIBLE_OFFSET))(this, visible);
		}

		::System::Void RestoreMonsterStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESTOREMONSTERSTATES_OFFSET))(this);
		}

		::System::Void ResetAlertValueDeclineProtectTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_RESETALERTVALUEDECLINEPROTECTTIMER_OFFSET))(this);
		}

		::System::Single get_LastTriggerTrackedSearchTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET))(this);
		}

		::System::Void set_LastTriggerTrackedSearchTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTTRIGGERTRACKEDSEARCHTIME_OFFSET))(this, value);
		}

		::System::UInt64 get_LastGuardMaxTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMAXTIME_OFFSET))(this);
		}

		::System::Void set_LastGuardMaxTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMAXTIME_OFFSET))(this, value);
		}

		::System::UInt64 get_LastGuardMinTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_GET_LASTGUARDMINTIME_OFFSET))(this);
		}

		::System::Void set_LastGuardMinTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT_SET_LASTGUARDMINTIME_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
