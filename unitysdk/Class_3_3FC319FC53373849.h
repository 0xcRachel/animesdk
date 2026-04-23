#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3FC319FC53373849_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3666B0)
#define CLASS_3_3FC319FC53373849_METHOD_3_FEF7380CB714A86D_OFFSET UNITYSDK_OFFSET(0xF3665F0)
#define CLASS_3_3FC319FC53373849_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF3661E0)
#define CLASS_3_3FC319FC53373849__CTOR_OFFSET UNITYSDK_OFFSET(0xF365F90)
#define CLASS_3_3FC319FC53373849___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF366790)

inline static constexpr unsigned int Class_3_3FC319FC53373849_TypeDefinitionIndex = 52042;

class Class_3_3FC319FC53373849 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByDynamicValue*>
{
public:
	::Il2CppArray<::Class_3_E21F6DE9B7FA4D05*>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_E21F6DE9B7FA4D05*>* Field_3_0; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_3FC319FC53373849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FC319FC53373849_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_FEF7380CB714A86D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_3_3FC319FC53373849_METHOD_3_FEF7380CB714A86D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FC319FC53373849_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FC319FC53373849___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
