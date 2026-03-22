#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_71F5637F13C3D62F;
class Class_2_D693101EA35A1AB3;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_62220FA31A3A532E_INIT_OFFSET UNITYSDK_OFFSET(0x8641F90)
#define CLASS_2_62220FA31A3A532E_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x8642C80)
#define CLASS_2_62220FA31A3A532E_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x8642A60)
#define CLASS_2_62220FA31A3A532E_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x86416C0)
#define CLASS_2_62220FA31A3A532E_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x8641950)
#define CLASS_2_62220FA31A3A532E_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x8642EA0)
#define CLASS_2_62220FA31A3A532E_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x8641E40)
#define CLASS_2_62220FA31A3A532E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8641E00)
#define CLASS_2_62220FA31A3A532E_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x8642A00)
#define CLASS_2_62220FA31A3A532E_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x86429A0)
#define CLASS_2_62220FA31A3A532E_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x86428D0)
#define CLASS_2_62220FA31A3A532E_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x8642950)
#define CLASS_2_62220FA31A3A532E_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x8641810)
#define CLASS_2_62220FA31A3A532E_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x8641860)
#define CLASS_2_62220FA31A3A532E_ONFADING_OFFSET UNITYSDK_OFFSET(0x8641710)
#define CLASS_2_62220FA31A3A532E_RELEASE_OFFSET UNITYSDK_OFFSET(0x8641EF0)
#define CLASS_2_62220FA31A3A532E__CTOR_OFFSET UNITYSDK_OFFSET(0x8641660)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8643110)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x8643180)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x8642FA0)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x8643010)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x8642F30)
#define CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x8643080)

inline static constexpr unsigned int Class_2_62220FA31A3A532E_TypeDefinitionIndex = 39015;

class Class_2_62220FA31A3A532E : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Il2CppArray<::Class_2_71F5637F13C3D62F*>* Field_2_0; // 0x28
	::Class_2_D693101EA35A1AB3* Field_2_1; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_D693101EA35A1AB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_D693101EA35A1AB3*))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_D693101EA35A1AB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D693101EA35A1AB3*))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::Class_2_D693101EA35A1AB3* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_D693101EA35A1AB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_0C3FAAE3BE7F67FA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B58565C64C89246C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E_METHOD_2_B58565C64C89246C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single P0, ::ScenenLightManager::FadingState P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADING_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState P0)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_INIT_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_62220FA31A3A532E___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, P0);
	}
};
