#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/SchedulerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_213;

#define CLASS_1_B55A056072768C34_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1635C3E0)
#define CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1635C520)
#define CLASS_1_B55A056072768C34_METHOD_1_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x1635C4E0)
#define CLASS_1_B55A056072768C34_METHOD_1_70484F0C4668EBF2_OFFSET UNITYSDK_OFFSET(0x1635C490)
#define CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1635C530)
#define CLASS_1_B55A056072768C34__CTOR_OFFSET UNITYSDK_OFFSET(0x1635C3D0)

inline static constexpr unsigned int Class_1_B55A056072768C34_TypeDefinitionIndex = 32800;

class Class_1_B55A056072768C34 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_213* _Graph_k__BackingField; // 0x10
	::RPG::Client::Multithread::SchedulerType Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::Multithread::SchedulerType a1, ::Class_0_16E4307DCC419505_213* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Multithread::SchedulerType, ::Class_0_16E4307DCC419505_213*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_70484F0C4668EBF2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_70484F0C4668EBF2_OFFSET))(this);
	}

	::System::Void Method_1_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_METHOD_1_2F0F99A12DB93F30_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_213* get_Graph()
	{
		return ((::Class_0_16E4307DCC419505_213*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_GET_GRAPH_OFFSET))(this);
	}

	::System::Void set_Graph(::Class_0_16E4307DCC419505_213* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_213*))((::PBYTE)hIl2Cpp + CLASS_1_B55A056072768C34_SET_GRAPH_OFFSET))(this, value);
	}
};
