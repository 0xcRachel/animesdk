#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

namespace RPG::GameCore { class ModifyDefaultTeamFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F8F226DAF6D645B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16700E20)
#define CLASS_2_F8F226DAF6D645B6_METHOD_2_38E5361AAB271B31_OFFSET UNITYSDK_OFFSET(0x16701210)
#define CLASS_2_F8F226DAF6D645B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16700E60)
#define CLASS_2_F8F226DAF6D645B6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16701160)
#define CLASS_2_F8F226DAF6D645B6_TICK_OFFSET UNITYSDK_OFFSET(0x167011B0)
#define CLASS_2_F8F226DAF6D645B6__CTOR_OFFSET UNITYSDK_OFFSET(0x16700E10)

inline static constexpr unsigned int Class_2_F8F226DAF6D645B6_TypeDefinitionIndex = 52627;

class Class_2_F8F226DAF6D645B6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ModifyDefaultTeamFormation* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyDefaultTeamFormation* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyDefaultTeamFormation*))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_38E5361AAB271B31(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_2_F8F226DAF6D645B6_METHOD_2_38E5361AAB271B31_OFFSET))(this, a1);
	}
};
