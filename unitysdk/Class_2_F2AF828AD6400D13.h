#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BlockUntilUIPageOpen; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_F2AF828AD6400D13_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA48FF40)
#define CLASS_2_F2AF828AD6400D13_METHOD_2_6FCE3C1CA67834FE_OFFSET UNITYSDK_OFFSET(0xA4901C0)
#define CLASS_2_F2AF828AD6400D13_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA48FFE0)
#define CLASS_2_F2AF828AD6400D13_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA490170)
#define CLASS_2_F2AF828AD6400D13_TICK_OFFSET UNITYSDK_OFFSET(0xA48FEE0)
#define CLASS_2_F2AF828AD6400D13__CTOR_OFFSET UNITYSDK_OFFSET(0xA48FED0)

inline static constexpr unsigned int Class_2_F2AF828AD6400D13_TypeDefinitionIndex = 53446;

class Class_2_F2AF828AD6400D13 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BlockUntilUIPageOpen* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockUntilUIPageOpen* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockUntilUIPageOpen*))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_6FCE3C1CA67834FE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_F2AF828AD6400D13_METHOD_2_6FCE3C1CA67834FE_OFFSET))(this, a1);
	}
};
