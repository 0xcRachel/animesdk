#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_1_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x861E6D0)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_1__CTOR_OFFSET UNITYSDK_OFFSET(0x861E6C0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_C488C7BE75499D30_1_TypeDefinitionIndex = 52070;

class Class_1_43BD383C98B4C0C5_138_Class_1_C488C7BE75499D30_1 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_1_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}
};
