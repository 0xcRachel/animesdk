#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_0_16E4307DCC419505_405_Class_3_363670394F299996;
class Class_2_CB25D7A6FABF07EF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTargetAnimStateChange; }

#define CLASS_3_47EBE2487824C15F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171B5E90)
#define CLASS_3_47EBE2487824C15F_METHOD_3_6D0E3B39489F2C19_OFFSET UNITYSDK_OFFSET(0x171B6450)
#define CLASS_3_47EBE2487824C15F_METHOD_3_AF29D9D849AE3973_OFFSET UNITYSDK_OFFSET(0x171B6160)
#define CLASS_3_47EBE2487824C15F_METHOD_3_BED35D89A6A10D7A_OFFSET UNITYSDK_OFFSET(0x171B6600)
#define CLASS_3_47EBE2487824C15F_TICK_OFFSET UNITYSDK_OFFSET(0x171B5EE0)
#define CLASS_3_47EBE2487824C15F__CTOR_OFFSET UNITYSDK_OFFSET(0x171B5A80)
#define CLASS_3_47EBE2487824C15F__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x171B60B0)
#define CLASS_3_47EBE2487824C15F__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x171B6260)
#define CLASS_3_47EBE2487824C15F__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x171B6360)
#define CLASS_3_47EBE2487824C15F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x171B6840)
#define CLASS_3_47EBE2487824C15F___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x171B6890)
#define CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x171B68A0)
#define CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x171B68B0)
#define CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x171B68C0)

inline static constexpr unsigned int Class_3_47EBE2487824C15F_TypeDefinitionIndex = 55064;

class Class_3_47EBE2487824C15F : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitTargetAnimStateChange*>
{
public:
	::Class_2_CB25D7A6FABF07EF* Field_3_0; // 0x68
	::Il2CppArray<::System::Int32>* Field_3_1; // 0x70
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x78
	::Class_0_16E4307DCC419505_405_Class_3_363670394F299996* Field_3_3; // 0x80
	::System::Int32 Field_3_4; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTargetAnimStateChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTargetAnimStateChange*))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F_TICK_OFFSET))(this, a1);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_6D0E3B39489F2C19(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F_METHOD_3_6D0E3B39489F2C19_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_BED35D89A6A10D7A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F_METHOD_3_BED35D89A6A10D7A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AF29D9D849AE3973(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F_METHOD_3_AF29D9D849AE3973_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47EBE2487824C15F___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
