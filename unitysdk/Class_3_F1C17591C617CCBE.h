#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_F1C17591C617CCBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF974740)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xF974660)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xF973C40)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_36522DC3472509E8_OFFSET UNITYSDK_OFFSET(0xF973E90)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_4509F1A60D25D24A_OFFSET UNITYSDK_OFFSET(0xF973CA0)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_629F67B1796E32E3_OFFSET UNITYSDK_OFFSET(0xF9741B0)
#define CLASS_3_F1C17591C617CCBE_METHOD_3_946BD6472BB097A4_OFFSET UNITYSDK_OFFSET(0xF9745A0)
#define CLASS_3_F1C17591C617CCBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF973930)
#define CLASS_3_F1C17591C617CCBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF974870)
#define CLASS_3_F1C17591C617CCBE__CTOR_OFFSET UNITYSDK_OFFSET(0xF973910)
#define CLASS_3_F1C17591C617CCBE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9749B0)
#define CLASS_3_F1C17591C617CCBE___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF9749C0)

inline static constexpr unsigned int Class_3_F1C17591C617CCBE_TypeDefinitionIndex = 53538;

class Class_3_F1C17591C617CCBE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePhoneOnCharacter*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	::System::String* Field_3_3; // 0x28
	::RPG::GameCore::GameEntity* Field_3_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_3_629F67B1796E32E3(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_629F67B1796E32E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_946BD6472BB097A4(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_946BD6472BB097A4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_4509F1A60D25D24A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_4509F1A60D25D24A_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_ONTASKRESET_OFFSET))(this);
	}

	static ::System::String* Method_3_36522DC3472509E8(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE_METHOD_3_36522DC3472509E8_OFFSET))(a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F1C17591C617CCBE___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
