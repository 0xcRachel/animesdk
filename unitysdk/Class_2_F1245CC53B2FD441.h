#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBossHPValue; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F1245CC53B2FD441_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DA78A0)
#define CLASS_2_F1245CC53B2FD441_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14DA78E0)
#define CLASS_2_F1245CC53B2FD441_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14DA7960)
#define CLASS_2_F1245CC53B2FD441_TICK_OFFSET UNITYSDK_OFFSET(0x14DA79B0)
#define CLASS_2_F1245CC53B2FD441__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA7890)

inline static constexpr unsigned int Class_2_F1245CC53B2FD441_TypeDefinitionIndex = 52704;

class Class_2_F1245CC53B2FD441 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowBossHPValue* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBossHPValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBossHPValue*))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F1245CC53B2FD441_TICK_OFFSET))(this, a1);
	}
};
