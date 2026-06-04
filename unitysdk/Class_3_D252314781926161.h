#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class SO_PlayFreeStyle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_D252314781926161_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148BCC90)
#define CLASS_3_D252314781926161_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148BCCE0)
#define CLASS_3_D252314781926161_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x148BD020)
#define CLASS_3_D252314781926161_TICK_OFFSET UNITYSDK_OFFSET(0x148BD070)
#define CLASS_3_D252314781926161__CTOR_OFFSET UNITYSDK_OFFSET(0x148BCBF0)
#define CLASS_3_D252314781926161___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148BD1E0)
#define CLASS_3_D252314781926161___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x148BD230)

inline static constexpr unsigned int Class_3_D252314781926161_TypeDefinitionIndex = 48735;

class Class_3_D252314781926161 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_PlayFreeStyle*>
{
public:
	::RPG::GameCore::FreeStyleComponent* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_PlayFreeStyle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_PlayFreeStyle*))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_D252314781926161___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
