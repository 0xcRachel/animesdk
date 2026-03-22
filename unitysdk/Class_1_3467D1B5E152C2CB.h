#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitBatchItemTriggerState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_27F1679D48D10C64;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitBatchItem; }

#define CLASS_1_3467D1B5E152C2CB_METHOD_1_1AB9693E41D970DC_OFFSET UNITYSDK_OFFSET(0x864ABD0)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x864AA90)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x864A4F0)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x864AAF0)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x864A710)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_743D4EB34AAA211A_OFFSET UNITYSDK_OFFSET(0x864A360)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x864A680)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_D7B7C909A67BD350_OFFSET UNITYSDK_OFFSET(0x864A790)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x864ABF0)
#define CLASS_1_3467D1B5E152C2CB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x864ABE0)
#define CLASS_1_3467D1B5E152C2CB__CTOR_OFFSET UNITYSDK_OFFSET(0x864AC00)

inline static constexpr unsigned int Class_1_3467D1B5E152C2CB_TypeDefinitionIndex = 46449;

class Class_1_3467D1B5E152C2CB : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* Field_1_2; // 0x10
	::RPG::GameCore::WaitBatchItem* Field_1_1; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_1_5; // 0x20
	::Class_3_BCCE950C2E8DF1F0* Field_1_6; // 0x28
	::Class_2_27F1679D48D10C64* Field_1_0; // 0x30
	::System::Boolean Field_1_3; // 0x38
	::RPG::GameCore::WaitBatchItemTriggerState Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_743D4EB34AAA211A(::RPG::GameCore::WaitBatchItem* a1, ::RPG::GameCore::TaskContext* a2, ::Class_2_27F1679D48D10C64* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WaitBatchItem*, ::RPG::GameCore::TaskContext*, ::Class_2_27F1679D48D10C64*))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_743D4EB34AAA211A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D7B7C909A67BD350()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_D7B7C909A67BD350_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::RPG::GameCore::WaitBatchItemTriggerState Method_1_1AB9693E41D970DC()
	{
		return ((::RPG::GameCore::WaitBatchItemTriggerState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_1AB9693E41D970DC_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3467D1B5E152C2CB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
