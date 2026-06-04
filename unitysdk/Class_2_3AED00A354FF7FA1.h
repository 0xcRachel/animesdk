#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

class Class_1_004034A1FAAF468A;
class Class_1_4B703F2764047929;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPGTools { class MonoTimelineEffect; }
namespace RPGTools::Timeline { class MonoEffectFollowTimelinePlugin; }
namespace RPGTools::Timeline::VFX { class VFXTimelineClip; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define CLASS_2_3AED00A354FF7FA1_METHOD_2_0A0D9CC2EC744C6B_OFFSET UNITYSDK_OFFSET(0x143815E0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_15169B7DEE2D29F3_OFFSET UNITYSDK_OFFSET(0x143810E0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_17DD0384C21E3497_OFFSET UNITYSDK_OFFSET(0x14381210)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_1CC4F6DB6780B6F9_OFFSET UNITYSDK_OFFSET(0x143813C0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_1D3E0D19D91C431C_OFFSET UNITYSDK_OFFSET(0x14380F20)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_3429B5D19B31C90F_OFFSET UNITYSDK_OFFSET(0x143804C0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x1437F7C0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_3FCF62A0B1BFB5E7_OFFSET UNITYSDK_OFFSET(0x14380D90)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1437F9F0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x14381AF0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_84EAB34EABC7F508_OFFSET UNITYSDK_OFFSET(0x1437F6B0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_A8B662A2CC4B2F7D_OFFSET UNITYSDK_OFFSET(0x143816B0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_C6B406092075024B_OFFSET UNITYSDK_OFFSET(0x143807D0)
#define CLASS_2_3AED00A354FF7FA1_METHOD_2_F4BCBAA3555FAF27_OFFSET UNITYSDK_OFFSET(0x14380700)
#define CLASS_2_3AED00A354FF7FA1_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14380210)
#define CLASS_2_3AED00A354FF7FA1_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1437F3A0)
#define CLASS_2_3AED00A354FF7FA1_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x1437F240)
#define CLASS_2_3AED00A354FF7FA1_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x1437F2F0)
#define CLASS_2_3AED00A354FF7FA1_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x143802E0)
#define CLASS_2_3AED00A354FF7FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x14381B40)
#define CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x14381B80)
#define CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x14381B70)
#define CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x14381B50)
#define CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x14381B60)
#define CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14381B90)

inline static constexpr unsigned int Class_2_3AED00A354FF7FA1_TypeDefinitionIndex = 45955;

class Class_2_3AED00A354FF7FA1 : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x10
	::UnityEngine::Playables::PlayableDirector* Field_2_1; // 0x18
	::UnityEngine::Object* Field_2_2; // 0x20
	::UnityEngine::Timeline::TrackAsset* Field_2_3; // 0x28
	::RPGTools::Timeline::VFX::VFXTimelineClip* Field_2_4; // 0x30
	::RPGTools::Timeline::MonoEffectFollowTimelinePlugin* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_6; // 0x40
	::Class_1_4B703F2764047929* Field_2_7; // 0x48
	::RPGTools::MonoTimelineEffect* Field_2_8; // 0x50
	::RPG::Client::MonoEffect* Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x60
	::System::Single Field_2_11; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_84EAB34EABC7F508()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_84EAB34EABC7F508_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_3429B5D19B31C90F(::System::String* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_3429B5D19B31C90F_OFFSET))(this, a1);
	}

	::Class_1_004034A1FAAF468A* Method_2_17DD0384C21E3497(::System::String* a1)
	{
		return ((::Class_1_004034A1FAAF468A*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_17DD0384C21E3497_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4BCBAA3555FAF27(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_F4BCBAA3555FAF27_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1CC4F6DB6780B6F9(::UnityEngine::Component* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_1CC4F6DB6780B6F9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6B406092075024B(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_C6B406092075024B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3FCF62A0B1BFB5E7(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_3FCF62A0B1BFB5E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D3E0D19D91C431C(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_1D3E0D19D91C431C_OFFSET))(this, a1);
	}

	::System::Void Method_2_15169B7DEE2D29F3(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_15169B7DEE2D29F3_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A0D9CC2EC744C6B(::RPG::Client::MonoEffectPluginFollow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffectPluginFollow*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_0A0D9CC2EC744C6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_A8B662A2CC4B2F7D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_A8B662A2CC4B2F7D_OFFSET))(this, a1);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStart(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONGRAPHSTART_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_3AED00A354FF7FA1___IFIXBASEPROXY_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
	}
};
