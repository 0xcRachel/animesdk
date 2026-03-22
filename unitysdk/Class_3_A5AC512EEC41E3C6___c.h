#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_A5AC512EEC41E3C6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FAAE90)
#define CLASS_3_A5AC512EEC41E3C6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10FAAEC0)
#define CLASS_3_A5AC512EEC41E3C6___C___CREATEPHONE_B__3_0_OFFSET UNITYSDK_OFFSET(0x10FAAED0)

inline static constexpr unsigned int Class_3_A5AC512EEC41E3C6___c_TypeDefinitionIndex = 45760;

class Class_3_A5AC512EEC41E3C6___c : public ::System::Object
{
public:
	static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__3_0()
	{
		return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A5AC512EEC41E3C6___c_TypeDefinitionIndex)->GetStaticField(0x38020);
	}
	static ::Class_3_A5AC512EEC41E3C6___c** StaticGet___9()
	{
		return (::Class_3_A5AC512EEC41E3C6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_A5AC512EEC41E3C6___c_TypeDefinitionIndex)->GetStaticField(0x38028);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6___C__CTOR_OFFSET))(this);
	}

	::System::Void __CreatePhone_b__3_0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6___C___CREATEPHONE_B__3_0_OFFSET))(this, effect, extraParams);
	}
};
