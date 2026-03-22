#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_07A210D994F284D8_3;
class Class_1_2CAAA2FDF9170110;
class Class_1_F2239EA7F93120BB;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelTaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5A519139824A431D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1009EA20)
#define CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET UNITYSDK_OFFSET(0x100A0000)
#define CLASS_2_5A519139824A431D_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x1009EB00)
#define CLASS_2_5A519139824A431D_METHOD_2_A968E94CA97A159D_OFFSET UNITYSDK_OFFSET(0x100A04E0)
#define CLASS_2_5A519139824A431D_METHOD_2_A9AD55E6C8016D0C_OFFSET UNITYSDK_OFFSET(0x100A03B0)
#define CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x100A0620)
#define CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1009ECB0)
#define CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x100A0070)
#define CLASS_2_5A519139824A431D_TICK_OFFSET UNITYSDK_OFFSET(0x100A0260)
#define CLASS_2_5A519139824A431D__CTOR_OFFSET UNITYSDK_OFFSET(0x1009E920)
#define CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET UNITYSDK_OFFSET(0x100A0630)

inline static constexpr unsigned int Class_2_5A519139824A431D_TypeDefinitionIndex = 43610;

class Class_2_5A519139824A431D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_1_2CAAA2FDF9170110* Field_2_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_F2239EA7F93120BB*>* Field_2_4; // 0x30
	::Class_1_07A210D994F284D8_3* Field_2_6; // 0x38
	::RPG::GameCore::TriggerParallelTaskListTemplate* Field_2_0; // 0x40
	::RPG::GameCore::FixPoint Field_2_7; // 0x48
	::RPG::GameCore::FixPoint Field_2_5; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelTaskListTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelTaskListTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9AD55E6C8016D0C(::System::Single a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_A9AD55E6C8016D0C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A968E94CA97A159D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_A968E94CA97A159D_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_372E41FA4A171DFD(::RPG::GameCore::DynamicFloat* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_372E41FA4A171DFD_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_1_F2239EA7F93120BB* __RunTemplates_g___SortAndGetNextTemplate_5_0(::RPG::GameCore::FixPoint fTargetTS)
	{
		return ((::Class_1_F2239EA7F93120BB*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_5A519139824A431D___RUNTEMPLATES_G___SORTANDGETNEXTTEMPLATE_5_0_OFFSET))(this, fTargetTS);
	}
};
