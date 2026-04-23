#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/VisionZoneTag.h"
#include "unitysdk/System/Object.h"

class Class_1_065C3F7CC6C5F3AA;
class Class_2_4AD6CFDC15993F44;
class Class_2_A48F3719AA1CF200_7;
class Class_2_A48F3719AA1CF200_8;
class Class_2_D5F03C2010D71B1B;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TrackNpcZoneConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET UNITYSDK_OFFSET(0x9F9ACF0)
#define RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET UNITYSDK_OFFSET(0x9F98DA0)
#define RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET UNITYSDK_OFFSET(0x9F98170)
#define RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET UNITYSDK_OFFSET(0x9F9A5B0)
#define RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F98120)
#define RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET UNITYSDK_OFFSET(0x9F9A560)
#define RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET UNITYSDK_OFFSET(0x9F9AD60)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET UNITYSDK_OFFSET(0x9F9AE10)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET UNITYSDK_OFFSET(0x9F9AEB0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x9F9AE30)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET UNITYSDK_OFFSET(0x9F9ADB0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET UNITYSDK_OFFSET(0x9F9AFC0)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0x9F9AE90)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET UNITYSDK_OFFSET(0x9F9AF70)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET UNITYSDK_OFFSET(0x9F9AE50)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET UNITYSDK_OFFSET(0x9F9AE00)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET UNITYSDK_OFFSET(0x9F9AE40)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET UNITYSDK_OFFSET(0x9F9AE80)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET UNITYSDK_OFFSET(0x9F9AE70)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET UNITYSDK_OFFSET(0x9F9AE60)
#define RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET UNITYSDK_OFFSET(0x9F9AE20)
#define RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET UNITYSDK_OFFSET(0x9F97BC0)
#define RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0x9F99E70)
#define RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET UNITYSDK_OFFSET(0x9F9A260)
#define RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET UNITYSDK_OFFSET(0x9F99FF0)
#define RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET UNITYSDK_OFFSET(0x9F9A9C0)
#define RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET UNITYSDK_OFFSET(0x9F9A600)
#define RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET UNITYSDK_OFFSET(0x9F9AEA0)
#define RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET UNITYSDK_OFFSET(0x9F98370)
#define RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F9B010)
#define RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET UNITYSDK_OFFSET(0x9F9ACA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcModule_TypeDefinitionIndex = 49333;

	class TrackNpcModule : public ::System::Object
	{
	public:
		// static const ::System::String* GameKeyHide; // 0x0
		// static const ::System::String* GameKeyAlert; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_4AD6CFDC15993F44*>* _Visions; // 0x10
		::Class_2_A48F3719AA1CF200_8* _TrackValueMod; // 0x18
		::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* _ZoneConfigs; // 0x20
		::Class_1_065C3F7CC6C5F3AA* _LastDetectionSingleResult; // 0x28
		::Class_2_A48F3719AA1CF200_7* _PerceiveValueMod; // 0x30
		::Class_2_4AD6CFDC15993F44* _LastDetectVision; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _AlertData; // 0x40
		::Il2CppArray<::System::String*>* _CheckVisionPoints; // 0x48
		::Class_2_D5F03C2010D71B1B* _AlertValueMod; // 0x50
		::RPG::GameCore::GameEntity* _Target; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _HideData; // 0x60
		::System::Single _AlertProtectDuration; // 0x68
		::System::Boolean _PlayerMoving; // 0x6C
		::System::Boolean _PlayerHide; // 0x6D
		::System::Boolean _SeePlayer; // 0x6E
		::System::Int32 _StartTime; // 0x70
		::RPG::GameCore::CharacterMotionFlag _PlayerMotion; // 0x74
		::System::Single _PerceiveTrigger; // 0x78
		::System::Single _AlertProtectTimer; // 0x7C
		::System::Boolean _NpcInCamera; // 0x80
		::System::Boolean _Enable; // 0x81
		::RPG::GameCore::CharacterMotionFlag _LastMoveMotion; // 0x84
		::System::Single _LostTargetTime_k__BackingField; // 0x88
		::System::UInt32 ControllerGroupId; // 0x8C
		::System::Single _CheckVisionRadius; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__CTOR_OFFSET))(this);
		}

		::System::Void InitParams(::RPG::GameCore::GameEntity* target, ::System::Single maxPerceiveValue, ::System::Single maxAlertValue, ::System::Single maxTrackValue, ::Il2CppArray<::System::String*>* visions, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>* zoneConfigs, ::Il2CppArray<::System::String*>* checkPoints, ::System::Single checkRadius, ::System::Single alertProtectTime, ::System::Single lostTargetTime)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::RPG::GameCore::TrackNpcZoneConfig*>*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_INITPARAMS_OFFSET))(this, target, maxPerceiveValue, maxAlertValue, maxTrackValue, visions, zoneConfigs, checkPoints, checkRadius, alertProtectTime, lostTargetTime);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Detect(::RPG::GameCore::GameEntity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DETECT_OFFSET))(this, target);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONSTART_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ONRESET_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_DISABLE_OFFSET))(this);
		}

		::System::Void SetPlayerHide(::System::Boolean flag, ::RPG::GameCore::GameEntity* relateProp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SETPLAYERHIDE_OFFSET))(this, flag, relateProp);
		}

		::System::Void ReportAlertData(::System::Boolean alertReachMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_REPORTALERTDATA_OFFSET))(this, alertReachMax);
		}

		::System::Void _OnPerceiveValueReachMax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE__ONPERCEIVEVALUEREACHMAX_OFFSET))(this);
		}

		::System::Void AddPerceiveTrigger(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_ADDPERCEIVETRIGGER_OFFSET))(this, value);
		}

		static ::System::Boolean CheckEntityOnScreen(::RPG::GameCore::GameEntity* target, ::Il2CppArray<::System::String*>* attachPoints, ::System::Single unitRadius)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_CHECKENTITYONSCREEN_OFFSET))(target, attachPoints, unitRadius);
		}

		::RPG::GameCore::VisionZoneTag GetDetectVisionZoneTag()
		{
			return ((::RPG::GameCore::VisionZoneTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GETDETECTVISIONZONETAG_OFFSET))(this);
		}

		::System::Boolean get_IsLosingTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISLOSINGTARGET_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_7* get_PerceiveValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PERCEIVEVALUEMOD_OFFSET))(this);
		}

		::Class_2_D5F03C2010D71B1B* get_AlertValueMod()
		{
			return ((::Class_2_D5F03C2010D71B1B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ALERTVALUEMOD_OFFSET))(this);
		}

		::Class_2_A48F3719AA1CF200_8* get_TrackValueMod()
		{
			return ((::Class_2_A48F3719AA1CF200_8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_TRACKVALUEMOD_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_PlayerHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERHIDE_OFFSET))(this);
		}

		::System::Boolean get_NpcInCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_NPCINCAMERA_OFFSET))(this);
		}

		::System::Boolean get_SeePlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_SEEPLAYER_OFFSET))(this);
		}

		::System::Boolean get_PlayerMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOVING_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag get_PlayerMotion()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_PLAYERMOTION_OFFSET))(this);
		}

		::System::Single get_LostTargetTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_LOSTTARGETTIME_OFFSET))(this);
		}

		::System::Void set_LostTargetTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_SET_LOSTTARGETTIME_OFFSET))(this, value);
		}

		::System::Single get_CurrentAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_CURRENTALERTVALUE_OFFSET))(this);
		}

		::System::Single get_MaxAlertValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_MAXALERTVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPerceived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNPCMODULE_GET_ISPERCEIVED_OFFSET))(this);
		}
	};
}
