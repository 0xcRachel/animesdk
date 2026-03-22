#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5;
namespace RPG::GameCore { class MiConditionConfigBase; }

#define CLASS_1_830025105C82101A_METHOD_1_683B9DCCC658DC94_OFFSET UNITYSDK_OFFSET(0xFD63BD0)
#define CLASS_1_830025105C82101A__CTOR_OFFSET UNITYSDK_OFFSET(0xFD64080)

inline static constexpr unsigned int Class_1_830025105C82101A_TypeDefinitionIndex = 47485;

class Class_1_830025105C82101A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830025105C82101A__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5* Method_1_683B9DCCC658DC94(::RPG::GameCore::MiConditionConfigBase* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_34_Class_1_9A90CD018E72DF20_5*(*)(::PVOID, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + CLASS_1_830025105C82101A_METHOD_1_683B9DCCC658DC94_OFFSET))(this, a1);
	}
};
