#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ClearTutorialGuide; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AE30014D62609B4A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA1E5830)
#define CLASS_2_AE30014D62609B4A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1E5870)
#define CLASS_2_AE30014D62609B4A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1E59C0)
#define CLASS_2_AE30014D62609B4A_TICK_OFFSET UNITYSDK_OFFSET(0xA1E5A10)
#define CLASS_2_AE30014D62609B4A__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E5820)

inline static constexpr unsigned int Class_2_AE30014D62609B4A_TypeDefinitionIndex = 46804;

class Class_2_AE30014D62609B4A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ClearTutorialGuide* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearTutorialGuide* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearTutorialGuide*))((::PBYTE)hIl2Cpp + CLASS_2_AE30014D62609B4A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE30014D62609B4A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE30014D62609B4A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE30014D62609B4A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AE30014D62609B4A_TICK_OFFSET))(this, a1);
	}
};
