#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class ForceAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A04760)
#define CLASS_3_5E0399F0CDC350B7_METHOD_3_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x10A046F0)
#define CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A04520)
#define CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET UNITYSDK_OFFSET(0x10A04480)
#define CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A047D0)

inline static constexpr unsigned int Class_3_5E0399F0CDC350B7_TypeDefinitionIndex = 43016;

class Class_3_5E0399F0CDC350B7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForceAutoBattle*>
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceAutoBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_METHOD_3_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E0399F0CDC350B7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
