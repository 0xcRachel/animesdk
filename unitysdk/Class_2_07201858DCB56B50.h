#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_07201858DCB56B50_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BEC810)
#define CLASS_2_07201858DCB56B50_METHOD_2_DB915699370309DA_OFFSET UNITYSDK_OFFSET(0x10BECA00)
#define CLASS_2_07201858DCB56B50_METHOD_2_E2F86A5BE510CEC4_OFFSET UNITYSDK_OFFSET(0x10BED240)
#define CLASS_2_07201858DCB56B50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BEC500)
#define CLASS_2_07201858DCB56B50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BEC690)
#define CLASS_2_07201858DCB56B50_TICK_OFFSET UNITYSDK_OFFSET(0x10BEC9A0)
#define CLASS_2_07201858DCB56B50__CTOR_OFFSET UNITYSDK_OFFSET(0x10BEBB40)

inline static constexpr unsigned int Class_2_07201858DCB56B50_TypeDefinitionIndex = 42145;

class Class_2_07201858DCB56B50 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_13; // 0x20
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_5; // 0x28
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_4; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_9; // 0x38
	::Class_3_BCCE950C2E8DF1F0* Field_2_10; // 0x40
	::RPG::GameCore::AddTimelineEntityEventListener* Field_2_0; // 0x48
	::Class_3_BCCE950C2E8DF1F0* Field_2_12; // 0x50
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_2_6; // 0x58
	::Class_3_BCCE950C2E8DF1F0* Field_2_11; // 0x60
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x68
	::Class_3_BCCE950C2E8DF1F0* Field_2_7; // 0x70
	::Class_3_BCCE950C2E8DF1F0* Field_2_8; // 0x78
	::RPG::GameCore::TaskContext* Field_2_1; // 0x80
	::System::UInt32 Field_2_14; // 0x88

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB915699370309DA(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_METHOD_2_DB915699370309DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_E2F86A5BE510CEC4(::Class_3_BCCE950C2E8DF1F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_BCCE950C2E8DF1F0*))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_METHOD_2_E2F86A5BE510CEC4_OFFSET))(this, a1);
	}
};
