#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class SwitchCaseByTeammateCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B1F682D7291E0EF7_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF31120)
#define CLASS_3_B1F682D7291E0EF7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFF30DE0)
#define CLASS_3_B1F682D7291E0EF7__CTOR_OFFSET UNITYSDK_OFFSET(0xFF30BD0)
#define CLASS_3_B1F682D7291E0EF7___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF31200)

inline static constexpr unsigned int Class_3_B1F682D7291E0EF7_TypeDefinitionIndex = 43544;

class Class_3_B1F682D7291E0EF7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByTeammateCount*>
{
public:
	::Il2CppArray<::Class_3_BCCE950C2E8DF1F0*>* Field_3_0; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByTeammateCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByTeammateCount*))((::PBYTE)hIl2Cpp + CLASS_3_B1F682D7291E0EF7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1F682D7291E0EF7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1F682D7291E0EF7_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1F682D7291E0EF7___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
