#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_23D2CD7D9920A53A.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixTaskB; }

#define CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C8F580)
#define CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12C8F480)
#define CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12C8F530)
#define CLASS_3_EECDAEEEADAB2602_TICK_OFFSET UNITYSDK_OFFSET(0x12C8F4D0)
#define CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET UNITYSDK_OFFSET(0x12C8F400)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12C8F6B0)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12C8F5C0)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12C8F640)
#define CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x12C8F5D0)

inline static constexpr unsigned int Class_3_EECDAEEEADAB2602_TypeDefinitionIndex = 51437;

class Class_3_EECDAEEEADAB2602 : public ::Class_2_23D2CD7D9920A53A
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixTaskB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixTaskB*))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EECDAEEEADAB2602___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
