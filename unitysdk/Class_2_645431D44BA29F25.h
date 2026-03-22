#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class EnterMapByCondition; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_645431D44BA29F25_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91E7AB0)
#define CLASS_2_645431D44BA29F25_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x91E7AF0)
#define CLASS_2_645431D44BA29F25_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x91E7F40)
#define CLASS_2_645431D44BA29F25_TICK_OFFSET UNITYSDK_OFFSET(0x91E7F90)
#define CLASS_2_645431D44BA29F25__CTOR_OFFSET UNITYSDK_OFFSET(0x91E7AA0)

inline static constexpr unsigned int Class_2_645431D44BA29F25_TypeDefinitionIndex = 41658;

class Class_2_645431D44BA29F25 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::EnterMapByCondition* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterMapByCondition* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterMapByCondition*))((::PBYTE)hIl2Cpp + CLASS_2_645431D44BA29F25__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645431D44BA29F25_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645431D44BA29F25_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_645431D44BA29F25_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_645431D44BA29F25_TICK_OFFSET))(this, a1);
	}
};
