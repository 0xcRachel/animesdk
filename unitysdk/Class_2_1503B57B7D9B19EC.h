#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RefreshQingQueEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1503B57B7D9B19EC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1189B7B0)
#define CLASS_2_1503B57B7D9B19EC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1189B7F0)
#define CLASS_2_1503B57B7D9B19EC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1189BD60)
#define CLASS_2_1503B57B7D9B19EC_TICK_OFFSET UNITYSDK_OFFSET(0x1189BDB0)
#define CLASS_2_1503B57B7D9B19EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1189B570)

inline static constexpr unsigned int Class_2_1503B57B7D9B19EC_TypeDefinitionIndex = 44263;

class Class_2_1503B57B7D9B19EC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::GameCore::RefreshQingQueEnergyBarState* Field_2_1; // 0x20
	::Il2CppArray<::Class_2_1503B57B7D9B19EC_Struct_2_366FBCE4635B72E1>* Field_2_0; // 0x28
	::RPG::GameCore::StringHash Field_2_3; // 0x30
	::RPG::GameCore::StringHash Field_2_4; // 0x34
	::RPG::GameCore::StringHash Field_2_5; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshQingQueEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshQingQueEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1503B57B7D9B19EC_TICK_OFFSET))(this, a1);
	}
};
