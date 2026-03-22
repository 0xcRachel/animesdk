#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_3948F09825CE1BA8;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryRequestEnterRegion; }

#define CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET UNITYSDK_OFFSET(0x852C460)
#define CLASS_3_FBAB9B763355A599_METHOD_3_8A8F4D8840527053_OFFSET UNITYSDK_OFFSET(0x852C960)
#define CLASS_3_FBAB9B763355A599_METHOD_3_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x852CB20)
#define CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x852C610)
#define CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x852C550)
#define CLASS_3_FBAB9B763355A599__CTOR_OFFSET UNITYSDK_OFFSET(0x852C3C0)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x852CC20)
#define CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x852CC30)

inline static constexpr unsigned int Class_3_FBAB9B763355A599_TypeDefinitionIndex = 46404;

class Class_3_FBAB9B763355A599 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TryRequestEnterRegion*>
{
public:
	::RPG::GameCore::TaskContext* Field_3_1; // 0x28
	::RPG::GameCore::TryRequestEnterRegion* Field_3_0; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_3_2; // 0x38
	::Class_1_3948F09825CE1BA8* Field_3_3; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryRequestEnterRegion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryRequestEnterRegion*))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8A8F4D8840527053()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_8A8F4D8840527053_OFFSET))(this);
	}

	::System::Void Method_3_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599_METHOD_3_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBAB9B763355A599___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}
};
