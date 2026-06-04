#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"

namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_B82F43BE25916F7C_APPLY_OFFSET UNITYSDK_OFFSET(0x16E6ED30)
#define CLASS_2_B82F43BE25916F7C_INIT_OFFSET UNITYSDK_OFFSET(0x16E6EDC0)
#define CLASS_2_B82F43BE25916F7C_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x16E6EE10)
#define CLASS_2_B82F43BE25916F7C_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x16E6EC30)
#define CLASS_2_B82F43BE25916F7C_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x16E6EC80)
#define CLASS_2_B82F43BE25916F7C_ONFADING_OFFSET UNITYSDK_OFFSET(0x16E6EBD0)
#define CLASS_2_B82F43BE25916F7C_RELEASE_OFFSET UNITYSDK_OFFSET(0x16E6ED80)
#define CLASS_2_B82F43BE25916F7C_TICK_OFFSET UNITYSDK_OFFSET(0x16E6ECD0)
#define CLASS_2_B82F43BE25916F7C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E6EB70)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_APPLY_OFFSET UNITYSDK_OFFSET(0x16E6EFE0)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x16E6F0C0)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x16E6F120)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x16E6EEC0)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x16E6EF20)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x16E6EE60)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x16E6F040)
#define CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x16E6EF80)

inline static constexpr unsigned int Class_2_B82F43BE25916F7C_TypeDefinitionIndex = 46489;

class Class_2_B82F43BE25916F7C : public ::Class_1_AD0A0FF0019FC986
{
public:
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_APPLY_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Apply(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_APPLY_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B82F43BE25916F7C___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, a1);
	}
};
