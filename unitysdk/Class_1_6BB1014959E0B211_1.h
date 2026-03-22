#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_6BB1014959E0B211_1_METHOD_1_9F9FBED9993A604A_OFFSET UNITYSDK_OFFSET(0x10E943D0)
#define CLASS_1_6BB1014959E0B211_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10E94540)

inline static constexpr unsigned int Class_1_6BB1014959E0B211_1_TypeDefinitionIndex = 47492;

class Class_1_6BB1014959E0B211_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BB1014959E0B211_1__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_9F9FBED9993A604A(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_6BB1014959E0B211_1_METHOD_1_9F9FBED9993A604A_OFFSET))(this, a1);
	}
};
