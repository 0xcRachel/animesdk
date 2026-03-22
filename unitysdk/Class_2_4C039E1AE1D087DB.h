#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5A914FA23847475A;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_4C039E1AE1D087DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A721C0)
#define CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_1_OFFSET UNITYSDK_OFFSET(0x10A72610)
#define CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_2_OFFSET UNITYSDK_OFFSET(0x10A727C0)
#define CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_OFFSET UNITYSDK_OFFSET(0x10A72460)
#define CLASS_2_4C039E1AE1D087DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A723B0)
#define CLASS_2_4C039E1AE1D087DB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A72320)
#define CLASS_2_4C039E1AE1D087DB_TICK_OFFSET UNITYSDK_OFFSET(0x10A72400)
#define CLASS_2_4C039E1AE1D087DB__CTOR_OFFSET UNITYSDK_OFFSET(0x10A71F90)

inline static constexpr unsigned int Class_2_4C039E1AE1D087DB_TypeDefinitionIndex = 41807;

class Class_2_4C039E1AE1D087DB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5A914FA23847475A* Field_2_1; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5A914FA23847475A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5A914FA23847475A*))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B710AD145420A84D_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4C039E1AE1D087DB_METHOD_2_B710AD145420A84D_2_OFFSET))(this, a1);
	}
};
