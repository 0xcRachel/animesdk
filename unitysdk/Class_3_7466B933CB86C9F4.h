#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_379_Class_3_363670394F299996;
class Class_2_705B862E649BF345;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }

#define CLASS_3_7466B933CB86C9F4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106C5940)
#define CLASS_3_7466B933CB86C9F4_METHOD_3_7D6A0585C9881AB7_OFFSET UNITYSDK_OFFSET(0x106C5EC0)
#define CLASS_3_7466B933CB86C9F4_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x106C5C00)
#define CLASS_3_7466B933CB86C9F4_METHOD_3_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x106C6100)
#define CLASS_3_7466B933CB86C9F4_TICK_OFFSET UNITYSDK_OFFSET(0x106C5990)
#define CLASS_3_7466B933CB86C9F4__CTOR_OFFSET UNITYSDK_OFFSET(0x106C5510)
#define CLASS_3_7466B933CB86C9F4__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x106C5B50)
#define CLASS_3_7466B933CB86C9F4__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106C5D00)
#define CLASS_3_7466B933CB86C9F4__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106C5DE0)
#define CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x106C6340)
#define CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x106C6390)
#define CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x106C63A0)
#define CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106C63B0)
#define CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x106C63C0)

inline static constexpr unsigned int Class_3_7466B933CB86C9F4_TypeDefinitionIndex = 47599;

class Class_3_7466B933CB86C9F4 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitTargetAnimStateChange*>
{
public:
	::Class_2_705B862E649BF345* Field_3_4; // 0x68
	::Class_0_16E4307DCC419505_379_Class_3_363670394F299996* Field_3_0; // 0x70
	::Il2CppArray<::System::Int32>* Field_3_3; // 0x78
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x80
	::System::Int32 Field_3_1; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_7D6A0585C9881AB7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4_METHOD_3_7D6A0585C9881AB7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4_METHOD_3_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7466B933CB86C9F4___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
