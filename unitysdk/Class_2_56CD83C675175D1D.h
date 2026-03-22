#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client::Prop { class RubikCubePuzzleBoard; }
namespace RPG::Client::Prop { class RubikCubePuzzleCube; }
namespace RPG::GameCore { class RubikEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_56CD83C675175D1D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F02A40)
#define CLASS_2_56CD83C675175D1D_METHOD_2_414E668C8B9EEDBC_OFFSET UNITYSDK_OFFSET(0x9F02E00)
#define CLASS_2_56CD83C675175D1D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9F02DB0)
#define CLASS_2_56CD83C675175D1D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9F02B40)
#define CLASS_2_56CD83C675175D1D_TICK_OFFSET UNITYSDK_OFFSET(0x9F02B90)
#define CLASS_2_56CD83C675175D1D__CTOR_OFFSET UNITYSDK_OFFSET(0x9F029B0)

inline static constexpr unsigned int Class_2_56CD83C675175D1D_TypeDefinitionIndex = 46123;

class Class_2_56CD83C675175D1D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RubikEventListener* Field_2_0; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::Client::Prop::RubikCubePuzzleBoard* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RubikEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RubikEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_414E668C8B9EEDBC(::RPG::Client::Prop::RubikCubePuzzleCube* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RubikCubePuzzleCube*))((::PBYTE)hIl2Cpp + CLASS_2_56CD83C675175D1D_METHOD_2_414E668C8B9EEDBC_OFFSET))(this, a1);
	}
};
