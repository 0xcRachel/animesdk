#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class EntityOnEraFlippedListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1E4340)
#define CLASS_2_5203B21EF18DD167_METHOD_2_10517569AB3CE8D6_1_OFFSET UNITYSDK_OFFSET(0xD1E48A0)
#define CLASS_2_5203B21EF18DD167_METHOD_2_10517569AB3CE8D6_OFFSET UNITYSDK_OFFSET(0xD1E4580)
#define CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD1E3FC0)
#define CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD1E4190)
#define CLASS_2_5203B21EF18DD167_TICK_OFFSET UNITYSDK_OFFSET(0xD1E4BD0)
#define CLASS_2_5203B21EF18DD167__CTOR_OFFSET UNITYSDK_OFFSET(0xD1E3DF0)

inline static constexpr unsigned int Class_2_5203B21EF18DD167_TypeDefinitionIndex = 41668;

class Class_2_5203B21EF18DD167 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_6; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_2_4; // 0x28
	::RPG::GameCore::EntityOnEraFlippedListener* Field_2_1; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_5; // 0x38
	::RPG::GameCore::TaskContext* Field_2_0; // 0x40
	::System::Boolean Field_2_2; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EntityOnEraFlippedListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EntityOnEraFlippedListener*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_10517569AB3CE8D6(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_10517569AB3CE8D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_10517569AB3CE8D6_1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_METHOD_2_10517569AB3CE8D6_1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5203B21EF18DD167_TICK_OFFSET))(this, a1);
	}
};
