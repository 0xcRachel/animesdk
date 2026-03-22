#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFistClubMissionPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_518B532164BFE2FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE40690)
#define CLASS_2_518B532164BFE2FC_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xFE409D0)
#define CLASS_2_518B532164BFE2FC_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0xFE40870)
#define CLASS_2_518B532164BFE2FC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFE40760)
#define CLASS_2_518B532164BFE2FC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xFE40980)
#define CLASS_2_518B532164BFE2FC_TICK_OFFSET UNITYSDK_OFFSET(0xFE40700)
#define CLASS_2_518B532164BFE2FC__CTOR_OFFSET UNITYSDK_OFFSET(0xFE40600)

inline static constexpr unsigned int Class_2_518B532164BFE2FC_TypeDefinitionIndex = 46260;

class Class_2_518B532164BFE2FC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ShowFistClubMissionPage* Field_2_0; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x28
	::RPG::Client::LuaUIController* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFistClubMissionPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFistClubMissionPage*))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_518B532164BFE2FC_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
