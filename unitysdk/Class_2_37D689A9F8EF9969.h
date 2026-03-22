#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_37D689A9F8EF9969_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD21F4E0)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0xD21F790)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD21F580)
#define CLASS_2_37D689A9F8EF9969_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD21F940)
#define CLASS_2_37D689A9F8EF9969_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD21F600)
#define CLASS_2_37D689A9F8EF9969_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD21F8A0)
#define CLASS_2_37D689A9F8EF9969_TICK_OFFSET UNITYSDK_OFFSET(0xD21F840)
#define CLASS_2_37D689A9F8EF9969__CTOR_OFFSET UNITYSDK_OFFSET(0xD21F4D0)

inline static constexpr unsigned int Class_2_37D689A9F8EF9969_TypeDefinitionIndex = 46312;

class Class_2_37D689A9F8EF9969 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowUIPage* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUIPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUIPage*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D689A9F8EF9969_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};
