#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class StartEnterBattlePreload; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define CLASS_3_E08559FE8539CA8A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E6A850)
#define CLASS_3_E08559FE8539CA8A_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x10E6A8A0)
#define CLASS_3_E08559FE8539CA8A_METHOD_3_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x10E6AF90)
#define CLASS_3_E08559FE8539CA8A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10E6AA30)
#define CLASS_3_E08559FE8539CA8A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10E6A9E0)
#define CLASS_3_E08559FE8539CA8A__CTOR_OFFSET UNITYSDK_OFFSET(0x10E6A820)
#define CLASS_3_E08559FE8539CA8A___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E6B1F0)
#define CLASS_3_E08559FE8539CA8A___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10E6B240)

inline static constexpr unsigned int Class_3_E08559FE8539CA8A_TypeDefinitionIndex = 43533;

class Class_3_E08559FE8539CA8A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StartEnterBattlePreload*>
{
public:
	::System::Action* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartEnterBattlePreload* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartEnterBattlePreload*))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_3_DDA8A2337932DF10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A_METHOD_3_DDA8A2337932DF10_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E08559FE8539CA8A___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
