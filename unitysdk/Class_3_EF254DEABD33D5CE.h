#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupPropertyChange; }
namespace System { class String; }

#define CLASS_3_EF254DEABD33D5CE_METHOD_3_4F262B727614748A_OFFSET UNITYSDK_OFFSET(0x157249B0)
#define CLASS_3_EF254DEABD33D5CE__CTOR_OFFSET UNITYSDK_OFFSET(0x157247A0)
#define CLASS_3_EF254DEABD33D5CE__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15724F50)
#define CLASS_3_EF254DEABD33D5CE__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15724AC0)
#define CLASS_3_EF254DEABD33D5CE__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15724D40)
#define CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x15725080)
#define CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15725060)
#define CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15725070)

inline static constexpr unsigned int Class_3_EF254DEABD33D5CE_TypeDefinitionIndex = 49969;

class Class_3_EF254DEABD33D5CE : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitGroupPropertyChange*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupPropertyChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupPropertyChange*))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4F262B727614748A(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE_METHOD_3_4F262B727614748A_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF254DEABD33D5CE___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};
