#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47C4886CB6C61234.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_65282CEDEA364C3F;
namespace RPG::Client::Prop { class IsometricViewPuzzleItem; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }

#define RPG_CLIENT_ISOMETRICVIEWMODULE_ADDCONNECTORS_OFFSET UNITYSDK_OFFSET(0x133A0700)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENABLETELEPORT_OFFSET UNITYSDK_OFFSET(0x133A0C60)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENDMODULE_OFFSET UNITYSDK_OFFSET(0x1339E190)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ENDZOOMFOLLOW_OFFSET UNITYSDK_OFFSET(0x133A15A0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x133A2470)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x133A2460)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x133A2480)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1339E060)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x1339E0F0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEMOVEPLATFORM_OFFSET UNITYSDK_OFFSET(0x133A1F60)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEROTATEPLATFORM_OFFSET UNITYSDK_OFFSET(0x133A1FB0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTENDMODULE_OFFSET UNITYSDK_OFFSET(0x133A1700)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTSTARTMODULE_OFFSET UNITYSDK_OFFSET(0x133A1C50)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTMODULE_OFFSET UNITYSDK_OFFSET(0x133A0CB0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTSWIPECAMERA_OFFSET UNITYSDK_OFFSET(0x133A2000)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STARTZOOMFOLLOW_OFFSET UNITYSDK_OFFSET(0x133A23C0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_STOPSWIPECAMERA_OFFSET UNITYSDK_OFFSET(0x133A2180)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_SWITCHISOMETRICVIEW_OFFSET UNITYSDK_OFFSET(0x133A2200)
#define RPG_CLIENT_ISOMETRICVIEWMODULE_TICK_OFFSET UNITYSDK_OFFSET(0x1339EA00)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__ADDSHADOW_OFFSET UNITYSDK_OFFSET(0x133A00D0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x133A25C0)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x133A2490)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x133A2410)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__REMOVESHADOW_OFFSET UNITYSDK_OFFSET(0x133A0060)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATEFOLLOWANCHOR_OFFSET UNITYSDK_OFFSET(0x133A0270)
#define RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATESHADOWPOSITION_OFFSET UNITYSDK_OFFSET(0x133A0200)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0x133A2610)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x133A2670)
#define RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x133A26D0)

namespace RPG::Client
{
	inline static constexpr unsigned int IsometricViewModule_TypeDefinitionIndex = 55486;

	class IsometricViewModule : public ::Class_1_47C4886CB6C61234
	{
	public:
		static ::System::String** StaticGet_GAME_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(IsometricViewModule_TypeDefinitionIndex)->GetStaticField(0x3C6F0);
		}
		static ::System::Single* StaticGet_FloatEpsilon()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(IsometricViewModule_TypeDefinitionIndex)->GetStaticField(0xBCF0);
		}
		::RPG::GameCore::GameEntity* _Player; // 0x20
		::RPG::GameCore::AnchorInfo* _FollowAnchor; // 0x28
		::Class_1_65282CEDEA364C3F* _SwipeCamera; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::BoxCollider*, ::RPG::Client::Prop::IsometricViewPuzzleItem*>* _Colliders; // 0x38
		::RPG::GameCore::AnchorInfo* _SwipeAnchor; // 0x40
		::RPG::GameCore::GameEntity* _OwnerProp; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::Prop::IsometricViewPuzzleItem*>* _Items; // 0x50
		::RPG::GameCore::AnchorInfo* _OriginAnchor; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _ExtraData; // 0x60
		::System::Single _ObserveTime; // 0x68
		::System::Single _ZoomOffsetRight; // 0x6C
		::System::Single _ZoomOffsetLeft; // 0x70
		::System::Boolean RecordClusterLighting; // 0x74
		::System::Boolean _IsActive; // 0x75
		::System::Single _ZoomOffsetDown; // 0x78
		::System::Int32 _CasterID; // 0x7C
		::System::UInt32 _ObserveCounter; // 0x80
		::System::Single _MaxCameraSize; // 0x84
		::System::Int32 _LastReportEnd; // 0x88
		::System::UInt32 _MoveCount; // 0x8C
		::System::Int32 _PositionID; // 0x90
		::System::Int32 _StartTime; // 0x94
		::System::UInt32 _RotateCount; // 0x98
		::System::Single _MaxBorderX; // 0x9C
		::System::Single _ZoomOffsetUp; // 0xA0
		::System::Single _MaxBorderY; // 0xA4
		::System::Boolean _ZoomFollow; // 0xA8
		::System::Boolean _ShadowActive; // 0xA9
		::System::Boolean _InTriggerRegion; // 0xAA
		::System::Boolean _EnableTeleport; // 0xAB

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__CCTOR_OFFSET))();
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void AddConnectors(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ADDCONNECTORS_OFFSET))(this, entities);
		}

		::System::Void EnableTeleport(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENABLETELEPORT_OFFSET))(this, enable);
		}

		::System::Void StartModule(::RPG::GameCore::GameEntity* prop, ::System::Single offsetUp, ::System::Single offsetDown, ::System::Single offsetLeft, ::System::Single offsetRight, ::RPG::GameCore::AnchorInfo* originAnchor, ::System::Single maxCameraSize, ::RPG::GameCore::AnchorInfo* followAnchor, ::RPG::GameCore::AnchorInfo* swipeAnchor)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::GameCore::AnchorInfo*, ::System::Single, ::RPG::GameCore::AnchorInfo*, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTMODULE_OFFSET))(this, prop, offsetUp, offsetDown, offsetLeft, offsetRight, originAnchor, maxCameraSize, followAnchor, swipeAnchor);
		}

		::System::Void EndModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENDMODULE_OFFSET))(this);
		}

		::System::Void ReportStartModule(::RPG::GameCore::GameEntity* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTSTARTMODULE_OFFSET))(this, prop);
		}

		::System::Void ReportEndModule(::RPG::GameCore::GameEntity* prop)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_REPORTENDMODULE_OFFSET))(this, prop);
		}

		::System::Void OperateMovePlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEMOVEPLATFORM_OFFSET))(this);
		}

		::System::Void OperateRotatePlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_OPERATEROTATEPLATFORM_OFFSET))(this);
		}

		::System::Void StartSwipeCamera(::System::Single upOffset, ::System::Single downOffset, ::System::Single leftOffset, ::System::Single rightOffset, ::System::Single recoverTime, ::System::Single joystickFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTSWIPECAMERA_OFFSET))(this, upOffset, downOffset, leftOffset, rightOffset, recoverTime, joystickFactor);
		}

		::System::Void StopSwipeCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STOPSWIPECAMERA_OFFSET))(this);
		}

		::System::Void SwitchIsometricView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_SWITCHISOMETRICVIEW_OFFSET))(this);
		}

		::System::Void StartZoomFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_STARTZOOMFOLLOW_OFFSET))(this);
		}

		::System::Void EndZoomFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_ENDZOOMFOLLOW_OFFSET))(this);
		}

		::System::Void _UpdateFollowAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATEFOLLOWANCHOR_OFFSET))(this);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _AddShadow(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__ADDSHADOW_OFFSET))(this, pos);
		}

		::System::Void _UpdateShadowPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__UPDATESHADOWPOSITION_OFFSET))(this, pos);
		}

		::System::Void _RemoveShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE__REMOVESHADOW_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Int32 get_StartTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE_GET_STARTTIME_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ISOMETRICVIEWMODULE___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
