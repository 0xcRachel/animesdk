#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvPropSteer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F5E4280BB8B47533_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88E1B70)
#define CLASS_2_F5E4280BB8B47533_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x88E2130)
#define CLASS_2_F5E4280BB8B47533_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88E20E0)
#define CLASS_2_F5E4280BB8B47533_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x88E1BB0)
#define CLASS_2_F5E4280BB8B47533_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x88E2090)
#define CLASS_2_F5E4280BB8B47533_TICK_OFFSET UNITYSDK_OFFSET(0x88E2030)
#define CLASS_2_F5E4280BB8B47533__CTOR_OFFSET UNITYSDK_OFFSET(0x88E1B60)

inline static constexpr unsigned int Class_2_F5E4280BB8B47533_TypeDefinitionIndex = 41445;

class Class_2_F5E4280BB8B47533 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::AdvPropSteer* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPropSteer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPropSteer*))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5E4280BB8B47533_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
