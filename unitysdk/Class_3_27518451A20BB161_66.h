#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_111F36CF5247BACE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_66_DISPOSE_OFFSET UNITYSDK_OFFSET(0x100FA380)
#define CLASS_3_27518451A20BB161_66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x100FA3C0)
#define CLASS_3_27518451A20BB161_66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x100FA720)
#define CLASS_3_27518451A20BB161_66__CTOR_OFFSET UNITYSDK_OFFSET(0x100FA350)
#define CLASS_3_27518451A20BB161_66___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x100FA770)
#define CLASS_3_27518451A20BB161_66___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x100FA7B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_66_TypeDefinitionIndex = 49277;

class Class_3_27518451A20BB161_66 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_111F36CF5247BACE*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_111F36CF5247BACE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_111F36CF5247BACE*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_66___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
