#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class LockCurrentEnvProfile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2AAAF3DB3F54D762_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF573360)
#define CLASS_2_2AAAF3DB3F54D762_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF5733A0)
#define CLASS_2_2AAAF3DB3F54D762_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF573940)
#define CLASS_2_2AAAF3DB3F54D762_TICK_OFFSET UNITYSDK_OFFSET(0xF573990)
#define CLASS_2_2AAAF3DB3F54D762__CTOR_OFFSET UNITYSDK_OFFSET(0xF573350)

inline static constexpr unsigned int Class_2_2AAAF3DB3F54D762_TypeDefinitionIndex = 45877;

class Class_2_2AAAF3DB3F54D762 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::LockCurrentEnvProfile* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockCurrentEnvProfile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockCurrentEnvProfile*))((::PBYTE)hIl2Cpp + CLASS_2_2AAAF3DB3F54D762__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAAF3DB3F54D762_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAAF3DB3F54D762_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AAAF3DB3F54D762_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2AAAF3DB3F54D762_TICK_OFFSET))(this, a1);
	}
};
