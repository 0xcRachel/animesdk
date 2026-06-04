#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace RPG::GameCore { class PropPuzzleCustomEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AEC7E1D5035F4B97_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BB8C70)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_1_OFFSET UNITYSDK_OFFSET(0x15BB8740)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_2_OFFSET UNITYSDK_OFFSET(0x15BB8800)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_3_OFFSET UNITYSDK_OFFSET(0x15BB89A0)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x15BB8680)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x15BB88C0)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_1_OFFSET UNITYSDK_OFFSET(0x15BB8500)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_2_OFFSET UNITYSDK_OFFSET(0x15BB85C0)
#define CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x15BB8440)
#define CLASS_2_AEC7E1D5035F4B97_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BB8A60)
#define CLASS_2_AEC7E1D5035F4B97_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BB8C20)
#define CLASS_2_AEC7E1D5035F4B97_TICK_OFFSET UNITYSDK_OFFSET(0x15BB8CB0)
#define CLASS_2_AEC7E1D5035F4B97__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB8430)

inline static constexpr unsigned int Class_2_AEC7E1D5035F4B97_TypeDefinitionIndex = 54531;

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

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_1_OFFSET))(this);
	}

	::System::Void Method_2_D3129FE8DF635B48_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_D3129FE8DF635B48_2_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_1_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_2_OFFSET))(this);
	}

	::System::Void Method_2_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA169839CB93802A_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEC7E1D5035F4B97_METHOD_2_AA169839CB93802A_3_OFFSET))(this);
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
