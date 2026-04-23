#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UI3DCameraStateBase.h"
#include "unitysdk/RPG/GameCore/UI3DMap3DCameraState_InnerState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_BC7678A381842B94;
namespace RPG::Client { class UI3DMap3DCameraSettings; }
namespace RPG::GameCore { class UI3DMap3DCameraStateConfig; }
namespace RPG::GameCore { class UI3DVirtualCameraComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GETZOOMALPHA_OFFSET UNITYSDK_OFFSET(0x1557D040)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__CAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x1557C460)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__DEFAULTZOOM_OFFSET UNITYSDK_OFFSET(0x1557A550)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMAX_OFFSET UNITYSDK_OFFSET(0x1557D110)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMIN_OFFSET UNITYSDK_OFFSET(0x1557D0F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMAX_OFFSET UNITYSDK_OFFSET(0x15580810)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMIN_OFFSET UNITYSDK_OFFSET(0x15580880)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMSPEED_OFFSET UNITYSDK_OFFSET(0x1557FB70)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INITCONFIG_OFFSET UNITYSDK_OFFSET(0x1557A460)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INIT_OFFSET UNITYSDK_OFFSET(0x1557A6D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1557A850)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETBYMAPBOUNDSV2_OFFSET UNITYSDK_OFFSET(0x1557BDE0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0x1557A4B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESET_OFFSET UNITYSDK_OFFSET(0x1557BCC0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOSLIST_OFFSET UNITYSDK_OFFSET(0x1557D700)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1557D130)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLAMPPIVOTINSIDEOUTERRECT_OFFSET UNITYSDK_OFFSET(0x15580330)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARDAMPINGRECOVERSTATES_OFFSET UNITYSDK_OFFSET(0x1557D650)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARZOOM_OFFSET UNITYSDK_OFFSET(0x1557E1A0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEOUTSCREENRATIO_OFFSET UNITYSDK_OFFSET(0x1557E310)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_1_OFFSET UNITYSDK_OFFSET(0x1557D3A0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_OFFSET UNITYSDK_OFFSET(0x1557F310)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_1_OFFSET UNITYSDK_OFFSET(0x1557DCB0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_OFFSET UNITYSDK_OFFSET(0x15580170)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTETARGETPOSTOBOXINGWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1557C4B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET UNITYSDK_OFFSET(0x1557F9D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDAMPING_OFFSET UNITYSDK_OFFSET(0x1557EA50)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDEFAULT_OFFSET UNITYSDK_OFFSET(0x1557E820)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOMOUTRATIO_OFFSET UNITYSDK_OFFSET(0x1557FB90)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOM_OFFSET UNITYSDK_OFFSET(0x1557AEE0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15578530)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETINNERBOUNDS_OFFSET UNITYSDK_OFFSET(0x1557F270)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETOUTERBOUNDS_OFFSET UNITYSDK_OFFSET(0x15580290)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYTRANSLATE_OFFSET UNITYSDK_OFFSET(0x1557AAF0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYZOOM_OFFSET UNITYSDK_OFFSET(0x1557B250)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_1_OFFSET UNITYSDK_OFFSET(0x1557F460)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0x1557F5D0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONMAP3DTOUCHENABLED_OFFSET UNITYSDK_OFFSET(0x155807B0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONZOOMSLIDERALPHACHANGE_OFFSET UNITYSDK_OFFSET(0x15580000)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERCAMERATOBOUNDS_OFFSET UNITYSDK_OFFSET(0x1557B700)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERZOOM_OFFSET UNITYSDK_OFFSET(0x1557FD00)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENPOINTTORAY_OFFSET UNITYSDK_OFFSET(0x1557E200)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENTOWORLDTRANSLATION_OFFSET UNITYSDK_OFFSET(0x1557EDC0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__STARTRESETTOINITIALPOSITION_OFFSET UNITYSDK_OFFSET(0x1557CED0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SYNCTRANSFORMTOVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1557AD30)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x1557A570)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECENTERING_OFFSET UNITYSDK_OFFSET(0x1557BA60)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATEMAP2DBOUND_OFFSET UNITYSDK_OFFSET(0x1557C340)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x155808F0)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15580940)
#define RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x15580990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DMap3DCameraState_TypeDefinitionIndex = 53048;

	class UI3DMap3DCameraState : public ::RPG::GameCore::UI3DCameraStateBase
	{
	public:
		::RPG::Client::UI3DMap3DCameraSettings* _MonoSettings; // 0x30
		::UnityEngine::Transform* _MapTransform; // 0x38
		::UnityEngine::AnimationCurve* _CenteringCurve; // 0x40
		::Class_1_BC7678A381842B94* _CameraInputController; // 0x48
		::RPG::GameCore::UI3DMap3DCameraStateConfig* _Config; // 0x50
		::UnityEngine::Rect _Map2DBounds; // 0x58
		::System::Single _CurrentZoom; // 0x68
		::System::Single _ZoomRecoverVelocity; // 0x6C
		::UnityEngine::Vector3 _CurrentReturnBoundsVelocity; // 0x70
		::System::Single _CurrentCenteringTime; // 0x7C
		::System::Single _LastZoomVelocity; // 0x80
		::System::Boolean _TransformedLastFrame; // 0x84
		::System::Single _CenteringDuration; // 0x88
		::System::Nullable_1<::UnityEngine::Vector3> _InitialCameraPosition; // 0x8C
		::UnityEngine::Vector3 _WorldTranslationVelocity; // 0x9C
		::RPG::GameCore::UI3DMap3DCameraState_InnerState _InnerState; // 0xA8
		::System::Single _ZoomAcc; // 0xAC
		::UnityEngine::Vector3 _CenteringTargetPosition; // 0xB0
		::UnityEngine::Vector3 _BeginCenteringPosition; // 0xBC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CTOR_OFFSET))(this);
		}

		::System::Void InitConfig(::RPG::GameCore::UI3DMap3DCameraStateConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DMap3DCameraStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INITCONFIG_OFFSET))(this, config);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETCAMERA_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::UI3DVirtualCameraComponent* cameraComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_INIT_OFFSET))(this, cameraComponent);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESET_OFFSET))(this);
		}

		::System::Void ResetByMapBoundsV2(::UnityEngine::Transform* mapTransform, ::UnityEngine::Bounds bounds, ::System::Boolean hasPlayer, ::UnityEngine::Vector3 playerPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Bounds, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_RESETBYMAPBOUNDSV2_OFFSET))(this, mapTransform, bounds, hasPlayer, playerPosition);
		}

		::System::Single GetZoomAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GETZOOMALPHA_OFFSET))(this);
		}

		::System::Void StartCenteringWorldPos(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOS_OFFSET))(this, worldPosition);
		}

		::System::Void StartCenteringWorldPosList(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* worldPositions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_STARTCENTERINGWORLDPOSLIST_OFFSET))(this, worldPositions);
		}

		::System::Void _ClearDampingRecoverStates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARDAMPINGRECOVERSTATES_OFFSET))(this);
		}

		::System::Void _UpdateCameraTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void _SyncTransformToVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SYNCTRANSFORMTOVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void _MovePivotByZoom(::System::Single lastZoom, ::System::Single currentZoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYZOOM_OFFSET))(this, lastZoom, currentZoom);
		}

		::System::Void _MovePivotByTranslate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__MOVEPIVOTBYTRANSLATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ComputeWorldTranslationDefault()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDEFAULT_OFFSET))(this);
		}

		::UnityEngine::Vector3 _ComputeWorldTranslationDamping()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTRANSLATIONDAMPING_OFFSET))(this);
		}

		::System::Void _RecoverCameraToBounds(::System::Single deltaTime, ::System::Boolean immediately, ::System::Boolean isZooming)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERCAMERATOBOUNDS_OFFSET))(this, deltaTime, immediately, isZooming);
		}

		::UnityEngine::Ray _ScreenPointToRay(::UnityEngine::Vector3 screenPos)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENPOINTTORAY_OFFSET))(this, screenPos);
		}

		::UnityEngine::Ray _NormScreenPointToRay(::UnityEngine::Vector3 screenPos, ::UnityEngine::Matrix4x4 cameraToWorld)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_OFFSET))(this, screenPos, cameraToWorld);
		}

		::UnityEngine::Ray _NormScreenPointToRay_1(::UnityEngine::Vector3 screenPos)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__NORMSCREENPOINTTORAY_1_OFFSET))(this, screenPos);
		}

		::UnityEngine::Vector3 _ScreenToWorldTranslation(::UnityEngine::Vector3 inputTranslation)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__SCREENTOWORLDTRANSLATION_OFFSET))(this, inputTranslation);
		}

		::System::Single _ComputeZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOM_OFFSET))(this);
		}

		::System::Void _ClearZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLEARZOOM_OFFSET))(this);
		}

		::System::Void _OnZoomSliderAlphaChange(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONZOOMSLIDERALPHACHANGE_OFFSET))(this, param);
		}

		::System::Boolean _ComputeTargetPosToBoxingWorldPos(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector2 boxXRange, ::UnityEngine::Vector2 boxYRange, ::UnityEngine::Vector3& targetPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTETARGETPOSTOBOXINGWORLDPOS_OFFSET))(this, worldPosition, boxXRange, boxYRange, targetPos);
		}

		::System::Boolean _ComputePivotPosToBoxingRect(::UnityEngine::Rect rect, ::UnityEngine::Vector3& pivotPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_OFFSET))(this, rect, pivotPos);
		}

		::System::Boolean _ComputePivotPosToBoxingRect_1(::UnityEngine::Rect rect, ::UnityEngine::Matrix4x4 cameraToWorld, ::UnityEngine::Vector3& pivotPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEPIVOTPOSTOBOXINGRECT_1_OFFSET))(this, rect, cameraToWorld, pivotPos);
		}

		::System::Boolean _ComputeOutScreenRatio(::UnityEngine::Rect rect, ::UnityEngine::Vector3 worldTranslation, ::System::Single& xRatio, ::System::Single& yRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEOUTSCREENRATIO_OFFSET))(this, rect, worldTranslation, xRatio, yRatio);
		}

		::UnityEngine::Rect _GetOuterBounds(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETOUTERBOUNDS_OFFSET))(this, rect);
		}

		::UnityEngine::Rect _GetInnerBounds(::UnityEngine::Rect rect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__GETINNERBOUNDS_OFFSET))(this, rect);
		}

		::System::Boolean _ClampPivotInsideOuterRect(::UnityEngine::Rect rect, ::UnityEngine::Vector3& pivotPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__CLAMPPIVOTINSIDEOUTERRECT_OFFSET))(this, rect, pivotPos);
		}

		::System::Boolean _ComputeScreenRect(::UnityEngine::Rect& rect)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_OFFSET))(this, rect);
		}

		::System::Boolean _ComputeScreenRect_1(::UnityEngine::Rect& rect, ::UnityEngine::Matrix4x4 cameraToWorld)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTESCREENRECT_1_OFFSET))(this, rect, cameraToWorld);
		}

		::System::Boolean _UpdateCentering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATECENTERING_OFFSET))(this);
		}

		::System::Void _OnMap3DTouchEnabled(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__ONMAP3DTOUCHENABLED_OFFSET))(this, param);
		}

		::System::Boolean _UpdateMap2DBound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__UPDATEMAP2DBOUND_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 _ComputeWorldToCameraMatrixGL(::UnityEngine::Matrix4x4 cameraToWorld)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEWORLDTOCAMERAMATRIXGL_OFFSET))(this, cameraToWorld);
		}

		::System::Single _ComputeZoomOutRatio(::System::Single zoomVelocity)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__COMPUTEZOOMOUTRATIO_OFFSET))(this, zoomVelocity);
		}

		::System::Void _RecoverZoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__RECOVERZOOM_OFFSET))(this);
		}

		::System::Void _StartResetToInitialPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE__STARTRESETTOINITIALPOSITION_OFFSET))(this);
		}

		::UnityEngine::Transform* get__CameraTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__CAMERATRANSFORM_OFFSET))(this);
		}

		::System::Single get__DefaultZoom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__DEFAULTZOOM_OFFSET))(this);
		}

		::System::Single get__ZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMAX_OFFSET))(this);
		}

		::System::Single get__ZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMMIN_OFFSET))(this);
		}

		::System::Single get__ZoomSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMSPEED_OFFSET))(this);
		}

		::System::Single get__ZoomOuterMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMAX_OFFSET))(this);
		}

		::System::Single get__ZoomOuterMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE_GET__ZOOMOUTERMIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init(::RPG::GameCore::UI3DVirtualCameraComponent* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DVirtualCameraComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMAP3DCAMERASTATE___IFIXBASEPROXY_RESET_OFFSET))(this);
		}
	};
}
