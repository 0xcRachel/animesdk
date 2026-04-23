#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::GameCore { class PropFastDeliverPuzzleListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2C340B7D0D120245_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10862310)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x108624D0)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x108625B0)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_3_OFFSET UNITYSDK_OFFSET(0x10862690)
#define CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x108623F0)
#define CLASS_2_2C340B7D0D120245_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10861C00)
#define CLASS_2_2C340B7D0D120245_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10862010)
#define CLASS_2_2C340B7D0D120245_TICK_OFFSET UNITYSDK_OFFSET(0x10862770)
#define CLASS_2_2C340B7D0D120245__CTOR_OFFSET UNITYSDK_OFFSET(0x10861A30)

inline static constexpr unsigned int Class_2_2C340B7D0D120245_TypeDefinitionIndex = 53793;

class Class_2_2C340B7D0D120245 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::Client::Prop::FastDeliverPuzzleBoard* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_9; // 0x38
	::RPG::GameCore::PropFastDeliverPuzzleListener* Field_2_1; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x48
	::System::Boolean Field_2_10; // 0x50
	::System::Boolean Field_2_4; // 0x51
	::System::Boolean Field_2_6; // 0x52
	::System::Boolean Field_2_8; // 0x53

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverPuzzleListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverPuzzleListener*))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_2_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_METHOD_2_1290EA767C459179_3_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2C340B7D0D120245_TICK_OFFSET))(this, a1);
	}
};
