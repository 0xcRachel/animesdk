#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueTournEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_BADC3AA425D94B8F_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8917BF0)
#define CLASS_2_BADC3AA425D94B8F_2_METHOD_2_99053D1AE5A59190_OFFSET UNITYSDK_OFFSET(0x89177C0)
#define CLASS_2_BADC3AA425D94B8F_2_METHOD_2_C8F03EB4AC0A2737_1_OFFSET UNITYSDK_OFFSET(0x8917D70)
#define CLASS_2_BADC3AA425D94B8F_2_METHOD_2_C8F03EB4AC0A2737_OFFSET UNITYSDK_OFFSET(0x8917CE0)
#define CLASS_2_BADC3AA425D94B8F_2_METHOD_2_D15F52B395531E3F_OFFSET UNITYSDK_OFFSET(0x8917C40)
#define CLASS_2_BADC3AA425D94B8F_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8917770)
#define CLASS_2_BADC3AA425D94B8F_2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8917BA0)
#define CLASS_2_BADC3AA425D94B8F_2_TICK_OFFSET UNITYSDK_OFFSET(0x8917710)
#define CLASS_2_BADC3AA425D94B8F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8917700)

inline static constexpr unsigned int Class_2_BADC3AA425D94B8F_2_TypeDefinitionIndex = 46111;

class Class_2_BADC3AA425D94B8F_2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_99053D1AE5A59190()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_METHOD_2_99053D1AE5A59190_OFFSET))(this);
	}

	::System::Void Method_2_C8F03EB4AC0A2737(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_METHOD_2_C8F03EB4AC0A2737_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8F03EB4AC0A2737_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_METHOD_2_C8F03EB4AC0A2737_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D15F52B395531E3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BADC3AA425D94B8F_2_METHOD_2_D15F52B395531E3F_OFFSET))(this);
	}
};
