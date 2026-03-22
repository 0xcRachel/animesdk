#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class MissionModule; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMissionCustomValueChange; }
namespace System { class String; }

#define CLASS_3_6246C27F2084CA28_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD871770)
#define CLASS_3_6246C27F2084CA28_METHOD_3_6EA824B987E032BB_OFFSET UNITYSDK_OFFSET(0xD871990)
#define CLASS_3_6246C27F2084CA28__CTOR_OFFSET UNITYSDK_OFFSET(0xD8714E0)
#define CLASS_3_6246C27F2084CA28__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xD8717C0)
#define CLASS_3_6246C27F2084CA28__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD871810)
#define CLASS_3_6246C27F2084CA28__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD8718D0)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD871AF0)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xD871B40)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD871B90)
#define CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD871BA0)

inline static constexpr unsigned int Class_3_6246C27F2084CA28_TypeDefinitionIndex = 42258;

class Class_3_6246C27F2084CA28 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitMissionCustomValueChange*>
{
public:
	::RPG::Client::MissionModule* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMissionCustomValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMissionCustomValueChange*))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28_DISPOSE_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6EA824B987E032BB(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28_METHOD_3_6EA824B987E032BB_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6246C27F2084CA28___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
