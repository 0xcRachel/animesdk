#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_668790FD8B1B5915;
namespace RPG::GameCore { class ShowFrameCaptureUI; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_10257F933C6677A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x85A32C0)
#define CLASS_2_10257F933C6677A3_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x85A36C0)
#define CLASS_2_10257F933C6677A3_METHOD_2_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x85A3580)
#define CLASS_2_10257F933C6677A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x85A3300)
#define CLASS_2_10257F933C6677A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x85A3760)
#define CLASS_2_10257F933C6677A3_TICK_OFFSET UNITYSDK_OFFSET(0x85A37B0)
#define CLASS_2_10257F933C6677A3__CTOR_OFFSET UNITYSDK_OFFSET(0x85A32B0)

inline static constexpr unsigned int Class_2_10257F933C6677A3_TypeDefinitionIndex = 44330;

class Class_2_10257F933C6677A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_2_668790FD8B1B5915* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::ShowFrameCaptureUI* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFrameCaptureUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFrameCaptureUI*))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_10257F933C6677A3_METHOD_2_AA169839CB93802A_OFFSET))(this);
	}
};
