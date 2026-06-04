#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropStateChangeV2; }

#define CLASS_3_91C97D1F1910C11C_METHOD_3_761453C1386E7BBC_OFFSET UNITYSDK_OFFSET(0x172D9EB0)
#define CLASS_3_91C97D1F1910C11C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x172D9CB0)
#define CLASS_3_91C97D1F1910C11C__CTOR_OFFSET UNITYSDK_OFFSET(0x172D98F0)
#define CLASS_3_91C97D1F1910C11C__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x172D9A60)
#define CLASS_3_91C97D1F1910C11C__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x172D9D10)
#define CLASS_3_91C97D1F1910C11C__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x172D9DE0)
#define CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x172DA050)
#define CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x172DA040)
#define CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x172DA0B0)
#define CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x172DA0C0)

inline static constexpr unsigned int Class_3_91C97D1F1910C11C_TypeDefinitionIndex = 49985;

class Class_3_91C97D1F1910C11C : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitPropStateChangeV2*>
{
public:
	::System::UInt32 Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x6C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropStateChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropStateChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C__PREPAREDATA_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_761453C1386E7BBC(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C_METHOD_3_761453C1386E7BBC_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_91C97D1F1910C11C___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
