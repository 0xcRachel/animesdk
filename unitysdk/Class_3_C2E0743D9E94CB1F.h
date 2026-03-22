#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class ST_Side_RegisterSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E8CA40)
#define CLASS_3_C2E0743D9E94CB1F_METHOD_3_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x10E8CD60)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10E8CB40)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10E8CC50)
#define CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x10E8CA10)
#define CLASS_3_C2E0743D9E94CB1F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10E8CF00)

inline static constexpr unsigned int Class_3_C2E0743D9E94CB1F_TypeDefinitionIndex = 41226;

class Class_3_C2E0743D9E94CB1F : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RegisterSpecialEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_METHOD_3_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
