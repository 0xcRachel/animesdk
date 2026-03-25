#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChessMultiProjectiles; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DD8F2DA187D7639C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AA3F90)
#define CLASS_2_DD8F2DA187D7639C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AA3FD0)
#define CLASS_2_DD8F2DA187D7639C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AA4020)
#define CLASS_2_DD8F2DA187D7639C_TICK_OFFSET UNITYSDK_OFFSET(0x10AA4070)
#define CLASS_2_DD8F2DA187D7639C__CTOR_OFFSET UNITYSDK_OFFSET(0x10AA3F80)

inline static constexpr unsigned int Class_2_DD8F2DA187D7639C_TypeDefinitionIndex = 45204;

class Class_2_DD8F2DA187D7639C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ChessMultiProjectiles* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChessMultiProjectiles* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChessMultiProjectiles*))((::PBYTE)hIl2Cpp + CLASS_2_DD8F2DA187D7639C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD8F2DA187D7639C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD8F2DA187D7639C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD8F2DA187D7639C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DD8F2DA187D7639C_TICK_OFFSET))(this, a1);
	}
};
