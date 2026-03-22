#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeRewindControlManager_TimeRewindEntityPreloadState.h"
#include "unitysdk/System/Object.h"

class Class_1_09216AC83FE49B91;
class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class TimeRewindControlManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_ADDCNT_OFFSET UNITYSDK_OFFSET(0xA094C90)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xA094980)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xA0948F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FIREEFFECTASYNC_OFFSET UNITYSDK_OFFSET(0xA094860)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFCNT_OFFSET UNITYSDK_OFFSET(0xA094E20)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFPATH_OFFSET UNITYSDK_OFFSET(0xA094DE0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xA094E00)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_INITITEM_OFFSET UNITYSDK_OFFSET(0xA094A30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_LOAD_OFFSET UNITYSDK_OFFSET(0xA094AF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFCNT_OFFSET UNITYSDK_OFFSET(0xA094E30)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFPATH_OFFSET UNITYSDK_OFFSET(0xA094DF0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_LOADSTATE_OFFSET UNITYSDK_OFFSET(0xA094E10)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_UNLOAD_OFFSET UNITYSDK_OFFSET(0xA094E40)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA0955F0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0950B0)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFSOLOADED_OFFSET UNITYSDK_OFFSET(0xA095560)
#define RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONLOADEND_OFFSET UNITYSDK_OFFSET(0xA0954F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindControlManager_TimeRewindEntityPreloadEffItem_TypeDefinitionIndex = 48196;

	class TimeRewindControlManager_TimeRewindEntityPreloadEffItem : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__Count()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TimeRewindControlManager_TimeRewindEntityPreloadEffItem_TypeDefinitionIndex)->GetStaticField(0x8A80);
		}
		// static const ::System::String* ReplaceStr; // 0x0
		::Class_1_09216AC83FE49B91* _FireEffectHandler; // 0x10
		::RPG::Client::TriggerEffectParams* _TriggerEffectParams; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* BackwardSOPath; // 0x20
		::System::String* _EffPath_k__BackingField; // 0x28
		::RPG::Client::TimeRewindControlManager* _OwnerManager; // 0x30
		::System::Int32 _EffCnt_k__BackingField; // 0x38
		::System::Int32 _LoadBackwardSoCount; // 0x3C
		::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState _LoadState_k__BackingField; // 0x40
		::System::Int32 _NeedBackwardSoCount; // 0x44
		::System::Int32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_EffPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFPATH_OFFSET))(this);
		}

		::System::Void set_EffPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFPATH_OFFSET))(this, value);
		}

		::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState get_LoadState()
		{
			return ((::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_LOADSTATE_OFFSET))(this);
		}

		::System::Void set_LoadState(::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeRewindControlManager_TimeRewindEntityPreloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_LOADSTATE_OFFSET))(this, value);
		}

		::System::Int32 get_EffCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_GET_EFFCNT_OFFSET))(this);
		}

		::System::Void set_EffCnt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_SET_EFFCNT_OFFSET))(this, value);
		}

		::System::Void AddCnt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_ADDCNT_OFFSET))(this);
		}

		::System::Void InitItem(::System::String* effPath, ::RPG::Client::TimeRewindControlManager* manager)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::TimeRewindControlManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_INITITEM_OFFSET))(this, effPath, manager);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_LOAD_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_UNLOAD_OFFSET))(this);
		}

		::System::Void FireEffectAsync(::RPG::Client::TriggerEffectParams* triggerEffectParams, ::Class_1_09216AC83FE49B91* handler)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*, ::Class_1_09216AC83FE49B91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FIREEFFECTASYNC_OFFSET))(this, triggerEffectParams, handler);
		}

		::System::Void FinishEffect(::Class_1_09216AC83FE49B91* handler, ::System::Boolean needFadeout)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_09216AC83FE49B91*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_FINISHEFFECT_OFFSET))(this, handler, needFadeout);
		}

		::System::Void _OnEffLoadComplete(::Class_1_A0302E9AE0B8A2B9* pool, ::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFLOADCOMPLETE_OFFSET))(this, pool, success);
		}

		::System::Void _OnEffSoLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONEFFSOLOADED_OFFSET))(this);
		}

		::System::Void _OnLoadEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM__ONLOADEND_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEREWINDCONTROLMANAGER_TIMEREWINDENTITYPRELOADEFFITEM_CLEAR_OFFSET))(this);
		}
	};
}
