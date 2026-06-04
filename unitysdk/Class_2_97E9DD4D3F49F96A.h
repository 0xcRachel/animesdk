#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginPerformEventListener; }
namespace System { class Object; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_97E9DD4D3F49F96A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B69D30)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x17B6A1B0)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_4F004CF01BD7EC9E_OFFSET UNITYSDK_OFFSET(0x17B6A2B0)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x17B69CC0)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_CCD2C4BCAE91E81B_OFFSET UNITYSDK_OFFSET(0x17B6A030)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x17B6A4A0)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_D3206160AE8D5F51_OFFSET UNITYSDK_OFFSET(0x17B6A080)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x17B6AC30)
#define CLASS_2_97E9DD4D3F49F96A_METHOD_2_E75A9B7403DC8631_OFFSET UNITYSDK_OFFSET(0x17B69DA0)
#define CLASS_2_97E9DD4D3F49F96A__CTOR_OFFSET UNITYSDK_OFFSET(0x17B6A920)
#define CLASS_2_97E9DD4D3F49F96A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B6AC90)
#define CLASS_2_97E9DD4D3F49F96A___ONFLYTOTARGET_B__6_0_OFFSET UNITYSDK_OFFSET(0x17B6A930)

inline static constexpr unsigned int Class_2_97E9DD4D3F49F96A_TypeDefinitionIndex = 65344;

class Class_2_97E9DD4D3F49F96A : public ::RPG::Client::BehaviorBase
{
public:
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E75A9B7403DC8631()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_E75A9B7403DC8631_OFFSET))(this);
	}

	::System::Void Method_2_D3206160AE8D5F51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_D3206160AE8D5F51_OFFSET))(this);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F004CF01BD7EC9E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_4F004CF01BD7EC9E_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginPerformEventListener* Method_2_CCD2C4BCAE91E81B()
	{
		return ((::RPG::Client::MonoEffectPluginPerformEventListener*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_CCD2C4BCAE91E81B_OFFSET))(this);
	}

	::System::Void __OnFlyToTarget_b__6_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A___ONFLYTOTARGET_B__6_0_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E9DD4D3F49F96A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
