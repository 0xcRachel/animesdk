#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRaidExitNotify; }
namespace System { class Object; }

#define CLASS_2_D74DAA5A749CC0EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89100D0)
#define CLASS_2_D74DAA5A749CC0EA_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x89104D0)
#define CLASS_2_D74DAA5A749CC0EA_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET UNITYSDK_OFFSET(0x89102E0)
#define CLASS_2_D74DAA5A749CC0EA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8910170)
#define CLASS_2_D74DAA5A749CC0EA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8910570)
#define CLASS_2_D74DAA5A749CC0EA_TICK_OFFSET UNITYSDK_OFFSET(0x89105C0)
#define CLASS_2_D74DAA5A749CC0EA__CTOR_OFFSET UNITYSDK_OFFSET(0x89100C0)

inline static constexpr unsigned int Class_2_D74DAA5A749CC0EA_TypeDefinitionIndex = 46507;

class Class_2_D74DAA5A749CC0EA : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitRaidExitNotify* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRaidExitNotify* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRaidExitNotify*))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_FAC1A2CEF0BE5FB4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D74DAA5A749CC0EA_METHOD_2_FAC1A2CEF0BE5FB4_OFFSET))(this, a1);
	}
};
