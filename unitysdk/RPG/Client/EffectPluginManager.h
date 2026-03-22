#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_750;
class Class_0_16E4307DCC419505_751;
class Class_0_16E4307DCC419505_752;
namespace RPG::Client { class TABehaviorBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EFFECTPLUGINMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9095620)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_1_OFFSET UNITYSDK_OFFSET(0x9095000)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_2_OFFSET UNITYSDK_OFFSET(0x9095310)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_OFFSET UNITYSDK_OFFSET(0x9094C30)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1E1A9420BB56E347_1_OFFSET UNITYSDK_OFFSET(0x9093EC0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1E1A9420BB56E347_OFFSET UNITYSDK_OFFSET(0x9093BF0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_31C7E4A9BCBB587D_OFFSET UNITYSDK_OFFSET(0x9094F40)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6A837F7B4F02C861_OFFSET UNITYSDK_OFFSET(0x9095960)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_1_OFFSET UNITYSDK_OFFSET(0x9095150)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_2_OFFSET UNITYSDK_OFFSET(0x9095460)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_OFFSET UNITYSDK_OFFSET(0x9094D80)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_804503EEE8654AA4_OFFSET UNITYSDK_OFFSET(0x9094190)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_94457A29A0D1E94E_OFFSET UNITYSDK_OFFSET(0x90939E0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_A0529F9E6E9763B9_OFFSET UNITYSDK_OFFSET(0x9094930)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_1_OFFSET UNITYSDK_OFFSET(0x90950C0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_2_OFFSET UNITYSDK_OFFSET(0x90953D0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_OFFSET UNITYSDK_OFFSET(0x9094CF0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_1_OFFSET UNITYSDK_OFFSET(0x9094B30)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_2_OFFSET UNITYSDK_OFFSET(0x9094BB0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x9094AB0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90939A0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_E1901823EC3735F3_OFFSET UNITYSDK_OFFSET(0x90944E0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_E74FF508BE0BE487_OFFSET UNITYSDK_OFFSET(0x9094480)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_1_OFFSET UNITYSDK_OFFSET(0x9094790)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_2_OFFSET UNITYSDK_OFFSET(0x9094860)
#define RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x90946C0)
#define RPG_CLIENT_EFFECTPLUGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9095CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPluginManager_TypeDefinitionIndex = 56087;

	class EffectPluginManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginTickIDList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginLateTickIDList; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _EffectPluginEndOfLateTickIDList; // 0x20
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_750*>* _EffectPluginTickList; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_751*>* _EffectPluginLateTickList; // 0x30
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_752*>* _EffectPluginEndOfLateTickList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::TABehaviorBase*>* _TABehaviorID2BehaviorDic; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _GOInstanceID2TABehaviorIDListDic; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _GOInstanceID2ResetTABehaviorIDListDic; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>* _TmpBehaviorList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_94457A29A0D1E94E(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_94457A29A0D1E94E_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1E1A9420BB56E347(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1E1A9420BB56E347_OFFSET))(this, a1);
		}

		::System::Void Method_1_1E1A9420BB56E347_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1E1A9420BB56E347_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_804503EEE8654AA4(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::TABehaviorBase* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::TABehaviorBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_804503EEE8654AA4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_E74FF508BE0BE487(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_E74FF508BE0BE487_OFFSET))(this, a1);
		}

		::System::Void Method_1_E1901823EC3735F3(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_E1901823EC3735F3_OFFSET))(this, a1);
		}

		::System::Void Method_1_A0529F9E6E9763B9(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_A0529F9E6E9763B9_OFFSET))(this, a1);
		}

		::System::Void Method_1_F624506052E4790C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_OFFSET))(this, a1);
		}

		::System::Void Method_1_C6FA776B2F1B31A6(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_OFFSET))(this, a1);
		}

		::System::Void Method_1_1107D58E9DAAA01A(::Class_0_16E4307DCC419505_750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_OFFSET))(this, a1);
		}

		::System::Void Method_1_BC34D12C14FA32D8(::Class_0_16E4307DCC419505_750* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_750*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_OFFSET))(this, a1);
		}

		::System::Void Method_1_6C58A7296FE35C37(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_OFFSET))(this, a1);
		}

		::System::Void Method_1_F624506052E4790C_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_C6FA776B2F1B31A6_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_1107D58E9DAAA01A_1(::Class_0_16E4307DCC419505_751* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_BC34D12C14FA32D8_1(::Class_0_16E4307DCC419505_751* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_751*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_6C58A7296FE35C37_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_1_OFFSET))(this, a1);
		}

		::System::Void Method_1_F624506052E4790C_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_F624506052E4790C_2_OFFSET))(this, a1);
		}

		::System::Void Method_1_C6FA776B2F1B31A6_2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_C6FA776B2F1B31A6_2_OFFSET))(this, a1);
		}

		::System::Void Method_1_1107D58E9DAAA01A_2(::Class_0_16E4307DCC419505_752* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_752*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_1107D58E9DAAA01A_2_OFFSET))(this, a1);
		}

		::System::Void Method_1_BC34D12C14FA32D8_2(::Class_0_16E4307DCC419505_752* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_752*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_BC34D12C14FA32D8_2_OFFSET))(this, a1);
		}

		::System::Void Method_1_6C58A7296FE35C37_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6C58A7296FE35C37_2_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::TABehaviorBase* Method_1_31C7E4A9BCBB587D(::System::Int32 a1)
		{
			return ((::RPG::Client::TABehaviorBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_31C7E4A9BCBB587D_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>* Method_1_6A837F7B4F02C861(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TABehaviorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPLUGINMANAGER_METHOD_1_6A837F7B4F02C861_OFFSET))(this, a1);
		}
	};
}
