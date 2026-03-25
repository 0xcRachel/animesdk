#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_07201858DCB56B50_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE43CD0)
#define CLASS_2_07201858DCB56B50_METHOD_2_AE77C03C8B6D1BBB_OFFSET UNITYSDK_OFFSET(0xDE446E0)
#define CLASS_2_07201858DCB56B50_METHOD_2_DB915699370309DA_OFFSET UNITYSDK_OFFSET(0xDE43E90)
#define CLASS_2_07201858DCB56B50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDE43A20)
#define CLASS_2_07201858DCB56B50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDE43B80)
#define CLASS_2_07201858DCB56B50_TICK_OFFSET UNITYSDK_OFFSET(0xDE43E30)
#define CLASS_2_07201858DCB56B50__CTOR_OFFSET UNITYSDK_OFFSET(0xDE430A0)

inline static constexpr unsigned int Class_2_07201858DCB56B50_TypeDefinitionIndex = 43194;

class Class_2_07201858DCB56B50 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_11; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_8; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_4; // 0x38
	::RPG::GameCore::TaskContext* Field_2_1; // 0x40
	::RPG::GameCore::AddTimelineEntityEventListener* Field_2_0; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_7; // 0x50
	::Class_3_5775A4FEC79026BC* Field_2_10; // 0x58
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_13; // 0x60
	::Class_3_5775A4FEC79026BC* Field_2_9; // 0x68
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_6; // 0x70
	::System::Collections::Generic::List_1<::Class_3_5775A4FEC79026BC*>* Field_2_5; // 0x78
	::Class_3_5775A4FEC79026BC* Field_2_12; // 0x80
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

	::System::Void Method_2_DB915699370309DA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_METHOD_2_DB915699370309DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_AE77C03C8B6D1BBB(::Class_3_5775A4FEC79026BC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5775A4FEC79026BC*))((::PBYTE)hIl2Cpp + CLASS_2_07201858DCB56B50_METHOD_2_AE77C03C8B6D1BBB_OFFSET))(this, a1);
	}
};
