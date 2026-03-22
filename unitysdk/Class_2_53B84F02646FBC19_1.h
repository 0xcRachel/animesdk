#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_2D512E916C716041_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x841AA40)
#define CLASS_2_53B84F02646FBC19_1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x841ACC0)
#define CLASS_2_53B84F02646FBC19_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x841AAC0)
#define CLASS_2_53B84F02646FBC19_1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x841ABB0)
#define CLASS_2_53B84F02646FBC19_1_TICK_OFFSET UNITYSDK_OFFSET(0x841AC60)
#define CLASS_2_53B84F02646FBC19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x841AA30)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_1_TypeDefinitionIndex = 41792;

class Class_2_53B84F02646FBC19_1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_2D512E916C716041_1* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_2D512E916C716041_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_2D512E916C716041_1*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
