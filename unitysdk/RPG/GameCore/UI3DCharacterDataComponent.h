#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class ManikinLookAtController; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinCharacterConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA5B7890)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5B7E40)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0xA5B7970)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xA5B7720)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0xA5B7680)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET UNITYSDK_OFFSET(0xA5B7B20)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xA5B7FB0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xA5B7FF0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA5B7FD0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xA5B8000)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA5B7250)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B7F20)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0xA5B7530)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0xA5B72A0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0xA5B75E0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0xA5B77F0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0xA5B7D90)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET UNITYSDK_OFFSET(0xA5B7AA0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET UNITYSDK_OFFSET(0xA5B79D0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0xA5B7C50)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0xA5B7FC0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xA5B7ED0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0xA5B7FE0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0xA5B74E0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B8010)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA5B71F0)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA5B8080)
#define RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xA5B8020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DCharacterDataComponent_TypeDefinitionIndex = 45308;

	class UI3DCharacterDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::ManikinLookAtController* _lookAtController; // 0x18
		::RPG::GameCore::ManikinCharacterConfig* _JsonConfigRef_k__BackingField; // 0x20
		::System::Action* EndOfUpdateCallback; // 0x28
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x30
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x38
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x40
		::System::Boolean _bEnableIdleTimer; // 0x48
		::System::Boolean _bLookAtEnableIdleTimer; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinCharacterConfig* jsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_INITCOMPONENT_OFFSET))(this, jsonConfig);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void RemoveEffectByPath(::System::String* path, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, path, bIsNeedFadeout);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetLookAt(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_OFFSET))(this, target);
		}

		::System::Void SetLookAt_1(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETLOOKAT_1_OFFSET))(this, target);
		}

		::System::Nullable_1<::UnityEngine::Quaternion> GetTeamRotationByIndex(::System::UInt32 index)
		{
			return ((::System::Nullable_1<::UnityEngine::Quaternion>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GETTEAMROTATIONBYINDEX_OFFSET))(this, index);
		}

		::System::Void SetVisible(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETVISIBLE_OFFSET))(this, isShow);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, index, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnDetailPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, value);
		}

		::RPG::GameCore::ManikinCharacterConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinCharacterConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinCharacterConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, value);
		}

		::System::Boolean get_LookAtEnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_GET_LOOKATENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_LookAtEnableIdleTimer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT_SET_LOOKATENABLEIDLETIMER_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DCHARACTERDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
