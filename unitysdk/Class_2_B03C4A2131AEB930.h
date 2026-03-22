#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_A48F3719AA1CF200_6;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIOnTop; }
namespace System { class Object; }

#define CLASS_2_B03C4A2131AEB930_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8A344A0)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x8A34540)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8A34830)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8A34A10)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x8A34C40)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x8A34680)
#define CLASS_2_B03C4A2131AEB930_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x8A34AB0)
#define CLASS_2_B03C4A2131AEB930_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8A345C0)
#define CLASS_2_B03C4A2131AEB930_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8A348B0)
#define CLASS_2_B03C4A2131AEB930_TICK_OFFSET UNITYSDK_OFFSET(0x8A34900)
#define CLASS_2_B03C4A2131AEB930__CTOR_OFFSET UNITYSDK_OFFSET(0x8A34490)

inline static constexpr unsigned int Class_2_B03C4A2131AEB930_TypeDefinitionIndex = 46534;

class Class_2_B03C4A2131AEB930 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitUIOnTop* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x31

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIOnTop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIOnTop*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_ACD91D865E237BC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_ACD91D865E237BC7_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_A48F3719AA1CF200_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A48F3719AA1CF200_6*))((::PBYTE)hIl2Cpp + CLASS_2_B03C4A2131AEB930_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
