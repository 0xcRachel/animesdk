#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetAdvAchievement; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B493A9E701A1AEF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAD31970)
#define CLASS_2_B493A9E701A1AEF6_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xAD31C40)
#define CLASS_2_B493A9E701A1AEF6_ONSKIP_OFFSET UNITYSDK_OFFSET(0xAD31C50)
#define CLASS_2_B493A9E701A1AEF6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD31A10)
#define CLASS_2_B493A9E701A1AEF6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xAD319C0)
#define CLASS_2_B493A9E701A1AEF6_TICK_OFFSET UNITYSDK_OFFSET(0xAD31BE0)
#define CLASS_2_B493A9E701A1AEF6__CTOR_OFFSET UNITYSDK_OFFSET(0xAD31960)

inline static constexpr unsigned int Class_2_B493A9E701A1AEF6_TypeDefinitionIndex = 49071;

class Class_2_B493A9E701A1AEF6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetAdvAchievement* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvAchievement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvAchievement*))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B493A9E701A1AEF6_ONSKIP_OFFSET))(this);
	}
};
