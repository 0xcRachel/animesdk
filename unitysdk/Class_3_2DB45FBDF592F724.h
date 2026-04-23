#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupPropertyChange; }
namespace System { class String; }

#define CLASS_3_2DB45FBDF592F724_METHOD_3_AEDB00189E8B88A5_OFFSET UNITYSDK_OFFSET(0x10035F90)
#define CLASS_3_2DB45FBDF592F724__CTOR_OFFSET UNITYSDK_OFFSET(0x10035D90)
#define CLASS_3_2DB45FBDF592F724__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x100364D0)
#define CLASS_3_2DB45FBDF592F724__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10036070)
#define CLASS_3_2DB45FBDF592F724__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x100362D0)
#define CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10036600)
#define CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x100365E0)
#define CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x100365F0)

inline static constexpr unsigned int Class_3_2DB45FBDF592F724_TypeDefinitionIndex = 49302;

class Class_3_2DB45FBDF592F724 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupPropertyChange*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_AEDB00189E8B88A5(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724_METHOD_3_AEDB00189E8B88A5_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2DB45FBDF592F724___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};
