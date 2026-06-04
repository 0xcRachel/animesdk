#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_98FFFA7C5D9AE91D;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_8F23D0A7CDC02F2E_3_METHOD_3_7C3BCB023B0D3F9C_OFFSET UNITYSDK_OFFSET(0x1663AD40)
#define CLASS_3_8F23D0A7CDC02F2E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1663AA30)
#define CLASS_3_8F23D0A7CDC02F2E_3__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1663ABC0)
#define CLASS_3_8F23D0A7CDC02F2E_3__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1663AC80)
#define CLASS_3_8F23D0A7CDC02F2E_3___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1663AEF0)
#define CLASS_3_8F23D0A7CDC02F2E_3___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1663AF00)

inline static constexpr unsigned int Class_3_8F23D0A7CDC02F2E_3_TypeDefinitionIndex = 49986;

class Class_3_8F23D0A7CDC02F2E_3 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_98FFFA7C5D9AE91D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_98FFFA7C5D9AE91D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_98FFFA7C5D9AE91D*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7C3BCB023B0D3F9C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3_METHOD_3_7C3BCB023B0D3F9C_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F23D0A7CDC02F2E_3___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
