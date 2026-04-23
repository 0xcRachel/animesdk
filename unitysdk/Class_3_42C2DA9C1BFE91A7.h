#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_53CCBE8B27FCD60C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0C0C60)
#define CLASS_3_42C2DA9C1BFE91A7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE0C0CA0)
#define CLASS_3_42C2DA9C1BFE91A7__CTOR_OFFSET UNITYSDK_OFFSET(0xE0C0C20)
#define CLASS_3_42C2DA9C1BFE91A7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0C0ED0)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_TypeDefinitionIndex = 49603;

class Class_3_42C2DA9C1BFE91A7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_53CCBE8B27FCD60C*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_53CCBE8B27FCD60C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_53CCBE8B27FCD60C*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
