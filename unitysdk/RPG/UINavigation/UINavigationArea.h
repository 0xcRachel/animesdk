#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigation.h"
#include "unitysdk/RPG/UINavigation/UINavigationArea_StartCorner.h"
#include "unitysdk/RPG/UINavigation/UINavigationDirection.h"
#include "unitysdk/RPG/UINavigation/UINavigation_Rule.h"
#include "unitysdk/Struct_2_342392452B5681AE.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A8F358278D5B9235;
namespace RPG::UINavigation { class UINavigationAreaConfig; }
namespace RPG::UINavigation { class UINavigationArea_FirstSelectableDelegate; }
namespace RPG::UINavigation { class UINavigationBoundaryConfig; }
namespace RPG::UINavigation { class UINavigationExtension; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_ADDFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15595EA0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ADD__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x155943F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_1_OFFSET UNITYSDK_OFFSET(0x15598330)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET UNITYSDK_OFFSET(0x15597F40)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0x15596540)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETDEFAULTFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15595390)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x155951F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x15597180)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET UNITYSDK_OFFSET(0x155979D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET UNITYSDK_OFFSET(0x15598240)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET UNITYSDK_OFFSET(0x15596300)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGAREA_OFFSET UNITYSDK_OFFSET(0x155943E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGDOWN_OFFSET UNITYSDK_OFFSET(0x155943B0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGLEFT_OFFSET UNITYSDK_OFFSET(0x15594380)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGNEXT_OFFSET UNITYSDK_OFFSET(0x155943C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGPREVIOUS_OFFSET UNITYSDK_OFFSET(0x155943D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGRIGHT_OFFSET UNITYSDK_OFFSET(0x15594390)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGUP_OFFSET UNITYSDK_OFFSET(0x155943A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0x15594FC0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x15594D70)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x155947C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVEFOCUSCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15595F30)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x15594460)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET UNITYSDK_OFFSET(0x155944D0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15595170)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYESCAPE_OFFSET UNITYSDK_OFFSET(0x15596110)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYSTOP_OFFSET UNITYSDK_OFFSET(0x15596010)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET UNITYSDK_OFFSET(0x15595E50)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXPLICITNAVIGATION_OFFSET UNITYSDK_OFFSET(0x15596160)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXTENSION_OFFSET UNITYSDK_OFFSET(0x15595FC0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x15598490)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR_OFFSET UNITYSDK_OFFSET(0x15595980)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_1_OFFSET UNITYSDK_OFFSET(0x155972A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15595A90)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET UNITYSDK_OFFSET(0x15596DB0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET UNITYSDK_OFFSET(0x15595550)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOSOURCE_OFFSET UNITYSDK_OFFSET(0x155957C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET UNITYSDK_OFFSET(0x15597080)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15594950)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15596B20)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET UNITYSDK_OFFSET(0x155965B0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15596260)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET UNITYSDK_OFFSET(0x15596450)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETCUSTOMFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15595330)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETNAVIGATIONCAMERA_OFFSET UNITYSDK_OFFSET(0x15597E60)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15596AA0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETSAVEDFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x15595440)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET UNITYSDK_OFFSET(0x15597790)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0x155950E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x15594F30)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x15594CD0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__ISCHILDNAVIGABLE_OFFSET UNITYSDK_OFFSET(0x15597AF0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__MAPWORLDPOINTTOAREAPLANEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x15597BB0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET UNITYSDK_OFFSET(0x155949E0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__SETALLBOUNDARYRULES_OFFSET UNITYSDK_OFFSET(0x15596060)
#define RPG_UINAVIGATION_UINAVIGATIONAREA__SETFOCUSED_OFFSET UNITYSDK_OFFSET(0x15594EB0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x155986F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDDESELECTED_OFFSET UNITYSDK_OFFSET(0x155986A0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDSELECTED_OFFSET UNITYSDK_OFFSET(0x15598650)
#define RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONNAVIGATION_OFFSET UNITYSDK_OFFSET(0x155985B0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_TypeDefinitionIndex = 47791;

	class UINavigationArea : public ::RPG::UINavigation::UINavigation
	{
	public:
		// static const ::System::Single _THE_BEST_SCORE; // 0x0
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigLeft; // 0x50
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigRight; // 0x58
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigUp; // 0x60
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigDown; // 0x68
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigNext; // 0x70
		::RPG::UINavigation::UINavigationBoundaryConfig* _ConfigPrevious; // 0x78
		::RPG::UINavigation::UINavigationAreaConfig* _ConfigArea; // 0x80
		::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* _CustomFirstSelectableDelegate; // 0x88
		::RPG::UINavigation::UINavigation* _SavedNavigation; // 0x90
		::RPG::UINavigation::UINavigationExtension* _Extension; // 0x98
		::System::Action_1<::System::Boolean>* _OnFocusChanged; // 0xA0
		::System::Boolean _IsFocused; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__CTOR_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigLeft()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGLEFT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigRight()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGRIGHT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigUp()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGUP_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigDown()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGDOWN_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigNext()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGNEXT_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* get_ConfigPrevious()
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGPREVIOUS_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationAreaConfig* get_ConfigArea()
		{
			return ((::RPG::UINavigation::UINavigationAreaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GET_CONFIGAREA_OFFSET))(this);
		}

		::System::Void add__OnFocusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ADD__ONFOCUSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove__OnFocusChanged(::System::Action_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVE__ONFOCUSCHANGED_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_RESET_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE OnNavigation(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONNAVIGATION_OFFSET))(this, naviEvent);
		}

		::System::Void OnChildSelected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDSELECTED_OFFSET))(this, child);
		}

		::System::Void OnChildDeselected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ONCHILDDESELECTED_OFFSET))(this, child);
		}

		::System::Void _SetFocused(::System::Boolean focused)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__SETFOCUSED_OFFSET))(this, focused);
		}

		::System::Void SelectFirstSelectable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SELECTFIRSTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETFIRSTSELECTABLE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* GetDefaultFirstSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETDEFAULTFIRSTSELECTABLE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _FindSelectableClosestToSource(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOSOURCE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _GetCustomFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCUSTOMFIRSTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetSavedFirstSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETSAVEDFIRSTSELECTABLE_OFFSET))(this, naviEvent);
		}

		::System::Void SetCustomFirstSelectableDelegate(::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate* firstSelectableDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_FirstSelectableDelegate*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETCUSTOMFIRSTSELECTABLEDELEGATE_OFFSET))(this, firstSelectableDelegate);
		}

		::System::Void AddFocusChangedCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_ADDFOCUSCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void RemoveFocusChangedCallback(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_REMOVEFOCUSCHANGEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetExtension(::RPG::UINavigation::UINavigationExtension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationExtension*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXTENSION_OFFSET))(this, extension);
		}

		::System::Void SetAllBoundaryStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYSTOP_OFFSET))(this);
		}

		::System::Void SetAllBoundaryEscape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETALLBOUNDARYESCAPE_OFFSET))(this);
		}

		::System::Void SetExplicitNavigation(::RPG::UINavigation::UINavigationDirection direction, ::RPG::UINavigation::UINavigation* recipient)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_SETEXPLICITNAVIGATION_OFFSET))(this, direction, recipient);
		}

		::UnityEngine::Vector3 GetStartCornerDir()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETSTARTCORNERDIR_OFFSET))(this);
		}

		::UnityEngine::Rect GetBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETBOUNDINGRECT_OFFSET))(this);
		}

		::Struct_2_342392452B5681AE _NavigateBoundary(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__NAVIGATEBOUNDARY_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _FindSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLE_OFFSET))(this, naviEvent);
		}

		::RPG::UINavigation::UINavigationBoundaryConfig* _GetConfig(::RPG::UINavigation::UINavigationDirection direction)
		{
			return ((::RPG::UINavigation::UINavigationBoundaryConfig*(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCONFIG_OFFSET))(this, direction);
		}

		::UnityEngine::GameObject* _FindSelectableClosestToCorner(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLECLOSESTTOCORNER_OFFSET))(this, naviEvent);
		}

		::UnityEngine::Vector3 _GetCornerDir(::RPG::UINavigation::UINavigationArea_StartCorner startCorner)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationArea_StartCorner))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCORNERDIR_OFFSET))(this, startCorner);
		}

		::UnityEngine::Vector3 _DirectionToVector(::RPG::UINavigation::UINavigationDirection direction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::UINavigation::UINavigationDirection))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__DIRECTIONTOVECTOR_OFFSET))(this, direction);
		}

		::UnityEngine::GameObject* _FindSelectableAutomatic(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEAUTOMATIC_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _FindSelectableUnityNative(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDSELECTABLEUNITYNATIVE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::GameObject* _GetRecipientSelectable(::RPG::UINavigation::UINavigation* recipient, ::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::UINavigation::UINavigation*, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETRECIPIENTSELECTABLE_OFFSET))(this, recipient, naviEvent);
		}

		::UnityEngine::GameObject* _FindWrapAroundSelectable(::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDWRAPAROUNDSELECTABLE_OFFSET))(this, naviEvent);
		}

		::UnityEngine::Vector3 _GetWrapAroundStartGlobalPos(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETWRAPAROUNDSTARTGLOBALPOS_OFFSET))(this, trans, dir);
		}

		::UnityEngine::Rect _GetChildrenBoundingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETCHILDRENBOUNDINGRECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* _FindClosestSelectable(::UnityEngine::Transform* start, ::UnityEngine::Vector3 dir, ::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_OFFSET))(this, start, dir, naviEvent);
		}

		::UnityEngine::Vector3 _MapWorldPointToAreaPlaneIfNeeded(::UnityEngine::Vector3 worldPoint, ::UnityEngine::Transform* start)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__MAPWORLDPOINTTOAREAPLANEIFNEEDED_OFFSET))(this, worldPoint, start);
		}

		static ::UnityEngine::Camera* _GetNavigationCamera(::UnityEngine::Transform* transform)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__GETNAVIGATIONCAMERA_OFFSET))(transform);
		}

		::UnityEngine::GameObject* _FindClosestSelectable_1(::UnityEngine::Vector3 startGlobalPos, ::UnityEngine::Vector3 dir, ::Class_1_A8F358278D5B9235* naviEvent)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__FINDCLOSESTSELECTABLE_1_OFFSET))(this, startGlobalPos, dir, naviEvent);
		}

		::System::Boolean _IsChildNavigable(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__ISCHILDNAVIGABLE_OFFSET))(this, child);
		}

		::System::Void _SetAllBoundaryRules(::RPG::UINavigation::UINavigation_Rule rule)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation_Rule))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__SETALLBOUNDARYRULES_OFFSET))(this, rule);
		}

		::System::Void _InvokeExtensionPostOnNavigation(::Class_1_A8F358278D5B9235* naviEvent, ::Struct_2_342392452B5681AE& reply)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A8F358278D5B9235*, ::Struct_2_342392452B5681AE&))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONNAVIGATION_OFFSET))(this, naviEvent, reply);
		}

		::System::Void _InvokeExtensionPostOnChildSelected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDSELECTED_OFFSET))(this, child);
		}

		::System::Void _InvokeExtensionPostOnChildDeselected(::RPG::UINavigation::UINavigation* child)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA__INVOKEEXTENSIONPOSTONCHILDDESELECTED_OFFSET))(this, child);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnTransformEdge(::UnityEngine::Transform* trans, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONTRANSFORMEDGE_OFFSET))(trans, dir);
		}

		static ::UnityEngine::Vector3 GetGlobalPosOnRectEdge(::UnityEngine::Transform* trans, ::UnityEngine::Rect rect, ::UnityEngine::Vector3 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Rect, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETGLOBALPOSONRECTEDGE_OFFSET))(trans, rect, dir);
		}

		static ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::Rect rect, ::UnityEngine::Vector2 dir)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_GETPOINTONRECTEDGE_OFFSET))(rect, dir);
		}

		static ::System::Single CalculateNavigationScore(::UnityEngine::Vector3 globalStart, ::UnityEngine::RectTransform* rectTrans, ::UnityEngine::Vector3 dir, ::System::Single directivity)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_OFFSET))(globalStart, rectTrans, dir, directivity);
		}

		static ::System::Single CalculateNavigationScore_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 dir, ::System::Single directivity)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_CALCULATENAVIGATIONSCORE_1_OFFSET))(start, end, dir, directivity);
		}

		::Struct_2_342392452B5681AE __iFixBaseProxy_OnNavigation(::Class_1_A8F358278D5B9235* P0)
		{
			return ((::Struct_2_342392452B5681AE(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONNAVIGATION_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnChildSelected(::RPG::UINavigation::UINavigation* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDSELECTED_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnChildDeselected(::RPG::UINavigation::UINavigation* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_ONCHILDDESELECTED_OFFSET))(this, P0);
		}

		::UnityEngine::GameObject* __iFixBaseProxy_GetFirstSelectable(::Class_1_A8F358278D5B9235* P0)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Class_1_A8F358278D5B9235*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA___IFIXBASEPROXY_GETFIRSTSELECTABLE_OFFSET))(this, P0);
		}
	};
}
