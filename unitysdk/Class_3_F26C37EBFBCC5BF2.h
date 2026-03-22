#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PlaySimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F26C37EBFBCC5BF2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA156A10)
#define CLASS_3_F26C37EBFBCC5BF2_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA157170)
#define CLASS_3_F26C37EBFBCC5BF2_METHOD_3_E239382DD8D3653B_OFFSET UNITYSDK_OFFSET(0xA156E40)
#define CLASS_3_F26C37EBFBCC5BF2_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA157110)
#define CLASS_3_F26C37EBFBCC5BF2_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA1570C0)
#define CLASS_3_F26C37EBFBCC5BF2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA156A50)
#define CLASS_3_F26C37EBFBCC5BF2__CTOR_OFFSET UNITYSDK_OFFSET(0xA1569E0)
#define CLASS_3_F26C37EBFBCC5BF2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA157180)

inline static constexpr unsigned int Class_3_F26C37EBFBCC5BF2_TypeDefinitionIndex = 45954;

class Class_3_F26C37EBFBCC5BF2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PlaySimpleTalk*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlaySimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Void Method_3_E239382DD8D3653B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_METHOD_3_E239382DD8D3653B_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F26C37EBFBCC5BF2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
