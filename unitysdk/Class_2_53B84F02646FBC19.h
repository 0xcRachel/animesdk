#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_28CFF0B23DB66092;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10AB6460)
#define CLASS_2_53B84F02646FBC19_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x10AB66F0)
#define CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10AB64E0)
#define CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10AB65E0)
#define CLASS_2_53B84F02646FBC19_TICK_OFFSET UNITYSDK_OFFSET(0x10AB6690)
#define CLASS_2_53B84F02646FBC19__CTOR_OFFSET UNITYSDK_OFFSET(0x10AB6450)

inline static constexpr unsigned int Class_2_53B84F02646FBC19_TypeDefinitionIndex = 41791;

class Class_2_53B84F02646FBC19 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_28CFF0B23DB66092* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_28CFF0B23DB66092* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_28CFF0B23DB66092*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_53B84F02646FBC19_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}
};
