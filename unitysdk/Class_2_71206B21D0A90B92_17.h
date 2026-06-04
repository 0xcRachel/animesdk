#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_DB896EF8435160DD_1;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_71206B21D0A90B92_17_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F94FB0)
#define CLASS_2_71206B21D0A90B92_17_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0x16F95070)
#define CLASS_2_71206B21D0A90B92_17_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16F94E50)
#define CLASS_2_71206B21D0A90B92_17_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16F94F00)
#define CLASS_2_71206B21D0A90B92_17_TICK_OFFSET UNITYSDK_OFFSET(0x16F94F50)
#define CLASS_2_71206B21D0A90B92_17__CTOR_OFFSET UNITYSDK_OFFSET(0x16F94E40)

inline static constexpr unsigned int Class_2_71206B21D0A90B92_17_TypeDefinitionIndex = 55039;

class Class_2_71206B21D0A90B92_17 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_DB896EF8435160DD_1* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_1*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71206B21D0A90B92_17_METHOD_2_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}
};
