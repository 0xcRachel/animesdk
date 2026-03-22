#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectAudioEmitterType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_A87FFBFCDE3CB48A;
namespace RPG::Client { class EffectAudioItem; }
namespace System { class String; }

#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1920)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C19B0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1B40)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1810)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1B00)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x97C1750)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x97C1880)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x97C1CC0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x97C1C10)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x97C1C60)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEIN_OFFSET UNITYSDK_OFFSET(0x979D4A0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEOUT_OFFSET UNITYSDK_OFFSET(0x979D640)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_REPLAY_OFFSET UNITYSDK_OFFSET(0x97A2820)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1790)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TICK_OFFSET UNITYSDK_OFFSET(0x97C1A90)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TRIGGERAUDIOEVENT_OFFSET UNITYSDK_OFFSET(0x97C1B80)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET UNITYSDK_OFFSET(0x97C1D60)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1DD0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1E10)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1EF0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x97C1EB0)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x97C1D90)
#define RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x97C1E50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAudio_TypeDefinitionIndex = 55740;

	class MonoEffectPluginAudio : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::EffectAudioItem*>* EnterPatternName; // 0x28
		::Il2CppArray<::System::String*>* ExitPatternName; // 0x30
		::RPG::Client::MonoEffectAudioEmitterType emitterType; // 0x38
		::System::Boolean StopEnterEventOnDisable; // 0x3C
		::System::Boolean SetTargetShoeType; // 0x3D
		::System::String* TargetShoeType; // 0x40
		::System::String* FadeInAudioEffectName; // 0x48
		::System::String* FadeOutAudioEffectName; // 0x50
		::System::Boolean AutoMuteOnInvisible; // 0x58
		::Class_2_A87FFBFCDE3CB48A* Field_6_9; // 0x60
		::System::Boolean Field_6_10; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TICK_OFFSET))(this, a1);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_REPLAY_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void TriggerAudioEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_TRIGGERAUDIOEVENT_OFFSET))(this, a1);
		}

		::System::Void Method_6_737220D2233A9067()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_737220D2233A9067_OFFSET))(this);
		}

		::System::Void Method_6_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_6_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_6_0CC4BC19C602BCD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_METHOD_6_0CC4BC19C602BCD0_OFFSET))(this);
		}

		::System::Void OnFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEIN_OFFSET))(this);
		}

		::System::Void OnFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO_ONFADEOUT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINAUDIO___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}
	};
}
