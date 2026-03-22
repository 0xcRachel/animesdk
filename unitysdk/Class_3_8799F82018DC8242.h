#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class SwitchCaseByDynamicValue; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8799F82018DC8242_DISPOSE_OFFSET UNITYSDK_OFFSET(0x877EE50)
#define CLASS_3_8799F82018DC8242_METHOD_3_FEF7380CB714A86D_OFFSET UNITYSDK_OFFSET(0x877ED90)
#define CLASS_3_8799F82018DC8242_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x877E980)
#define CLASS_3_8799F82018DC8242__CTOR_OFFSET UNITYSDK_OFFSET(0x877E730)
#define CLASS_3_8799F82018DC8242___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x877EF30)

inline static constexpr unsigned int Class_3_8799F82018DC8242_TypeDefinitionIndex = 44336;

class Class_3_8799F82018DC8242 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchCaseByDynamicValue*>
{
public:
	::Il2CppArray<::Class_3_BCCE950C2E8DF1F0*>* Field_3_1; // 0x28
	::System::Collections::Generic::List_1<::Class_3_BCCE950C2E8DF1F0*>* Field_3_0; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_3_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchCaseByDynamicValue* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchCaseByDynamicValue*))((::PBYTE)hIl2Cpp + CLASS_3_8799F82018DC8242__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8799F82018DC8242_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_FEF7380CB714A86D(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::CompareType a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + CLASS_3_8799F82018DC8242_METHOD_3_FEF7380CB714A86D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8799F82018DC8242_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8799F82018DC8242___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
