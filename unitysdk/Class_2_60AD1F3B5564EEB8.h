#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }
namespace System { class Object; }

#define CLASS_2_60AD1F3B5564EEB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF39B7D0)
#define CLASS_2_60AD1F3B5564EEB8_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0xF39BA70)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF39B890)
#define CLASS_2_60AD1F3B5564EEB8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF39B930)
#define CLASS_2_60AD1F3B5564EEB8_TICK_OFFSET UNITYSDK_OFFSET(0xF39BA10)
#define CLASS_2_60AD1F3B5564EEB8__CTOR_OFFSET UNITYSDK_OFFSET(0xF39B740)

inline static constexpr unsigned int Class_2_60AD1F3B5564EEB8_TypeDefinitionIndex = 47581;

class Class_2_60AD1F3B5564EEB8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitPlayerChangeModel* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_60AD1F3B5564EEB8_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}
};
