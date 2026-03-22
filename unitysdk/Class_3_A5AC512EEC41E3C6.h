#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_A5AC512EEC41E3C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FAAC00)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x10FAAB20)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10FAA1D0)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_361D19031790B130_OFFSET UNITYSDK_OFFSET(0x10FAA740)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_4509F1A60D25D24A_OFFSET UNITYSDK_OFFSET(0x10FAA230)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_693C0B5DBE41057A_OFFSET UNITYSDK_OFFSET(0x10FAA420)
#define CLASS_3_A5AC512EEC41E3C6_METHOD_3_946BD6472BB097A4_OFFSET UNITYSDK_OFFSET(0x10FAAA60)
#define CLASS_3_A5AC512EEC41E3C6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10FA9EC0)
#define CLASS_3_A5AC512EEC41E3C6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10FAAD30)
#define CLASS_3_A5AC512EEC41E3C6__CTOR_OFFSET UNITYSDK_OFFSET(0x10FA9EA0)
#define CLASS_3_A5AC512EEC41E3C6___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FAAE70)
#define CLASS_3_A5AC512EEC41E3C6___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10FAAE80)

inline static constexpr unsigned int Class_3_A5AC512EEC41E3C6_TypeDefinitionIndex = 45759;

class Class_3_A5AC512EEC41E3C6 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePhoneOnCharacter*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::RPG::GameCore::GameEntity* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_3_361D19031790B130(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_361D19031790B130_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_946BD6472BB097A4(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_946BD6472BB097A4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_4509F1A60D25D24A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_4509F1A60D25D24A_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_ONTASKRESET_OFFSET))(this);
	}

	static ::System::String* Method_3_693C0B5DBE41057A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6_METHOD_3_693C0B5DBE41057A_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AC512EEC41E3C6___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
