#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class RogueAdvRoomCandyCrashGameProcess; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_12003A8E285E2D64_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEFC4280)
#define CLASS_2_12003A8E285E2D64_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0xEFC4610)
#define CLASS_2_12003A8E285E2D64_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0xEFC4680)
#define CLASS_2_12003A8E285E2D64_METHOD_2_CE3C9FF63C908564_OFFSET UNITYSDK_OFFSET(0xEFC4540)
#define CLASS_2_12003A8E285E2D64_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEFC4380)
#define CLASS_2_12003A8E285E2D64_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEFC4490)
#define CLASS_2_12003A8E285E2D64_TICK_OFFSET UNITYSDK_OFFSET(0xEFC44E0)
#define CLASS_2_12003A8E285E2D64__CTOR_OFFSET UNITYSDK_OFFSET(0xEFC4270)

inline static constexpr unsigned int Class_2_12003A8E285E2D64_TypeDefinitionIndex = 53871;

class Class_2_12003A8E285E2D64 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueAdvRoomCandyCrashGameProcess*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CE3C9FF63C908564(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_CE3C9FF63C908564_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_12003A8E285E2D64_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}
};
