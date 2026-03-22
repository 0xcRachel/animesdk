#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainPartyCreateAvatarEntity; }

#define CLASS_2_9ED55D95EFFCACD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x943DCC0)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_07469564C9EF852D_OFFSET UNITYSDK_OFFSET(0x943E580)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x943DF60)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x943DD10)
#define CLASS_2_9ED55D95EFFCACD0_METHOD_2_B74BD9BE9E97F4CD_OFFSET UNITYSDK_OFFSET(0x943E420)
#define CLASS_2_9ED55D95EFFCACD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x943DF10)
#define CLASS_2_9ED55D95EFFCACD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x943E370)
#define CLASS_2_9ED55D95EFFCACD0_TICK_OFFSET UNITYSDK_OFFSET(0x943E3C0)
#define CLASS_2_9ED55D95EFFCACD0__CTOR_OFFSET UNITYSDK_OFFSET(0x943DCB0)

inline static constexpr unsigned int Class_2_9ED55D95EFFCACD0_TypeDefinitionIndex = 42204;

class Class_2_9ED55D95EFFCACD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TrainPartyCreateAvatarEntity* Field_2_1; // 0x20
	::RPG::GameCore::GameEntity* Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainPartyCreateAvatarEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainPartyCreateAvatarEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_TICK_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_B74BD9BE9E97F4CD()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_B74BD9BE9E97F4CD_OFFSET))(this);
	}

	::System::Void Method_2_07469564C9EF852D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_07469564C9EF852D_OFFSET))(this, a1);
	}

	::System::Void Method_2_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9ED55D95EFFCACD0_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}
};
