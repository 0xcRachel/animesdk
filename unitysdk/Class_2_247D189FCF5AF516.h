#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AD0A0FF0019FC986.h"
#include "unitysdk/ScenenLightManager/FadingState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A250797A2E6CFBDB;
class Class_2_DC742B72F4019999;
class SceneLightVolume;
namespace System { class String; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_2_247D189FCF5AF516_INIT_OFFSET UNITYSDK_OFFSET(0x150A4D30)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET UNITYSDK_OFFSET(0x150A5D60)
#define CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_OFFSET UNITYSDK_OFFSET(0x150A5B60)
#define CLASS_2_247D189FCF5AF516_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x150A44D0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET UNITYSDK_OFFSET(0x150A4740)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B58565C64C89246C_OFFSET UNITYSDK_OFFSET(0x150A5F60)
#define CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x150A4BE0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x150A4BA0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_1_OFFSET UNITYSDK_OFFSET(0x150A5B00)
#define CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_OFFSET UNITYSDK_OFFSET(0x150A5AA0)
#define CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x150A59D0)
#define CLASS_2_247D189FCF5AF516_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x150A5A50)
#define CLASS_2_247D189FCF5AF516_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x150A4610)
#define CLASS_2_247D189FCF5AF516_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x150A4660)
#define CLASS_2_247D189FCF5AF516_ONFADING_OFFSET UNITYSDK_OFFSET(0x150A4520)
#define CLASS_2_247D189FCF5AF516_RELEASE_OFFSET UNITYSDK_OFFSET(0x150A4C90)
#define CLASS_2_247D189FCF5AF516__CTOR_OFFSET UNITYSDK_OFFSET(0x150A4470)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x150A6190)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET UNITYSDK_OFFSET(0x150A61F0)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET UNITYSDK_OFFSET(0x150A6050)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGEND_OFFSET UNITYSDK_OFFSET(0x150A60B0)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADING_OFFSET UNITYSDK_OFFSET(0x150A5FF0)
#define CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x150A6110)

inline static constexpr unsigned int Class_2_247D189FCF5AF516_TypeDefinitionIndex = 46487;

class Class_2_247D189FCF5AF516 : public ::Class_1_AD0A0FF0019FC986
{
public:
	::Class_2_A250797A2E6CFBDB* Field_2_0; // 0x28
	::Il2CppArray<::Class_2_DC742B72F4019999*>* Field_2_1; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void Method_2_54C923DF429CBBBA(::SceneLightVolume* a1, ::Class_2_A250797A2E6CFBDB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::SceneLightVolume*, ::Class_2_A250797A2E6CFBDB*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_54C923DF429CBBBA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B6F71B3A651A50DC(::Class_2_A250797A2E6CFBDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A250797A2E6CFBDB*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_RELEASE_OFFSET))(this);
	}

	::System::Void Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_INIT_OFFSET))(this, a1);
	}

	::System::Void OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_ONENVOBJENABLE_OFFSET))(this, a1);
	}

	::Class_2_A250797A2E6CFBDB* Method_2_E5630A859AA24FB3()
	{
		return ((::Class_2_A250797A2E6CFBDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_E5630A859AA24FB3_OFFSET))(this);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_D132248D19C04D39_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_D132248D19C04D39_1_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Light* Method_2_0C3FAAE3BE7F67FA_1(::System::String* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_0C3FAAE3BE7F67FA_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B58565C64C89246C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516_METHOD_2_B58565C64C89246C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnFading(::System::Single a1, ::ScenenLightManager::FadingState a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADING_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnFadingBegin(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGBEGIN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnFadingEnd(::ScenenLightManager::FadingState a1)
	{
		return ((::System::Void(*)(::PVOID, ::ScenenLightManager::FadingState))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONFADINGEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Release()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_RELEASE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_INIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnEnvObjEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_247D189FCF5AF516___IFIXBASEPROXY_ONENVOBJENABLE_OFFSET))(this, a1);
	}
};
