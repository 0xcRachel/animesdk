#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace RPG::GameCore { class PropPuzzleCustomEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AEC7E1D5035F4B97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x152CB610)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x152CAF00)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x152CAFC0)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET UNITYSDK_OFFSET(0x152CB070)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET UNITYSDK_OFFSET(0x152CB120)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_5_OFFSET UNITYSDK_OFFSET(0x152CB1D0)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_6_OFFSET UNITYSDK_OFFSET(0x152CB350)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x152CAE40)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_EADDF1782C977BCA_OFFSET UNITYSDK_OFFSET(0x152CB280)
#define CLASS_2_AEC7E1D5035F4B97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x152CB400)
#define CLASS_2_AEC7E1D5035F4B97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x152CB5C0)
#define CLASS_2_AEC7E1D5035F4B97_TICK_OFFSET UNITYSDK_OFFSET(0x152CB650)
#define CLASS_2_AEC7E1D5035F4B97__CTOR_OFFSET UNITYSDK_OFFSET(0x152CAE30)

inline static constexpr unsigned int Class_2_AEC7E1D5035F4B97_TypeDefinitionIndex = 53806;

class Class_2_AEC7E1D5035F4B97 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PropPuzzleCustomEventSender* Field_2_1; // 0x20
	::RPG::Client::Prop::PuzzleBoardBase* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleCustomEventSender* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleCustomEventSender*))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_5_OFFSET))(this);
	}

	::System::Void Method_2_EADDF1782C977BCA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_EADDF1782C977BCA_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_33ACA6CB2ABC73F7_6_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_TICK_OFFSET))(this, a1);
	}
};
