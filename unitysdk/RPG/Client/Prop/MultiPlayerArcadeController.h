#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class SceneTV; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x10369530)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_GET_NEEDSCENETV_OFFSET UNITYSDK_OFFSET(0x1036A050)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10369A60)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x103695B0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10369570)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_SET_NEEDSCENETV_OFFSET UNITYSDK_OFFSET(0x1036A060)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x103697B0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1036A070)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__FINDSCENETVS_OFFSET UNITYSDK_OFFSET(0x10369800)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0x10369AA0)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__ONSCHEDULESTART_OFFSET UNITYSDK_OFFSET(0x1036A000)
#define RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__UNREGISTERWAITFOROPENSCHEDULE_OFFSET UNITYSDK_OFFSET(0x10369600)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MultiPlayerArcadeController_TypeDefinitionIndex = 71683;

	class MultiPlayerArcadeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _NeedSceneTV_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::SceneTV*>* sceneTVs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _FindSceneTVs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__FINDSCENETVS_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void _OnScheduleStart(::RPG::Client::ScheduleData* scheduleData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__ONSCHEDULESTART_OFFSET))(this, scheduleData);
		}

		::System::Void _UnregisterWaitForOpenSchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER__UNREGISTERWAITFOROPENSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_NeedSceneTV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_GET_NEEDSCENETV_OFFSET))(this);
		}

		::System::Void set_NeedSceneTV(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_MULTIPLAYERARCADECONTROLLER_SET_NEEDSCENETV_OFFSET))(this, value);
		}
	};
}
