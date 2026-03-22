#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_5_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x861F7F0)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_5__CTOR_OFFSET UNITYSDK_OFFSET(0x861F7E0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_C488C7BE75499D30_5_TypeDefinitionIndex = 52077;

class Class_1_43BD383C98B4C0C5_138_Class_1_C488C7BE75499D30_5 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_C488C7BE75499D30_5_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}
};
