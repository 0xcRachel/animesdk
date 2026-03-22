#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FF67CCA4106E5A00_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8674E20)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x8675690)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x86757C0)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_4A48A93CA7A0FA4A_OFFSET UNITYSDK_OFFSET(0x8675230)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x8675770)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x86758A0)
#define CLASS_2_FF67CCA4106E5A00_METHOD_2_C5B6BDE490FA4153_OFFSET UNITYSDK_OFFSET(0x8675460)
#define CLASS_2_FF67CCA4106E5A00_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8674F40)
#define CLASS_2_FF67CCA4106E5A00_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8674DD0)
#define CLASS_2_FF67CCA4106E5A00_TICK_OFFSET UNITYSDK_OFFSET(0x8674D70)
#define CLASS_2_FF67CCA4106E5A00__CTOR_OFFSET UNITYSDK_OFFSET(0x8674C20)

inline static constexpr unsigned int Class_2_FF67CCA4106E5A00_TypeDefinitionIndex = 46098;

class Class_2_FF67CCA4106E5A00 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x18
	::RPG::GameCore::RogueGambleFuncShowUI* Field_2_1; // 0x20
	::RPG::Client::LuaUIController* Field_2_5; // 0x28
	::RPG::GameCore::PropComponent* Field_2_8; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x40
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x48
	::System::Boolean Field_2_7; // 0x50
	::System::UInt32 Field_2_6; // 0x54

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_4A48A93CA7A0FA4A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_4A48A93CA7A0FA4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5B6BDE490FA4153(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_C5B6BDE490FA4153_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF67CCA4106E5A00_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}
};
