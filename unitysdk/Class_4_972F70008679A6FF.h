#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_972F70008679A6FF_METHOD_4_690EB21B07B220FD_OFFSET UNITYSDK_OFFSET(0x16E36380)
#define CLASS_4_972F70008679A6FF_METHOD_4_6C55233E7345A091_OFFSET UNITYSDK_OFFSET(0x16E36460)
#define CLASS_4_972F70008679A6FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16E36400)

inline static constexpr unsigned int Class_4_972F70008679A6FF_TypeDefinitionIndex = 18069;

class Class_4_972F70008679A6FF : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_4; // 0x20
	::System::UInt32 Field_4_0; // 0x28
	::System::UInt32 Field_4_1; // 0x2C
	::System::UInt32 Field_4_3; // 0x30
	::RPG::GameCore::ELevelPerformanceType Field_4_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_972F70008679A6FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_690EB21B07B220FD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_972F70008679A6FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_972F70008679A6FF*&))((::PBYTE)hIl2Cpp + CLASS_4_972F70008679A6FF_METHOD_4_690EB21B07B220FD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_6C55233E7345A091(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_972F70008679A6FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_972F70008679A6FF*))((::PBYTE)hIl2Cpp + CLASS_4_972F70008679A6FF_METHOD_4_6C55233E7345A091_OFFSET))(a1, a2);
	}
};
