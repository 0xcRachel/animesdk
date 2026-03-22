#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DispelStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F746B27B86DBB8B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10EE8120)
#define CLASS_2_F746B27B86DBB8B5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10EE81D0)
#define CLASS_2_F746B27B86DBB8B5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10EE8EC0)
#define CLASS_2_F746B27B86DBB8B5_TICK_OFFSET UNITYSDK_OFFSET(0x10EE8F10)
#define CLASS_2_F746B27B86DBB8B5__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE80B0)

inline static constexpr unsigned int Class_2_F746B27B86DBB8B5_TypeDefinitionIndex = 42984;

class Class_2_F746B27B86DBB8B5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DispelStatus* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DispelStatus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + CLASS_2_F746B27B86DBB8B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F746B27B86DBB8B5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F746B27B86DBB8B5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F746B27B86DBB8B5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F746B27B86DBB8B5_TICK_OFFSET))(this, a1);
	}
};
