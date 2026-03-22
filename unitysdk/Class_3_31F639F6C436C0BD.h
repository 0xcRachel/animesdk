#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class SetStageItemState; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_31F639F6C436C0BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD21F1E0)
#define CLASS_3_31F639F6C436C0BD_METHOD_3_C58D58C5FE240739_OFFSET UNITYSDK_OFFSET(0xD21EF70)
#define CLASS_3_31F639F6C436C0BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD21EC20)
#define CLASS_3_31F639F6C436C0BD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD21F030)
#define CLASS_3_31F639F6C436C0BD__CTOR_OFFSET UNITYSDK_OFFSET(0xD21EBF0)
#define CLASS_3_31F639F6C436C0BD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD21F3A0)
#define CLASS_3_31F639F6C436C0BD___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD21F390)

inline static constexpr unsigned int Class_3_31F639F6C436C0BD_TypeDefinitionIndex = 46195;

class Class_3_31F639F6C436C0BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetStageItemState*>
{
public:
	::RPG::GameCore::SetStageItemState* Field_3_0; // 0x28
	::RPG::Client::Stage* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetStageItemState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetStageItemState*))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_C58D58C5FE240739(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD_METHOD_3_C58D58C5FE240739_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_31F639F6C436C0BD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
