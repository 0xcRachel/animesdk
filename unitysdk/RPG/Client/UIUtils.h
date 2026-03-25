#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_UIUTILS_CENTERTARGETINSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xA749A00)
#define RPG_CLIENT_UIUTILS_CHANGECANVASSORTINGORDER_OFFSET UNITYSDK_OFFSET(0xA747FE0)
#define RPG_CLIENT_UIUTILS_CLAMPSCREENPOINT_OFFSET UNITYSDK_OFFSET(0xA74A320)
#define RPG_CLIENT_UIUTILS_CREATEBLOCKER_OFFSET UNITYSDK_OFFSET(0xA74A5A0)
#define RPG_CLIENT_UIUTILS_DETERMINELEFTSTICKMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA749E30)
#define RPG_CLIENT_UIUTILS_DETERMINEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xA749D60)
#define RPG_CLIENT_UIUTILS_GETANGLEBYPOS_OFFSET UNITYSDK_OFFSET(0xA7478E0)
#define RPG_CLIENT_UIUTILS_GETCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xA749BE0)
#define RPG_CLIENT_UIUTILS_GETGAMEPADTIPICONBYTYPE_OFFSET UNITYSDK_OFFSET(0xA7471C0)
#define RPG_CLIENT_UIUTILS_GETITEMCORNERWORLDPOSARRAY_OFFSET UNITYSDK_OFFSET(0xA74A130)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEYINT_OFFSET UNITYSDK_OFFSET(0xA747300)
#define RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEY_OFFSET UNITYSDK_OFFSET(0xA7473C0)
#define RPG_CLIENT_UIUTILS_GETMOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0xA749980)
#define RPG_CLIENT_UIUTILS_GETRECTTRANSFORMPOSITION_OFFSET UNITYSDK_OFFSET(0xA747D10)
#define RPG_CLIENT_UIUTILS_GETSUBSTRINGBYCHARCOUNT_OFFSET UNITYSDK_OFFSET(0xA749C30)
#define RPG_CLIENT_UIUTILS_GETTOUCHPOSITION_OFFSET UNITYSDK_OFFSET(0xA7498D0)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYEIGHTWHEEL_OFFSET UNITYSDK_OFFSET(0xA7479F0)
#define RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYFOURWHEEL_OFFSET UNITYSDK_OFFSET(0xA747BC0)
#define RPG_CLIENT_UIUTILS_GET_CANCELBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xA747130)
#define RPG_CLIENT_UIUTILS_GET_ISACCESSGAMEPAD_OFFSET UNITYSDK_OFFSET(0xA746670)
#define RPG_CLIENT_UIUTILS_GET_ISADVENTUREPHASE_OFFSET UNITYSDK_OFFSET(0xA746C00)
#define RPG_CLIENT_UIUTILS_GET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xA747010)
#define RPG_CLIENT_UIUTILS_GET_ISBATTLEGAMEPHASE_OFFSET UNITYSDK_OFFSET(0xA746CE0)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xA746530)
#define RPG_CLIENT_UIUTILS_GET_ISGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xA7460D0)
#define RPG_CLIENT_UIUTILS_GET_ISINFIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0xA746DC0)
#define RPG_CLIENT_UIUTILS_GET_ISINFOURROTATEVOXELGAME_OFFSET UNITYSDK_OFFSET(0xA746EE0)
#define RPG_CLIENT_UIUTILS_GET_ISLOCKINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA746B00)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xA749CF0)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODE_OFFSET UNITYSDK_OFFSET(0xA746450)
#define RPG_CLIENT_UIUTILS_GET_ISMOBILEUI_OFFSET UNITYSDK_OFFSET(0xA746500)
#define RPG_CLIENT_UIUTILS_GET_ISPCMODE_OFFSET UNITYSDK_OFFSET(0xA746230)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWCURSOR_OFFSET UNITYSDK_OFFSET(0xA746A50)
#define RPG_CLIENT_UIUTILS_GET_ISSHOWFIVEDIMSETTINGKEY_OFFSET UNITYSDK_OFFSET(0xA746E50)
#define RPG_CLIENT_UIUTILS_GET_SUBMITBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0xA7470A0)
#define RPG_CLIENT_UIUTILS_GET_UISCALEFACTOR_OFFSET UNITYSDK_OFFSET(0xA746050)
#define RPG_CLIENT_UIUTILS_ISMOUSEOVERUI_OFFSET UNITYSDK_OFFSET(0xA749700)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xA749090)
#define RPG_CLIENT_UIUTILS_RAYCASTALLBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xA748420)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_1_OFFSET UNITYSDK_OFFSET(0xA748D80)
#define RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_OFFSET UNITYSDK_OFFSET(0xA748A70)
#define RPG_CLIENT_UIUTILS_RAYCASTBYPOINTPOS_OFFSET UNITYSDK_OFFSET(0xA748140)
#define RPG_CLIENT_UIUTILS_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA74A9A0)
#define RPG_CLIENT_UIUTILS_REMOVEGAMEOBJECTCLONENAME_OFFSET UNITYSDK_OFFSET(0xA747F50)
#define RPG_CLIENT_UIUTILS_SETEMISSIONENABLE_OFFSET UNITYSDK_OFFSET(0xA747E10)
#define RPG_CLIENT_UIUTILS_SET_ISANDROIDUSEVULKAN_OFFSET UNITYSDK_OFFSET(0xA747040)
#define RPG_CLIENT_UIUTILS_SET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET UNITYSDK_OFFSET(0xA749D30)
#define RPG_CLIENT_UIUTILS_SHOWRETERRORUI_OFFSET UNITYSDK_OFFSET(0xA7480D0)
#define RPG_CLIENT_UIUTILS_STOPVIBRATION_OFFSET UNITYSDK_OFFSET(0xA7477A0)
#define RPG_CLIENT_UIUTILS_VIBRATE_OFFSET UNITYSDK_OFFSET(0xA747650)
#define RPG_CLIENT_UIUTILS_WORLDTOUILOCALPOSITION_OFFSET UNITYSDK_OFFSET(0xA74A1A0)
#define RPG_CLIENT_UIUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA74ACD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIUtils_TypeDefinitionIndex = 59998;

	class UIUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>** StaticGet_UIRaycastResultCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>**)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0x2D440);
		}
		static ::System::Boolean* StaticGet__IsMobileGamePadModeBySetting()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIUtils_TypeDefinitionIndex)->GetStaticField(0xC560);
		}
		// static const ::System::Int32 _NON_ALLOC_HIT_BUFFER_SIZE = 0xA; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS__CCTOR_OFFSET))();
		}

		static ::System::Single get_UIScaleFactor()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_UISCALEFACTOR_OFFSET))();
		}

		static ::System::Boolean get_IsGamePadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISGAMEPADMODE_OFFSET))();
		}

		static ::System::Boolean get_IsMobileUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEUI_OFFSET))();
		}

		static ::System::Boolean get_IsPCMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISPCMODE_OFFSET))();
		}

		static ::System::Boolean get_IsMobileGamePadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODE_OFFSET))();
		}

		static ::System::Boolean get_IsGamePadInput()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISGAMEPADINPUT_OFFSET))();
		}

		static ::System::Boolean get_IsAccessGamePad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISACCESSGAMEPAD_OFFSET))();
		}

		static ::System::Boolean get_IsShowCursor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISSHOWCURSOR_OFFSET))();
		}

		static ::System::Boolean get_IsLockInputController()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISLOCKINPUTCONTROLLER_OFFSET))();
		}

		static ::System::Boolean get_IsAdventurePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISADVENTUREPHASE_OFFSET))();
		}

		static ::System::Boolean get_IsBattleGamePhase()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISBATTLEGAMEPHASE_OFFSET))();
		}

		static ::System::Boolean get_IsInFiveDimGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISINFIVEDIMGAME_OFFSET))();
		}

		static ::System::Boolean get_IsShowFiveDimSettingKey()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISSHOWFIVEDIMSETTINGKEY_OFFSET))();
		}

		static ::System::Boolean get_IsInFourRotateVoxelGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISINFOURROTATEVOXELGAME_OFFSET))();
		}

		static ::System::Boolean get_IsAndroidUseVulkan()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISANDROIDUSEVULKAN_OFFSET))();
		}

		static ::System::Void set_IsAndroidUseVulkan(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SET_ISANDROIDUSEVULKAN_OFFSET))(value);
		}

		static ::InControl::InputControlType get_SubmitButtonType()
		{
			return ((::InControl::InputControlType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_SUBMITBUTTONTYPE_OFFSET))();
		}

		static ::InControl::InputControlType get_CancelButtonType()
		{
			return ((::InControl::InputControlType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_CANCELBUTTONTYPE_OFFSET))();
		}

		static ::System::String* GetGamepadTipIconByType(::System::String* bindInControlType, ::InControl::InputDeviceStyle inputDeviceStyle)
		{
			return ((::System::String*(*)(::System::String*, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETGAMEPADTIPICONBYTYPE_OFFSET))(bindInControlType, inputDeviceStyle);
		}

		static ::RPG::Client::TextID GetKeyboardTipTextIDByKeyInt(::System::Int32 bindKeyboardInt)
		{
			return ((::RPG::Client::TextID(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEYINT_OFFSET))(bindKeyboardInt);
		}

		static ::RPG::Client::TextID GetKeyboardTipTextIDByKey(::System::String* bindKeyboard)
		{
			return ((::RPG::Client::TextID(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETKEYBOARDTIPTEXTIDBYKEY_OFFSET))(bindKeyboard);
		}

		static ::System::Void Vibrate(::System::Single intensity)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_VIBRATE_OFFSET))(intensity);
		}

		static ::System::Void StopVibration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_STOPVIBRATION_OFFSET))();
		}

		static ::System::Single GetAngleByPos(::System::Single x, ::System::Single y)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETANGLEBYPOS_OFFSET))(x, y);
		}

		static ::System::Int32 GetWheelItemIndexByEightWheel(::System::Single x, ::System::Single y)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYEIGHTWHEEL_OFFSET))(x, y);
		}

		static ::System::Int32 GetWheelItemIndexByFourWheel(::System::Single x, ::System::Single y)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETWHEELITEMINDEXBYFOURWHEEL_OFFSET))(x, y);
		}

		static ::UnityEngine::Vector3 GetRectTransformPosition(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETRECTTRANSFORMPOSITION_OFFSET))(rectTransform);
		}

		static ::System::Void SetEmissionEnable(::UnityEngine::GameObject* particleObject, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SETEMISSIONENABLE_OFFSET))(particleObject, enable);
		}

		static ::System::Void RemoveGameObjectCloneName(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_REMOVEGAMEOBJECTCLONENAME_OFFSET))(go);
		}

		static ::System::Void ChangeCanvasSortingOrder(::UnityEngine::Transform* transform, ::System::Int32 sortingOrder)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CHANGECANVASSORTINGORDER_OFFSET))(transform, sortingOrder);
		}

		static ::System::Void ShowRetErrorUI(::System::UInt32 retcode, ::System::String* infoStr)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SHOWRETERRORUI_OFFSET))(retcode, infoStr);
		}

		static ::UnityEngine::Transform* RaycastByPointPos(::System::String* layerStr, ::UnityEngine::Vector2 pointPos)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYPOINTPOS_OFFSET))(layerStr, pointPos);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* RaycastAllByPointPos(::System::String* layerStr, ::UnityEngine::Vector2 pointPos, ::System::String* hintName)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::System::String*, ::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTALLBYPOINTPOS_OFFSET))(layerStr, pointPos, hintName);
		}

		static ::UnityEngine::Transform* RaycastByMouseOrTouch(::System::String* layerStr)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_OFFSET))(layerStr);
		}

		static ::UnityEngine::Vector3 RaycastByMouseOrTouch_1()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTBYMOUSEORTOUCH_1_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* RaycastAllByMouseOrTouch(::System::String* layerStr, ::System::String* hintName)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCASTALLBYMOUSEORTOUCH_OFFSET))(layerStr, hintName);
		}

		static ::System::Boolean IsMouseOverUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_ISMOUSEOVERUI_OFFSET))();
		}

		static ::System::Void GetTouchPosition(::System::Int32 index, ::System::Boolean isRaw, ::System::Single& x, ::System::Single& y)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETTOUCHPOSITION_OFFSET))(index, isRaw, x, y);
		}

		static ::System::Void GetMousePosition(::System::Single& x, ::System::Single& y)
		{
			return ((::System::Void(*)(::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETMOUSEPOSITION_OFFSET))(x, y);
		}

		static ::System::Void CenterTargetInScrollRect(::UnityEngine::UI::ScrollRect* scrollRect, ::UnityEngine::RectTransform* targetTransform)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ScrollRect*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CENTERTARGETINSCROLLRECT_OFFSET))(scrollRect, targetTransform);
		}

		static ::System::Int32 GetCharCount(::System::String* text)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETCHARCOUNT_OFFSET))(text);
		}

		static ::System::String* GetSubStringByCharCount(::System::String* text, ::System::Int32 length)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETSUBSTRINGBYCHARCOUNT_OFFSET))(text, length);
		}

		static ::System::Boolean get_IsMobileGamePadModeBySetting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET))();
		}

		static ::System::Void set_IsMobileGamePadModeBySetting(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_SET_ISMOBILEGAMEPADMODEBYSETTING_OFFSET))(value);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineMoveDirection(::System::Single x, ::System::Single y, ::System::Single deadZone)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_DETERMINEMOVEDIRECTION_OFFSET))(x, y, deadZone);
		}

		static ::UnityEngine::EventSystems::MoveDirection DetermineLeftStickMoveDirection(::System::Single deadZone)
		{
			return ((::UnityEngine::EventSystems::MoveDirection(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_DETERMINELEFTSTICKMOVEDIRECTION_OFFSET))(deadZone);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetItemCornerWorldPosArray(::UnityEngine::RectTransform* tf)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_GETITEMCORNERWORLDPOSARRAY_OFFSET))(tf);
		}

		static ::UnityEngine::Vector3 WorldToUILocalPosition(::UnityEngine::RectTransform* rt, ::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_WORLDTOUILOCALPOSITION_OFFSET))(rt, worldPos);
		}

		static ::UnityEngine::Vector2 ClampScreenPoint(::UnityEngine::Vector2 point, ::UnityEngine::RectTransform* boundary)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CLAMPSCREENPOINT_OFFSET))(point, boundary);
		}

		static ::UnityEngine::GameObject* CreateBlocker(::UnityEngine::Canvas* rootCanvas, ::UnityEngine::Events::UnityAction* blockClickCallback, ::UnityEngine::Canvas* exceptBlockNodeCanvas)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Canvas*, ::UnityEngine::Events::UnityAction*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_CREATEBLOCKER_OFFSET))(rootCanvas, blockClickCallback, exceptBlockNodeCanvas);
		}

		static ::System::Boolean Raycast(::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::System::Int32 layerMask, ::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIUTILS_RAYCAST_OFFSET))(hitInfo, maxDistance, layerMask, camera);
		}
	};
}
