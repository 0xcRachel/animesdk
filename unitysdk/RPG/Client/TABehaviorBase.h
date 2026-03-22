#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TABehaviorTickMode.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0185B0)
#define RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xA018CF0)
#define RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA018D60)
#define RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xA018D80)
#define RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET UNITYSDK_OFFSET(0xA018C90)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA018640)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA0186F0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xA018510)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_646174E3BA50E41A_OFFSET UNITYSDK_OFFSET(0xA018560)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_8457B19F3C23386D_OFFSET UNITYSDK_OFFSET(0xA0187F0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_10_OFFSET UNITYSDK_OFFSET(0xA018BF0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA018770)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xA0187B0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xA018A30)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xA018A70)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xA018AB0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xA018AF0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_7_OFFSET UNITYSDK_OFFSET(0xA018B30)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_8_OFFSET UNITYSDK_OFFSET(0xA018B70)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_9_OFFSET UNITYSDK_OFFSET(0xA018BB0)
#define RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA018730)
#define RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xA018D50)
#define RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET UNITYSDK_OFFSET(0xA018D70)
#define RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET UNITYSDK_OFFSET(0xA018C30)
#define RPG_CLIENT_TABEHAVIORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA018D90)
#define RPG_CLIENT_TABEHAVIORBASE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA018DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int TABehaviorBase_TypeDefinitionIndex = 56397;

	class TABehaviorBase : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Boolean IsExecuteInEditMode; // 0x18
		::System::Boolean IsNeedTick; // 0x19
		::System::Boolean IsNeedLateTick; // 0x1A
		::System::Boolean IsNeedEndOfLateTick; // 0x1B
		::System::Boolean IsPreloading; // 0x1C
		::System::Boolean _IsEnabled_k__BackingField; // 0x1D
		::RPG::Client::TABehaviorTickMode _TickMode_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _OwnerEntity; // 0x28
		::Il2CppArray<::System::String*>* _DependentAssets; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_57D80B372834C5D1_OFFSET))(this, a1);
		}

		::System::Void Method_2_646174E3BA50E41A(::RPG::Client::TABehaviorTickMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_646174E3BA50E41A_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Method_2_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_8457B19F3C23386D(::Il2CppArray<::System::String*>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_8457B19F3C23386D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_5_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_6_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_7_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_8_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_9_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_METHOD_2_CA373AA1C7054598_10_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void set_IsEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_ISENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_ISENABLED_OFFSET))(this);
		}

		::System::Void set_TickMode(::RPG::Client::TABehaviorTickMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TABehaviorTickMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_SET_TICKMODE_OFFSET))(this, value);
		}

		::RPG::Client::TABehaviorTickMode get_TickMode()
		{
			return ((::RPG::Client::TABehaviorTickMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE_GET_TICKMODE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABEHAVIORBASE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
