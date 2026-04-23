#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class AdvDestroyGroupEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_EC53CC0EF156032B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1030E2F0)
#define CLASS_3_EC53CC0EF156032B_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1030E340)
#define CLASS_3_EC53CC0EF156032B_METHOD_3_D66F8BF220AC0CB8_OFFSET UNITYSDK_OFFSET(0x1030E640)
#define CLASS_3_EC53CC0EF156032B_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1030E350)
#define CLASS_3_EC53CC0EF156032B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1030E3B0)
#define CLASS_3_EC53CC0EF156032B__CTOR_OFFSET UNITYSDK_OFFSET(0x1030E2C0)
#define CLASS_3_EC53CC0EF156032B___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1030E6B0)

inline static constexpr unsigned int Class_3_EC53CC0EF156032B_TypeDefinitionIndex = 53366;

class Class_3_EC53CC0EF156032B : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvDestroyGroupEntity*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_D66F8BF220AC0CB8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B_METHOD_3_D66F8BF220AC0CB8_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC53CC0EF156032B___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
