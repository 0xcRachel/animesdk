#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Renderer; }

#define RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x15582260)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15582570)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x15582340)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x15582010)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET UNITYSDK_OFFSET(0x15581F70)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x155826C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x15582700)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x155826E0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x15581D90)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15582650)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x15581EA0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15581DE0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15581F20)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET UNITYSDK_OFFSET(0x155821C0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET UNITYSDK_OFFSET(0x155824E0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET UNITYSDK_OFFSET(0x155823A0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET UNITYSDK_OFFSET(0x155826D0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET UNITYSDK_OFFSET(0x15582600)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET UNITYSDK_OFFSET(0x155826F0)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15582710)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x15581D20)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15582780)
#define RPG_GAMECORE_UI3DPETDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x15582720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DPetDataComponent_TypeDefinitionIndex = 53052;

	class UI3DPetDataComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoEffectManager* _EffectManagerRef; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* _CacheRenderers; // 0x20
		::RPG::GameCore::ManikinPetConfig* _JsonConfigRef_k__BackingField; // 0x28
		::System::Action* EndOfUpdateCallback; // 0x30
		::UnityEngine::Animator* _AnimatorRef_k__BackingField; // 0x38
		::System::Boolean _bEnableIdleTimer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void InitComponent(::RPG::GameCore::ManikinPetConfig* jsonConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_INITCOMPONENT_OFFSET))(this, jsonConfig);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* GetAllRenderers()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GETALLRENDERERS_OFFSET))(this);
		}

		::System::Void FireEffectByPath(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_FIREEFFECTBYPATH_OFFSET))(this, path);
		}

		::System::Void RemoveEffectByPath(::System::String* path, ::System::Boolean bIsNeedFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_REMOVEEFFECTBYPATH_OFFSET))(this, path, bIsNeedFadeout);
		}

		::System::Void BeginDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_BEGINDRAG_OFFSET))(this);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void SetVisible(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETVISIBLE_OFFSET))(this, isShow);
		}

		::System::Void SetEnableIdleShowIndex(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SETENABLEIDLESHOWINDEX_OFFSET))(this, index, enable);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnDetailPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_ONDETAILPROPERTYCHANGE_OFFSET))(this);
		}

		::UnityEngine::Animator* get_AnimatorRef()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ANIMATORREF_OFFSET))(this);
		}

		::System::Void set_AnimatorRef(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ANIMATORREF_OFFSET))(this, value);
		}

		::RPG::GameCore::ManikinPetConfig* get_JsonConfigRef()
		{
			return ((::RPG::GameCore::ManikinPetConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_JSONCONFIGREF_OFFSET))(this);
		}

		::System::Void set_JsonConfigRef(::RPG::GameCore::ManikinPetConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_JSONCONFIGREF_OFFSET))(this, value);
		}

		::System::Boolean get_EnableIdleTimer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_GET_ENABLEIDLETIMER_OFFSET))(this);
		}

		::System::Void set_EnableIdleTimer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT_SET_ENABLEIDLETIMER_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DPETDATACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}
