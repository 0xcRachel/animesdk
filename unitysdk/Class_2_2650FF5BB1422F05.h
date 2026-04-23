#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OnTimeRewindParentPropStateChangeEnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2650FF5BB1422F05_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF59C830)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xF59CAE0)
#define CLASS_2_2650FF5BB1422F05_METHOD_2_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0xF59CEE0)
#define CLASS_2_2650FF5BB1422F05_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF59CC10)
#define CLASS_2_2650FF5BB1422F05_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF59CD80)
#define CLASS_2_2650FF5BB1422F05_TICK_OFFSET UNITYSDK_OFFSET(0xF59C970)
#define CLASS_2_2650FF5BB1422F05__CTOR_OFFSET UNITYSDK_OFFSET(0xF59C7A0)

inline static constexpr unsigned int Class_2_2650FF5BB1422F05_TypeDefinitionIndex = 49203;

class Class_2_2650FF5BB1422F05 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x18
	::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::System::Boolean Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnTimeRewindParentPropStateChangeEnd*))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2650FF5BB1422F05_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}
};
