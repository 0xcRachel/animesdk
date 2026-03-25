#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::UINavigation { class UINavigationZone; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ADDINCONTROLACTIONHINTCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB1D200)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ADDZONECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0xAB1D190)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_BACKZONE_OFFSET UNITYSDK_OFFSET(0xAB1DFC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB1D150)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_FIRSTZONE_OFFSET UNITYSDK_OFFSET(0xAB1CF30)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xAB1CFF0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_NAVIGATIONZONES_OFFSET UNITYSDK_OFFSET(0xAB1CEB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_TOPZONE_OFFSET UNITYSDK_OFFSET(0xAB1A640)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_INFIRSTZONE_OFFSET UNITYSDK_OFFSET(0xAB1D270)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xAB1D010)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0xAB1E430)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONGOTFOCUSED_OFFSET UNITYSDK_OFFSET(0xAB1D2D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONINCONTROLACTIONHINTCHANGE_OFFSET UNITYSDK_OFFSET(0xAB1C120)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONINCONTROLINPUTSWITCH_OFFSET UNITYSDK_OFFSET(0xAB1DB60)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONLOSTFOCUSED_OFFSET UNITYSDK_OFFSET(0xAB1D680)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0xAB1B820)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0xAB1BA30)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SAVENAVIGATIONTARGETTOZONE_OFFSET UNITYSDK_OFFSET(0xAB1DAD0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SAVENAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xAB1D970)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SETNAVIGATIONTARGETIFZONEATTOP_OFFSET UNITYSDK_OFFSET(0xAB1D9C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SETNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xAB1D8E0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xAB1D000)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__CLEARSELECTEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xAB1DDD0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1E5A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ENTERZONE_OFFSET UNITYSDK_OFFSET(0xAB1D620)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__FINDLASTZONE_OFFSET UNITYSDK_OFFSET(0xAB1E4A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__FIRSTZONE_OFFSET UNITYSDK_OFFSET(0xAB1CF90)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ONINCONTROLACTIONHINTCHANGE_OFFSET UNITYSDK_OFFSET(0xAB1DF70)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ONZONECHANGED_OFFSET UNITYSDK_OFFSET(0xAB1E260)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__POPTOZONE_OFFSET UNITYSDK_OFFSET(0xAB1E0A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__PUSHZONE_OFFSET UNITYSDK_OFFSET(0xAB1E1E0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__REMOVEDISABLEDZONES_OFFSET UNITYSDK_OFFSET(0xAB1DE30)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__REMOVEZONE_OFFSET UNITYSDK_OFFSET(0xAB1E2D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__TOPZONE_OFFSET UNITYSDK_OFFSET(0xAB1CEC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__UPDATEINCONTROLACTIONSTATUS_OFFSET UNITYSDK_OFFSET(0xAB1D420)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZoneManager_TypeDefinitionIndex = 41839;

	class UINavigationZoneManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsFocused_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>* _NavigationZones; // 0x20
		::UnityEngine::GameObject* _SavedNavigationTarget; // 0x28
		::System::Action* _ZoneChangeCallback; // 0x30
		::System::Action* _InControlActionHintChangeCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>* get_NavigationZones()
		{
			return ((::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_NAVIGATIONZONES_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_TopZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_TOPZONE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* get_FirstZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_FIRSTZONE_OFFSET))(this);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void set_IsFocused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SET_ISFOCUSED_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void AddZoneChangeCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ADDZONECHANGECALLBACK_OFFSET))(this, callback);
		}

		::System::Void AddInControlActionHintChangeCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ADDINCONTROLACTIONHINTCHANGECALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean InFirstZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_INFIRSTZONE_OFFSET))(this);
		}

		::System::Void OnGotFocused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONGOTFOCUSED_OFFSET))(this);
		}

		::System::Void OnLostFocused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONLOSTFOCUSED_OFFSET))(this);
		}

		::System::Void SetNavigationTarget(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SETNAVIGATIONTARGET_OFFSET))(this, target);
		}

		::System::Void SaveNavigationTarget(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SAVENAVIGATIONTARGET_OFFSET))(this, target);
		}

		::System::Void SetNavigationTargetIfZoneAtTop(::UnityEngine::GameObject* target, ::System::Boolean saveIfNotTop)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SETNAVIGATIONTARGETIFZONEATTOP_OFFSET))(this, target, saveIfNotTop);
		}

		::System::Void SaveNavigationTargetToZone(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_SAVENAVIGATIONTARGETTOZONE_OFFSET))(this, target);
		}

		::System::Void OnInControlInputSwitch(::InControl::InputDeviceClass type)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONINCONTROLINPUTSWITCH_OFFSET))(this, type);
		}

		::System::Void OnInControlActionHintChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONINCONTROLACTIONHINTCHANGE_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONZONEENTER_OFFSET))(this, zone);
		}

		::System::Void OnZoneExit(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONZONEEXIT_OFFSET))(this, zone);
		}

		::System::Boolean OnBackPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_ONBACKPRESSED_OFFSET))(this);
		}

		::System::Boolean BackZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER_BACKZONE_OFFSET))(this);
		}

		::System::Void _EnterZone(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ENTERZONE_OFFSET))(this, zone);
		}

		::System::Void _OnZoneChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ONZONECHANGED_OFFSET))(this);
		}

		::System::Void _UpdateInControlActionStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__UPDATEINCONTROLACTIONSTATUS_OFFSET))(this);
		}

		::System::Void _OnInControlActionHintChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__ONINCONTROLACTIONHINTCHANGE_OFFSET))(this);
		}

		::System::Void _ClearSelectedGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__CLEARSELECTEDGAMEOBJECT_OFFSET))(this);
		}

		::System::Void _RemoveDisabledZones()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__REMOVEDISABLEDZONES_OFFSET))(this);
		}

		::System::Void _PushZone(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__PUSHZONE_OFFSET))(this, zone);
		}

		::System::Void _PopToZone(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__POPTOZONE_OFFSET))(this, zone);
		}

		::RPG::UINavigation::UINavigationZone* _FirstZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__FIRSTZONE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* _TopZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__TOPZONE_OFFSET))(this);
		}

		::RPG::UINavigation::UINavigationZone* _FindLastZone()
		{
			return ((::RPG::UINavigation::UINavigationZone*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__FINDLASTZONE_OFFSET))(this);
		}

		::System::Void _RemoveZone(::RPG::UINavigation::UINavigationZone* zone)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONEMANAGER__REMOVEZONE_OFFSET))(this, zone);
		}
	};
}
