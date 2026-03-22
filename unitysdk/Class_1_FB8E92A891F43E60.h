#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_FB8E92A891F43E60_METHOD_1_028AC3105F04AA58_OFFSET UNITYSDK_OFFSET(0x10F96170)
#define CLASS_1_FB8E92A891F43E60__CTOR_OFFSET UNITYSDK_OFFSET(0x10F96260)

inline static constexpr unsigned int Class_1_FB8E92A891F43E60_TypeDefinitionIndex = 47486;

class Class_1_FB8E92A891F43E60 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FB8E92A891F43E60__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_028AC3105F04AA58(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_FB8E92A891F43E60_METHOD_1_028AC3105F04AA58_OFFSET))(this, a1);
	}
};
