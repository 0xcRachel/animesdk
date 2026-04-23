#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_384;
namespace RPG::GameCore { class CreateFMChannelReceiver; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4C8BDF68369B3E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C807D0)
#define CLASS_3_4C8BDF68369B3E35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12C804A0)
#define CLASS_3_4C8BDF68369B3E35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12C806B0)
#define CLASS_3_4C8BDF68369B3E35__CTOR_OFFSET UNITYSDK_OFFSET(0x12C80470)
#define CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C80940)
#define CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12C80930)

inline static constexpr unsigned int Class_3_4C8BDF68369B3E35_TypeDefinitionIndex = 48650;

class Class_3_4C8BDF68369B3E35 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateFMChannelReceiver*>
{
public:
	::Class_0_16E4307DCC419505_384* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateFMChannelReceiver* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateFMChannelReceiver*))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4C8BDF68369B3E35___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
